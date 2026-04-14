# OpenapiClient::RateLimitApi

All URIs are relative to *https://api-realtime.exrates.coinapi.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**internal_ratelimit_wsconcon_apikey_get**](RateLimitApi.md#internal_ratelimit_wsconcon_apikey_get) | **GET** /internal/ratelimit/wsconcon/apikey |  |
| [**internal_ratelimit_wshello_ip_get**](RateLimitApi.md#internal_ratelimit_wshello_ip_get) | **GET** /internal/ratelimit/wshello/ip |  |
| [**internal_ratelimit_wsreq_ip_get**](RateLimitApi.md#internal_ratelimit_wsreq_ip_get) | **GET** /internal/ratelimit/wsreq/ip |  |


## internal_ratelimit_wsconcon_apikey_get

> internal_ratelimit_wsconcon_apikey_get



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

api_instance = OpenapiClient::RateLimitApi.new

begin
  
  api_instance.internal_ratelimit_wsconcon_apikey_get
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wsconcon_apikey_get: #{e}"
end
```

#### Using the internal_ratelimit_wsconcon_apikey_get_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> internal_ratelimit_wsconcon_apikey_get_with_http_info

```ruby
begin
  
  data, status_code, headers = api_instance.internal_ratelimit_wsconcon_apikey_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wsconcon_apikey_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## internal_ratelimit_wshello_ip_get

> internal_ratelimit_wshello_ip_get



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

api_instance = OpenapiClient::RateLimitApi.new

begin
  
  api_instance.internal_ratelimit_wshello_ip_get
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wshello_ip_get: #{e}"
end
```

#### Using the internal_ratelimit_wshello_ip_get_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> internal_ratelimit_wshello_ip_get_with_http_info

```ruby
begin
  
  data, status_code, headers = api_instance.internal_ratelimit_wshello_ip_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wshello_ip_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## internal_ratelimit_wsreq_ip_get

> internal_ratelimit_wsreq_ip_get



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

api_instance = OpenapiClient::RateLimitApi.new

begin
  
  api_instance.internal_ratelimit_wsreq_ip_get
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wsreq_ip_get: #{e}"
end
```

#### Using the internal_ratelimit_wsreq_ip_get_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> internal_ratelimit_wsreq_ip_get_with_http_info

```ruby
begin
  
  data, status_code, headers = api_instance.internal_ratelimit_wsreq_ip_get_with_http_info
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling RateLimitApi->internal_ratelimit_wsreq_ip_get_with_http_info: #{e}"
end
```

### Parameters

This endpoint does not need any parameter.

### Return type

nil (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

