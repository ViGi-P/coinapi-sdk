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
 * @param type 
 * @param title 
 * @param status 
 * @param detail 
 * @param instance 
 */


data class MvcProblemDetails (

    @Json(name = "type")
    val type: kotlin.String? = null,

    @Json(name = "title")
    val title: kotlin.String? = null,

    @Json(name = "status")
    val status: kotlin.Int? = null,

    @Json(name = "detail")
    val detail: kotlin.String? = null,

    @Json(name = "instance")
    val instance: kotlin.String? = null

) : kotlin.collections.HashMap<String, kotlin.Any>() {


}

