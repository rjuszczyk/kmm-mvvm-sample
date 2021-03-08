package com.taboo.shared.domain.usecase

import com.taboo.shared.data.SomeItemRepositoryImpl
import com.taboo.shared.domain.SomeItemRepository
import org.kodein.di.DI
import org.kodein.di.bind
import org.kodein.di.instance
import org.kodein.di.singleton

val useCasesModule = DI.Module("App Use Cases Module") {

    bind<LoadSomeItemUseCase>() with singleton {
        LoadSomeItemUseCase(
            instance()
        )
    }

    bind<LoadSomeItemsUseCase>() with singleton {
        LoadSomeItemsUseCase(
            instance()
        )
    }
}