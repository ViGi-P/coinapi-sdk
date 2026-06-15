# openapi.api.MetadataApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1ExchangesGet**](MetadataApi.md#v1exchangesget) | **GET** /v1/exchanges | List of exchanges
[**v1SymbolsExchangeIdGet**](MetadataApi.md#v1symbolsexchangeidget) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange


# **v1ExchangesGet**
> List<FinFeedAPIExchangeModel> v1ExchangesGet()

List of exchanges

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

final api_instance = MetadataApi();

try {
    final result = api_instance.v1ExchangesGet();
    print(result);
} catch (e) {
    print('Exception when calling MetadataApi->v1ExchangesGet: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<FinFeedAPIExchangeModel>**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1SymbolsExchangeIdGet**
> List<FinFeedAPISymbolModel> v1SymbolsExchangeIdGet(exchangeId, filterSymbolId, limit, page)

List of symbols for the exchange

Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).

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

final api_instance = MetadataApi();
final exchangeId = exchangeId_example; // String | The ID of the exchange (from the Metadata -> Exchanges)
final filterSymbolId = filterSymbolId_example; // String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
final limit = 56; // int | Maximum number of symbols to return (1-10000, default 100)
final page = 56; // int | Page number (1-based, default 1)

try {
    final result = api_instance.v1SymbolsExchangeIdGet(exchangeId, filterSymbolId, limit, page);
    print(result);
} catch (e) {
    print('Exception when calling MetadataApi->v1SymbolsExchangeIdGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| The ID of the exchange (from the Metadata -> Exchanges) | 
 **filterSymbolId** | **String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`) | [optional] 
 **limit** | **int**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **page** | **int**| Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**List<FinFeedAPISymbolModel>**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

