# RateLimitApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InternalRatelimitWsconconApikeyGet**](RateLimitApi.md#InternalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**InternalRatelimitWshelloIpGet**](RateLimitApi.md#InternalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip | 
[**InternalRatelimitWsreqIpGet**](RateLimitApi.md#InternalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip | 


# **InternalRatelimitWsconconApikeyGet**
> InternalRatelimitWsconconApikeyGet()



### Example
```R
library(openapi)


api_instance <- RateLimitApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
api_instance$InternalRatelimitWsconconApikeyGet()
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
| **200** | OK |  -  |

# **InternalRatelimitWshelloIpGet**
> InternalRatelimitWshelloIpGet()



### Example
```R
library(openapi)


api_instance <- RateLimitApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
api_instance$InternalRatelimitWshelloIpGet()
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
| **200** | OK |  -  |

# **InternalRatelimitWsreqIpGet**
> InternalRatelimitWsreqIpGet()



### Example
```R
library(openapi)


api_instance <- RateLimitApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
api_instance$InternalRatelimitWsreqIpGet()
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
| **200** | OK |  -  |

