/**
 * CoinAPI Market Data REST API
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

import org.openapitools.client.model.GeneralData
import org.openapitools.client.model.ListingItem
import org.openapitools.client.model.Metric
import org.openapitools.client.model.MetricData
import java.time.OffsetDateTime
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object MetricsV1Api {

  def apply(baseUrl: String = "https://rest.coinapi.io") = new MetricsV1Api(baseUrl)
}

class MetricsV1Api(baseUrl: String) {

  /**
   * Get current asset metrics.
   * 
   * Expected answers:
   *   code 200 : Seq[GeneralData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param assetId Asset identifier (from the Metadata -> Assets)
   * @param assetIdExternal Exchange asset identifier
   * @param exchangeId Exchange identifier (from the Metadata -> Exchanges)
   */
  def v1MetricsAssetCurrentGet(metricId: Option[String] = None, assetId: Option[String] = None, assetIdExternal: Option[String] = None, exchangeId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[GeneralData]] =
    ApiRequest[Seq[GeneralData]](ApiMethods.GET, baseUrl, "/v1/metrics/asset/current", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("asset_id", assetId)
      .withQueryParam("asset_id_external", assetIdExternal)
      .withQueryParam("exchange_id", exchangeId)
      .withSuccessResponse[Seq[GeneralData]](200)
      

  /**
   * Get asset metrics history.
   * 
   * Expected answers:
   *   code 200 : Seq[MetricData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param exchangeId Exchange identifier (from the Metadata -> Exchanges)
   * @param assetId Asset identifier (from the Metadata -> Assets)
   * @param assetIdExternal Exchange asset identifier
   * @param timeStart Starting time in ISO 8601
   * @param timeEnd Ending time in ISO 8601
   * @param timeFormat If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
   * @param periodId Identifier of requested timeseries period (e.g. `5SEC` or `2MTH`), default value is `1SEC`
   * @param limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
   */
  def v1MetricsAssetHistoryGet(metricId: String, exchangeId: String, assetId: Option[String] = None, assetIdExternal: Option[String] = None, timeStart: Option[OffsetDateTime] = None, timeEnd: Option[OffsetDateTime] = None, timeFormat: Option[String] = None, periodId: Option[String] = None, limit: Option[Int] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[MetricData]] =
    ApiRequest[Seq[MetricData]](ApiMethods.GET, baseUrl, "/v1/metrics/asset/history", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("asset_id", assetId)
      .withQueryParam("asset_id_external", assetIdExternal)
      .withQueryParam("exchange_id", exchangeId)
      .withQueryParam("time_start", timeStart)
      .withQueryParam("time_end", timeEnd)
      .withQueryParam("time_format", timeFormat)
      .withQueryParam("period_id", periodId)
      .withQueryParam("limit", limit)
      .withSuccessResponse[Seq[MetricData]](200)
      

  /**
   * Get data metrics for asset.
   * 
   * Expected answers:
   *   code 200 : Seq[ListingItem] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param exchangeId Exchange identifier (from the Metadata -> Exchanges)
   * @param chainId Chain identifier
   * @param networkId Network identifier
   * @param assetId Asset identifier (from the Metadata -> Assets)
   * @param assetIdExternal The asset external identifier
   */
  def v1MetricsAssetListingGet(metricId: Option[String] = None, exchangeId: Option[String] = None, chainId: Option[String] = None, networkId: Option[String] = None, assetId: Option[String] = None, assetIdExternal: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[ListingItem]] =
    ApiRequest[Seq[ListingItem]](ApiMethods.GET, baseUrl, "/v1/metrics/asset/listing", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("exchange_id", exchangeId)
      .withQueryParam("chain_id", chainId)
      .withQueryParam("network_id", networkId)
      .withQueryParam("asset_id", assetId)
      .withQueryParam("asset_id_external", assetIdExternal)
      .withSuccessResponse[Seq[ListingItem]](200)
      

  /**
   * Get current exchange metrics values.
   * 
   * Expected answers:
   *   code 200 : Seq[GeneralData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param exchangeId The exchange identifier (from the Metadata -> Exchanges)
   * @param metricId The metric identifier (from the Metrics -> Listing)
   */
  def v1MetricsExchangeCurrentGet(exchangeId: String, metricId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[GeneralData]] =
    ApiRequest[Seq[GeneralData]](ApiMethods.GET, baseUrl, "/v1/metrics/exchange/current", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("exchange_id", exchangeId)
      .withSuccessResponse[Seq[GeneralData]](200)
      

  /**
   * Get exchange metrics history.
   * 
   * Expected answers:
   *   code 200 : Seq[MetricData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param exchangeId Exchange identifier (from the Metadata -> Exchanges)
   * @param timeStart Starting time in ISO 8601
   * @param timeEnd Ending time in ISO 8601
   * @param timeFormat If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
   * @param periodId Identifier of requested timeseries period (e.g. `5SEC` or `2MTH`), default value is `1SEC`
   * @param limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
   */
  def v1MetricsExchangeHistoryGet(metricId: String, exchangeId: String, timeStart: Option[OffsetDateTime] = None, timeEnd: Option[OffsetDateTime] = None, timeFormat: Option[String] = None, periodId: Option[String] = None, limit: Option[Int] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[MetricData]] =
    ApiRequest[Seq[MetricData]](ApiMethods.GET, baseUrl, "/v1/metrics/exchange/history", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("exchange_id", exchangeId)
      .withQueryParam("time_start", timeStart)
      .withQueryParam("time_end", timeEnd)
      .withQueryParam("time_format", timeFormat)
      .withQueryParam("period_id", periodId)
      .withQueryParam("limit", limit)
      .withSuccessResponse[Seq[MetricData]](200)
      

  /**
   * Get data metrics for exchange.
   * 
   * Expected answers:
   *   code 200 : Seq[ListingItem] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param exchangeId The exchange identifier (from the Metadata -> Exchanges)
   * @param metricId The metric identifier (from the Metrics -> Listing)
   */
  def v1MetricsExchangeListingGet(exchangeId: String, metricId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[ListingItem]] =
    ApiRequest[Seq[ListingItem]](ApiMethods.GET, baseUrl, "/v1/metrics/exchange/listing", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("exchange_id", exchangeId)
      .withSuccessResponse[Seq[ListingItem]](200)
      

  /**
   * Get all data metrics.
   * 
   * Expected answers:
   *   code 200 : Seq[Metric] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   */
  def v1MetricsListingGet()(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[Metric]] =
    ApiRequest[Seq[Metric]](ApiMethods.GET, baseUrl, "/v1/metrics/listing", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withSuccessResponse[Seq[Metric]](200)
      

  /**
   * Get current symbol metrics.
   * 
   * Expected answers:
   *   code 200 : Seq[GeneralData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param symbolId Symbol identifier (from the Metadata -> Symbols)
   * @param exchangeId Exchange id (from the Metadata -> Exchanges)
   */
  def v1MetricsSymbolCurrentGet(metricId: Option[String] = None, symbolId: Option[String] = None, exchangeId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[GeneralData]] =
    ApiRequest[Seq[GeneralData]](ApiMethods.GET, baseUrl, "/v1/metrics/symbol/current", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("symbol_id", symbolId)
      .withQueryParam("exchange_id", exchangeId)
      .withSuccessResponse[Seq[GeneralData]](200)
      

  /**
   * Get symbol metrics history.
   * 
   * Expected answers:
   *   code 200 : Seq[MetricData] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param symbolId Symbol identifier (from the Metadata -> Symbols)
   * @param timeStart Starting time in ISO 8601
   * @param timeEnd Ending time in ISO 8601
   * @param timeFormat If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
   * @param periodId Identifier of requested timeseries period (e.g. `5SEC` or `2MTH`), default value is `1SEC`
   * @param limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
   */
  def v1MetricsSymbolHistoryGet(metricId: String, symbolId: String, timeStart: Option[OffsetDateTime] = None, timeEnd: Option[OffsetDateTime] = None, timeFormat: Option[String] = None, periodId: Option[String] = None, limit: Option[Int] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[MetricData]] =
    ApiRequest[Seq[MetricData]](ApiMethods.GET, baseUrl, "/v1/metrics/symbol/history", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("symbol_id", symbolId)
      .withQueryParam("time_start", timeStart)
      .withQueryParam("time_end", timeEnd)
      .withQueryParam("time_format", timeFormat)
      .withQueryParam("period_id", periodId)
      .withQueryParam("limit", limit)
      .withSuccessResponse[Seq[MetricData]](200)
      

  /**
   * Get data metrics for symbol.
   * 
   * Expected answers:
   *   code 200 : Seq[ListingItem] (successful operation)
   * 
   * Available security schemes:
   *   APIKey (apiKey)
   *   JWT (http)
   * 
   * @param metricId Metric identifier (from the Metrics -> Listing)
   * @param exchangeId Exchange identifier (from the Metadata -> Exchanges)
   * @param symbolId Symbol identifier (from the Metadata -> Symbols)
   */
  def v1MetricsSymbolListingGet(metricId: Option[String] = None, exchangeId: Option[String] = None, symbolId: Option[String] = None)(implicit apiKey: ApiKeyValue, bearerToken: BearerToken): ApiRequest[Seq[ListingItem]] =
    ApiRequest[Seq[ListingItem]](ApiMethods.GET, baseUrl, "/v1/metrics/symbol/listing", "application/json")
      .withApiKey(apiKey, "Authorization", HEADER)
      .withCredentials(bearerToken).withQueryParam("metric_id", metricId)
      .withQueryParam("exchange_id", exchangeId)
      .withQueryParam("symbol_id", symbolId)
      .withSuccessResponse[Seq[ListingItem]](200)
      



}

