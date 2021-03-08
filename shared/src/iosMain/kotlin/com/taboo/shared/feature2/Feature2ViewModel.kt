package com.taboo.shared.feature2

import com.taboo.shared.base.BaseViewModel
import com.taboo.shared.base.toCompletion
import com.taboo.shared.feature2.IFeature2ViewModel.State
import com.taboo.shared.feature2.IFeature2ViewModel.Listener

class Feature2ViewModel(
    closeThisScreenAndNavigateToPrevious: ()->Unit,
    consumeState: (State)->Unit,
    feature2NativeViewModel: Feature2NativeViewModel
) : BaseViewModel<Feature2NativeViewModel, Listener, State>(
    object: Listener {
        override fun closeThisScreenAndNavigateToPrevious() {
            closeThisScreenAndNavigateToPrevious()
        }
    },
    feature2NativeViewModel
), IFeature2ViewModel by feature2NativeViewModel {
    init {
        feature2NativeViewModel.toCompletion({ getState() }, { state -> consumeState(state) })
    }
}