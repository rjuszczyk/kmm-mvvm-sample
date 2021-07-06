package com.taboo.shared.data

import com.example.PlayerQueries
import com.taboo.shared.domain.SomeItem
import com.taboo.shared.domain.SomeItemId
import com.taboo.shared.domain.SomeItemRepository
import com.taboo.shared.network.SomeItemsService
import kotlin.time.ExperimentalTime

@ExperimentalTime
class SomeItemRepositoryImpl(
    private val someItemsService: SomeItemsService,
    private val playerQueries: PlayerQueries,
): SomeItemRepository {

    override suspend fun loadSomeItems(): List<SomeItem> {
        val players = playerQueries.selectAll().executeAsList()
        return mutableListOf<SomeItem>().apply {
            addAll(someItemsService.getSomeItems().items.map {
                SomeItem(
                    id = SomeItemId(it.id),
                    title = it.title,
                )
            })
            addAll(players.map {
                SomeItem(
                    id = SomeItemId(it.player_number),
                    title = it.full_name
                )
            })
        }


    }

    override suspend fun loadSomeItem(id: SomeItemId): SomeItem {
        return loadSomeItems().first { it.id == id }
    }
}