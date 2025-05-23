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

import org.openapitools.client.models.AdminAuctionInformationModel
import org.openapitools.client.models.AdminOfficialPriceModel
import org.openapitools.client.models.AdminOperationalHaltStatusModel
import org.openapitools.client.models.AdminRetailLiquidityIndicatorModel
import org.openapitools.client.models.AdminSecurityDirectoryModel
import org.openapitools.client.models.AdminSecurityEventModel
import org.openapitools.client.models.AdminShortSalePriceTestStatusModel
import org.openapitools.client.models.AdminSystemEventModel
import org.openapitools.client.models.AdminTradingStatusModel

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Represents the response DTO for IEX admin information, combining all symbol-based admin message types
 *
 * @param tradingStatus 
 * @param officialPrice 
 * @param securityEvent 
 * @param auctionInformation 
 * @param shortSalePriceTest 
 * @param operationalHaltStatus 
 * @param retailLiquidityIndicator 
 * @param systemEvent 
 * @param securityDirectory 
 */


data class AdminAdminMessageModel (

    @Json(name = "trading_status")
    val tradingStatus: AdminTradingStatusModel? = null,

    @Json(name = "official_price")
    val officialPrice: AdminOfficialPriceModel? = null,

    @Json(name = "security_event")
    val securityEvent: AdminSecurityEventModel? = null,

    @Json(name = "auction_information")
    val auctionInformation: AdminAuctionInformationModel? = null,

    @Json(name = "short_sale_price_test")
    val shortSalePriceTest: AdminShortSalePriceTestStatusModel? = null,

    @Json(name = "operational_halt_status")
    val operationalHaltStatus: AdminOperationalHaltStatusModel? = null,

    @Json(name = "retail_liquidity_indicator")
    val retailLiquidityIndicator: AdminRetailLiquidityIndicatorModel? = null,

    @Json(name = "system_event")
    val systemEvent: AdminSystemEventModel? = null,

    @Json(name = "security_directory")
    val securityDirectory: AdminSecurityDirectoryModel? = null

) {


}

