package com.taboo.shared.data

import com.taboo.shared.domain.SomeItemRepository
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton
import kotlin.time.ExperimentalTime

@ExperimentalTime
val repositoriesModule = DI.Module("App Repositories Module") {

    bind<SomeItemRepository>() with singleton {
        SomeItemRepositoryImpl(instance(), instance())
    }
}