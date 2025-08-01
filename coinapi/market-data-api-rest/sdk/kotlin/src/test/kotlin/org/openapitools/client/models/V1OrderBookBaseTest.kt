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

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.models.V1OrderBookBase

class V1OrderBookBaseTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of V1OrderBookBase
        //val modelInstance = V1OrderBookBase()

        // to test the property `symbolId` - The symbol identifier.
        should("test symbolId") {
            // uncomment below to test the property
            //modelInstance.symbolId shouldBe ("TODO")
        }

        // to test the property `timeExchange` - The exchange time of the order book.
        should("test timeExchange") {
            // uncomment below to test the property
            //modelInstance.timeExchange shouldBe ("TODO")
        }

        // to test the property `timeCoinapi` - The CoinAPI time when the order book was received.
        should("test timeCoinapi") {
            // uncomment below to test the property
            //modelInstance.timeCoinapi shouldBe ("TODO")
        }

        // to test the property `asks` - The asks made by market makers.
        should("test asks") {
            // uncomment below to test the property
            //modelInstance.asks shouldBe ("TODO")
        }

        // to test the property `bids` - The bids made by market makers.
        should("test bids") {
            // uncomment below to test the property
            //modelInstance.bids shouldBe ("TODO")
        }

    }
}
