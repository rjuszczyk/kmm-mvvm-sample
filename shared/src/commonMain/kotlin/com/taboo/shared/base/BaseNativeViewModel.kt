package com.taboo.shared.base

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.cancel
import kotlinx.coroutines.flow.Flow

abstract class BaseNativeViewModel<Listener, State>: ListenerAware<Listener> {

    private var listener: Listener? = null
    val coroutineScope = CoroutineScope(Dispatchers.Main)

    abstract fun getState(): Flow<State>

    override fun registerListener(listener: Listener) {
        this.listener = listener
    }

    override fun unregisterListener() {
        listener = null
    }

    internal fun getListner(): Listener {
        return listener!!
    }

    /**
     * This method should be called when ViewModel's hosting component is destroyed and no further interaction with ViewModel is possible.
     */
    fun dispose() {
        coroutineScope.cancel()
    }
}