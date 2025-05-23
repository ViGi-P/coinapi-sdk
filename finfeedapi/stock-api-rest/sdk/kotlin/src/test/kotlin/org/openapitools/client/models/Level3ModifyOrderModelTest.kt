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

import org.openapitools.client.models.Level3ModifyOrderModel

class Level3ModifyOrderModelTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of Level3ModifyOrderModel
        //val modelInstance = Level3ModifyOrderModel()

        // to test the property `symbol` - The stock symbol
        should("test symbol") {
            // uncomment below to test the property
            //modelInstance.symbol shouldBe ("TODO")
        }

        // to test the property `timestampNanos` - Original timestamp in nanoseconds since epoch
        should("test timestampNanos") {
            // uncomment below to test the property
            //modelInstance.timestampNanos shouldBe ("TODO")
        }

        // to test the property `timestamp` - Time when the order was modified as DateTime (UTC)
        should("test timestamp") {
            // uncomment below to test the property
            //modelInstance.timestamp shouldBe ("TODO")
        }

        // to test the property `orderIdReference` - Order identifier reference
        should("test orderIdReference") {
            // uncomment below to test the property
            //modelInstance.orderIdReference shouldBe ("TODO")
        }

        // to test the property `isPriorityReset` - Indicates if priority is reseted
        should("test isPriorityReset") {
            // uncomment below to test the property
            //modelInstance.isPriorityReset shouldBe ("TODO")
        }

        // to test the property `propertySize` - New total quoted size in number of shares
        should("test propertySize") {
            // uncomment below to test the property
            //modelInstance.propertySize shouldBe ("TODO")
        }

        // to test the property `price` - Price as decimal
        should("test price") {
            // uncomment below to test the property
            //modelInstance.price shouldBe ("TODO")
        }

    }
}
