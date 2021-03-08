package com.taboo.shared.base

interface ListenerAware<Listener> {
    fun registerListener(listener: Listener)

    fun unregisterListener()
}