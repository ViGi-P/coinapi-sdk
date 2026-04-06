# openapi.api.IndexInputDataApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1indexdefinputdataindexdefinitionidallget) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1indexdefinputdataindexdefinitionidget) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **v1IndexdefInputDataIndexDefinitionIdAllGet**
> List<ModelsIndexDefinitionInputData> v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)

Returns all data inputs for a specific index definition

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

final api_instance = IndexInputDataApi();
final indexDefinitionId = indexDefinitionId_example; // String | 

try {
    final result = api_instance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId);
    print(result);
} catch (e) {
    print('Exception when calling IndexInputDataApi->v1IndexdefInputDataIndexDefinitionIdAllGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 

### Return type

[**List<ModelsIndexDefinitionInputData>**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexdefInputDataIndexDefinitionIdGet**
> List<ModelsIndexDefinitionSnapshotEntry> v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)

Returns data inputs for certain index definition and time

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

final api_instance = IndexInputDataApi();
final indexDefinitionId = indexDefinitionId_example; // String | 
final time = 2013-10-20T19:20:30+01:00; // DateTime | 
final enabledOnly = true; // bool | 
final pendingOnly = true; // bool | 
final filterAssetId = filterAssetId_example; // String | 
final withStatusInfo = true; // bool | 

try {
    final result = api_instance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo);
    print(result);
} catch (e) {
    print('Exception when calling IndexInputDataApi->v1IndexdefInputDataIndexDefinitionIdGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 
 **time** | **DateTime**|  | [optional] 
 **enabledOnly** | **bool**|  | [optional] [default to false]
 **pendingOnly** | **bool**|  | [optional] [default to false]
 **filterAssetId** | **String**|  | [optional] 
 **withStatusInfo** | **bool**|  | [optional] [default to false]

### Return type

[**List<ModelsIndexDefinitionSnapshotEntry>**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

