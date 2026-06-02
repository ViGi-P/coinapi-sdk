# NativeIEXApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1NativeIexAdminMessagesSymbolGet**](NativeIEXApi.md#v1NativeIexAdminMessagesSymbolGet) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages
[**v1NativeIexAdminSystemEventGet**](NativeIEXApi.md#v1NativeIexAdminSystemEventGet) | **GET** /v1/native/iex/admin/system-event | Get System Events
[**v1NativeIexLevel1QuoteSymbolGet**](NativeIEXApi.md#v1NativeIexLevel1QuoteSymbolGet) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes
[**v1NativeIexLevel2PriceLevelUpdateSymbolGet**](NativeIEXApi.md#v1NativeIexLevel2PriceLevelUpdateSymbolGet) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book
[**v1NativeIexLevel3OrderBookSymbolGet**](NativeIEXApi.md#v1NativeIexLevel3OrderBookSymbolGet) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book
[**v1NativeIexTradeSymbolGet**](NativeIEXApi.md#v1NativeIexTradeSymbolGet) | **GET** /v1/native/iex/trade/{symbol} | Get Trades



## v1NativeIexAdminMessagesSymbolGet

Get Admin Messages

Streaming endpoint. Use 'limit' to cap the number of records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexAdminMessagesSymbolGet symbol=value  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string** | The symbol identifier | [default to null]
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[ModelsAdminMessageModel]**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1NativeIexAdminSystemEventGet

Get System Events

Streaming endpoint. Use 'limit' to cap the number of records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexAdminSystemEventGet  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[IEXSystemEventSystemEventModel]**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1NativeIexLevel1QuoteSymbolGet

Get Level-1 Quotes

Streaming endpoint. Use 'limit' to cap the number of records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexLevel1QuoteSymbolGet symbol=value  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string** | The symbol identifier | [default to null]
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[IEXQuoteUpdateQuoteUpdateModel]**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1NativeIexLevel2PriceLevelUpdateSymbolGet

Get Level-2 Price Level Book

Streaming endpoint. Use 'limit' to cap the number of records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexLevel2PriceLevelUpdateSymbolGet symbol=value  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string** | The symbol identifier | [default to null]
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[IEXPriceLevelUpdatePriceLevelUpdateModel]**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1NativeIexLevel3OrderBookSymbolGet

Get Level-3 Order Book

Streaming endpoint. Use 'limit' to cap the number of records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexLevel3OrderBookSymbolGet symbol=value  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string** | The symbol identifier | [default to null]
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[ModelsOrderBookModel]**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1NativeIexTradeSymbolGet

Get Trades

Streaming endpoint. Use 'limit' to cap the number of trade records returned (default 100, max 10000).

### Example

```bash
 v1NativeIexTradeSymbolGet symbol=value  date=value  limit=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string** | The symbol identifier | [default to null]
 **date** | **string** | Date in format YYYY-MM-DD | [default to null]
 **limit** | **integer** | Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**array[IEXTradeTradeModel]**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

