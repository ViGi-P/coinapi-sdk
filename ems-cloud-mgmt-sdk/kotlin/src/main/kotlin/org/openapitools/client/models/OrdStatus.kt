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

/**
 * Order statuses and the lifecycle are documented in the separate section: <a href=\"#ems-order-lifecycle\">EMS / Starter Guide / Order Lifecycle</a> 
 *
 * Values: rECEIVED,rOUTING,rOUTED,nEW,pENDINGCANCEL,pARTIALLYFILLED,fILLED,cANCELED,rEJECTED
 */

enum class OrdStatus(val value: kotlin.String) {

    @Json(name = "RECEIVED")
    rECEIVED("RECEIVED"),

    @Json(name = "ROUTING")
    rOUTING("ROUTING"),

    @Json(name = "ROUTED")
    rOUTED("ROUTED"),

    @Json(name = "NEW")
    nEW("NEW"),

    @Json(name = "PENDING_CANCEL")
    pENDINGCANCEL("PENDING_CANCEL"),

    @Json(name = "PARTIALLY_FILLED")
    pARTIALLYFILLED("PARTIALLY_FILLED"),

    @Json(name = "FILLED")
    fILLED("FILLED"),

    @Json(name = "CANCELED")
    cANCELED("CANCELED"),

    @Json(name = "REJECTED")
    rEJECTED("REJECTED");

    /**
     * Override toString() to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is OrdStatus) "$data" else null

        /**
         * Returns a valid [OrdStatus] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): OrdStatus? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}
