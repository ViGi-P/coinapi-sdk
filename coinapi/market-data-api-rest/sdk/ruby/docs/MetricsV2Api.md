# OpenapiClient::MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**marketdata_list_metrics_v2_asset_history**](MetricsV2Api.md#marketdata_list_metrics_v2_asset_history) | **GET** /v2/metrics/asset/history | Historical metrics for the asset |
| [**marketdata_list_metrics_v2_asset_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_asset_listing) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset |
| [**marketdata_list_metrics_v2_chain_history**](MetricsV2Api.md#marketdata_list_metrics_v2_chain_history) | **GET** /v2/metrics/chain/history | Historical metrics for the chain |
| [**marketdata_list_metrics_v2_chain_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_chain_listing) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain |
| [**marketdata_list_metrics_v2_exchange_history**](MetricsV2Api.md#marketdata_list_metrics_v2_exchange_history) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange |
| [**marketdata_list_metrics_v2_exchange_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_exchange_listing) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange |
| [**marketdata_list_metrics_v2_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_listing) | **GET** /v2/metrics/listing | Listing of all supported metrics |


## marketdata_list_metrics_v2_asset_history

> Array&lt;Object&gt; marketdata_list_metrics_v2_asset_history(metric_id, asset_id, opts)

Historical metrics for the asset

Get asset metrics history.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
metric_id = 'metric_id_example' # String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
asset_id = 'asset_id_example' # String | Asset identifier (e.g., `USDC`, `USDT`)
opts = {
  time_start: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Starting time in ISO 8601
  time_end: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Ending time in ISO 8601
  time_format: 'time_format_example', # String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
  period_id: 'period_id_example', # String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
  limit: 56 # Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
}

begin
  # Historical metrics for the asset
  result = api_instance.marketdata_list_metrics_v2_asset_history(metric_id, asset_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_asset_history: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_asset_history_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Array&lt;Object&gt;, Integer, Hash)> marketdata_list_metrics_v2_asset_history_with_http_info(metric_id, asset_id, opts)

```ruby
begin
  # Historical metrics for the asset
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_asset_history_with_http_info(metric_id, asset_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Array&lt;Object&gt;
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_asset_history_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **metric_id** | **String** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **asset_id** | **String** | Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) |  |
| **time_start** | **Time** | Starting time in ISO 8601 | [optional] |
| **time_end** | **Time** | Ending time in ISO 8601 | [optional] |
| **time_format** | **String** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **period_id** | **String** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional][default to 100] |

### Return type

**Array&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_asset_listing

> <Array<V1MetricInfo>> marketdata_list_metrics_v2_asset_listing(asset_id)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
asset_id = 'asset_id_example' # String | Asset identifier (e.g., USDC, USDT)

begin
  # Listing of metrics available for specific asset
  result = api_instance.marketdata_list_metrics_v2_asset_listing(asset_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_asset_listing: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_asset_listing_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<V1MetricInfo>>, Integer, Hash)> marketdata_list_metrics_v2_asset_listing_with_http_info(asset_id)

```ruby
begin
  # Listing of metrics available for specific asset
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_asset_listing_with_http_info(asset_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<V1MetricInfo>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_asset_listing_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **asset_id** | **String** | Asset identifier (e.g., USDC, USDT) |  |

### Return type

[**Array&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_chain_history

> Array&lt;Object&gt; marketdata_list_metrics_v2_chain_history(metric_id, chain_id, opts)

Historical metrics for the chain

Get chain metrics history.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
metric_id = 'metric_id_example' # String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
chain_id = 'chain_id_example' # String | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
opts = {
  time_start: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Starting time in ISO 8601
  time_end: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Ending time in ISO 8601
  time_format: 'time_format_example', # String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
  period_id: 'period_id_example', # String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
  limit: 56 # Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
}

begin
  # Historical metrics for the chain
  result = api_instance.marketdata_list_metrics_v2_chain_history(metric_id, chain_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_chain_history: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_chain_history_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Array&lt;Object&gt;, Integer, Hash)> marketdata_list_metrics_v2_chain_history_with_http_info(metric_id, chain_id, opts)

```ruby
begin
  # Historical metrics for the chain
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_chain_history_with_http_info(metric_id, chain_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Array&lt;Object&gt;
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_chain_history_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **metric_id** | **String** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **chain_id** | **String** | Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) |  |
| **time_start** | **Time** | Starting time in ISO 8601 | [optional] |
| **time_end** | **Time** | Ending time in ISO 8601 | [optional] |
| **time_format** | **String** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **period_id** | **String** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional][default to 100] |

### Return type

**Array&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_chain_listing

> <Array<V1MetricInfo>> marketdata_list_metrics_v2_chain_listing(chain_id)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
chain_id = 'chain_id_example' # String | Chain identifier (e.g., ETHEREUM, ARBITRUM)

begin
  # Listing of metrics available for specific chain
  result = api_instance.marketdata_list_metrics_v2_chain_listing(chain_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_chain_listing: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_chain_listing_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<V1MetricInfo>>, Integer, Hash)> marketdata_list_metrics_v2_chain_listing_with_http_info(chain_id)

```ruby
begin
  # Listing of metrics available for specific chain
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_chain_listing_with_http_info(chain_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<V1MetricInfo>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_chain_listing_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **chain_id** | **String** | Chain identifier (e.g., ETHEREUM, ARBITRUM) |  |

### Return type

[**Array&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_exchange_history

> Array&lt;Object&gt; marketdata_list_metrics_v2_exchange_history(metric_id, exchange_id, opts)

Historical metrics for the exchange

Get exchange metrics history.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
metric_id = 'metric_id_example' # String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
exchange_id = 'exchange_id_example' # String | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
opts = {
  time_start: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Starting time in ISO 8601
  time_end: Time.parse('2013-10-20T19:20:30+01:00'), # Time | Ending time in ISO 8601
  time_format: 'time_format_example', # String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
  period_id: 'period_id_example', # String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
  limit: 56 # Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
}

begin
  # Historical metrics for the exchange
  result = api_instance.marketdata_list_metrics_v2_exchange_history(metric_id, exchange_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_history: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_exchange_history_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(Array&lt;Object&gt;, Integer, Hash)> marketdata_list_metrics_v2_exchange_history_with_http_info(metric_id, exchange_id, opts)

```ruby
begin
  # Historical metrics for the exchange
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_exchange_history_with_http_info(metric_id, exchange_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => Array&lt;Object&gt;
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_history_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **metric_id** | **String** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |  |
| **exchange_id** | **String** | Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) |  |
| **time_start** | **Time** | Starting time in ISO 8601 | [optional] |
| **time_end** | **Time** | Ending time in ISO 8601 | [optional] |
| **time_format** | **String** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **period_id** | **String** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional][default to 100] |

### Return type

**Array&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_exchange_listing

> <Array<V1MetricInfo>> marketdata_list_metrics_v2_exchange_listing(exchange_id)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new
exchange_id = 'exchange_id_example' # String | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)

begin
  # Listing of metrics available for specific exchange
  result = api_instance.marketdata_list_metrics_v2_exchange_listing(exchange_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_listing: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_exchange_listing_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<V1MetricInfo>>, Integer, Hash)> marketdata_list_metrics_v2_exchange_listing_with_http_info(exchange_id)

```ruby
begin
  # Listing of metrics available for specific exchange
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_exchange_listing_with_http_info(exchange_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<V1MetricInfo>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_listing_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **exchange_id** | **String** | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) |  |

### Return type

[**Array&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## marketdata_list_metrics_v2_listing

> <Array<V1MetricInfo>> marketdata_list_metrics_v2_listing

Listing of all supported metrics

Get all metrics available in the system.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::MetricsV2Api.new

begin
  # Listing of all supported metrics
  result = api_instance.marketdata_list_metrics_v2_listing
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_listing: #{e}"
end
```

#### Using the marketdata_list_metrics_v2_listing_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<V1MetricInfo>>, Integer, Hash)> marketdata_list_metrics_v2_listing_with_http_info

```ruby
begin
  # Listing of all supported metrics
  data, status_code, headers = api_instance.marketdata_list_metrics_v2_listing_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<V1MetricInfo>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MetricsV2Api->marketdata_list_metrics_v2_listing_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

