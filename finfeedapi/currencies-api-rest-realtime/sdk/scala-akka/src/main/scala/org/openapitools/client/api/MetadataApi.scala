/**
 * FX Realtime REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.Asset
import org.openapitools.client.model.Icon
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object MetadataApi {

  def apply(baseUrl: String = "https://api-realtime.fx.finfeedapi.com") = new MetadataApi(baseUrl)
}

class MetadataApi(baseUrl: String) {

  /**
   * Expected answers:
   *   code 200 : Seq[Asset] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param assetId The asset ID.
   */
  def v1AssetsAssetIdGet(assetId: String)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[Asset]] =
    ApiRequest[Seq[Asset]](ApiMethods.GET, baseUrl, "/v1/assets/{asset_id}", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("asset_id", assetId)
      .withSuccessResponse[Seq[Asset]](200)
      

  /**
   * Retrieves all assets.              :::info Our asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency). :::              :::info Properties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::
   * 
   * Expected answers:
   *   code 200 : Seq[Asset] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param filterAssetId Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. `BTC;ETH`).
   */
  def v1AssetsGet(filterAssetId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[Asset]] =
    ApiRequest[Seq[Asset]](ApiMethods.GET, baseUrl, "/v1/assets", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("filter_asset_id", filterAssetId)
      .withSuccessResponse[Seq[Asset]](200)
      

  /**
   * Gets the list of icons (of the given size) for all the assets.
   * 
   * Expected answers:
   *   code 200 : Seq[Icon] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param size The size of the icons.
   */
  def v1AssetsIconsSizeGet(size: Int)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[Icon]] =
    ApiRequest[Seq[Icon]](ApiMethods.GET, baseUrl, "/v1/assets/icons/{size}", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("size", size)
      .withSuccessResponse[Seq[Icon]](200)
      



}

