# MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#V1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**V1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#V1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


# **V1IndexdefMultiassetGet**
> array[ModelsIndexMultiAssetWeight] V1IndexdefMultiassetGet()

Get all multi-asset weights

### Example
```R
library(openapi)

# Get all multi-asset weights
#

api_instance <- MultiAssetWeightsApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexdefMultiassetGet(data_file = "result.txt")
result <- api_instance$V1IndexdefMultiassetGet()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[ModelsIndexMultiAssetWeight]**](Models.IndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V1IndexdefMultiassetIndexIdGet**
> array[ModelsIndexMultiAssetWeight] V1IndexdefMultiassetIndexIdGet(index_id)

Get multi-asset weights for specific index

### Example
```R
library(openapi)

# Get multi-asset weights for specific index
#
# prepare function argument(s)
var_index_id <- "index_id_example" # character | 

api_instance <- MultiAssetWeightsApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1IndexdefMultiassetIndexIdGet(var_index_iddata_file = "result.txt")
result <- api_instance$V1IndexdefMultiassetIndexIdGet(var_index_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **character**|  | 

### Return type

[**array[ModelsIndexMultiAssetWeight]**](Models.IndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

