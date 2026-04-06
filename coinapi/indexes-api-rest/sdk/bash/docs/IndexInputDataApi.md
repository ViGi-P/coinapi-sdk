# IndexInputDataApi

All URIs are relative to **

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time



## v1IndexdefInputDataIndexDefinitionIdAllGet

Returns all data inputs for a specific index definition

### Example

```bash
 v1IndexdefInputDataIndexDefinitionIdAllGet index_definition_id=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **string** |  | [default to null]

### Return type

[**array[ModelsIndexDefinitionInputData]**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## v1IndexdefInputDataIndexDefinitionIdGet

Returns data inputs for certain index definition and time

### Example

```bash
 v1IndexdefInputDataIndexDefinitionIdGet index_definition_id=value  time=value  enabled_only=value  pending_only=value  filter_asset_id=value  with_status_info=value
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **string** |  | [default to null]
 **_time** | **string** |  | [optional] [default to null]
 **enabledOnly** | **boolean** |  | [optional] [default to false]
 **pendingOnly** | **boolean** |  | [optional] [default to false]
 **filterAssetId** | **string** |  | [optional] [default to null]
 **withStatusInfo** | **boolean** |  | [optional] [default to false]

### Return type

[**array[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not Applicable
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

