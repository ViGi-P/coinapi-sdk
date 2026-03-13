# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1IndexdefMultiassetGet**](IndexesApi.md#v1indexdefmultiassetget) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**V1IndexdefMultiassetIndexIdGet**](IndexesApi.md#v1indexdefmultiassetindexidget) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |
| [**V1IndexesGet**](IndexesApi.md#v1indexesget) | **GET** /v1/indexes | List indexes |
| [**V1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidcurrentsnapshotget) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| [**V1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidhistorysnapshotget) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| [**V1IndexesIndexIdCurrentGet**](IndexesApi.md#v1indexesindexidcurrentget) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| [**V1IndexesIndexIdHistoryGet**](IndexesApi.md#v1indexesindexidhistoryget) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| [**V1IndexesIndexIdTimeseriesGet**](IndexesApi.md#v1indexesindexidtimeseriesget) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |

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

<a id="v1indexesget"></a>
# **V1IndexesGet**
> List&lt;ModelsIndexIdentifier&gt; V1IndexesGet ()

List indexes


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;ModelsIndexIdentifier&gt;**](ModelsIndexIdentifier.md)

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

<a id="v1indexesindexdefinitionidcurrentsnapshotget"></a>
# **V1IndexesIndexDefinitionIdCurrentSnapshotGet**
> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; V1IndexesIndexDefinitionIdCurrentSnapshotGet (string indexDefinitionId)

Current Index Values for index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |

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

<a id="v1indexesindexdefinitionidhistorysnapshotget"></a>
# **V1IndexesIndexDefinitionIdHistorySnapshotGet**
> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; V1IndexesIndexDefinitionIdHistorySnapshotGet (string indexDefinitionId, DateTime time = null)

Historical Index Values for index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |
| **time** | **DateTime** |  | [optional]  |

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

<a id="v1indexesindexidcurrentget"></a>
# **V1IndexesIndexIdCurrentGet**
> ModelsIndexValue V1IndexesIndexIdCurrentGet (string indexId)

Current Index Value


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

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

<a id="v1indexesindexidhistoryget"></a>
# **V1IndexesIndexIdHistoryGet**
> List&lt;ModelsIndexValue&gt; V1IndexesIndexIdHistoryGet (string indexId, DateTime timeStart = null, DateTime timeEnd = null, int limit = null)

Historical Index Value w/Composition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |
| **timeStart** | **DateTime** |  | [optional]  |
| **timeEnd** | **DateTime** |  | [optional]  |
| **limit** | **int** |  | [optional] [default to 100] |

### Return type

[**List&lt;ModelsIndexValue&gt;**](ModelsIndexValue.md)

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

<a id="v1indexesindexidtimeseriesget"></a>
# **V1IndexesIndexIdTimeseriesGet**
> List&lt;ModelsIndexTimeseriesItem&gt; V1IndexesIndexIdTimeseriesGet (string indexId, string periodId, string timeStart, string timeEnd, int limit = null)

Timeseries Index Value


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |
| **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) |  |
| **timeStart** | **string** | Timeseries starting time in ISO 8601 |  |
| **timeEnd** | **string** | Timeseries ending time in ISO 8601 |  |
| **limit** | **int** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;ModelsIndexTimeseriesItem&gt;**](ModelsIndexTimeseriesItem.md)

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

