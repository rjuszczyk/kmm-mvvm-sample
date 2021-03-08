package com.taboo.shared.domain

import com.taboo.shared.Serializable

data class SomeItem internal constructor(
    internal val id: SomeItemId,
    val title: String,
)

data class SomeItemId internal constructor(
    val id: Long,
): Serializable