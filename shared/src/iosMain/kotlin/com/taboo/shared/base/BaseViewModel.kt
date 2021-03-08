package com.taboo.shared.base

open class BaseViewModel<VM: BaseNativeViewModel<Listener, State>, Listener, State>(
    listener: Listener,
    private val nativeViewModel: VM
): ListenerAware<Listener> by nativeViewModel, IBaseViewModel {

    init {
        nativeViewModel.registerListener(listener)
    }

    override fun dispose() {
        nativeViewModel.unregisterListener()
        nativeViewModel.dispose()
    }


}