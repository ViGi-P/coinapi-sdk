# OpenapiClient::IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**v1_indexes_get**](IndexesApi.md#v1_indexes_get) | **GET** /v1/indexes | List indexes |
| [**v1_indexes_index_definition_id_current_snapshot_get**](IndexesApi.md#v1_indexes_index_definition_id_current_snapshot_get) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| [**v1_indexes_index_definition_id_history_snapshot_get**](IndexesApi.md#v1_indexes_index_definition_id_history_snapshot_get) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| [**v1_indexes_index_id_current_get**](IndexesApi.md#v1_indexes_index_id_current_get) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| [**v1_indexes_index_id_history_get**](IndexesApi.md#v1_indexes_index_id_history_get) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| [**v1_indexes_index_id_timeseries_get**](IndexesApi.md#v1_indexes_index_id_timeseries_get) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |


## v1_indexes_get

> <Array<ModelsIndexIdentifier>> v1_indexes_get

List indexes

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

api_instance = OpenapiClient::IndexesApi.new

begin
  # List indexes
  result = api_instance.v1_indexes_get
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_get: #{e}"
end
```

#### Using the v1_indexes_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexIdentifier>>, Integer, Hash)> v1_indexes_get_with_http_info

```ruby
begin
  # List indexes
  data, status_code, headers = api_instance.v1_indexes_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexIdentifier>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;ModelsIndexIdentifier&gt;**](ModelsIndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexes_index_definition_id_current_snapshot_get

> <Array<ModelsIndexDefinitionSnapshotEntry>> v1_indexes_index_definition_id_current_snapshot_get(index_definition_id)

Current Index Values for index definition

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

api_instance = OpenapiClient::IndexesApi.new
index_definition_id = 'index_definition_id_example' # String | 

begin
  # Current Index Values for index definition
  result = api_instance.v1_indexes_index_definition_id_current_snapshot_get(index_definition_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_definition_id_current_snapshot_get: #{e}"
end
```

#### Using the v1_indexes_index_definition_id_current_snapshot_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexDefinitionSnapshotEntry>>, Integer, Hash)> v1_indexes_index_definition_id_current_snapshot_get_with_http_info(index_definition_id)

```ruby
begin
  # Current Index Values for index definition
  data, status_code, headers = api_instance.v1_indexes_index_definition_id_current_snapshot_get_with_http_info(index_definition_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexDefinitionSnapshotEntry>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_definition_id_current_snapshot_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_definition_id** | **String** |  |  |

### Return type

[**Array&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexes_index_definition_id_history_snapshot_get

> <Array<ModelsIndexDefinitionSnapshotEntry>> v1_indexes_index_definition_id_history_snapshot_get(index_definition_id, opts)

Historical Index Values for index definition

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

api_instance = OpenapiClient::IndexesApi.new
index_definition_id = 'index_definition_id_example' # String | 
opts = {
  time: Time.parse('2013-10-20T19:20:30+01:00') # Time | 
}

begin
  # Historical Index Values for index definition
  result = api_instance.v1_indexes_index_definition_id_history_snapshot_get(index_definition_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_definition_id_history_snapshot_get: #{e}"
end
```

#### Using the v1_indexes_index_definition_id_history_snapshot_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexDefinitionSnapshotEntry>>, Integer, Hash)> v1_indexes_index_definition_id_history_snapshot_get_with_http_info(index_definition_id, opts)

```ruby
begin
  # Historical Index Values for index definition
  data, status_code, headers = api_instance.v1_indexes_index_definition_id_history_snapshot_get_with_http_info(index_definition_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexDefinitionSnapshotEntry>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_definition_id_history_snapshot_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_definition_id** | **String** |  |  |
| **time** | **Time** |  | [optional] |

### Return type

[**Array&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexes_index_id_current_get

> <ModelsIndexValue> v1_indexes_index_id_current_get(index_id)

Current Index Value

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

api_instance = OpenapiClient::IndexesApi.new
index_id = 'index_id_example' # String | 

begin
  # Current Index Value
  result = api_instance.v1_indexes_index_id_current_get(index_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_current_get: #{e}"
end
```

#### Using the v1_indexes_index_id_current_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ModelsIndexValue>, Integer, Hash)> v1_indexes_index_id_current_get_with_http_info(index_id)

```ruby
begin
  # Current Index Value
  data, status_code, headers = api_instance.v1_indexes_index_id_current_get_with_http_info(index_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ModelsIndexValue>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_current_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_id** | **String** |  |  |

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexes_index_id_history_get

> <Array<ModelsIndexValue>> v1_indexes_index_id_history_get(index_id, opts)

Historical Index Value w/Composition

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

api_instance = OpenapiClient::IndexesApi.new
index_id = 'index_id_example' # String | 
opts = {
  time_start: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  time_end: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  limit: 56 # Integer | 
}

begin
  # Historical Index Value w/Composition
  result = api_instance.v1_indexes_index_id_history_get(index_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_history_get: #{e}"
end
```

#### Using the v1_indexes_index_id_history_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexValue>>, Integer, Hash)> v1_indexes_index_id_history_get_with_http_info(index_id, opts)

```ruby
begin
  # Historical Index Value w/Composition
  data, status_code, headers = api_instance.v1_indexes_index_id_history_get_with_http_info(index_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexValue>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_history_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_id** | **String** |  |  |
| **time_start** | **Time** |  | [optional] |
| **time_end** | **Time** |  | [optional] |
| **limit** | **Integer** |  | [optional][default to 100] |

### Return type

[**Array&lt;ModelsIndexValue&gt;**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexes_index_id_timeseries_get

> <Array<ModelsIndexTimeseriesItem>> v1_indexes_index_id_timeseries_get(index_id, period_id, time_start, time_end, opts)

Timeseries Index Value

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

api_instance = OpenapiClient::IndexesApi.new
index_id = 'index_id_example' # String | 
period_id = 'period_id_example' # String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
time_start = 'time_start_example' # String | Timeseries starting time in ISO 8601
time_end = 'time_end_example' # String | Timeseries ending time in ISO 8601
opts = {
  limit: 56 # Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
}

begin
  # Timeseries Index Value
  result = api_instance.v1_indexes_index_id_timeseries_get(index_id, period_id, time_start, time_end, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_timeseries_get: #{e}"
end
```

#### Using the v1_indexes_index_id_timeseries_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexTimeseriesItem>>, Integer, Hash)> v1_indexes_index_id_timeseries_get_with_http_info(index_id, period_id, time_start, time_end, opts)

```ruby
begin
  # Timeseries Index Value
  data, status_code, headers = api_instance.v1_indexes_index_id_timeseries_get_with_http_info(index_id, period_id, time_start, time_end, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexTimeseriesItem>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexesApi->v1_indexes_index_id_timeseries_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_id** | **String** |  |  |
| **period_id** | **String** | Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) |  |
| **time_start** | **String** | Timeseries starting time in ISO 8601 |  |
| **time_end** | **String** | Timeseries ending time in ISO 8601 |  |
| **limit** | **Integer** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional][default to 100] |

### Return type

[**Array&lt;ModelsIndexTimeseriesItem&gt;**](ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

