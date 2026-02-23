# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.OrderBookL3Api

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1Orderbooks3CurrentGet**](OrderBookL3Api.md#v1orderbooks3currentget) | **GET** /v1/orderbooks3/current | Current order books |
| [**V1Orderbooks3SymbolIdCurrentGet**](OrderBookL3Api.md#v1orderbooks3symbolidcurrentget) | **GET** /v1/orderbooks3/{symbol_id}/current | Current order book by symbol_id |

<a id="v1orderbooks3currentget"></a>
# **V1Orderbooks3CurrentGet**
> List&lt;V1OrderBookBase&gt; V1Orderbooks3CurrentGet (string filterSymbolId = null, int limitLevels = null)

Current order books


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **filterSymbolId** | **string** | Comma or semicolon delimited parts of symbol identifier used to filter the response. | [optional]  |
| **limitLevels** | **int** | The maximum number of levels to include in the response. | [optional]  |

### Return type

[**List&lt;V1OrderBookBase&gt;**](V1OrderBookBase.md)

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

<a id="v1orderbooks3symbolidcurrentget"></a>
# **V1Orderbooks3SymbolIdCurrentGet**
> V1OrderBookBase V1Orderbooks3SymbolIdCurrentGet (string symbolId, int limitLevels = null)

Current order book by symbol_id

Retrieves the current L3 order book for the specified symbol. L3 order books include individual order IDs for each price level.


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

