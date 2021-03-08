package com.taboo.shared

import com.russhwolf.settings.Settings
import com.squareup.sqldelight.db.SqlDriver
import kotlinx.serialization.json.Json
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.provider
import org.kodein.di.singleton

fun appModule(
    settings: Settings,
    sqlDriver: SqlDriver) = DI.Module("App  Module") {
    bind<Json>() with singleton {
        Json {
            isLenient = true
            ignoreUnknownKeys = true
        }
    }
    bind<Settings>() with provider { settings }

    bind<SqlDriver>() with provider { sqlDriver }
}