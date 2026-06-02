# FinFeedApiStockRestApi.NativeIEXApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1NativeIexAdminMessagesSymbolGet**](NativeIEXApi.md#v1NativeIexAdminMessagesSymbolGet) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages
[**v1NativeIexAdminSystemEventGet**](NativeIEXApi.md#v1NativeIexAdminSystemEventGet) | **GET** /v1/native/iex/admin/system-event | Get System Events
[**v1NativeIexLevel1QuoteSymbolGet**](NativeIEXApi.md#v1NativeIexLevel1QuoteSymbolGet) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes
[**v1NativeIexLevel2PriceLevelUpdateSymbolGet**](NativeIEXApi.md#v1NativeIexLevel2PriceLevelUpdateSymbolGet) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book
[**v1NativeIexLevel3OrderBookSymbolGet**](NativeIEXApi.md#v1NativeIexLevel3OrderBookSymbolGet) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book
[**v1NativeIexTradeSymbolGet**](NativeIEXApi.md#v1NativeIexTradeSymbolGet) | **GET** /v1/native/iex/trade/{symbol} | Get Trades



## v1NativeIexAdminMessagesSymbolGet

> [ModelsAdminMessageModel] v1NativeIexAdminMessagesSymbolGet(symbol, date, opts)

Get Admin Messages

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let symbol = "symbol_example"; // String | The symbol identifier
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexAdminMessagesSymbolGet(symbol, date, opts, (error, data, response) => {
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
 **symbol** | **String**| The symbol identifier | 
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[ModelsAdminMessageModel]**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexAdminSystemEventGet

> [IEXSystemEventSystemEventModel] v1NativeIexAdminSystemEventGet(date, opts)

Get System Events

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexAdminSystemEventGet(date, opts, (error, data, response) => {
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
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[IEXSystemEventSystemEventModel]**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel1QuoteSymbolGet

> [IEXQuoteUpdateQuoteUpdateModel] v1NativeIexLevel1QuoteSymbolGet(symbol, date, opts)

Get Level-1 Quotes

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let symbol = "symbol_example"; // String | The symbol identifier
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexLevel1QuoteSymbolGet(symbol, date, opts, (error, data, response) => {
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
 **symbol** | **String**| The symbol identifier | 
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[IEXQuoteUpdateQuoteUpdateModel]**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel2PriceLevelUpdateSymbolGet

> [IEXPriceLevelUpdatePriceLevelUpdateModel] v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, opts)

Get Level-2 Price Level Book

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let symbol = "symbol_example"; // String | The symbol identifier
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, opts, (error, data, response) => {
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
 **symbol** | **String**| The symbol identifier | 
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[IEXPriceLevelUpdatePriceLevelUpdateModel]**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel3OrderBookSymbolGet

> [ModelsOrderBookModel] v1NativeIexLevel3OrderBookSymbolGet(symbol, date, opts)

Get Level-3 Order Book

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let symbol = "symbol_example"; // String | The symbol identifier
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexLevel3OrderBookSymbolGet(symbol, date, opts, (error, data, response) => {
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
 **symbol** | **String**| The symbol identifier | 
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[ModelsOrderBookModel]**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexTradeSymbolGet

> [IEXTradeTradeModel] v1NativeIexTradeSymbolGet(symbol, date, opts)

Get Trades

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of trade records returned (default 100, max 10000).

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

let apiInstance = new FinFeedApiStockRestApi.NativeIEXApi();
let symbol = "symbol_example"; // String | The symbol identifier
let date = new Date("2013-10-20T19:20:30+01:00"); // Date | Date in format YYYY-MM-DD
let opts = {
  'limit': 100 // Number | Maximum number of records to return (1-10000, default 100)
};
apiInstance.v1NativeIexTradeSymbolGet(symbol, date, opts, (error, data, response) => {
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
 **symbol** | **String**| The symbol identifier | 
 **date** | **Date**| Date in format YYYY-MM-DD | 
 **limit** | **Number**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**[IEXTradeTradeModel]**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

