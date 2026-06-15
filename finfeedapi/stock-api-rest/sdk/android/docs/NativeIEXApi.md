# NativeIEXApi

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

> List&lt;ModelsAdminMessageModel&gt; v1NativeIexAdminMessagesSymbolGet(symbol, date, limit)

Get Admin Messages

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
String symbol = null; // String | The symbol identifier
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<ModelsAdminMessageModel> result = apiInstance.v1NativeIexAdminMessagesSymbolGet(symbol, date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexAdminMessagesSymbolGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | [default to null]
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;ModelsAdminMessageModel&gt;**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexAdminSystemEventGet

> List&lt;IEXSystemEventSystemEventModel&gt; v1NativeIexAdminSystemEventGet(date, limit)

Get System Events

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<IEXSystemEventSystemEventModel> result = apiInstance.v1NativeIexAdminSystemEventGet(date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexAdminSystemEventGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;IEXSystemEventSystemEventModel&gt;**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel1QuoteSymbolGet

> List&lt;IEXQuoteUpdateQuoteUpdateModel&gt; v1NativeIexLevel1QuoteSymbolGet(symbol, date, limit)

Get Level-1 Quotes

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
String symbol = null; // String | The symbol identifier
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<IEXQuoteUpdateQuoteUpdateModel> result = apiInstance.v1NativeIexLevel1QuoteSymbolGet(symbol, date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexLevel1QuoteSymbolGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | [default to null]
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;IEXQuoteUpdateQuoteUpdateModel&gt;**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel2PriceLevelUpdateSymbolGet

> List&lt;IEXPriceLevelUpdatePriceLevelUpdateModel&gt; v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, limit)

Get Level-2 Price Level Book

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
String symbol = null; // String | The symbol identifier
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<IEXPriceLevelUpdatePriceLevelUpdateModel> result = apiInstance.v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexLevel2PriceLevelUpdateSymbolGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | [default to null]
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;IEXPriceLevelUpdatePriceLevelUpdateModel&gt;**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexLevel3OrderBookSymbolGet

> List&lt;ModelsOrderBookModel&gt; v1NativeIexLevel3OrderBookSymbolGet(symbol, date, limit)

Get Level-3 Order Book

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
String symbol = null; // String | The symbol identifier
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<ModelsOrderBookModel> result = apiInstance.v1NativeIexLevel3OrderBookSymbolGet(symbol, date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexLevel3OrderBookSymbolGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | [default to null]
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;ModelsOrderBookModel&gt;**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1NativeIexTradeSymbolGet

> List&lt;IEXTradeTradeModel&gt; v1NativeIexTradeSymbolGet(symbol, date, limit)

Get Trades

Streaming endpoint. Use &#x60;limit&#x60; to cap the number of trade records returned (default 100, max 10000).

### Example

```java
// Import classes:
//import org.openapitools.client.api.NativeIEXApi;

NativeIEXApi apiInstance = new NativeIEXApi();
String symbol = null; // String | The symbol identifier
Date date = null; // Date | Date in format YYYY-MM-DD
Integer limit = 100; // Integer | Maximum number of records to return (1-10000, default 100)
try {
    List<IEXTradeTradeModel> result = apiInstance.v1NativeIexTradeSymbolGet(symbol, date, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling NativeIEXApi#v1NativeIexTradeSymbolGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | [default to null]
 **date** | **Date**| Date in format YYYY-MM-DD | [default to null]
 **limit** | **Integer**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List&lt;IEXTradeTradeModel&gt;**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

