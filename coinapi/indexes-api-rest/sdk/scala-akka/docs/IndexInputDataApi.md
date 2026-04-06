# IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdAllGetWithHttpInfo**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGetWithHttpInfo) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time
[**v1IndexdefInputDataIndexDefinitionIdGetWithHttpInfo**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGetWithHttpInfo) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time



## v1IndexdefInputDataIndexDefinitionIdAllGet

> v1IndexdefInputDataIndexDefinitionIdAllGet(v1IndexdefInputDataIndexDefinitionIdAllGetRequest): ApiRequest[Seq[IndexDefinitionInputData]]

Returns all data inputs for a specific index definition

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
    val apiInstance = IndexInputDataApi("https://rest-api.indexes.coinapi.io")
    val indexDefinitionId: String = indexDefinitionId_example // String | 
    
    val request = apiInstance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  |

### Return type

ApiRequest[[**Seq[IndexDefinitionInputData]**](IndexDefinitionInputData.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |


## v1IndexdefInputDataIndexDefinitionIdGet

> v1IndexdefInputDataIndexDefinitionIdGet(v1IndexdefInputDataIndexDefinitionIdGetRequest): ApiRequest[Seq[IndexDefinitionSnapshotEntry]]

Returns data inputs for certain index definition and time

### Example

```scala
// Import classes:
import 
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
    val apiInstance = IndexInputDataApi("https://rest-api.indexes.coinapi.io")
    val indexDefinitionId: String = indexDefinitionId_example // String | 

    val time: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | 

    val enabledOnly: Boolean = true // Boolean | 

    val pendingOnly: Boolean = true // Boolean | 

    val filterAssetId: String = filterAssetId_example // String | 

    val withStatusInfo: Boolean = true // Boolean | 
    
    val request = apiInstance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  |
 **time** | **OffsetDateTime**|  | [optional]
 **enabledOnly** | **Boolean**|  | [optional]
 **pendingOnly** | **Boolean**|  | [optional]
 **filterAssetId** | **String**|  | [optional]
 **withStatusInfo** | **Boolean**|  | [optional]

### Return type

ApiRequest[[**Seq[IndexDefinitionSnapshotEntry]**](IndexDefinitionSnapshotEntry.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

