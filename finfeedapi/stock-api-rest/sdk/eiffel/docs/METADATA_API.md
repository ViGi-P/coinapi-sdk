# METADATA_API

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**v1_exchanges_get**](METADATA_API.md#v1_exchanges_get) | **Get** /v1/exchanges | List of exchanges
[**v1_symbols_exchange_id_get**](METADATA_API.md#v1_symbols_exchange_id_get) | **Get** /v1/symbols/{exchange_id} | List of symbols for the exchange


# **v1_exchanges_get**
> v1_exchanges_get : detachable LIST [FIN_FEED_API_EXCHANGE_MODEL]


List of exchanges


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [FIN_FEED_API_EXCHANGE_MODEL]**](FinFeedAPI.ExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_symbols_exchange_id_get**
> v1_symbols_exchange_id_get (exchange_id: STRING_32 ; filter_symbol_id:  detachable STRING_32 ; limit:  detachable INTEGER_32 ; page:  detachable INTEGER_32 ): detachable LIST [FIN_FEED_API_SYMBOL_MODEL]


List of symbols for the exchange

Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **STRING_32**| The ID of the exchange (from the Metadata -&gt; Exchanges) | [default to null]
 **filter_symbol_id** | **STRING_32**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] [default to null]
 **limit** | **INTEGER_32**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **page** | **INTEGER_32**| Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**LIST [FIN_FEED_API_SYMBOL_MODEL]**](FinFeedAPI.SymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

