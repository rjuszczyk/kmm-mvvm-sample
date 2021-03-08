package com.taboo.shared.base

import androidx.lifecycle.LiveData
import kotlinx.coroutines.Job
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.launch

fun <Listener, State, T : BaseNativeViewModel<Listener, State>> T.toLiveData(block: T.() -> Flow<State>): LiveData<State> {
    return object: LiveData<State>() {
        var job: Job? = null
        override fun onActive() {
            job = coroutineScope.launch {
                block(this@toLiveData).collect{
                    value = it
                }
            }
        }

        override fun onInactive() {
            job?.cancel()
        }
    }
}