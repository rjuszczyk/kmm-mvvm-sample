package com.taboo.shared.base

import androidx.lifecycle.ViewModel

open class BaseViewModel<VM: BaseNativeViewModel<Listener, State>, Listener, State>(private val nativeViewModel: VM): ViewModel(), ListenerAware<Listener> by nativeViewModel {

    fun getState() = nativeViewModel.toLiveData { getState() }

    override fun onCleared() {
        nativeViewModel.dispose()
        super.onCleared()
    }
}