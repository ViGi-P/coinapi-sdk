# RateLimitApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**internalRatelimitWsconconApikeyGet**](RateLimitApi.md#internalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**internalRatelimitWsconconApikeyGetWithHttpInfo**](RateLimitApi.md#internalRatelimitWsconconApikeyGetWithHttpInfo) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**internalRatelimitWshelloIpGet**](RateLimitApi.md#internalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip | 
[**internalRatelimitWshelloIpGetWithHttpInfo**](RateLimitApi.md#internalRatelimitWshelloIpGetWithHttpInfo) | **GET** /internal/ratelimit/wshello/ip | 
[**internalRatelimitWsreqIpGet**](RateLimitApi.md#internalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip | 
[**internalRatelimitWsreqIpGetWithHttpInfo**](RateLimitApi.md#internalRatelimitWsreqIpGetWithHttpInfo) | **GET** /internal/ratelimit/wsreq/ip | 



## internalRatelimitWsconconApikeyGet

> internalRatelimitWsconconApikeyGet(): ApiRequest[Unit]



### Example

```scala
// Import classes:
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: APIKey
    implicit val APIKey: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure HTTP bearer authorization: JWT
    implicit val JWT: BearerToken = BearerToken("BEARER TOKEN")

    val apiInvoker = ApiInvoker()
    val apiInstance = RateLimitApi("https://api-realtime.fx.finfeedapi.com")    
    val request = apiInstance.internalRatelimitWsconconApikeyGet()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWsconconApikeyGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWsconconApikeyGet")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |


## internalRatelimitWshelloIpGet

> internalRatelimitWshelloIpGet(): ApiRequest[Unit]



### Example

```scala
// Import classes:
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: APIKey
    implicit val APIKey: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure HTTP bearer authorization: JWT
    implicit val JWT: BearerToken = BearerToken("BEARER TOKEN")

    val apiInvoker = ApiInvoker()
    val apiInstance = RateLimitApi("https://api-realtime.fx.finfeedapi.com")    
    val request = apiInstance.internalRatelimitWshelloIpGet()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWshelloIpGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWshelloIpGet")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |


## internalRatelimitWsreqIpGet

> internalRatelimitWsreqIpGet(): ApiRequest[Unit]



### Example

```scala
// Import classes:
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

import akka.actor.ActorSystem
import scala.concurrent.Future
import scala.util.{Failure, Success}

object Example extends App {
    
    implicit val system: ActorSystem = ActorSystem()
    import system.dispatcher
    
    // Configure API key authorization: APIKey
    implicit val APIKey: ApiKeyValue = ApiKeyValue("YOUR API KEY")

    // Configure HTTP bearer authorization: JWT
    implicit val JWT: BearerToken = BearerToken("BEARER TOKEN")

    val apiInvoker = ApiInvoker()
    val apiInstance = RateLimitApi("https://api-realtime.fx.finfeedapi.com")    
    val request = apiInstance.internalRatelimitWsreqIpGet()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWsreqIpGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling RateLimitApi#internalRatelimitWsreqIpGet")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type


ApiRequest[Unit] (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | OK |  -  |

