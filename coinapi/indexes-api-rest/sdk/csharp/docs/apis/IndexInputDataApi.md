# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1indexdefinputdataindexdefinitionidallget) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**V1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1indexdefinputdataindexdefinitionidget) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |

<a id="v1indexdefinputdataindexdefinitionidallget"></a>
# **V1IndexdefInputDataIndexDefinitionIdAllGet**
> List&lt;ModelsIndexDefinitionInputData&gt; V1IndexdefInputDataIndexDefinitionIdAllGet (string indexDefinitionId)

Returns all data inputs for a specific index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |

### Return type

[**List&lt;ModelsIndexDefinitionInputData&gt;**](ModelsIndexDefinitionInputData.md)

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

<a id="v1indexdefinputdataindexdefinitionidget"></a>
# **V1IndexdefInputDataIndexDefinitionIdGet**
> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; V1IndexdefInputDataIndexDefinitionIdGet (string indexDefinitionId, DateTime time = null, bool enabledOnly = null, bool pendingOnly = null, string filterAssetId = null, bool withStatusInfo = null)

Returns data inputs for certain index definition and time


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |
| **time** | **DateTime** |  | [optional]  |
| **enabledOnly** | **bool** |  | [optional] [default to false] |
| **pendingOnly** | **bool** |  | [optional] [default to false] |
| **filterAssetId** | **string** |  | [optional]  |
| **withStatusInfo** | **bool** |  | [optional] [default to false] |

### Return type

[**List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

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

