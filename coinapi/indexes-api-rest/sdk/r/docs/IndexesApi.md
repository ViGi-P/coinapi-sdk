# IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1IndexesGet**](IndexesApi.md#V1IndexesGet) | **GET** /v1/indexes | List indexes
[**V1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#V1IndexesIndexDefinitionIdCurrentSnapshotGet) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition
[**V1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#V1IndexesIndexDefinitionIdHistorySnapshotGet) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition
[**V1IndexesIndexIdCurrentGet**](IndexesApi.md#V1IndexesIndexIdCurrentGet) | **GET** /v1/indexes/{index_id}/current | Current Index Value
[**V1IndexesIndexIdHistoryGet**](IndexesApi.md#V1IndexesIndexIdHistoryGet) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition
[**V1IndexesIndexIdTimeseriesGet**](IndexesApi.md#V1IndexesIndexIdTimeseriesGet) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value


# **V1IndexesGet**
> array[ModelsIndexIdentifier] V1IndexesGet()

List indexes

### Example
```R
library(openapi)

# List indexes
#

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesGet(data_file = "result.txt")
result <- api_instance$V1IndexesGet()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[ModelsIndexIdentifier]**](Models.IndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V1IndexesIndexDefinitionIdCurrentSnapshotGet**
> array[ModelsIndexDefinitionSnapshotEntry] V1IndexesIndexDefinitionIdCurrentSnapshotGet(index_definition_id)

Current Index Values for index definition

### Example
```R
library(openapi)

# Current Index Values for index definition
#
# prepare function argument(s)
var_index_definition_id <- "index_definition_id_example" # character | 

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesIndexDefinitionIdCurrentSnapshotGet(var_index_definition_iddata_file = "result.txt")
result <- api_instance$V1IndexesIndexDefinitionIdCurrentSnapshotGet(var_index_definition_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **character**|  | 

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

# **V1IndexesIndexDefinitionIdHistorySnapshotGet**
> array[ModelsIndexDefinitionSnapshotEntry] V1IndexesIndexDefinitionIdHistorySnapshotGet(index_definition_id, time = var.time)

Historical Index Values for index definition

### Example
```R
library(openapi)

# Historical Index Values for index definition
#
# prepare function argument(s)
var_index_definition_id <- "index_definition_id_example" # character | 
var_time <- "time_example" # character |  (Optional)

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesIndexDefinitionIdHistorySnapshotGet(var_index_definition_id, time = var_timedata_file = "result.txt")
result <- api_instance$V1IndexesIndexDefinitionIdHistorySnapshotGet(var_index_definition_id, time = var_time)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **character**|  | 
 **time** | **character**|  | [optional] 

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

# **V1IndexesIndexIdCurrentGet**
> ModelsIndexValue V1IndexesIndexIdCurrentGet(index_id)

Current Index Value

### Example
```R
library(openapi)

# Current Index Value
#
# prepare function argument(s)
var_index_id <- "index_id_example" # character | 

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesIndexIdCurrentGet(var_index_iddata_file = "result.txt")
result <- api_instance$V1IndexesIndexIdCurrentGet(var_index_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **character**|  | 

### Return type

[**ModelsIndexValue**](Models.IndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V1IndexesIndexIdHistoryGet**
> array[ModelsIndexValue] V1IndexesIndexIdHistoryGet(index_id, time_start = var.time_start, time_end = var.time_end, limit = 100)

Historical Index Value w/Composition

### Example
```R
library(openapi)

# Historical Index Value w/Composition
#
# prepare function argument(s)
var_index_id <- "index_id_example" # character | 
var_time_start <- "time_start_example" # character |  (Optional)
var_time_end <- "time_end_example" # character |  (Optional)
var_limit <- 100 # integer |  (Optional)

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesIndexIdHistoryGet(var_index_id, time_start = var_time_start, time_end = var_time_end, limit = var_limitdata_file = "result.txt")
result <- api_instance$V1IndexesIndexIdHistoryGet(var_index_id, time_start = var_time_start, time_end = var_time_end, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **character**|  | 
 **time_start** | **character**|  | [optional] 
 **time_end** | **character**|  | [optional] 
 **limit** | **integer**|  | [optional] [default to 100]

### Return type

[**array[ModelsIndexValue]**](Models.IndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V1IndexesIndexIdTimeseriesGet**
> array[ModelsIndexTimeseriesItem] V1IndexesIndexIdTimeseriesGet(index_id, period_id, time_start, time_end, limit = 100)

Timeseries Index Value

### Example
```R
library(openapi)

# Timeseries Index Value
#
# prepare function argument(s)
var_index_id <- "index_id_example" # character | 
var_period_id <- "period_id_example" # character | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
var_time_start <- "time_start_example" # character | Timeseries starting time in ISO 8601
var_time_end <- "time_end_example" # character | Timeseries ending time in ISO 8601
var_limit <- 100 # integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (Optional)

api_instance <- IndexesApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexesIndexIdTimeseriesGet(var_index_id, var_period_id, var_time_start, var_time_end, limit = var_limitdata_file = "result.txt")
result <- api_instance$V1IndexesIndexIdTimeseriesGet(var_index_id, var_period_id, var_time_start, var_time_end, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **character**|  | 
 **period_id** | **character**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | 
 **time_start** | **character**| Timeseries starting time in ISO 8601 | 
 **time_end** | **character**| Timeseries ending time in ISO 8601 | 
 **limit** | **integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**array[ModelsIndexTimeseriesItem]**](Models.IndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

