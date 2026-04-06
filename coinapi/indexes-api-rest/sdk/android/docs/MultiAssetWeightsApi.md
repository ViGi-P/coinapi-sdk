# MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index



## v1IndexdefMultiassetGet

> List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetGet()

Get all multi-asset weights

### Example

```java
// Import classes:
//import org.openapitools.client.api.MultiAssetWeightsApi;

MultiAssetWeightsApi apiInstance = new MultiAssetWeightsApi();
try {
    List<ModelsIndexMultiAssetWeight> result = apiInstance.v1IndexdefMultiassetGet();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetGet");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexdefMultiassetIndexIdGet

> List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetIndexIdGet(indexId)

Get multi-asset weights for specific index

### Example

```java
// Import classes:
//import org.openapitools.client.api.MultiAssetWeightsApi;

MultiAssetWeightsApi apiInstance = new MultiAssetWeightsApi();
String indexId = null; // String | 
try {
    List<ModelsIndexMultiAssetWeight> result = apiInstance.v1IndexdefMultiassetIndexIdGet(indexId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | [default to null]

### Return type

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

