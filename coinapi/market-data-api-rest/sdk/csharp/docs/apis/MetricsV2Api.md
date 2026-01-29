# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**MarketdataListMetricsV2AssetHistory**](MetricsV2Api.md#marketdatalistmetricsv2assethistory) | **GET** /v2/metrics/asset/history | Historical metrics for the asset |
| [**MarketdataListMetricsV2AssetListing**](MetricsV2Api.md#marketdatalistmetricsv2assetlisting) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset |
| [**MarketdataListMetricsV2ChainHistory**](MetricsV2Api.md#marketdatalistmetricsv2chainhistory) | **GET** /v2/metrics/chain/history | Historical metrics for the chain |
| [**MarketdataListMetricsV2ChainListing**](MetricsV2Api.md#marketdatalistmetricsv2chainlisting) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain |
| [**MarketdataListMetricsV2ExchangeHistory**](MetricsV2Api.md#marketdatalistmetricsv2exchangehistory) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange |
| [**MarketdataListMetricsV2ExchangeListing**](MetricsV2Api.md#marketdatalistmetricsv2exchangelisting) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange |
| [**MarketdataListMetricsV2Listing**](MetricsV2Api.md#marketdatalistmetricsv2listing) | **GET** /v2/metrics/listing | Listing of all supported metrics |

<a id="marketdatalistmetricsv2assethistory"></a>
# **MarketdataListMetricsV2AssetHistory**
> List&lt;Object&gt; MarketdataListMetricsV2AssetHistory (string metricId, string assetId, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for the asset

Get asset metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **assetId** | **string** | Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) |  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List<Object>**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid asset_id. |  -  |
| **500** | Internal server error. |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="marketdatalistmetricsv2assetlisting"></a>
# **MarketdataListMetricsV2AssetListing**
> List&lt;V1MetricInfo&gt; MarketdataListMetricsV2AssetListing (string assetId)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **assetId** | **string** | Asset identifier (e.g., USDC, USDT) |  |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

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

<a id="marketdatalistmetricsv2chainhistory"></a>
# **MarketdataListMetricsV2ChainHistory**
> List&lt;Object&gt; MarketdataListMetricsV2ChainHistory (string metricId, string chainId, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for the chain

Get chain metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **chainId** | **string** | Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) |  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List<Object>**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid chain_id. |  -  |
| **500** | Internal server error. |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="marketdatalistmetricsv2chainlisting"></a>
# **MarketdataListMetricsV2ChainListing**
> List&lt;V1MetricInfo&gt; MarketdataListMetricsV2ChainListing (string chainId)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **chainId** | **string** | Chain identifier (e.g., ETHEREUM, ARBITRUM) |  |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

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

<a id="marketdatalistmetricsv2exchangehistory"></a>
# **MarketdataListMetricsV2ExchangeHistory**
> List&lt;Object&gt; MarketdataListMetricsV2ExchangeHistory (string metricId, string exchangeId, DateTime timeStart = null, DateTime timeEnd = null, string timeFormat = null, string periodId = null, int limit = null)

Historical metrics for the exchange

Get exchange metrics history.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **exchangeId** | **string** | Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) |  |
| **timeStart** | **DateTime** | Starting time in ISO 8601 | [optional]  |
| **timeEnd** | **DateTime** | Ending time in ISO 8601 | [optional]  |
| **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List<Object>**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid exchange_id mapping. |  -  |
| **500** | Internal server error. |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="marketdatalistmetricsv2exchangelisting"></a>
# **MarketdataListMetricsV2ExchangeListing**
> List&lt;V1MetricInfo&gt; MarketdataListMetricsV2ExchangeListing (string exchangeId)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) |  |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

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

<a id="marketdatalistmetricsv2listing"></a>
# **MarketdataListMetricsV2Listing**
> List&lt;V1MetricInfo&gt; MarketdataListMetricsV2Listing ()

Listing of all supported metrics

Get all metrics available in the system.


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

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

