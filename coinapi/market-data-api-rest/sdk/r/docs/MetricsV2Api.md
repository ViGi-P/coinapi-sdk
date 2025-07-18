# MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V2MetricsAssetHistoryGet**](MetricsV2Api.md#V2MetricsAssetHistoryGet) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**V2MetricsAssetListingGet**](MetricsV2Api.md#V2MetricsAssetListingGet) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**V2MetricsChainHistoryGet**](MetricsV2Api.md#V2MetricsChainHistoryGet) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**V2MetricsChainListingGet**](MetricsV2Api.md#V2MetricsChainListingGet) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**V2MetricsExchangeHistoryGet**](MetricsV2Api.md#V2MetricsExchangeHistoryGet) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**V2MetricsExchangeListingGet**](MetricsV2Api.md#V2MetricsExchangeListingGet) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**V2MetricsListingGet**](MetricsV2Api.md#V2MetricsListingGet) | **GET** /v2/metrics/listing | Listing of all supported metrics


# **V2MetricsAssetHistoryGet**
> array[object] V2MetricsAssetHistoryGet(metric_id, asset_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

Historical metrics for the asset

Get asset metrics history.

### Example
```R
library(openapi)

# Historical metrics for the asset
#
# prepare function argument(s)
var_metric_id <- "metric_id_example" # character | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
var_asset_id <- "asset_id_example" # character | Asset identifier (e.g., `USDC`, `USDT`)
var_time_start <- "time_start_example" # character | Starting time in ISO 8601 (Optional)
var_time_end <- "time_end_example" # character | Ending time in ISO 8601 (Optional)
var_time_format <- "time_format_example" # character | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (Optional)
var_period_id <- "period_id_example" # character | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (Optional)
var_limit <- 100 # integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (Optional)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsAssetHistoryGet(var_metric_id, var_asset_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$V2MetricsAssetHistoryGet(var_metric_id, var_asset_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **character**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **asset_id** | **character**| Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) | 
 **time_start** | **character**| Starting time in ISO 8601 | [optional] 
 **time_end** | **character**| Ending time in ISO 8601 | [optional] 
 **time_format** | **character**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **character**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**array[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid asset_id. |  -  |
| **500** | Internal server error. |  -  |

# **V2MetricsAssetListingGet**
> array[V1MetricInfo] V2MetricsAssetListingGet(asset_id)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

### Example
```R
library(openapi)

# Listing of metrics available for specific asset
#
# prepare function argument(s)
var_asset_id <- "asset_id_example" # character | Asset identifier (e.g., USDC, USDT)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsAssetListingGet(var_asset_iddata_file = "result.txt")
result <- api_instance$V2MetricsAssetListingGet(var_asset_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset_id** | **character**| Asset identifier (e.g., USDC, USDT) | 

### Return type

[**array[V1MetricInfo]**](v1.MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V2MetricsChainHistoryGet**
> array[object] V2MetricsChainHistoryGet(metric_id, chain_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

Historical metrics for the chain

Get chain metrics history.

### Example
```R
library(openapi)

# Historical metrics for the chain
#
# prepare function argument(s)
var_metric_id <- "metric_id_example" # character | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
var_chain_id <- "chain_id_example" # character | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
var_time_start <- "time_start_example" # character | Starting time in ISO 8601 (Optional)
var_time_end <- "time_end_example" # character | Ending time in ISO 8601 (Optional)
var_time_format <- "time_format_example" # character | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (Optional)
var_period_id <- "period_id_example" # character | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (Optional)
var_limit <- 100 # integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (Optional)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsChainHistoryGet(var_metric_id, var_chain_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$V2MetricsChainHistoryGet(var_metric_id, var_chain_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **character**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **chain_id** | **character**| Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) | 
 **time_start** | **character**| Starting time in ISO 8601 | [optional] 
 **time_end** | **character**| Ending time in ISO 8601 | [optional] 
 **time_format** | **character**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **character**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**array[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid chain_id. |  -  |
| **500** | Internal server error. |  -  |

# **V2MetricsChainListingGet**
> array[V1MetricInfo] V2MetricsChainListingGet(chain_id)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

### Example
```R
library(openapi)

# Listing of metrics available for specific chain
#
# prepare function argument(s)
var_chain_id <- "chain_id_example" # character | Chain identifier (e.g., ETHEREUM, ARBITRUM)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsChainListingGet(var_chain_iddata_file = "result.txt")
result <- api_instance$V2MetricsChainListingGet(var_chain_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chain_id** | **character**| Chain identifier (e.g., ETHEREUM, ARBITRUM) | 

### Return type

[**array[V1MetricInfo]**](v1.MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V2MetricsExchangeHistoryGet**
> array[object] V2MetricsExchangeHistoryGet(metric_id, exchange_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

Historical metrics for the exchange

Get exchange metrics history.

### Example
```R
library(openapi)

# Historical metrics for the exchange
#
# prepare function argument(s)
var_metric_id <- "metric_id_example" # character | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
var_exchange_id <- "exchange_id_example" # character | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
var_time_start <- "time_start_example" # character | Starting time in ISO 8601 (Optional)
var_time_end <- "time_end_example" # character | Ending time in ISO 8601 (Optional)
var_time_format <- "time_format_example" # character | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (Optional)
var_period_id <- "period_id_example" # character | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (Optional)
var_limit <- 100 # integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (Optional)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsExchangeHistoryGet(var_metric_id, var_exchange_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$V2MetricsExchangeHistoryGet(var_metric_id, var_exchange_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **character**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **exchange_id** | **character**| Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) | 
 **time_start** | **character**| Starting time in ISO 8601 | [optional] 
 **time_end** | **character**| Ending time in ISO 8601 | [optional] 
 **time_format** | **character**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **character**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**array[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid exchange_id mapping. |  -  |
| **500** | Internal server error. |  -  |

# **V2MetricsExchangeListingGet**
> array[V1MetricInfo] V2MetricsExchangeListingGet(exchange_id)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

### Example
```R
library(openapi)

# Listing of metrics available for specific exchange
#
# prepare function argument(s)
var_exchange_id <- "exchange_id_example" # character | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsExchangeListingGet(var_exchange_iddata_file = "result.txt")
result <- api_instance$V2MetricsExchangeListingGet(var_exchange_id)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **character**| Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) | 

### Return type

[**array[V1MetricInfo]**](v1.MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

# **V2MetricsListingGet**
> array[V1MetricInfo] V2MetricsListingGet()

Listing of all supported metrics

Get all metrics available in the system.

### Example
```R
library(openapi)

# Listing of all supported metrics
#

api_instance <- MetricsV2Api$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V2MetricsListingGet(data_file = "result.txt")
result <- api_instance$V2MetricsListingGet()
dput(result)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**array[V1MetricInfo]**](v1.MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

