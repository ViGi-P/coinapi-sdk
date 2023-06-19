/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Tracks pair data across each day.
 *
 * @param entryTime 
 * @param recvTime 
 * @param blockNumber Number of block in which entity was recorded.
 * @param id Identifier, format: (pair id)-(day start timestamp).
 * @param date Unix timestamp for start of day.
 * @param pair Reference to pair.
 * @param token0 Reference to token0.
 * @param token1 Reference to token1.
 * @param reserve0 Reserve of token0 (updated during each transaction on pair).
 * @param reserve1 Reserve of token1 (updated during each transaction on pair).
 * @param totalSupply Total supply of liquidity token distributed to LPs.
 * @param reserveUsd Reserve of token0 plus token1 stored as a derived USD amount.
 * @param volumeToken0 Total amount of token0 swapped throughout day.
 * @param volumeToken1 Total amount of token1 swapped throughout day.
 * @param volumeUsd Total volume within pair throughout day.
 * @param txCount Amount of transactions on pair throughout day.
 * @param vid 
 */


data class SushiswapPairDayDataDTO (

    @Json(name = "entry_time")
    val entryTime: java.time.OffsetDateTime? = null,

    @Json(name = "recv_time")
    val recvTime: java.time.OffsetDateTime? = null,

    /* Number of block in which entity was recorded. */
    @Json(name = "block_number")
    val blockNumber: kotlin.Long? = null,

    /* Identifier, format: (pair id)-(day start timestamp). */
    @Json(name = "id")
    val id: kotlin.String? = null,

    /* Unix timestamp for start of day. */
    @Json(name = "date")
    val date: kotlin.Int? = null,

    /* Reference to pair. */
    @Json(name = "pair")
    val pair: kotlin.String? = null,

    /* Reference to token0. */
    @Json(name = "token_0")
    val token0: kotlin.String? = null,

    /* Reference to token1. */
    @Json(name = "token_1")
    val token1: kotlin.String? = null,

    /* Reserve of token0 (updated during each transaction on pair). */
    @Json(name = "reserve_0")
    val reserve0: kotlin.String? = null,

    /* Reserve of token1 (updated during each transaction on pair). */
    @Json(name = "reserve_1")
    val reserve1: kotlin.String? = null,

    /* Total supply of liquidity token distributed to LPs. */
    @Json(name = "total_supply")
    val totalSupply: kotlin.String? = null,

    /* Reserve of token0 plus token1 stored as a derived USD amount. */
    @Json(name = "reserve_usd")
    val reserveUsd: kotlin.String? = null,

    /* Total amount of token0 swapped throughout day. */
    @Json(name = "volume_token_0")
    val volumeToken0: kotlin.String? = null,

    /* Total amount of token1 swapped throughout day. */
    @Json(name = "volume_token_1")
    val volumeToken1: kotlin.String? = null,

    /* Total volume within pair throughout day. */
    @Json(name = "volume_usd")
    val volumeUsd: kotlin.String? = null,

    /* Amount of transactions on pair throughout day. */
    @Json(name = "tx_count")
    val txCount: kotlin.String? = null,

    /*  */
    @Json(name = "vid")
    val vid: kotlin.Long? = null

)
