# MULTIASSETWEIGHTS_API

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexdef_multiasset_get**](MULTIASSETWEIGHTS_API.md#v1_indexdef_multiasset_get) | **Get** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1_indexdef_multiasset_index_id_get**](MULTIASSETWEIGHTS_API.md#v1_indexdef_multiasset_index_id_get) | **Get** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


# **v1_indexdef_multiasset_get**
> v1_indexdef_multiasset_get : detachable LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]


Get all multi-asset weights


### Parameters
This endpoint does not need any parameter.

### Return type

[**LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]**](Models.IndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexdef_multiasset_index_id_get**
> v1_indexdef_multiasset_index_id_get (index_id: STRING_32 ): detachable LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]


Get multi-asset weights for specific index


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **STRING_32**|  | [default to null]

### Return type

[**LIST [MODELS_INDEX_MULTI_ASSET_WEIGHT]**](Models.IndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

