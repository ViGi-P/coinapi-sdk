# RateLimitApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**internalRatelimitWsconconApikeyGet**](RateLimitApi.md#internalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey |  |
| [**internalRatelimitWshelloIpGet**](RateLimitApi.md#internalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip |  |
| [**internalRatelimitWsreqIpGet**](RateLimitApi.md#internalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip |  |


<a id="internalRatelimitWsconconApikeyGet"></a>
# **internalRatelimitWsconconApikeyGet**
> internalRatelimitWsconconApikeyGet()



### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RateLimitApi()
try {
    apiInstance.internalRatelimitWsconconApikeyGet()
} catch (e: ClientException) {
    println("4xx response calling RateLimitApi#internalRatelimitWsconconApikeyGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RateLimitApi#internalRatelimitWsconconApikeyGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="internalRatelimitWshelloIpGet"></a>
# **internalRatelimitWshelloIpGet**
> internalRatelimitWshelloIpGet()



### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RateLimitApi()
try {
    apiInstance.internalRatelimitWshelloIpGet()
} catch (e: ClientException) {
    println("4xx response calling RateLimitApi#internalRatelimitWshelloIpGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RateLimitApi#internalRatelimitWshelloIpGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="internalRatelimitWsreqIpGet"></a>
# **internalRatelimitWsreqIpGet**
> internalRatelimitWsreqIpGet()



### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RateLimitApi()
try {
    apiInstance.internalRatelimitWsreqIpGet()
} catch (e: ClientException) {
    println("4xx response calling RateLimitApi#internalRatelimitWsreqIpGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RateLimitApi#internalRatelimitWsreqIpGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

