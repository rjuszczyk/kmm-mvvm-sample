package com.taboo.shared.feature1

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider

class Feature1ViewModelFactory(
    private val feature1NativeViewModelCreator: ()->Feature1NativeViewModel
): ViewModelProvider.Factory {

    @Suppress("UNCHECKED_CAST")
    override fun <T : ViewModel?> create(modelClass: Class<T>): T {
        return Feature1ViewModel(
            feature1NativeViewModelCreator()
        ) as T
    }
}