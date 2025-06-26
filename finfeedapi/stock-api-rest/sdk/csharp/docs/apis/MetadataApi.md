# APIBricks.FinFeedAPI.STOCKAPI.REST.V1.Api.MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1ExchangesGet**](MetadataApi.md#v1exchangesget) | **GET** /v1/exchanges | List of exchanges |
| [**V1SymbolsExchangeIdGet**](MetadataApi.md#v1symbolsexchangeidget) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange |

<a id="v1exchangesget"></a>
# **V1ExchangesGet**
> List&lt;FinFeedAPIExchangeModel&gt; V1ExchangesGet ()

List of exchanges


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;FinFeedAPIExchangeModel&gt;**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1symbolsexchangeidget"></a>
# **V1SymbolsExchangeIdGet**
> List&lt;FinFeedAPISymbolModel&gt; V1SymbolsExchangeIdGet (string exchangeId)

List of symbols for the exchange


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** |  |  |

### Return type

[**List&lt;FinFeedAPISymbolModel&gt;**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

