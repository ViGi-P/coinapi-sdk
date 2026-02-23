# openapi.api.MetricsV2Api

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**marketdataListMetricsV2AssetHistory**](MetricsV2Api.md#marketdatalistmetricsv2assethistory) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**marketdataListMetricsV2AssetListing**](MetricsV2Api.md#marketdatalistmetricsv2assetlisting) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**marketdataListMetricsV2ChainHistory**](MetricsV2Api.md#marketdatalistmetricsv2chainhistory) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**marketdataListMetricsV2ChainListing**](MetricsV2Api.md#marketdatalistmetricsv2chainlisting) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**marketdataListMetricsV2ExchangeHistory**](MetricsV2Api.md#marketdatalistmetricsv2exchangehistory) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**marketdataListMetricsV2ExchangeListing**](MetricsV2Api.md#marketdatalistmetricsv2exchangelisting) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**marketdataListMetricsV2Listing**](MetricsV2Api.md#marketdatalistmetricsv2listing) | **GET** /v2/metrics/listing | Listing of all supported metrics


# **marketdataListMetricsV2AssetHistory**
> BuiltList<JsonObject> marketdataListMetricsV2AssetHistory(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit)

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
    final response = api.marketdataListMetricsV2AssetHistory(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2AssetHistory: $e\n');
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

# **marketdataListMetricsV2AssetListing**
> BuiltList<V1MetricInfo> marketdataListMetricsV2AssetListing(assetId)

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
    final response = api.marketdataListMetricsV2AssetListing(assetId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2AssetListing: $e\n');
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

# **marketdataListMetricsV2ChainHistory**
> BuiltList<JsonObject> marketdataListMetricsV2ChainHistory(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit)

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
    final response = api.marketdataListMetricsV2ChainHistory(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2ChainHistory: $e\n');
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

# **marketdataListMetricsV2ChainListing**
> BuiltList<V1MetricInfo> marketdataListMetricsV2ChainListing(chainId)

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
    final response = api.marketdataListMetricsV2ChainListing(chainId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2ChainListing: $e\n');
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

# **marketdataListMetricsV2ExchangeHistory**
> BuiltList<JsonObject> marketdataListMetricsV2ExchangeHistory(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit)

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
    final response = api.marketdataListMetricsV2ExchangeHistory(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2ExchangeHistory: $e\n');
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

# **marketdataListMetricsV2ExchangeListing**
> BuiltList<V1MetricInfo> marketdataListMetricsV2ExchangeListing(exchangeId)

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
    final response = api.marketdataListMetricsV2ExchangeListing(exchangeId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2ExchangeListing: $e\n');
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

# **marketdataListMetricsV2Listing**
> BuiltList<V1MetricInfo> marketdataListMetricsV2Listing()

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
    final response = api.marketdataListMetricsV2Listing();
    print(response);
} on DioException catch (e) {
    print('Exception when calling MetricsV2Api->marketdataListMetricsV2Listing: $e\n');
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

