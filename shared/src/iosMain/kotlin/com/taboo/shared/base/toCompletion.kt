package com.taboo.shared.base

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.launch

fun<Listener, State, T : BaseNativeViewModel<Listener, State>> T.toCompletion(block: T.() -> Flow<State>, completion: (State) -> (Unit)) {
    coroutineScope.launch { block(this@toCompletion).collect{ value -> completion(value) } }
}