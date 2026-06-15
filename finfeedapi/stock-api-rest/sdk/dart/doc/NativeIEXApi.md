# openapi.api.NativeIEXApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1NativeIexAdminMessagesSymbolGet**](NativeIEXApi.md#v1nativeiexadminmessagessymbolget) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages
[**v1NativeIexAdminSystemEventGet**](NativeIEXApi.md#v1nativeiexadminsystemeventget) | **GET** /v1/native/iex/admin/system-event | Get System Events
[**v1NativeIexLevel1QuoteSymbolGet**](NativeIEXApi.md#v1nativeiexlevel1quotesymbolget) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes
[**v1NativeIexLevel2PriceLevelUpdateSymbolGet**](NativeIEXApi.md#v1nativeiexlevel2pricelevelupdatesymbolget) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book
[**v1NativeIexLevel3OrderBookSymbolGet**](NativeIEXApi.md#v1nativeiexlevel3orderbooksymbolget) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book
[**v1NativeIexTradeSymbolGet**](NativeIEXApi.md#v1nativeiextradesymbolget) | **GET** /v1/native/iex/trade/{symbol} | Get Trades


# **v1NativeIexAdminMessagesSymbolGet**
> List<ModelsAdminMessageModel> v1NativeIexAdminMessagesSymbolGet(symbol, date, limit)

Get Admin Messages

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final symbol = symbol_example; // String | The symbol identifier
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexAdminMessagesSymbolGet(symbol, date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexAdminMessagesSymbolGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | 
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<ModelsAdminMessageModel>**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1NativeIexAdminSystemEventGet**
> List<IEXSystemEventSystemEventModel> v1NativeIexAdminSystemEventGet(date, limit)

Get System Events

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexAdminSystemEventGet(date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexAdminSystemEventGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<IEXSystemEventSystemEventModel>**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1NativeIexLevel1QuoteSymbolGet**
> List<IEXQuoteUpdateQuoteUpdateModel> v1NativeIexLevel1QuoteSymbolGet(symbol, date, limit)

Get Level-1 Quotes

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final symbol = symbol_example; // String | The symbol identifier
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexLevel1QuoteSymbolGet(symbol, date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexLevel1QuoteSymbolGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | 
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<IEXQuoteUpdateQuoteUpdateModel>**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1NativeIexLevel2PriceLevelUpdateSymbolGet**
> List<IEXPriceLevelUpdatePriceLevelUpdateModel> v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, limit)

Get Level-2 Price Level Book

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final symbol = symbol_example; // String | The symbol identifier
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol, date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexLevel2PriceLevelUpdateSymbolGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | 
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<IEXPriceLevelUpdatePriceLevelUpdateModel>**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1NativeIexLevel3OrderBookSymbolGet**
> List<ModelsOrderBookModel> v1NativeIexLevel3OrderBookSymbolGet(symbol, date, limit)

Get Level-3 Order Book

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final symbol = symbol_example; // String | The symbol identifier
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexLevel3OrderBookSymbolGet(symbol, date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexLevel3OrderBookSymbolGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | 
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<ModelsOrderBookModel>**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1NativeIexTradeSymbolGet**
> List<IEXTradeTradeModel> v1NativeIexTradeSymbolGet(symbol, date, limit)

Get Trades

Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000).

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';
// TODO Configure HTTP Bearer authorization: JWT
// Case 1. Use String Token
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken('YOUR_ACCESS_TOKEN');
// Case 2. Use Function which generate token.
// String yourTokenGeneratorFunction() { ... }
//defaultApiClient.getAuthentication<HttpBearerAuth>('JWT').setAccessToken(yourTokenGeneratorFunction);

final api_instance = NativeIEXApi();
final symbol = symbol_example; // String | The symbol identifier
final date = 2013-10-20T19:20:30+01:00; // DateTime | Date in format YYYY-MM-DD
final limit = 56; // int | Maximum number of records to return (1-10000, default 100)

try {
    final result = api_instance.v1NativeIexTradeSymbolGet(symbol, date, limit);
    print(result);
} catch (e) {
    print('Exception when calling NativeIEXApi->v1NativeIexTradeSymbolGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| The symbol identifier | 
 **date** | **DateTime**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**List<IEXTradeTradeModel>**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

