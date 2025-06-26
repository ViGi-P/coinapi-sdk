# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.MetricsV1Api

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1MetricsAssetCurrentGet**](MetricsV1Api.md#v1metricsassetcurrentget) | **GET** /v1/metrics/asset/current | Current metrics for given asset |
| [**V1MetricsAssetHistoryGet**](MetricsV1Api.md#v1metricsassethistoryget) | **GET** /v1/metrics/asset/history | Historical metrics for asset |
| [**V1MetricsAssetListingGet**](MetricsV1Api.md#v1metricsassetlistingget) | **GET** /v1/metrics/asset/listing | Listing of all supported metrics for asset |
| [**V1MetricsExchangeCurrentGet**](MetricsV1Api.md#v1metricsexchangecurrentget) | **GET** /v1/metrics/exchange/current | Current metrics for given exchange |
| [**V1MetricsExchangeHistoryGet**](MetricsV1Api.md#v1metricsexchangehistoryget) | **GET** /v1/metrics/exchange/history | Historical metrics for the exchange |
| [**V1MetricsExchangeListingGet**](MetricsV1Api.md#v1metricsexchangelistingget) | **GET** /v1/metrics/exchange/listing | Listing of all supported exchange metrics |
| [**V1MetricsListingGet**](MetricsV1Api.md#v1metricslistingget) | **GET** /v1/metrics/listing | Listing of all supported metrics by CoinAPI |
| [**V1MetricsSymbolCurrentGet**](MetricsV1Api.md#v1metricssymbolcurrentget) | **GET** /v1/metrics/symbol/current | Current metrics for given symbol |
| [**V1MetricsSymbolHistoryGet**](MetricsV1Api.md#v1metricssymbolhistoryget) | **GET** /v1/metrics/symbol/history | Historical metrics for symbol |
| [**V1MetricsSymbolListingGet**](MetricsV1Api.md#v1metricssymbollistingget) | **GET** /v1/metrics/symbol/listing | Listing of all supported metrics for symbol |

<a id="v1metricsassetcurrentget"></a>
# **V1MetricsAssetCurrentGet**
> List&lt;V1GeneralData&gt; V1MetricsAssetCurrentGet (string metricId = null, string assetId = null, string assetIdExternal = null, string exchangeId = null)

Current metrics for given asset

Get current asset metrics.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) | [optional]  |
| **assetId** | **string** | Asset identifier (from the Metadata -&gt; Assets) | [optional]  |
| **assetIdExternal** | **string** | Exchange asset identifier | [optional]  |
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) | [optional]  |

### Return type

[**List&lt;V1GeneralData&gt;**](V1GeneralData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricsassethistoryget"></a>
# **V1MetricsAssetHistoryGet**
> List&lt;V1MetricData&gt; V1MetricsAssetHistoryGet (string metricId, string exchangeId, string assetId = null, string assetIdExternal = null, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for asset

Get asset metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) |  |
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) |  |
| **assetId** | **string** | Asset identifier (from the Metadata -&gt; Assets) | [optional]  |
| **assetIdExternal** | **string** | Exchange asset identifier | [optional]  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1SEC&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;V1MetricData&gt;**](V1MetricData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricsassetlistingget"></a>
# **V1MetricsAssetListingGet**
> List&lt;V1ListingItem&gt; V1MetricsAssetListingGet (string metricId = null, string exchangeId = null, string chainId = null, string networkId = null, string assetId = null, string assetIdExternal = null)

Listing of all supported metrics for asset

Get data metrics for asset.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) | [optional]  |
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) | [optional]  |
| **chainId** | **string** | Chain identifier | [optional]  |
| **networkId** | **string** | Network identifier | [optional]  |
| **assetId** | **string** | Asset identifier (from the Metadata -&gt; Assets) | [optional]  |
| **assetIdExternal** | **string** | The asset external identifier | [optional]  |

### Return type

[**List&lt;V1ListingItem&gt;**](V1ListingItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricsexchangecurrentget"></a>
# **V1MetricsExchangeCurrentGet**
> List&lt;V1GeneralData&gt; V1MetricsExchangeCurrentGet (string exchangeId, string metricId = null)

Current metrics for given exchange

Get current exchange metrics values.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** | The exchange identifier (from the Metadata -&gt; Exchanges) |  |
| **metricId** | **string** | The metric identifier (from the Metrics -&gt; Listing) | [optional]  |

### Return type

[**List&lt;V1GeneralData&gt;**](V1GeneralData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricsexchangehistoryget"></a>
# **V1MetricsExchangeHistoryGet**
> List&lt;V1MetricData&gt; V1MetricsExchangeHistoryGet (string metricId, string exchangeId, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for the exchange

Get exchange metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) |  |
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) |  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1SEC&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;V1MetricData&gt;**](V1MetricData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricsexchangelistingget"></a>
# **V1MetricsExchangeListingGet**
> List&lt;V1ListingItem&gt; V1MetricsExchangeListingGet (string exchangeId, string metricId = null)

Listing of all supported exchange metrics

Get data metrics for exchange.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** | The exchange identifier (from the Metadata -&gt; Exchanges) |  |
| **metricId** | **string** | The metric identifier (from the Metrics -&gt; Listing) | [optional]  |

### Return type

[**List&lt;V1ListingItem&gt;**](V1ListingItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricslistingget"></a>
# **V1MetricsListingGet**
> List&lt;V1Metric&gt; V1MetricsListingGet ()

Listing of all supported metrics by CoinAPI

Get all data metrics.


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;V1Metric&gt;**](V1Metric.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricssymbolcurrentget"></a>
# **V1MetricsSymbolCurrentGet**
> List&lt;V1GeneralData&gt; V1MetricsSymbolCurrentGet (string metricId = null, string symbolId = null, string exchangeId = null)

Current metrics for given symbol

Get current symbol metrics.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) | [optional]  |
| **symbolId** | **string** | Symbol identifier (from the Metadata -&gt; Symbols) | [optional]  |
| **exchangeId** | **string** | Exchange id (from the Metadata -&gt; Exchanges) | [optional]  |

### Return type

[**List&lt;V1GeneralData&gt;**](V1GeneralData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricssymbolhistoryget"></a>
# **V1MetricsSymbolHistoryGet**
> List&lt;V1MetricData&gt; V1MetricsSymbolHistoryGet (string metricId, string symbolId, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for symbol

Get symbol metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) |  |
| **symbolId** | **string** | Symbol identifier (from the Metadata -&gt; Symbols) |  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1SEC&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;V1MetricData&gt;**](V1MetricData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1metricssymbollistingget"></a>
# **V1MetricsSymbolListingGet**
> List&lt;V1ListingItem&gt; V1MetricsSymbolListingGet (string metricId = null, string exchangeId = null, string symbolId = null)

Listing of all supported metrics for symbol

Get data metrics for symbol.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (from the Metrics -&gt; Listing) | [optional]  |
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) | [optional]  |
| **symbolId** | **string** | Symbol identifier (from the Metadata -&gt; Symbols) | [optional]  |

### Return type

[**List&lt;V1ListingItem&gt;**](V1ListingItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

