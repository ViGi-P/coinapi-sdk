# api_bricks_currencies_api_rest_realtime.RateLimitApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**internal_ratelimit_wsconcon_apikey_get**](RateLimitApi.md#internal_ratelimit_wsconcon_apikey_get) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**internal_ratelimit_wshello_ip_get**](RateLimitApi.md#internal_ratelimit_wshello_ip_get) | **GET** /internal/ratelimit/wshello/ip | 
[**internal_ratelimit_wsreq_ip_get**](RateLimitApi.md#internal_ratelimit_wsreq_ip_get) | **GET** /internal/ratelimit/wsreq/ip | 


# **internal_ratelimit_wsconcon_apikey_get**
> internal_ratelimit_wsconcon_apikey_get()

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_currencies_api_rest_realtime
from api_bricks_currencies_api_rest_realtime.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api-realtime.fx.finfeedapi.com
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    host = "https://api-realtime.fx.finfeedapi.com"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: APIKey
configuration.api_key['APIKey'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['APIKey'] = 'Bearer'

# Configure Bearer authorization (JWT): JWT
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_currencies_api_rest_realtime.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_currencies_api_rest_realtime.RateLimitApi(api_client)

    try:
        api_instance.internal_ratelimit_wsconcon_apikey_get()
    except Exception as e:
        print("Exception when calling RateLimitApi->internal_ratelimit_wsconcon_apikey_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **internal_ratelimit_wshello_ip_get**
> internal_ratelimit_wshello_ip_get()

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_currencies_api_rest_realtime
from api_bricks_currencies_api_rest_realtime.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api-realtime.fx.finfeedapi.com
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    host = "https://api-realtime.fx.finfeedapi.com"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: APIKey
configuration.api_key['APIKey'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['APIKey'] = 'Bearer'

# Configure Bearer authorization (JWT): JWT
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_currencies_api_rest_realtime.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_currencies_api_rest_realtime.RateLimitApi(api_client)

    try:
        api_instance.internal_ratelimit_wshello_ip_get()
    except Exception as e:
        print("Exception when calling RateLimitApi->internal_ratelimit_wshello_ip_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **internal_ratelimit_wsreq_ip_get**
> internal_ratelimit_wsreq_ip_get()

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_currencies_api_rest_realtime
from api_bricks_currencies_api_rest_realtime.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api-realtime.fx.finfeedapi.com
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    host = "https://api-realtime.fx.finfeedapi.com"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: APIKey
configuration.api_key['APIKey'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['APIKey'] = 'Bearer'

# Configure Bearer authorization (JWT): JWT
configuration = api_bricks_currencies_api_rest_realtime.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_currencies_api_rest_realtime.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_currencies_api_rest_realtime.RateLimitApi(api_client)

    try:
        api_instance.internal_ratelimit_wsreq_ip_get()
    except Exception as e:
        print("Exception when calling RateLimitApi->internal_ratelimit_wsreq_ip_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | OK |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

