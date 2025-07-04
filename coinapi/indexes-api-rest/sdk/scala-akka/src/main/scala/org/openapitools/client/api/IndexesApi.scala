/**
 * CoinAPI Indexes REST API
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

import org.openapitools.client.model.IndexDefinitionInputData
import org.openapitools.client.model.IndexDefinitionSnapshotEntry
import org.openapitools.client.model.IndexIdentifier
import org.openapitools.client.model.IndexMultiAssetWeight
import org.openapitools.client.model.IndexTimeseriesItem
import org.openapitools.client.model.IndexValue
import java.time.OffsetDateTime
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object IndexesApi {

  def apply(baseUrl: String = "https://rest-api.indexes.coinapi.io") = new IndexesApi(baseUrl)
}

class IndexesApi(baseUrl: String) {

  /**
   * Expected answers:
   *   code 200 : Seq[IndexDefinitionInputData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexDefinitionId 
   */
  def v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId: String)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexDefinitionInputData]] =
    ApiRequest[Seq[IndexDefinitionInputData]](ApiMethods.GET, baseUrl, "/v1/indexdef/input-data/{index_definition_id}/all", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("index_definition_id", indexDefinitionId)
      .withSuccessResponse[Seq[IndexDefinitionInputData]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexDefinitionSnapshotEntry] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexDefinitionId 
   * @param time 
   * @param enabledOnly 
   * @param pendingOnly 
   * @param filterAssetId 
   * @param withStatusInfo 
   */
  def v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId: String, time: Option[OffsetDateTime] = None, enabledOnly: Option[Boolean] = None, pendingOnly: Option[Boolean] = None, filterAssetId: Option[String] = None, withStatusInfo: Option[Boolean] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexDefinitionSnapshotEntry]] =
    ApiRequest[Seq[IndexDefinitionSnapshotEntry]](ApiMethods.GET, baseUrl, "/v1/indexdef/input-data/{index_definition_id}", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("time", time)
      .withQueryParam("enabled_only", enabledOnly)
      .withQueryParam("pending_only", pendingOnly)
      .withQueryParam("filter_asset_id", filterAssetId)
      .withQueryParam("with_status_info", withStatusInfo)
      .withPathParam("index_definition_id", indexDefinitionId)
      .withSuccessResponse[Seq[IndexDefinitionSnapshotEntry]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexMultiAssetWeight] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   */
  def v1IndexdefMultiassetGet()(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexMultiAssetWeight]] =
    ApiRequest[Seq[IndexMultiAssetWeight]](ApiMethods.GET, baseUrl, "/v1/indexdef/multiasset", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withSuccessResponse[Seq[IndexMultiAssetWeight]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexMultiAssetWeight] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexId 
   */
  def v1IndexdefMultiassetIndexIdGet(indexId: String)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexMultiAssetWeight]] =
    ApiRequest[Seq[IndexMultiAssetWeight]](ApiMethods.GET, baseUrl, "/v1/indexdef/multiasset/{index_id}", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("index_id", indexId)
      .withSuccessResponse[Seq[IndexMultiAssetWeight]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexIdentifier] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   */
  def v1IndexesGet()(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexIdentifier]] =
    ApiRequest[Seq[IndexIdentifier]](ApiMethods.GET, baseUrl, "/v1/indexes", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withSuccessResponse[Seq[IndexIdentifier]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexDefinitionSnapshotEntry] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexDefinitionId 
   */
  def v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId: String)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexDefinitionSnapshotEntry]] =
    ApiRequest[Seq[IndexDefinitionSnapshotEntry]](ApiMethods.GET, baseUrl, "/v1/indexes/{index_definition_id}/currentSnapshot", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("index_definition_id", indexDefinitionId)
      .withSuccessResponse[Seq[IndexDefinitionSnapshotEntry]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexDefinitionSnapshotEntry] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexDefinitionId 
   * @param time 
   */
  def v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId: String, time: Option[OffsetDateTime] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexDefinitionSnapshotEntry]] =
    ApiRequest[Seq[IndexDefinitionSnapshotEntry]](ApiMethods.GET, baseUrl, "/v1/indexes/{index_definition_id}/historySnapshot", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("time", time)
      .withPathParam("index_definition_id", indexDefinitionId)
      .withSuccessResponse[Seq[IndexDefinitionSnapshotEntry]](200)
      

  /**
   * Expected answers:
   *   code 200 : IndexValue (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexId 
   */
  def v1IndexesIndexIdCurrentGet(indexId: String)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[IndexValue] =
    ApiRequest[IndexValue](ApiMethods.GET, baseUrl, "/v1/indexes/{index_id}/current", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withPathParam("index_id", indexId)
      .withSuccessResponse[IndexValue](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexValue] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexId 
   * @param timeStart 
   * @param timeEnd 
   * @param limit 
   */
  def v1IndexesIndexIdHistoryGet(indexId: String, timeStart: Option[OffsetDateTime] = None, timeEnd: Option[OffsetDateTime] = None, limit: Option[Int] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexValue]] =
    ApiRequest[Seq[IndexValue]](ApiMethods.GET, baseUrl, "/v1/indexes/{index_id}/history", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("time_start", timeStart)
      .withQueryParam("time_end", timeEnd)
      .withQueryParam("limit", limit)
      .withPathParam("index_id", indexId)
      .withSuccessResponse[Seq[IndexValue]](200)
      

  /**
   * Expected answers:
   *   code 200 : Seq[IndexTimeseriesItem] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param indexId 
   * @param periodId Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
   * @param timeStart Timeseries starting time in ISO 8601
   * @param timeEnd Timeseries ending time in ISO 8601
   * @param limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
   */
  def v1IndexesIndexIdTimeseriesGet(indexId: String, periodId: String, timeStart: String, timeEnd: String, limit: Option[Int] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[IndexTimeseriesItem]] =
    ApiRequest[Seq[IndexTimeseriesItem]](ApiMethods.GET, baseUrl, "/v1/indexes/{index_id}/timeseries", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("period_id", periodId)
      .withQueryParam("time_start", timeStart)
      .withQueryParam("time_end", timeEnd)
      .withQueryParam("limit", limit)
      .withPathParam("index_id", indexId)
      .withSuccessResponse[Seq[IndexTimeseriesItem]](200)
      



}

