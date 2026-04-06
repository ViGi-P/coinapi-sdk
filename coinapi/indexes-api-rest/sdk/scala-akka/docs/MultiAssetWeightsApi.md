# MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1IndexdefMultiassetGetWithHttpInfo**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGetWithHttpInfo) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index
[**v1IndexdefMultiassetIndexIdGetWithHttpInfo**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGetWithHttpInfo) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index



## v1IndexdefMultiassetGet

> v1IndexdefMultiassetGet(): ApiRequest[Seq[IndexMultiAssetWeight]]

Get all multi-asset weights

### Example

```scala
// Import classes:
import 
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
    val apiInstance = MultiAssetWeightsApi("https://rest-api.indexes.coinapi.io")    
    val request = apiInstance.v1IndexdefMultiassetGet()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetGet")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**Seq[IndexMultiAssetWeight]**](IndexMultiAssetWeight.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |


## v1IndexdefMultiassetIndexIdGet

> v1IndexdefMultiassetIndexIdGet(v1IndexdefMultiassetIndexIdGetRequest): ApiRequest[Seq[IndexMultiAssetWeight]]

Get multi-asset weights for specific index

### Example

```scala
// Import classes:
import 
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
    val apiInstance = MultiAssetWeightsApi("https://rest-api.indexes.coinapi.io")
    val indexId: String = indexId_example // String | 
    
    val request = apiInstance.v1IndexdefMultiassetIndexIdGet(indexId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  |

### Return type

ApiRequest[[**Seq[IndexMultiAssetWeight]**](IndexMultiAssetWeight.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

