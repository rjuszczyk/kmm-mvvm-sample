package com.taboo.shared.feature1

import com.taboo.shared.base.BaseViewModel
import com.taboo.shared.feature1.IFeature1ViewModel.State
import com.taboo.shared.feature1.IFeature1ViewModel.Listener

class Feature1ViewModel(
    feature1NativeViewModel: Feature1NativeViewModel
): BaseViewModel<Feature1NativeViewModel, Listener, State>(
    feature1NativeViewModel
), IFeature1ViewModel by feature1NativeViewModel