package com.taboo.shared

import com.example.Database
import com.russhwolf.settings.AppleSettings
import com.squareup.sqldelight.drivers.native.NativeSqliteDriver
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.feature1.Feature1ViewModel
import com.taboo.shared.feature1.IFeature1ViewModel
import com.taboo.shared.feature2.Feature2ViewModel
import com.taboo.shared.feature2.IFeature2ViewModel
import platform.Foundation.NSUserDefaults
import kotlin.time.ExperimentalTime

@ExperimentalTime
class IosApp(
    nsUserDefaults: NSUserDefaults
) {

    private val sharedApp = SharedApp(
        AppleSettings(nsUserDefaults),
        NativeSqliteDriver(Database.Schema, "test.db")
    )


    fun provideFeature1ViewModel(
        navigateToSomeItemDetails: (SomeItemId)->Unit,
        consumeState: (IFeature1ViewModel.State) ->Unit,
    ): IFeature1ViewModel = Feature1ViewModel(
        navigateToSomeItemDetails,
        consumeState,
        sharedApp.provideFeature1NativeViewModel()
    )

    fun provideFeature2ViewModel(
        closeThisScreenAndNavigateToPrevious: ()->Unit,
        consumeState: (IFeature2ViewModel.State)->Unit,
        someItemId: SomeItemId
    ): IFeature2ViewModel = Feature2ViewModel(
        closeThisScreenAndNavigateToPrevious,
        consumeState,
        sharedApp.provideFeature2NativeViewModel(someItemId)
    )
}