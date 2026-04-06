# OpenapiClient::IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**v1_indexdef_input_data_index_definition_id_all_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_all_get) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**v1_indexdef_input_data_index_definition_id_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_get) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |


## v1_indexdef_input_data_index_definition_id_all_get

> <Array<ModelsIndexDefinitionInputData>> v1_indexdef_input_data_index_definition_id_all_get(index_definition_id)

Returns all data inputs for a specific index definition

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

api_instance = OpenapiClient::IndexInputDataApi.new
index_definition_id = 'index_definition_id_example' # String | 

begin
  # Returns all data inputs for a specific index definition
  result = api_instance.v1_indexdef_input_data_index_definition_id_all_get(index_definition_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_all_get: #{e}"
end
```

#### Using the v1_indexdef_input_data_index_definition_id_all_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexDefinitionInputData>>, Integer, Hash)> v1_indexdef_input_data_index_definition_id_all_get_with_http_info(index_definition_id)

```ruby
begin
  # Returns all data inputs for a specific index definition
  data, status_code, headers = api_instance.v1_indexdef_input_data_index_definition_id_all_get_with_http_info(index_definition_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexDefinitionInputData>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_all_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_definition_id** | **String** |  |  |

### Return type

[**Array&lt;ModelsIndexDefinitionInputData&gt;**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexdef_input_data_index_definition_id_get

> <Array<ModelsIndexDefinitionSnapshotEntry>> v1_indexdef_input_data_index_definition_id_get(index_definition_id, opts)

Returns data inputs for certain index definition and time

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

api_instance = OpenapiClient::IndexInputDataApi.new
index_definition_id = 'index_definition_id_example' # String | 
opts = {
  time: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  enabled_only: true, # Boolean | 
  pending_only: true, # Boolean | 
  filter_asset_id: 'filter_asset_id_example', # String | 
  with_status_info: true # Boolean | 
}

begin
  # Returns data inputs for certain index definition and time
  result = api_instance.v1_indexdef_input_data_index_definition_id_get(index_definition_id, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_get: #{e}"
end
```

#### Using the v1_indexdef_input_data_index_definition_id_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexDefinitionSnapshotEntry>>, Integer, Hash)> v1_indexdef_input_data_index_definition_id_get_with_http_info(index_definition_id, opts)

```ruby
begin
  # Returns data inputs for certain index definition and time
  data, status_code, headers = api_instance.v1_indexdef_input_data_index_definition_id_get_with_http_info(index_definition_id, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexDefinitionSnapshotEntry>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_definition_id** | **String** |  |  |
| **time** | **Time** |  | [optional] |
| **enabled_only** | **Boolean** |  | [optional][default to false] |
| **pending_only** | **Boolean** |  | [optional][default to false] |
| **filter_asset_id** | **String** |  | [optional] |
| **with_status_info** | **Boolean** |  | [optional][default to false] |

### Return type

[**Array&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

