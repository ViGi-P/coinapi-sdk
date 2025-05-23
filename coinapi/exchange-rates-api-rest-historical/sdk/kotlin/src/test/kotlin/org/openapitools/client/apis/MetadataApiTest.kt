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

package org.openapitools.client.apis

import io.kotlintest.shouldBe
import io.kotlintest.specs.ShouldSpec

import org.openapitools.client.apis.MetadataApi
import org.openapitools.client.models.V1Asset
import org.openapitools.client.models.V1Icon

class MetadataApiTest : ShouldSpec() {
    init {
        // uncomment below to create an instance of MetadataApi
        //val apiInstance = MetadataApi()

        // to test v1AssetsAssetIdGet
        should("test v1AssetsAssetIdGet") {
            // uncomment below to test v1AssetsAssetIdGet
            //val assetId : kotlin.String = assetId_example // kotlin.String | The asset ID.
            //val result : kotlin.collections.List<V1Asset> = apiInstance.v1AssetsAssetIdGet(assetId)
            //result shouldBe ("TODO")
        }

        // to test v1AssetsGet
        should("test v1AssetsGet") {
            // uncomment below to test v1AssetsGet
            //val filterAssetId : kotlin.String = filterAssetId_example // kotlin.String | Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. `BTC;ETH`).
            //val result : kotlin.collections.List<V1Asset> = apiInstance.v1AssetsGet(filterAssetId)
            //result shouldBe ("TODO")
        }

        // to test v1AssetsIconsSizeGet
        should("test v1AssetsIconsSizeGet") {
            // uncomment below to test v1AssetsIconsSizeGet
            //val size : kotlin.Int = 56 // kotlin.Int | The size of the icons.
            //val result : kotlin.collections.List<V1Icon> = apiInstance.v1AssetsIconsSizeGet(size)
            //result shouldBe ("TODO")
        }

    }
}
