package com.taboo.shared.feature2

import com.example.Database
import com.taboo.shared.base.BaseNativeViewModel
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.domain.usecase.LoadSomeItemUseCase
import com.taboo.shared.feature2.IFeature2ViewModel.Listener
import com.taboo.shared.feature2.IFeature2ViewModel.State
import com.taboo.shared.feature2.IFeature2ViewModel.DisplayedSomeItem
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.launch

class Feature2NativeViewModel(
    private val loadSomeItemUseCase: LoadSomeItemUseCase,
    private val someItemId: SomeItemId
): BaseNativeViewModel<Listener, State>(), IFeature2ViewModel {

    private val state = MutableStateFlow<State>(State.Loading)

    override fun getState() = state

    init {
        coroutineScope.launch {
            performLoading()
        }
    }

    fun test() {
        Database
    }

    private suspend fun performLoading() {
        state.value = State.Loading
        try {
            val someItem = loadSomeItemUseCase.loadSomeItem(someItemId)
            state.value = State.Loaded(DisplayedSomeItem(someItem))
        } catch (throwable: Throwable) {
            state.value = State.Failed(throwable.message?:"Something went wrong", true)
        }
    }

    override fun onRetryClicked() {
        coroutineScope.launch {
            performLoading()
        }
    }

    override fun onBackClicked() {
        getListner().closeThisScreenAndNavigateToPrevious()
    }
}
