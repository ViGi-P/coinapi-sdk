# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.OrderBookApi

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1OrderbooksSymbolIdCurrentGet**](OrderBookApi.md#v1orderbookssymbolidcurrentget) | **GET** /v1/orderbooks/{symbol_id}/current | Get current order book |
| [**V1OrderbooksSymbolIdDepthCurrentGet**](OrderBookApi.md#v1orderbookssymboliddepthcurrentget) | **GET** /v1/orderbooks/{symbol_id}/depth/current | Current depth of the order book |
| [**V1OrderbooksSymbolIdHistoryGet**](OrderBookApi.md#v1orderbookssymbolidhistoryget) | **GET** /v1/orderbooks/{symbol_id}/history | Historical data |

<a id="v1orderbookssymbolidcurrentget"></a>
# **V1OrderbooksSymbolIdCurrentGet**
> V1OrderBookBase V1OrderbooksSymbolIdCurrentGet (string symbolId, int limitLevels = null)

Get current order book

Retrieves the current order book for the specified symbol.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbolId** | **string** | The symbol ID (from the Metadata -&gt; Symbols) |  |
| **limitLevels** | **int** | The maximum number of levels to include in the response. | [optional]  |

### Return type

[**V1OrderBookBase**](V1OrderBookBase.md)

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

<a id="v1orderbookssymboliddepthcurrentget"></a>
# **V1OrderbooksSymbolIdDepthCurrentGet**
> V1OrderBookDepth V1OrderbooksSymbolIdDepthCurrentGet (string symbolId, int limitLevels = null)

Current depth of the order book

Retrieves the current depth of the order book for the specified symbol.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbolId** | **string** | The symbol ID (from the Metadata -&gt; Symbols) |  |
| **limitLevels** | **int** | The maximum number of levels to include in the response. | [optional]  |

### Return type

[**V1OrderBookDepth**](V1OrderBookDepth.md)

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

<a id="v1orderbookssymbolidhistoryget"></a>
# **V1OrderbooksSymbolIdHistoryGet**
> List&lt;V1OrderBook&gt; V1OrderbooksSymbolIdHistoryGet (string symbolId, string date = null, string timeStart = null, string timeEnd = null, int limit = null, int limitLevels = null)

Historical data

Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.              :::info The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels. :::  :::warning The 'time_start' and 'time_end' parameters must be from the same day as this endpoint provides intraday data only for specific day. Please use the 'date' parameter instead for querying data for a specific day without filter. :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbolId** | **string** | Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols) |  |
| **date** | **string** | Date in ISO 8601, returned data is for the whole given day (preferred method, required if &#39;time_start&#39; is not provided) | [optional]  |
| **timeStart** | **string** | Starting time in ISO 8601 (deprecated, use &#39;date&#39; instead) | [optional]  |
| **timeEnd** | **string** | Timeseries ending time in ISO 8601 (deprecated, use &#39;date&#39; instead) | [optional]  |
| **limit** | **int** | Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |
| **limitLevels** | **int** | Maximum amount of levels from each side of the book to include in response (optional) | [optional]  |

### Return type

[**List&lt;V1OrderBook&gt;**](V1OrderBook.md)

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

