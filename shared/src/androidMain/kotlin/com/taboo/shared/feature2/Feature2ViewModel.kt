package com.taboo.shared.feature2

import com.taboo.shared.base.BaseViewModel
import com.taboo.shared.feature2.IFeature2ViewModel.State
import com.taboo.shared.feature2.IFeature2ViewModel.Listener

class Feature2ViewModel(
    feature2NativeViewModel: Feature2NativeViewModel
): BaseViewModel<Feature2NativeViewModel, Listener, State>(
    feature2NativeViewModel
), IFeature2ViewModel by feature2NativeViewModel