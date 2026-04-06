# IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#V1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**V1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#V1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **V1IndexdefInputDataIndexDefinitionIdAllGet**
> array[ModelsIndexDefinitionInputData] V1IndexdefInputDataIndexDefinitionIdAllGet(index_definition_id)

Returns all data inputs for a specific index definition

### Example
```R
library(openapi)

# Returns all data inputs for a specific index definition
#
# prepare function argument(s)
var_index_definition_id <- "index_definition_id_example" # character | 

api_instance <- IndexInputDataApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexdefInputDataIndexDefinitionIdAllGet(var_index_definition_iddata_file = "result.txt")
result <- api_instance$V1IndexdefInputDataIndexDefinitionIdAllGet(var_index_definition_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **character**|  | 

### Return type

[**array[ModelsIndexDefinitionInputData]**](Models.IndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V1IndexdefInputDataIndexDefinitionIdGet**
> array[ModelsIndexDefinitionSnapshotEntry] V1IndexdefInputDataIndexDefinitionIdGet(index_definition_id, time = var.time, enabled_only = FALSE, pending_only = FALSE, filter_asset_id = var.filter_asset_id, with_status_info = FALSE)

Returns data inputs for certain index definition and time

### Example
```R
library(openapi)

# Returns data inputs for certain index definition and time
#
# prepare function argument(s)
var_index_definition_id <- "index_definition_id_example" # character | 
var_time <- "time_example" # character |  (Optional)
var_enabled_only <- FALSE # character |  (Optional)
var_pending_only <- FALSE # character |  (Optional)
var_filter_asset_id <- "filter_asset_id_example" # character |  (Optional)
var_with_status_info <- FALSE # character |  (Optional)

api_instance <- IndexInputDataApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexdefInputDataIndexDefinitionIdGet(var_index_definition_id, time = var_time, enabled_only = var_enabled_only, pending_only = var_pending_only, filter_asset_id = var_filter_asset_id, with_status_info = var_with_status_infodata_file = "result.txt")
result <- api_instance$V1IndexdefInputDataIndexDefinitionIdGet(var_index_definition_id, time = var_time, enabled_only = var_enabled_only, pending_only = var_pending_only, filter_asset_id = var_filter_asset_id, with_status_info = var_with_status_info)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **character**|  | 
 **time** | **character**|  | [optional] 
 **enabled_only** | **character**|  | [optional] [default to FALSE]
 **pending_only** | **character**|  | [optional] [default to FALSE]
 **filter_asset_id** | **character**|  | [optional] 
 **with_status_info** | **character**|  | [optional] [default to FALSE]

### Return type

[**array[ModelsIndexDefinitionSnapshotEntry]**](Models.IndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

