import org.gradle.api.invocation.Gradle

fun isPodPublish(gradle: Gradle) = gradle.startParameter.taskNames.find { it.contains("podPublish")} != null

fun isPackForXcode(gradle: Gradle) = gradle.startParameter.taskNames.find { it.contains("packForXcode")} != null