# MetadataApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1ExchangesGet**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
[**v1SymbolsExchangeIdGet**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange



## v1ExchangesGet

List of exchanges

### Example

```bash
 v1ExchangesGet
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[FinFeedAPIExchangeModel]**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1SymbolsExchangeIdGet

List of symbols for the exchange

Results are paginated. Use 'limit' and 'page' to control page size and offset
(default limit: 100, max: 10000, default page: 1).

### Example

```bash
 v1SymbolsExchangeIdGet exchange_id=value  filter_symbol_id=value  limit=value  page=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **string** | The ID of the exchange (from the Metadata -> Exchanges) | [default to null]
 **filterSymbolId** | **string** | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. 'TSLA' or 'TSLA,NVDA') | [optional] [default to null]
 **limit** | **integer** | Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **page** | **integer** | Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**array[FinFeedAPISymbolModel]**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

