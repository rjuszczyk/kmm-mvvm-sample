buildscript {
    repositories {
        gradlePluginPortal()
        jcenter()
        google()
        mavenCentral()
        maven("https://dl.bintray.com/kodein-framework/kodein-dev/")
    }
    dependencies {

        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:1.5.10")

        classpath("org.jetbrains.kotlin:kotlin-serialization:1.5.10")


        classpath("com.android.tools.build:gradle:4.2.2")
        classpath( "com.google.gms:google-services:4.3.8")


        classpath("androidx.navigation:navigation-safe-args-gradle-plugin:2.3.5")
        classpath("org.jetbrains.kotlin:kotlin-serialization:1.5.10")
        classpath("com.squareup.sqldelight:gradle-plugin:1.5.0")
    }
}

allprojects {
    repositories {
        google()
        jcenter()
        mavenCentral()
        maven("https://dl.bintray.com/kodein-framework/kodein-dev/")
    }
}