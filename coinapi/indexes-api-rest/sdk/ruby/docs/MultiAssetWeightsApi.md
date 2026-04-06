# OpenapiClient::MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**v1_indexdef_multiasset_get**](MultiAssetWeightsApi.md#v1_indexdef_multiasset_get) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**v1_indexdef_multiasset_index_id_get**](MultiAssetWeightsApi.md#v1_indexdef_multiasset_index_id_get) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |


## v1_indexdef_multiasset_get

> <Array<ModelsIndexMultiAssetWeight>> v1_indexdef_multiasset_get

Get all multi-asset weights

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

api_instance = OpenapiClient::MultiAssetWeightsApi.new

begin
  # Get all multi-asset weights
  result = api_instance.v1_indexdef_multiasset_get
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MultiAssetWeightsApi->v1_indexdef_multiasset_get: #{e}"
end
```

#### Using the v1_indexdef_multiasset_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexMultiAssetWeight>>, Integer, Hash)> v1_indexdef_multiasset_get_with_http_info

```ruby
begin
  # Get all multi-asset weights
  data, status_code, headers = api_instance.v1_indexdef_multiasset_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexMultiAssetWeight>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MultiAssetWeightsApi->v1_indexdef_multiasset_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Array&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1_indexdef_multiasset_index_id_get

> <Array<ModelsIndexMultiAssetWeight>> v1_indexdef_multiasset_index_id_get(index_id)

Get multi-asset weights for specific index

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

api_instance = OpenapiClient::MultiAssetWeightsApi.new
index_id = 'index_id_example' # String | 

begin
  # Get multi-asset weights for specific index
  result = api_instance.v1_indexdef_multiasset_index_id_get(index_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling MultiAssetWeightsApi->v1_indexdef_multiasset_index_id_get: #{e}"
end
```

#### Using the v1_indexdef_multiasset_index_id_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsIndexMultiAssetWeight>>, Integer, Hash)> v1_indexdef_multiasset_index_id_get_with_http_info(index_id)

```ruby
begin
  # Get multi-asset weights for specific index
  data, status_code, headers = api_instance.v1_indexdef_multiasset_index_id_get_with_http_info(index_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsIndexMultiAssetWeight>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling MultiAssetWeightsApi->v1_indexdef_multiasset_index_id_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **index_id** | **String** |  |  |

### Return type

[**Array&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

