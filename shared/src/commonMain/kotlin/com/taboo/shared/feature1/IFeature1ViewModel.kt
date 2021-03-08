package com.taboo.shared.feature1

import com.taboo.shared.base.IBaseViewModel
import com.taboo.shared.domain.SomeItem
import com.taboo.shared.domain.SomeItemId

interface IFeature1ViewModel: IBaseViewModel {
    fun onRetryClicked()
    fun onSomeItemClicked(displayed: DisplayedSomeItem)

    interface Listener {
        fun navigateToSomeItemDetails(someItemId: SomeItemId)
    }

    sealed class State {
        object Loading: State()
        data class Loaded(val items: List<DisplayedSomeItem>): State()
        data class Failed(val message: String, val displayRetry: Boolean): State()
    }

    data class DisplayedSomeItem (
        internal val someItem: SomeItem
    ) {
        fun getTitle() = someItem.title
    }
}