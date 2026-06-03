# MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1ExchangesGet**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
[**v1SymbolsExchangeIdGet**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange



## v1ExchangesGet

> List&lt;FinFeedAPIExchangeModel&gt; v1ExchangesGet()

List of exchanges

### Example

```java
// Import classes:
//import org.openapitools.client.api.MetadataApi;

MetadataApi apiInstance = new MetadataApi();
try {
    List<FinFeedAPIExchangeModel> result = apiInstance.v1ExchangesGet();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling MetadataApi#v1ExchangesGet");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**List&lt;FinFeedAPIExchangeModel&gt;**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json


## v1SymbolsExchangeIdGet

> List&lt;FinFeedAPISymbolModel&gt; v1SymbolsExchangeIdGet(exchangeId, filterSymbolId)

List of symbols for the exchange

### Example

```java
// Import classes:
//import org.openapitools.client.api.MetadataApi;

MetadataApi apiInstance = new MetadataApi();
String exchangeId = null; // String | The ID of the exchange (from the Metadata -> Exchanges)
String filterSymbolId = null; // String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
try {
    List<FinFeedAPISymbolModel> result = apiInstance.v1SymbolsExchangeIdGet(exchangeId, filterSymbolId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling MetadataApi#v1SymbolsExchangeIdGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| The ID of the exchange (from the Metadata -&gt; Exchanges) | [default to null]
 **filterSymbolId** | **String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] [default to null]

### Return type

[**List&lt;FinFeedAPISymbolModel&gt;**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json

