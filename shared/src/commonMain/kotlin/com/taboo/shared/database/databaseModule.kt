package com.taboo.shared.database

import com.example.Database
import com.example.PlayerQueries
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val databaseModule = DI.Module("Database Module") {
    bind<Database>() with singleton {
        Database(instance())
    }
    bind<PlayerQueries>() with singleton {
        instance<Database>().playerQueries
    }
}