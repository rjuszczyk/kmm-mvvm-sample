pluginManagement {
    repositories {
        google()
        jcenter()
        gradlePluginPortal()
        mavenCentral()
    }
    
}
rootProject.name = "Taboo"


include(":android")
include(":shared")

enableFeaturePreview("GRADLE_METADATA")

