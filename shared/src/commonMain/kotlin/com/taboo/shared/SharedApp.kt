package com.taboo.shared

import com.russhwolf.settings.Settings
import com.squareup.sqldelight.db.SqlDriver
import com.taboo.shared.data.repositoriesModule
import com.taboo.shared.database.databaseModule
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.domain.usecase.useCasesModule
import com.taboo.shared.feature1.Feature1NativeViewModel
import com.taboo.shared.feature2.Feature2NativeViewModel
import com.taboo.shared.network.networkModule
import com.taboo.shared.network.servicesModule
import org.kodein.di.*
import org.kodein.di.bindings.NoArgBindingDI
import kotlin.time.ExperimentalTime

@ExperimentalTime
open class SharedApp internal constructor(
    settings: Settings,
    sqlDriver: SqlDriver,
): DIAware {

    override val di = DI {
        import(appModule(settings, sqlDriver))
        import(databaseModule)
        import(repositoriesModule)
        import(useCasesModule)
        import(servicesModule)
        import(networkModule)
    }

    internal fun provideFeature1NativeViewModel() = createExtendingKodein {
        Feature1NativeViewModel(
            instance()
        )
    }

    internal fun provideFeature2NativeViewModel(someItemId: SomeItemId) = createExtendingKodein {
        Feature2NativeViewModel(
            instance(),
            someItemId
        )
    }

    private inline fun <reified T: Any> createExtendingKodein( noinline creator: (NoArgBindingDI<Any>).() -> T): T {
        val value: T by DI {
            extend(di)
            bind<T>() with provider {
                creator.invoke(this)
            }
        }.instance()
        return value
    }
}