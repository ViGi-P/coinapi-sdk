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
 * Represents the response DTO for price level update information
 *
 * @param symbol The stock symbol
 * @param timestampNanos Original timestamp in nanoseconds since epoch
 * @param timestamp Time when the price level update was recorded as DateTime
 * @param isSideBuy Indicates if this is a price level update for the Buy Side.
 * @param isEventProcessingComplete Indicates if event processing is complete.
 * @param propertySize Aggregate quoted size at the price level
 * @param price Price level as decimal
 */


data class Level2PriceLevelUpdateModel (

    /* The stock symbol */
    @Json(name = "symbol")
    val symbol: kotlin.String? = null,

    /* Original timestamp in nanoseconds since epoch */
    @Json(name = "timestamp_nanos")
    val timestampNanos: kotlin.Long? = null,

    /* Time when the price level update was recorded as DateTime */
    @Json(name = "timestamp")
    val timestamp: java.time.OffsetDateTime? = null,

    /* Indicates if this is a price level update for the Buy Side. */
    @Json(name = "is_side_buy")
    val isSideBuy: kotlin.Boolean? = null,

    /* Indicates if event processing is complete. */
    @Json(name = "is_event_processing_complete")
    val isEventProcessingComplete: kotlin.Boolean? = null,

    /* Aggregate quoted size at the price level */
    @Json(name = "size")
    val propertySize: kotlin.Int? = null,

    /* Price level as decimal */
    @Json(name = "price")
    val price: kotlin.Double? = null

) {


}

