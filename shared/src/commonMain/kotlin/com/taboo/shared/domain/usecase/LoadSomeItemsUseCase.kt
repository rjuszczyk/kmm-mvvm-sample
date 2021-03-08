package com.taboo.shared.domain.usecase

import com.taboo.shared.domain.SomeItemRepository

class LoadSomeItemsUseCase(
    private val someItemRepository: SomeItemRepository
) {
    suspend fun loadSomeItems() = someItemRepository.loadSomeItems()
}