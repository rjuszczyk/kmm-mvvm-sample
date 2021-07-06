package com.taboo.shared.network

import com.taboo.shared.network.response.SomeItemsResponse
import io.ktor.client.*
import io.ktor.client.request.*

class SomeItemsService internal constructor(
    private val httpClient: HttpClient
){

    suspend fun getSomeItems(): SomeItemsResponse {
        return httpClient.get("https://staging.radoair.rjuszczyk.com/someItems")
    }
}