package com.taboo.android.feature2

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.lifecycle.ViewModelProvider
import androidx.navigation.fragment.findNavController
import com.taboo.android.databinding.FragmentFeature2Binding
import com.taboo.android.requireAndroidApp
import com.taboo.shared.base.BaseFragment
import com.taboo.shared.feature2.Feature2ViewModel
import com.taboo.shared.feature2.IFeature2ViewModel.Listener
import com.taboo.shared.feature2.IFeature2ViewModel.State
import kotlin.time.ExperimentalTime

@ExperimentalTime
class Feature2Fragment: BaseFragment<Feature2ViewModel, Listener, State>() {

    private lateinit var binding: FragmentFeature2Binding

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        binding = FragmentFeature2Binding.inflate(inflater, container, false)
        return binding.root
    }

    override fun getViewModel(): Feature2ViewModel {
        val args = Feature2FragmentArgs.fromBundle(requireArguments())
        return ViewModelProvider(this, requireAndroidApp().provideFeature2ViewModelFactory(args.someItemId)).get(
            Feature2ViewModel::class.java)
    }

    override val listener= object:  Listener {
        override fun closeThisScreenAndNavigateToPrevious() {
            findNavController().popBackStack()
        }
    }

    override fun initView() {

    }

    override fun consumeState(state: State) {
        when(state) {
            is State.Loading -> {
                binding.progress.visibility = View.VISIBLE
                binding.title.visibility = View.GONE
                binding.error.visibility = View.GONE
            }
            is State.Loaded -> {
                binding.progress.visibility = View.GONE
                binding.title.visibility = View.VISIBLE
                binding.title.text = state.item.getTitle()
                binding.error.visibility = View.GONE
            }
            is State.Failed -> {
                binding.progress.visibility = View.GONE
                binding.title.visibility = View.GONE
                binding.error.visibility = View.VISIBLE
                binding.errorMessage.text = state.message
                binding.errorRetry.visibility = if(state.displayRetry) View.VISIBLE else View.GONE
            }
        }
    }
}