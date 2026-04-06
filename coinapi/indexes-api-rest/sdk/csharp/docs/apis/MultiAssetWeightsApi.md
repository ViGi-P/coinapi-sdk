# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1indexdefmultiassetget) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**V1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1indexdefmultiassetindexidget) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |

<a id="v1indexdefmultiassetget"></a>
# **V1IndexdefMultiassetGet**
> List&lt;ModelsIndexMultiAssetWeight&gt; V1IndexdefMultiassetGet ()

Get all multi-asset weights


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1indexdefmultiassetindexidget"></a>
# **V1IndexdefMultiassetIndexIdGet**
> List&lt;ModelsIndexMultiAssetWeight&gt; V1IndexdefMultiassetIndexIdGet (string indexId)

Get multi-asset weights for specific index


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |

### Return type

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

