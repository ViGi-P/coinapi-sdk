# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1IndexdefInputDataIndexDefinitionIdAllGet**](IndexesApi.md#v1indexdefinputdataindexdefinitionidallget) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**V1IndexdefInputDataIndexDefinitionIdGet**](IndexesApi.md#v1indexdefinputdataindexdefinitionidget) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |
| [**V1IndexdefMultiassetGet**](IndexesApi.md#v1indexdefmultiassetget) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**V1IndexdefMultiassetIndexIdGet**](IndexesApi.md#v1indexdefmultiassetindexidget) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |
| [**V1IndexesGet**](IndexesApi.md#v1indexesget) | **GET** /v1/indexes | List indexes |
| [**V1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidcurrentsnapshotget) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| [**V1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#v1indexesindexdefinitionidhistorysnapshotget) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| [**V1IndexesIndexIdCurrentGet**](IndexesApi.md#v1indexesindexidcurrentget) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| [**V1IndexesIndexIdHistoryGet**](IndexesApi.md#v1indexesindexidhistoryget) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| [**V1IndexesIndexIdTimeseriesGet**](IndexesApi.md#v1indexesindexidtimeseriesget) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |

<a id="v1indexdefinputdataindexdefinitionidallget"></a>
# **V1IndexdefInputDataIndexDefinitionIdAllGet**
> List&lt;IndexesIndexDefinitionInputData&gt; V1IndexdefInputDataIndexDefinitionIdAllGet (string indexDefinitionId)

Returns all data inputs for a specific index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |

### Return type

[**List&lt;IndexesIndexDefinitionInputData&gt;**](IndexesIndexDefinitionInputData.md)

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
> List&lt;IndexesIndexDefinitionSnapshotEntry&gt; V1IndexdefInputDataIndexDefinitionIdGet (string indexDefinitionId, DateTime time = null, bool enabledOnly = null, bool pendingOnly = null, string filterAssetId = null, bool withStatusInfo = null)

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

[**List&lt;IndexesIndexDefinitionSnapshotEntry&gt;**](IndexesIndexDefinitionSnapshotEntry.md)

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

<a id="v1indexdefmultiassetget"></a>
# **V1IndexdefMultiassetGet**
> List&lt;IndexesIndexMultiAssetWeight&gt; V1IndexdefMultiassetGet ()

Get all multi-asset weights


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;IndexesIndexMultiAssetWeight&gt;**](IndexesIndexMultiAssetWeight.md)

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
> List&lt;IndexesIndexMultiAssetWeight&gt; V1IndexdefMultiassetIndexIdGet (string indexId)

Get multi-asset weights for specific index


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |

### Return type

[**List&lt;IndexesIndexMultiAssetWeight&gt;**](IndexesIndexMultiAssetWeight.md)

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
> List&lt;IndexesIndexIdentifier&gt; V1IndexesGet ()

List indexes


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;IndexesIndexIdentifier&gt;**](IndexesIndexIdentifier.md)

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
> List&lt;IndexesIndexDefinitionSnapshotEntry&gt; V1IndexesIndexDefinitionIdCurrentSnapshotGet (string indexDefinitionId)

Current Index Values for index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |

### Return type

[**List&lt;IndexesIndexDefinitionSnapshotEntry&gt;**](IndexesIndexDefinitionSnapshotEntry.md)

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
> List&lt;IndexesIndexDefinitionSnapshotEntry&gt; V1IndexesIndexDefinitionIdHistorySnapshotGet (string indexDefinitionId, DateTime time = null)

Historical Index Values for index definition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexDefinitionId** | **string** |  |  |
| **time** | **DateTime** |  | [optional]  |

### Return type

[**List&lt;IndexesIndexDefinitionSnapshotEntry&gt;**](IndexesIndexDefinitionSnapshotEntry.md)

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
> IndexesIndexValue V1IndexesIndexIdCurrentGet (string indexId)

Current Index Value


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |

### Return type

[**IndexesIndexValue**](IndexesIndexValue.md)

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
> List&lt;IndexesIndexValue&gt; V1IndexesIndexIdHistoryGet (string indexId, DateTime timeStart = null, DateTime timeEnd = null, int limit = null)

Historical Index Value w/Composition


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **indexId** | **string** |  |  |
| **timeStart** | **DateTime** |  | [optional]  |
| **timeEnd** | **DateTime** |  | [optional]  |
| **limit** | **int** |  | [optional] [default to 100] |

### Return type

[**List&lt;IndexesIndexValue&gt;**](IndexesIndexValue.md)

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
> List&lt;IndexesIndexTimeseriesItem&gt; V1IndexesIndexIdTimeseriesGet (string indexId, string periodId, string timeStart, string timeEnd, int limit = null)

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

[**List&lt;IndexesIndexTimeseriesItem&gt;**](IndexesIndexTimeseriesItem.md)

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

