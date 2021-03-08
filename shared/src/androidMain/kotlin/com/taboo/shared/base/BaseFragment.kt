package com.taboo.shared.base

import android.os.Bundle
import android.view.View
import androidx.fragment.app.Fragment


abstract class BaseFragment<VM: BaseViewModel<*, Listener, State>, Listener, State>: Fragment() {

    abstract fun getViewModel(): VM
    abstract val listener: Listener

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        getViewModel().registerListener(listener)
    }

    final override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        initView()
        getViewModel().getState().observe(this, { state ->
            consumeState(state)
        })
    }

    override fun onDestroy() {
        super.onDestroy()
        getViewModel().unregisterListener()
    }

    abstract fun initView()
    abstract fun consumeState(state: State)
}