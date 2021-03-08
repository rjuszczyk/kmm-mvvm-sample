package com.taboo.shared.network

import io.ktor.client.*
import io.ktor.client.features.json.*
import io.ktor.client.features.json.serializer.*
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val networkModule = DI.Module("Network Module") {
    bind<HttpClient>() with singleton {
        HttpClient{
            install(JsonFeature) {
                serializer = KotlinxSerializer(instance())
            }
//            install(Logging) {
//                logger = Logger.DEFAULT
//                level = LogLevel.ALL
//            }
        }
    }
}