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
 * 
 *
 * @param itemNumber 
 * @param itemTitle 
 * @param content 
 */


data class DTOFilingItemDto (

    @Json(name = "item_number")
    val itemNumber: kotlin.String? = null,

    @Json(name = "item_title")
    val itemTitle: kotlin.String? = null,

    @Json(name = "content")
    val content: kotlin.String? = null

) {


}

