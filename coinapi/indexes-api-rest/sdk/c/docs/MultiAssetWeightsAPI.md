# MultiAssetWeightsAPI

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MultiAssetWeightsAPI_v1IndexdefMultiassetGet**](MultiAssetWeightsAPI.md#MultiAssetWeightsAPI_v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**MultiAssetWeightsAPI_v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsAPI.md#MultiAssetWeightsAPI_v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


# **MultiAssetWeightsAPI_v1IndexdefMultiassetGet**
```c
// Get all multi-asset weights
//
list_t* MultiAssetWeightsAPI_v1IndexdefMultiassetGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](models_index_multi_asset_weight.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MultiAssetWeightsAPI_v1IndexdefMultiassetIndexIdGet**
```c
// Get multi-asset weights for specific index
//
list_t* MultiAssetWeightsAPI_v1IndexdefMultiassetIndexIdGet(apiClient_t *apiClient, char *index_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**index_id** | **char \*** |  | 

### Return type

[list_t](models_index_multi_asset_weight.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

