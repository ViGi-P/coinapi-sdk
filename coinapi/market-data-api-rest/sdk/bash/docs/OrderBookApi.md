# OrderBookApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1OrderbooksSymbolIdCurrentGet**](OrderBookApi.md#v1OrderbooksSymbolIdCurrentGet) | **GET** /v1/orderbooks/{symbol_id}/current | Get current order book
[**v1OrderbooksSymbolIdDepthCurrentGet**](OrderBookApi.md#v1OrderbooksSymbolIdDepthCurrentGet) | **GET** /v1/orderbooks/{symbol_id}/depth/current | Current depth of the order book
[**v1OrderbooksSymbolIdHistoryGet**](OrderBookApi.md#v1OrderbooksSymbolIdHistoryGet) | **GET** /v1/orderbooks/{symbol_id}/history | Historical data



## v1OrderbooksSymbolIdCurrentGet

Get current order book

Retrieves the current order book for the specified symbol.

### Example

```bash
 v1OrderbooksSymbolIdCurrentGet symbol_id=value  limit_levels=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbolId** | **string** | The symbol ID (from the Metadata -> Symbols) | [default to null]
 **limitLevels** | **integer** | The maximum number of levels to include in the response. | [optional] [default to null]

### Return type

[**V1OrderBookBase**](V1OrderBookBase.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1OrderbooksSymbolIdDepthCurrentGet

Current depth of the order book

Retrieves the current depth of the order book for the specified symbol.

### Example

```bash
 v1OrderbooksSymbolIdDepthCurrentGet symbol_id=value  limit_levels=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbolId** | **string** | The symbol ID (from the Metadata -> Symbols) | [default to null]
 **limitLevels** | **integer** | The maximum number of levels to include in the response. | [optional] [default to null]

### Return type

[**V1OrderBookDepth**](V1OrderBookDepth.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1OrderbooksSymbolIdHistoryGet

Historical data

Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.
            
:::info
The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels.
:::
            
This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records.
Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.
            
:::tip
For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'.
:::

### Example

```bash
 v1OrderbooksSymbolIdHistoryGet symbol_id=value  date=value  time_start=value  time_end=value  limit=value  limit_levels=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbolId** | **string** | Symbol identifier for requested timeseries (from the Metadata -> Symbols) | [default to null]
 **date** | **string** | Date in ISO 8601, returned data is for the whole given day (required if 'time_start' is not provided) | [optional] [default to null]
 **timeStart** | **string** | Starting time in ISO 8601 (supports hourly precision, e.g., 2026-01-16T11:00:00Z) | [optional] [default to null]
 **timeEnd** | **string** | Timeseries ending time in ISO 8601 (optional, supports cross-day queries) | [optional] [default to null]
 **limit** | **integer** | Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]
 **limitLevels** | **integer** | Maximum amount of levels from each side of the book to include in response (optional) | [optional] [default to null]

### Return type

[**array[V1OrderBook]**](V1OrderBook.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

