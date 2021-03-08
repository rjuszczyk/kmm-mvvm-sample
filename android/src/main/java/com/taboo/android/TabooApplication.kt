package com.taboo.android

import android.app.Activity
import android.app.Application
import android.content.Context
import androidx.fragment.app.Fragment
import com.taboo.shared.AndroidApp
import kotlin.time.ExperimentalTime

@ExperimentalTime
class TabooApplication: Application() {

    lateinit var androidApp: AndroidApp

    override fun onCreate() {
        super.onCreate()
        androidApp = AndroidApp(
            getSharedPreferences(
                "settings",
                Context.MODE_PRIVATE
            ),
            this
        )
    }
}

@ExperimentalTime
fun Activity.requireAndroidApp() = (this.application as TabooApplication).androidApp

@ExperimentalTime
fun Fragment.requireAndroidApp() = this.requireActivity().requireAndroidApp()