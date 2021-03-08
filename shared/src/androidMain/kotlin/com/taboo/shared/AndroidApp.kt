package com.taboo.shared

import android.content.Context
import android.content.SharedPreferences
import com.example.Database
import com.russhwolf.settings.AndroidSettings
import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.feature1.Feature1ViewModelFactory
import com.taboo.shared.feature2.Feature2ViewModelFactory
import kotlin.time.ExperimentalTime

@ExperimentalTime
class AndroidApp(
    sharedPreferences: SharedPreferences,
    context: Context
) {

    private val sharedApp = SharedApp(AndroidSettings(sharedPreferences), AndroidSqliteDriver(
        Database.Schema, context, "test.db"))

    fun provideFeature1ViewModelFactory() = Feature1ViewModelFactory {
        sharedApp.provideFeature1NativeViewModel()
    }

    fun provideFeature2ViewModelFactory(someItemId: SomeItemId) = Feature2ViewModelFactory {
        sharedApp.provideFeature2NativeViewModel(someItemId)
    }
}