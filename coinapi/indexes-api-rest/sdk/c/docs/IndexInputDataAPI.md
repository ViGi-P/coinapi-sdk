# IndexInputDataAPI

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataAPI.md#IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataAPI.md#IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet**
```c
// Returns all data inputs for a specific index definition
//
list_t* IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet(apiClient_t *apiClient, char *index_definition_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**index_definition_id** | **char \*** |  | 

### Return type

[list_t](models_index_definition_input_data.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet**
```c
// Returns data inputs for certain index definition and time
//
list_t* IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet(apiClient_t *apiClient, char *index_definition_id, char time, int *enabled_only, int *pending_only, char *filter_asset_id, int *with_status_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**index_definition_id** | **char \*** |  | 
**time** | **char** |  | [optional] 
**enabled_only** | **int \*** |  | [optional] [default to false]
**pending_only** | **int \*** |  | [optional] [default to false]
**filter_asset_id** | **char \*** |  | [optional] 
**with_status_info** | **int \*** |  | [optional] [default to false]

### Return type

[list_t](models_index_definition_snapshot_entry.md) *


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

