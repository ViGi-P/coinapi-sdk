# INDEXINPUTDATA_API

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Feature | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexdef_input_data_index_definition_id_all_get**](INDEXINPUTDATA_API.md#v1_indexdef_input_data_index_definition_id_all_get) | **Get** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1_indexdef_input_data_index_definition_id_get**](INDEXINPUTDATA_API.md#v1_indexdef_input_data_index_definition_id_get) | **Get** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **v1_indexdef_input_data_index_definition_id_all_get**
> v1_indexdef_input_data_index_definition_id_all_get (index_definition_id: STRING_32 ): detachable LIST [MODELS_INDEX_DEFINITION_INPUT_DATA]


Returns all data inputs for a specific index definition


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **STRING_32**|  | [default to null]

### Return type

[**LIST [MODELS_INDEX_DEFINITION_INPUT_DATA]**](Models.IndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexdef_input_data_index_definition_id_get**
> v1_indexdef_input_data_index_definition_id_get (index_definition_id: STRING_32 ; time:  detachable DATE_TIME ; enabled_only:  detachable BOOLEAN ; pending_only:  detachable BOOLEAN ; filter_asset_id:  detachable STRING_32 ; with_status_info:  detachable BOOLEAN ): detachable LIST [MODELS_INDEX_DEFINITION_SNAPSHOT_ENTRY]


Returns data inputs for certain index definition and time


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **STRING_32**|  | [default to null]
 **time** | **DATE_TIME**|  | [optional] [default to null]
 **enabled_only** | **BOOLEAN**|  | [optional] [default to false]
 **pending_only** | **BOOLEAN**|  | [optional] [default to false]
 **filter_asset_id** | **STRING_32**|  | [optional] [default to null]
 **with_status_info** | **BOOLEAN**|  | [optional] [default to false]

### Return type

[**LIST [MODELS_INDEX_DEFINITION_SNAPSHOT_ENTRY]**](Models.IndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

