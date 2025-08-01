# openapi.api.MetricsV2Api

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v2MetricsAssetHistoryGet**](MetricsV2Api.md#v2metricsassethistoryget) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**v2MetricsAssetListingGet**](MetricsV2Api.md#v2metricsassetlistingget) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**v2MetricsChainHistoryGet**](MetricsV2Api.md#v2metricschainhistoryget) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**v2MetricsChainListingGet**](MetricsV2Api.md#v2metricschainlistingget) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**v2MetricsExchangeHistoryGet**](MetricsV2Api.md#v2metricsexchangehistoryget) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**v2MetricsExchangeListingGet**](MetricsV2Api.md#v2metricsexchangelistingget) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**v2MetricsListingGet**](MetricsV2Api.md#v2metricslistingget) | **GET** /v2/metrics/listing | Listing of all supported metrics


# **v2MetricsAssetHistoryGet**
> BuiltList<JsonObject> v2MetricsAssetHistoryGet(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the asset

Get asset metrics history.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String metricId = metricId_example; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
final String assetId = assetId_example; // String | Asset identifier (e.g., `USDC`, `USDT`)
final DateTime timeStart = 2013-10-20T19:20:30+01:00; // DateTime | Starting time in ISO 8601
final DateTime timeEnd = 2013-10-20T19:20:30+01:00; // DateTime | Ending time in ISO 8601
final String timeFormat = timeFormat_example; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
final String periodId = periodId_example; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
final int limit = 56; // int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

try {
    final response = api.v2MetricsAssetHistoryGet(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsAssetHistoryGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`) | 
 **assetId** | **String**| Asset identifier (e.g., `USDC`, `USDT`) | 
 **timeStart** | **DateTime**| Starting time in ISO 8601 | [optional] 
 **timeEnd** | **DateTime**| Ending time in ISO 8601 | [optional] 
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **periodId** | **String**| Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**BuiltList&lt;JsonObject&gt;**](JsonObject.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsAssetListingGet**
> BuiltList<V1MetricInfo> v2MetricsAssetListingGet(assetId)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String assetId = assetId_example; // String | Asset identifier (e.g., USDC, USDT)

try {
    final response = api.v2MetricsAssetListingGet(assetId);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsAssetListingGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **assetId** | **String**| Asset identifier (e.g., USDC, USDT) | 

### Return type

[**BuiltList&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsChainHistoryGet**
> BuiltList<JsonObject> v2MetricsChainHistoryGet(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the chain

Get chain metrics history.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String metricId = metricId_example; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
final String chainId = chainId_example; // String | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
final DateTime timeStart = 2013-10-20T19:20:30+01:00; // DateTime | Starting time in ISO 8601
final DateTime timeEnd = 2013-10-20T19:20:30+01:00; // DateTime | Ending time in ISO 8601
final String timeFormat = timeFormat_example; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
final String periodId = periodId_example; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
final int limit = 56; // int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

try {
    final response = api.v2MetricsChainHistoryGet(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsChainHistoryGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`) | 
 **chainId** | **String**| Chain identifier (e.g., `Ethereum`, `Arbitrum`) | 
 **timeStart** | **DateTime**| Starting time in ISO 8601 | [optional] 
 **timeEnd** | **DateTime**| Ending time in ISO 8601 | [optional] 
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **periodId** | **String**| Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**BuiltList&lt;JsonObject&gt;**](JsonObject.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsChainListingGet**
> BuiltList<V1MetricInfo> v2MetricsChainListingGet(chainId)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String chainId = chainId_example; // String | Chain identifier (e.g., ETHEREUM, ARBITRUM)

try {
    final response = api.v2MetricsChainListingGet(chainId);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsChainListingGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chainId** | **String**| Chain identifier (e.g., ETHEREUM, ARBITRUM) | 

### Return type

[**BuiltList&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsExchangeHistoryGet**
> BuiltList<JsonObject> v2MetricsExchangeHistoryGet(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the exchange

Get exchange metrics history.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String metricId = metricId_example; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
final String exchangeId = exchangeId_example; // String | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
final DateTime timeStart = 2013-10-20T19:20:30+01:00; // DateTime | Starting time in ISO 8601
final DateTime timeEnd = 2013-10-20T19:20:30+01:00; // DateTime | Ending time in ISO 8601
final String timeFormat = timeFormat_example; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
final String periodId = periodId_example; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
final int limit = 56; // int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

try {
    final response = api.v2MetricsExchangeHistoryGet(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsExchangeHistoryGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`) | 
 **exchangeId** | **String**| Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`) | 
 **timeStart** | **DateTime**| Starting time in ISO 8601 | [optional] 
 **timeEnd** | **DateTime**| Ending time in ISO 8601 | [optional] 
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **periodId** | **String**| Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**BuiltList&lt;JsonObject&gt;**](JsonObject.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsExchangeListingGet**
> BuiltList<V1MetricInfo> v2MetricsExchangeListingGet(exchangeId)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();
final String exchangeId = exchangeId_example; // String | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)

try {
    final response = api.v2MetricsExchangeListingGet(exchangeId);
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsExchangeListingGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) | 

### Return type

[**BuiltList&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v2MetricsListingGet**
> BuiltList<V1MetricInfo> v2MetricsListingGet()

Listing of all supported metrics

Get all metrics available in the system.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMetricsV2Api();

try {
    final response = api.v2MetricsListingGet();
    print(response);
} catch on DioException (e) {
    print('Exception when calling MetricsV2Api->v2MetricsListingGet: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuiltList&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

