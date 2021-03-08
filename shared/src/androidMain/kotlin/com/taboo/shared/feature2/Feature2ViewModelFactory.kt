package com.taboo.shared.feature2

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider

class Feature2ViewModelFactory(
    private val feature2NativeViewModelCreator: ()->Feature2NativeViewModel
): ViewModelProvider.Factory {

    @Suppress("UNCHECKED_CAST")
    override fun <T : ViewModel?> create(modelClass: Class<T>): T {
        return Feature2ViewModel(
            feature2NativeViewModelCreator()
        ) as T
    }
}