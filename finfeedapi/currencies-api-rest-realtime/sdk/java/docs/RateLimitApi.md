# RateLimitApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**internalRatelimitWsconconApikeyGet**](RateLimitApi.md#internalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey |  |
| [**internalRatelimitWshelloIpGet**](RateLimitApi.md#internalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip |  |
| [**internalRatelimitWsreqIpGet**](RateLimitApi.md#internalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip |  |


<a id="internalRatelimitWsconconApikeyGet"></a>
# **internalRatelimitWsconconApikeyGet**
> internalRatelimitWsconconApikeyGet()



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RateLimitApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api-realtime.fx.finfeedapi.com");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    RateLimitApi apiInstance = new RateLimitApi(defaultClient);
    try {
      apiInstance.internalRatelimitWsconconApikeyGet();
    } catch (ApiException e) {
      System.err.println("Exception when calling RateLimitApi#internalRatelimitWsconconApikeyGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |

<a id="internalRatelimitWshelloIpGet"></a>
# **internalRatelimitWshelloIpGet**
> internalRatelimitWshelloIpGet()



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RateLimitApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api-realtime.fx.finfeedapi.com");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    RateLimitApi apiInstance = new RateLimitApi(defaultClient);
    try {
      apiInstance.internalRatelimitWshelloIpGet();
    } catch (ApiException e) {
      System.err.println("Exception when calling RateLimitApi#internalRatelimitWshelloIpGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |

<a id="internalRatelimitWsreqIpGet"></a>
# **internalRatelimitWsreqIpGet**
> internalRatelimitWsreqIpGet()



### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.RateLimitApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api-realtime.fx.finfeedapi.com");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    RateLimitApi apiInstance = new RateLimitApi(defaultClient);
    try {
      apiInstance.internalRatelimitWsreqIpGet();
    } catch (ApiException e) {
      System.err.println("Exception when calling RateLimitApi#internalRatelimitWsreqIpGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |

