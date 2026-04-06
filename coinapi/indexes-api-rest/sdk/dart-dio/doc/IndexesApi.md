# openapi.api.IndexesApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexesGet**](IndexesApi.md#v1indexesget) | **GET** /v1/indexes | List indexes
[**v1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidcurrentsnapshotget) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition
[**v1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidhistorysnapshotget) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition
[**v1IndexesIndexIdCurrentGet**](IndexesApi.md#v1indexesindexidcurrentget) | **GET** /v1/indexes/{index_id}/current | Current Index Value
[**v1IndexesIndexIdHistoryGet**](IndexesApi.md#v1indexesindexidhistoryget) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition
[**v1IndexesIndexIdTimeseriesGet**](IndexesApi.md#v1indexesindexidtimeseriesget) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value


# **v1IndexesGet**
> BuiltList<ModelsIndexIdentifier> v1IndexesGet()

List indexes

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();

try {
    final response = api.v1IndexesGet();
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesGet: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuiltList&lt;ModelsIndexIdentifier&gt;**](ModelsIndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexesIndexDefinitionIdCurrentSnapshotGet**
> BuiltList<ModelsIndexDefinitionSnapshotEntry> v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId)

Current Index Values for index definition

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();
final String indexDefinitionId = indexDefinitionId_example; // String | 

try {
    final response = api.v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesIndexDefinitionIdCurrentSnapshotGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 

### Return type

[**BuiltList&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexesIndexDefinitionIdHistorySnapshotGet**
> BuiltList<ModelsIndexDefinitionSnapshotEntry> v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time)

Historical Index Values for index definition

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();
final String indexDefinitionId = indexDefinitionId_example; // String | 
final DateTime time = 2013-10-20T19:20:30+01:00; // DateTime | 

try {
    final response = api.v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time);
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesIndexDefinitionIdHistorySnapshotGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 
 **time** | **DateTime**|  | [optional] 

### Return type

[**BuiltList&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexesIndexIdCurrentGet**
> ModelsIndexValue v1IndexesIndexIdCurrentGet(indexId)

Current Index Value

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();
final String indexId = indexId_example; // String | 

try {
    final response = api.v1IndexesIndexIdCurrentGet(indexId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesIndexIdCurrentGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexesIndexIdHistoryGet**
> BuiltList<ModelsIndexValue> v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit)

Historical Index Value w/Composition

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();
final String indexId = indexId_example; // String | 
final DateTime timeStart = 2013-10-20T19:20:30+01:00; // DateTime | 
final DateTime timeEnd = 2013-10-20T19:20:30+01:00; // DateTime | 
final int limit = 56; // int | 

try {
    final response = api.v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit);
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesIndexIdHistoryGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 
 **timeStart** | **DateTime**|  | [optional] 
 **timeEnd** | **DateTime**|  | [optional] 
 **limit** | **int**|  | [optional] [default to 100]

### Return type

[**BuiltList&lt;ModelsIndexValue&gt;**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexesIndexIdTimeseriesGet**
> BuiltList<ModelsIndexTimeseriesItem> v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit)

Timeseries Index Value

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getIndexesApi();
final String indexId = indexId_example; // String | 
final String periodId = periodId_example; // String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
final String timeStart = timeStart_example; // String | Timeseries starting time in ISO 8601
final String timeEnd = timeEnd_example; // String | Timeseries ending time in ISO 8601
final int limit = 56; // int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

try {
    final response = api.v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit);
    print(response);
} on DioException catch (e) {
    print('Exception when calling IndexesApi->v1IndexesIndexIdTimeseriesGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 
 **periodId** | **String**| Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`) | 
 **timeStart** | **String**| Timeseries starting time in ISO 8601 | 
 **timeEnd** | **String**| Timeseries ending time in ISO 8601 | 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**BuiltList&lt;ModelsIndexTimeseriesItem&gt;**](ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

