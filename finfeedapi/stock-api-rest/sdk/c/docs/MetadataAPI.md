# MetadataAPI

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MetadataAPI_v1ExchangesGet**](MetadataAPI.md#MetadataAPI_v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
[**MetadataAPI_v1SymbolsExchangeIdGet**](MetadataAPI.md#MetadataAPI_v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange


# **MetadataAPI_v1ExchangesGet**
```c
// List of exchanges
//
list_t* MetadataAPI_v1ExchangesGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](fin_feed_api_exchange_model.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MetadataAPI_v1SymbolsExchangeIdGet**
```c
// List of symbols for the exchange
//
// Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).
//
list_t* MetadataAPI_v1SymbolsExchangeIdGet(apiClient_t *apiClient, char *exchange_id, char *filter_symbol_id, int *limit, int *page);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**exchange_id** | **char \*** | The ID of the exchange (from the Metadata -&gt; Exchanges) | 
**filter_symbol_id** | **char \*** | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] 
**limit** | **int \*** | Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
**page** | **int \*** | Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[list_t](fin_feed_api_symbol_model.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

