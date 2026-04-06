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
> List<ModelsIndexMultiAssetWeight> v1IndexdefMultiassetGet()

Get all multi-asset weights

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

final api_instance = MultiAssetWeightsApi();

try {
    final result = api_instance.v1IndexdefMultiassetGet();
    print(result);
} catch (e) {
    print('Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetGet: $e\n');
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List<ModelsIndexMultiAssetWeight>**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1IndexdefMultiassetIndexIdGet**
> List<ModelsIndexMultiAssetWeight> v1IndexdefMultiassetIndexIdGet(indexId)

Get multi-asset weights for specific index

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

final api_instance = MultiAssetWeightsApi();
final indexId = indexId_example; // String | 

try {
    final result = api_instance.v1IndexdefMultiassetIndexIdGet(indexId);
    print(result);
} catch (e) {
    print('Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetIndexIdGet: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 

### Return type

[**List<ModelsIndexMultiAssetWeight>**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

