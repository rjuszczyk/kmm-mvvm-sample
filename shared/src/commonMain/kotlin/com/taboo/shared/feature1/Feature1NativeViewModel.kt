package com.taboo.shared.feature1

import com.taboo.shared.base.BaseNativeViewModel
import com.taboo.shared.domain.usecase.LoadSomeItemsUseCase
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.launch
import com.taboo.shared.feature1.IFeature1ViewModel.State
import com.taboo.shared.feature1.IFeature1ViewModel.Listener
import com.taboo.shared.feature1.IFeature1ViewModel.DisplayedSomeItem

class Feature1NativeViewModel(
    private val loadSomeItemsUseCase: LoadSomeItemsUseCase
): BaseNativeViewModel<Listener, State>(), IFeature1ViewModel {

    private val state = MutableStateFlow<State>(State.Loading)

    override fun getState() = state

    init {
        coroutineScope.launch {
            performLoading()
        }
    }

    private suspend fun performLoading() {
        state.value = State.Loading
        try {
            val someItems = loadSomeItemsUseCase.loadSomeItems()
            state.value = State.Loaded(someItems.map { DisplayedSomeItem(it) })
        } catch (throwable: Throwable) {
            state.value = State.Failed(throwable.message?:"Something went wrong", true)
        }
    }

    override fun onRetryClicked() {
        coroutineScope.launch {
            performLoading()
        }
    }

    override fun onSomeItemClicked(displayed: DisplayedSomeItem) {
        getListner().navigateToSomeItemDetails(displayed.someItem.id)
    }
}
