package com.taboo.shared.network

import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val servicesModule = DI.Module("Services Module") {
    bind<SomeItemsService>() with singleton {
        SomeItemsService(instance())
    }
}