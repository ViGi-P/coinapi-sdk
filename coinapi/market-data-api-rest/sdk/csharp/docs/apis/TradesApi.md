# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.TradesApi

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1TradesLatestGet**](TradesApi.md#v1tradeslatestget) | **GET** /v1/trades/latest | Latest data |
| [**V1TradesSymbolIdHistoryGet**](TradesApi.md#v1tradessymbolidhistoryget) | **GET** /v1/trades/{symbol_id}/history | Historical data |
| [**V1TradesSymbolIdLatestGet**](TradesApi.md#v1tradessymbolidlatestget) | **GET** /v1/trades/{symbol_id}/latest | Latest data by symbol_id |

<a id="v1tradeslatestget"></a>
# **V1TradesLatestGet**
> List&lt;V1Trade&gt; V1TradesLatestGet (string filterSymbolId = null, bool includeId = null, int limit = null)

Latest data

Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **filterSymbolId** | **string** | Comma or semicolon delimited parts of symbol identifier used to filter response. (optional) | [optional]  |
| **includeId** | **bool** | Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

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

<a id="v1tradessymbolidhistoryget"></a>
# **V1TradesSymbolIdHistoryGet**
> List&lt;V1Trade&gt; V1TradesSymbolIdHistoryGet (string symbolId, string date = null, string timeStart = null, string timeEnd = null, int limit = null, bool includeId = null)

Historical data

Get history transactions from specific symbol, returned in time ascending order.              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbolId** | **string** | Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols) |  |
| **date** | **string** | Date in ISO 8601, returned data is for the whole given day (required if &#39;time_start&#39; is not provided) | [optional]  |
| **timeStart** | **string** | Starting time in ISO 8601 (supports hourly precision, e.g., 2026-01-16T11:00:00Z) | [optional]  |
| **timeEnd** | **string** | Timeseries ending time in ISO 8601 (optional, supports cross-day queries) | [optional]  |
| **limit** | **int** | Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |
| **includeId** | **bool** | Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

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

<a id="v1tradessymbolidlatestget"></a>
# **V1TradesSymbolIdLatestGet**
> List&lt;V1Trade&gt; V1TradesSymbolIdLatestGet (string symbolId, int limit = null, bool includeId = null)

Latest data by symbol_id

Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbolId** | **string** | Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols) |  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |
| **includeId** | **bool** | Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

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

