package com.taboo.shared.domain.usecase

import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.domain.SomeItemRepository

class LoadSomeItemUseCase(
    private val someItemRepository: SomeItemRepository
) {
    suspend fun loadSomeItem(id: SomeItemId) = someItemRepository.loadSomeItem(id)
}