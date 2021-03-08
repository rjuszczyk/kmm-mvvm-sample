package com.taboo.android.feature1

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.taboo.android.databinding.RowSomeItemBinding
import com.taboo.shared.feature1.IFeature1ViewModel

class SomeItemsListAdapter(private val onSomeItemClicked: (IFeature1ViewModel.DisplayedSomeItem)->Unit): RecyclerView.Adapter<SomeItemsListAdapter.SomeItemsViewHolder>() {

    private var data: List<IFeature1ViewModel.DisplayedSomeItem> = emptyList()

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): SomeItemsViewHolder {
        val layoutInflater = LayoutInflater.from(parent.context)
        val binding = RowSomeItemBinding.inflate(layoutInflater, parent,false)
        return SomeItemsViewHolder(binding)
    }

    override fun onBindViewHolder(holder: SomeItemsViewHolder, position: Int) {
        holder.bind(data[position])
    }

    override fun getItemCount() = data.size

    fun setData(data: List<IFeature1ViewModel.DisplayedSomeItem>) {
        this.data = data
    }

    inner class SomeItemsViewHolder(private val binding: RowSomeItemBinding): RecyclerView.ViewHolder(binding.root) {

        fun bind(someItem: IFeature1ViewModel.DisplayedSomeItem) {
            binding.root.setOnClickListener {
                onSomeItemClicked(someItem)
            }
            binding.someItemTitle.text = someItem.getTitle()
        }
    }
}

