package com.taboo.shared.network.response

import kotlinx.serialization.Serializable

@Serializable
data class SomeItemsResponse(
    val items: List<SomeItemNetworkModel>,
)

@Serializable
data class SomeItemNetworkModel(
    val id: Long,
    val title: String,
)