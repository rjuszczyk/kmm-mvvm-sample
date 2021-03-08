package com.taboo.android.feature1

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.lifecycle.ViewModelProvider
import androidx.navigation.fragment.findNavController
import androidx.recyclerview.widget.LinearLayoutManager
import com.taboo.android.databinding.FragmentFeature1Binding
import com.taboo.android.requireAndroidApp
import com.taboo.shared.base.BaseFragment
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.feature1.Feature1ViewModel
import com.taboo.shared.feature1.IFeature1ViewModel.Listener
import com.taboo.shared.feature1.IFeature1ViewModel.State
import kotlin.time.ExperimentalTime

@ExperimentalTime
class Feature1Fragment : BaseFragment<Feature1ViewModel, Listener, State>() {

    private lateinit var binding: FragmentFeature1Binding
    private lateinit var adapter: SomeItemsListAdapter

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        binding = FragmentFeature1Binding.inflate(inflater, container, false)
        return binding.root
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        adapter = SomeItemsListAdapter { displayedSomeItem ->
            getViewModel().onSomeItemClicked(displayedSomeItem)
        }
    }

    override fun getViewModel() = ViewModelProvider(this, requireAndroidApp().provideFeature1ViewModelFactory()).get(Feature1ViewModel::class.java)

    override val listener = object: Listener {
        override fun navigateToSomeItemDetails(someItemId: SomeItemId) {
            findNavController().navigate(Feature1FragmentDirections.actionFeature1ToFeature2(someItemId))
        }
    }

    override fun initView() {
        binding.list.adapter = adapter
        binding.list.layoutManager = LinearLayoutManager(requireContext(), LinearLayoutManager.VERTICAL, false)
    }

    override fun consumeState(state: State) {
        when(state) {
            is State.Loading -> {
                binding.progress.visibility = View.VISIBLE
                binding.list.visibility = View.GONE
                binding.error.visibility = View.GONE
            }
            is State.Loaded -> {
                binding.progress.visibility = View.GONE
                binding.list.visibility = View.VISIBLE
                adapter.setData(state.items)
                binding.error.visibility = View.GONE
            }
            is State.Failed -> {
                binding.progress.visibility = View.GONE
                binding.list.visibility = View.GONE
                binding.error.visibility = View.VISIBLE
                binding.errorMessage.text = state.message
                binding.errorRetry.visibility = if(state.displayRetry) View.VISIBLE else View.GONE
                binding.errorRetry.setOnClickListener {
                    getViewModel().onRetryClicked()
                }
            }
        }
    }
}