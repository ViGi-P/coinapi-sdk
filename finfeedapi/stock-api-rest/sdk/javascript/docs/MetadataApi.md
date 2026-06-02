# FinFeedApiStockRestApi.MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1ExchangesGet**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
[**v1SymbolsExchangeIdGet**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange



## v1ExchangesGet

> [FinFeedAPIExchangeModel] v1ExchangesGet()

List of exchanges

### Example

```javascript
import FinFeedApiStockRestApi from 'fin_feed_api_stock_rest_api';
let defaultClient = FinFeedApiStockRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new FinFeedApiStockRestApi.MetadataApi();
apiInstance.v1ExchangesGet((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[FinFeedAPIExchangeModel]**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json


## v1SymbolsExchangeIdGet

> [FinFeedAPISymbolModel] v1SymbolsExchangeIdGet(exchangeId, opts)

List of symbols for the exchange

Results are paginated. Use &#x60;limit&#x60; and &#x60;page&#x60; to control page size and offset (default limit: 100, max: 10000, default page: 1).

### Example

```javascript
import FinFeedApiStockRestApi from 'fin_feed_api_stock_rest_api';
let defaultClient = FinFeedApiStockRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new FinFeedApiStockRestApi.MetadataApi();
let exchangeId = "exchangeId_example"; // String | The ID of the exchange (from the Metadata -> Exchanges)
let opts = {
  'filterSymbolId': "filterSymbolId_example", // String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
  'limit': 100, // Number | Maximum number of symbols to return (1-10000, default 100)
  'page': 1 // Number | Page number (1-based, default 1)
};
apiInstance.v1SymbolsExchangeIdGet(exchangeId, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| The ID of the exchange (from the Metadata -&gt; Exchanges) | 
 **filterSymbolId** | **String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] 
 **limit** | **Number**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **page** | **Number**| Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**[FinFeedAPISymbolModel]**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json

