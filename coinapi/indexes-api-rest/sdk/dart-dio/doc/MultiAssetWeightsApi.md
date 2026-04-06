# openapi.api.MultiAssetWeightsApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1indexdefmultiassetget) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1indexdefmultiassetindexidget) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


# **v1IndexdefMultiassetGet**
> BuiltList<ModelsIndexMultiAssetWeight> v1IndexdefMultiassetGet()

Get all multi-asset weights

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMultiAssetWeightsApi();

try {
    final response = api.v1IndexdefMultiassetGet();
    print(response);
} on DioException catch (e) {
    print('Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetGet: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BuiltList&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexdefMultiassetIndexIdGet**
> BuiltList<ModelsIndexMultiAssetWeight> v1IndexdefMultiassetIndexIdGet(indexId)

Get multi-asset weights for specific index

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure API key authorization: APIKey
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKey = 'YOUR_API_KEY';
// uncomment below to setup prefix (e.g. Bearer) for API key, if needed
//defaultApiClient.getAuthentication<ApiKeyAuth>('APIKey').apiKeyPrefix = 'Bearer';

final api = Openapi().getMultiAssetWeightsApi();
final String indexId = indexId_example; // String | 

try {
    final response = api.v1IndexdefMultiassetIndexIdGet(indexId);
    print(response);
} on DioException catch (e) {
    print('Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetIndexIdGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 

### Return type

[**BuiltList&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

