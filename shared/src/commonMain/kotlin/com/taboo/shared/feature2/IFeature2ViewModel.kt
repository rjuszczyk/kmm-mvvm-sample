package com.taboo.shared.feature2

import com.taboo.shared.base.IBaseViewModel
import com.taboo.shared.domain.SomeItem
import com.taboo.shared.domain.SomeItemId

interface IFeature2ViewModel: IBaseViewModel {
    fun onRetryClicked()
    fun onBackClicked()

    interface Listener {
        fun closeThisScreenAndNavigateToPrevious()
    }

    sealed class State {
        object Loading: State()
        data class Loaded(val item: DisplayedSomeItem): State()
        data class Failed(val message: String, val displayRetry: Boolean): State()
    }

    data class DisplayedSomeItem (
        internal val someItem: SomeItem
    ) {
        fun getTitle() = someItem.title
    }
}