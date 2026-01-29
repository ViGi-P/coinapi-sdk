# MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketdataListMetricsV2AssetHistory**](MetricsV2Api.md#MarketdataListMetricsV2AssetHistory) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**MarketdataListMetricsV2AssetListing**](MetricsV2Api.md#MarketdataListMetricsV2AssetListing) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**MarketdataListMetricsV2ChainHistory**](MetricsV2Api.md#MarketdataListMetricsV2ChainHistory) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**MarketdataListMetricsV2ChainListing**](MetricsV2Api.md#MarketdataListMetricsV2ChainListing) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**MarketdataListMetricsV2ExchangeHistory**](MetricsV2Api.md#MarketdataListMetricsV2ExchangeHistory) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**MarketdataListMetricsV2ExchangeListing**](MetricsV2Api.md#MarketdataListMetricsV2ExchangeListing) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**MarketdataListMetricsV2Listing**](MetricsV2Api.md#MarketdataListMetricsV2Listing) | **GET** /v2/metrics/listing | Listing of all supported metrics


# **MarketdataListMetricsV2AssetHistory**
> array[object] MarketdataListMetricsV2AssetHistory(metric_id, asset_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

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
# result <- api_instance$MarketdataListMetricsV2AssetHistory(var_metric_id, var_asset_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2AssetHistory(var_metric_id, var_asset_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
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

# **MarketdataListMetricsV2AssetListing**
> array[V1MetricInfo] MarketdataListMetricsV2AssetListing(asset_id)

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
# result <- api_instance$MarketdataListMetricsV2AssetListing(var_asset_iddata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2AssetListing(var_asset_id)
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

# **MarketdataListMetricsV2ChainHistory**
> array[object] MarketdataListMetricsV2ChainHistory(metric_id, chain_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

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
# result <- api_instance$MarketdataListMetricsV2ChainHistory(var_metric_id, var_chain_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2ChainHistory(var_metric_id, var_chain_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
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

# **MarketdataListMetricsV2ChainListing**
> array[V1MetricInfo] MarketdataListMetricsV2ChainListing(chain_id)

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
# result <- api_instance$MarketdataListMetricsV2ChainListing(var_chain_iddata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2ChainListing(var_chain_id)
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

# **MarketdataListMetricsV2ExchangeHistory**
> array[object] MarketdataListMetricsV2ExchangeHistory(metric_id, exchange_id, time_start = var.time_start, time_end = var.time_end, time_format = var.time_format, period_id = var.period_id, limit = 100)

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
# result <- api_instance$MarketdataListMetricsV2ExchangeHistory(var_metric_id, var_exchange_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limitdata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2ExchangeHistory(var_metric_id, var_exchange_id, time_start = var_time_start, time_end = var_time_end, time_format = var_time_format, period_id = var_period_id, limit = var_limit)
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

# **MarketdataListMetricsV2ExchangeListing**
> array[V1MetricInfo] MarketdataListMetricsV2ExchangeListing(exchange_id)

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
# result <- api_instance$MarketdataListMetricsV2ExchangeListing(var_exchange_iddata_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2ExchangeListing(var_exchange_id)
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

# **MarketdataListMetricsV2Listing**
> array[V1MetricInfo] MarketdataListMetricsV2Listing()

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
# result <- api_instance$MarketdataListMetricsV2Listing(data_file = "result.txt")
result <- api_instance$MarketdataListMetricsV2Listing()
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

