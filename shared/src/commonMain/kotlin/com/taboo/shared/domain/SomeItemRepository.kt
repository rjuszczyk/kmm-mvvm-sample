package com.taboo.shared.domain

interface SomeItemRepository {
    suspend fun loadSomeItems(): List<SomeItem>
    suspend fun loadSomeItem(id: SomeItemId): SomeItem
}