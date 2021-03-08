import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    kotlin("multiplatform")
    id("com.android.library")
    kotlin("plugin.serialization")
    id("com.squareup.sqldelight")
}

sqldelight {
    this.database("Database") {
        packageName = "com.example"
    }
}

fun ios(
    kotlinMultiplatformExtension: org.jetbrains.kotlin.gradle.dsl.KotlinMultiplatformExtension,
    configure: org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget.() -> Unit = { }) {
    if(isPodPublish(gradle)) {
        kotlinMultiplatformExtension.iosX64(configure = configure)
        kotlinMultiplatformExtension.iosArm64(configure = configure)

    } else {
        kotlinMultiplatformExtension.iosX64(name="ios", configure = configure)
    }
}

kotlin {
    android{
        tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    if(isPackForXcode(gradle)) {
//        if(1==1) throw Exception("lololoplolo")
        ios() {
            binaries {
                framework {
                    baseName = "shared"
                    freeCompilerArgs = mutableListOf<String>().apply {
                        addAll(freeCompilerArgs)
                        add("-Xobjc-generics")
                    }
                }
            }
        }
    } else {
        iosX64("ios") {
            binaries {
                framework {
                    baseName = "shared"
                    freeCompilerArgs = mutableListOf<String>().apply {
                        addAll(freeCompilerArgs)
                        add("-Xobjc-generics")
                    }
                }

            }
        }
    }
//    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
//    if (onPhone) {
//        iosArm64("ios") {
//            binaries {
//                framework {
//                    baseName = "shared"
//                }
//            }
//        }
//    } else {
//        iosX64("ios") {
//            binaries {
//                framework {
//                    baseName = "shared"
//                }
//            }
//        }
//    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core") {
                    version {
                        strictly(kotlin_coroutines)
                    }
                }
                implementation("org.kodein.di:kodein-di:$kodein")

                implementation("com.russhwolf:multiplatform-settings:$multiplatform_settings")

                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core"){
                    version { strictly(kotlin_serialization) }
                }
                implementation("io.ktor:ktor-client-core:$ktor")
                implementation("io.ktor:ktor-client-serialization:$ktor") { exclude(group="org.jetbrains.kotlinx", module = "kotlinx-serialization-core-jvm") }

//                implementation("com.squareup.sqldelight:coroutines-extensions:1.4.4") {
//                    exclude(group="org.jetbrains.kotlinx", module = "kotlinx-coroutines-core")
//                }
            }
        }

        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("com.google.android.material:material:1.2.1")

                implementation("io.ktor:ktor-client-android:$ktor")
                implementation("com.squareup.sqldelight:android-driver:1.4.4")

            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktor")
                implementation("com.squareup.sqldelight:native-driver:1.4.4")
            }
        }
        val iosTest by getting
    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(24)
        targetSdkVersion(29)
    }
}

if(isPackForXcode(gradle)) {
    val packForXcode by tasks.creating(Sync::class) {
        group = "build"
        val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
        val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
        val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
        val framework =
            kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
        inputs.property("mode", mode)
        dependsOn(framework.linkTask)
        val targetDir = File(buildDir, "xcode-frameworks")
        from({ framework.outputDirectory })
        into(targetDir)
    }
    tasks.getByName("build").dependsOn(packForXcode)
}