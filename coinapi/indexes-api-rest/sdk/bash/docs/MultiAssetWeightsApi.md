# MultiAssetWeightsApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index



## v1IndexdefMultiassetGet

Get all multi-asset weights

### Example

```bash
 v1IndexdefMultiassetGet
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**array[ModelsIndexMultiAssetWeight]**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1IndexdefMultiassetIndexIdGet

Get multi-asset weights for specific index

### Example

```bash
 v1IndexdefMultiassetIndexIdGet index_id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **string** |  | [default to null]

### Return type

[**array[ModelsIndexMultiAssetWeight]**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

