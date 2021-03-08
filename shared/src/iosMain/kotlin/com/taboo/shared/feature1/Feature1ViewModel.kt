package com.taboo.shared.feature1

import com.taboo.shared.base.BaseViewModel
import com.taboo.shared.base.toCompletion
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.feature1.IFeature1ViewModel.State
import com.taboo.shared.feature1.IFeature1ViewModel.Listener

class Feature1ViewModel(
    navigateToSomeItemDetails: (SomeItemId)->Unit,
    consumeState: (State) ->Unit,
    feature1NativeViewModel: Feature1NativeViewModel
): BaseViewModel<Feature1NativeViewModel, Listener, State>(
    object: Listener {
        override fun navigateToSomeItemDetails(someItemId: SomeItemId) {
            navigateToSomeItemDetails(someItemId)
        }
    },
    feature1NativeViewModel
), IFeature1ViewModel by feature1NativeViewModel {
    init {
        feature1NativeViewModel.toCompletion({ getState() }, { state -> consumeState(state) })
    }
}