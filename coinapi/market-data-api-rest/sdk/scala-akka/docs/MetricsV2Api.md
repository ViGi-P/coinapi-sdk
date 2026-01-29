# MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**marketdataListMetricsV2AssetHistory**](MetricsV2Api.md#marketdataListMetricsV2AssetHistory) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**marketdataListMetricsV2AssetHistoryWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2AssetHistoryWithHttpInfo) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**marketdataListMetricsV2AssetListing**](MetricsV2Api.md#marketdataListMetricsV2AssetListing) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**marketdataListMetricsV2AssetListingWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2AssetListingWithHttpInfo) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**marketdataListMetricsV2ChainHistory**](MetricsV2Api.md#marketdataListMetricsV2ChainHistory) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**marketdataListMetricsV2ChainHistoryWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2ChainHistoryWithHttpInfo) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**marketdataListMetricsV2ChainListing**](MetricsV2Api.md#marketdataListMetricsV2ChainListing) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**marketdataListMetricsV2ChainListingWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2ChainListingWithHttpInfo) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**marketdataListMetricsV2ExchangeHistory**](MetricsV2Api.md#marketdataListMetricsV2ExchangeHistory) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**marketdataListMetricsV2ExchangeHistoryWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2ExchangeHistoryWithHttpInfo) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**marketdataListMetricsV2ExchangeListing**](MetricsV2Api.md#marketdataListMetricsV2ExchangeListing) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**marketdataListMetricsV2ExchangeListingWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2ExchangeListingWithHttpInfo) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**marketdataListMetricsV2Listing**](MetricsV2Api.md#marketdataListMetricsV2Listing) | **GET** /v2/metrics/listing | Listing of all supported metrics
[**marketdataListMetricsV2ListingWithHttpInfo**](MetricsV2Api.md#marketdataListMetricsV2ListingWithHttpInfo) | **GET** /v2/metrics/listing | Listing of all supported metrics



## marketdataListMetricsV2AssetHistory

> marketdataListMetricsV2AssetHistory(marketdataListMetricsV2AssetHistoryRequest): ApiRequest[Seq[Any]]

Historical metrics for the asset

Get asset metrics history.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val metricId: String = metricId_example // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)

    val assetId: String = assetId_example // String | Asset identifier (e.g., `USDC`, `USDT`)

    val timeStart: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Starting time in ISO 8601

    val timeEnd: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Ending time in ISO 8601

    val timeFormat: String = timeFormat_example // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)

    val periodId: String = periodId_example // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`

    val limit: Int = 56 // Int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    
    val request = apiInstance.marketdataListMetricsV2AssetHistory(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetHistory")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetHistory")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |
 **assetId** | **String**| Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) |
 **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional]
 **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional]
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]
 **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]
 **limit** | **Int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional]

### Return type

ApiRequest[**Seq[Any]**]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid asset_id. |  -  |
| **500** | Internal server error. |  -  |


## marketdataListMetricsV2AssetListing

> marketdataListMetricsV2AssetListing(marketdataListMetricsV2AssetListingRequest): ApiRequest[Seq[MetricInfo]]

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val assetId: String = assetId_example // String | Asset identifier (e.g., USDC, USDT)
    
    val request = apiInstance.marketdataListMetricsV2AssetListing(assetId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetListing")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetListing")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **assetId** | **String**| Asset identifier (e.g., USDC, USDT) |

### Return type

ApiRequest[[**Seq[MetricInfo]**](MetricInfo.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |


## marketdataListMetricsV2ChainHistory

> marketdataListMetricsV2ChainHistory(marketdataListMetricsV2ChainHistoryRequest): ApiRequest[Seq[Any]]

Historical metrics for the chain

Get chain metrics history.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val metricId: String = metricId_example // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)

    val chainId: String = chainId_example // String | Chain identifier (e.g., `Ethereum`, `Arbitrum`)

    val timeStart: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Starting time in ISO 8601

    val timeEnd: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Ending time in ISO 8601

    val timeFormat: String = timeFormat_example // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)

    val periodId: String = periodId_example // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`

    val limit: Int = 56 // Int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    
    val request = apiInstance.marketdataListMetricsV2ChainHistory(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainHistory")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainHistory")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |
 **chainId** | **String**| Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) |
 **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional]
 **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional]
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]
 **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]
 **limit** | **Int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional]

### Return type

ApiRequest[**Seq[Any]**]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid chain_id. |  -  |
| **500** | Internal server error. |  -  |


## marketdataListMetricsV2ChainListing

> marketdataListMetricsV2ChainListing(marketdataListMetricsV2ChainListingRequest): ApiRequest[Seq[MetricInfo]]

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val chainId: String = chainId_example // String | Chain identifier (e.g., ETHEREUM, ARBITRUM)
    
    val request = apiInstance.marketdataListMetricsV2ChainListing(chainId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainListing")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainListing")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chainId** | **String**| Chain identifier (e.g., ETHEREUM, ARBITRUM) |

### Return type

ApiRequest[[**Seq[MetricInfo]**](MetricInfo.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |


## marketdataListMetricsV2ExchangeHistory

> marketdataListMetricsV2ExchangeHistory(marketdataListMetricsV2ExchangeHistoryRequest): ApiRequest[Seq[Any]]

Historical metrics for the exchange

Get exchange metrics history.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val metricId: String = metricId_example // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)

    val exchangeId: String = exchangeId_example // String | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)

    val timeStart: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Starting time in ISO 8601

    val timeEnd: OffsetDateTime = 2013-10-20T19:20:30+01:00 // OffsetDateTime | Ending time in ISO 8601

    val timeFormat: String = timeFormat_example // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)

    val periodId: String = periodId_example // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`

    val limit: Int = 56 // Int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    
    val request = apiInstance.marketdataListMetricsV2ExchangeHistory(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeHistory")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeHistory")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) |
 **exchangeId** | **String**| Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) |
 **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional]
 **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional]
 **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional]
 **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional]
 **limit** | **Int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional]

### Return type

ApiRequest[**Seq[Any]**]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid exchange_id mapping. |  -  |
| **500** | Internal server error. |  -  |


## marketdataListMetricsV2ExchangeListing

> marketdataListMetricsV2ExchangeListing(marketdataListMetricsV2ExchangeListingRequest): ApiRequest[Seq[MetricInfo]]

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")
    val exchangeId: String = exchangeId_example // String | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)
    
    val request = apiInstance.marketdataListMetricsV2ExchangeListing(exchangeId)
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeListing")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeListing")
            exception.printStackTrace();
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **String**| Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) |

### Return type

ApiRequest[[**Seq[MetricInfo]**](MetricInfo.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |


## marketdataListMetricsV2Listing

> marketdataListMetricsV2Listing(): ApiRequest[Seq[MetricInfo]]

Listing of all supported metrics

Get all metrics available in the system.

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
    val apiInstance = MetricsV2Api("https://rest.coinapi.io")    
    val request = apiInstance.marketdataListMetricsV2Listing()
    val response = apiInvoker.execute(request)

    response.onComplete {
        case Success(ApiResponse(code, content, headers)) =>
            System.out.println(s"Status code: $code}")
            System.out.println(s"Response headers: ${headers.mkString(", ")}")
            System.out.println(s"Response body: $content")
        
        case Failure(error @ ApiError(code, message, responseContent, cause, headers)) =>
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2Listing")
            System.err.println(s"Status code: $code}")
            System.err.println(s"Reason: $responseContent")
            System.err.println(s"Response headers: ${headers.mkString(", ")}")
            error.printStackTrace();

        case Failure(exception) => 
            System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2Listing")
            exception.printStackTrace();
    }
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

ApiRequest[[**Seq[MetricInfo]**](MetricInfo.md)]


### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

