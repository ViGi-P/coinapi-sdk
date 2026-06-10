# MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1ExchangesGet**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges |
| [**v1SymbolsExchangeIdGet**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange |


<a id="v1ExchangesGet"></a>
# **v1ExchangesGet**
> kotlin.collections.List&lt;FinFeedAPIExchangeModel&gt; v1ExchangesGet()

List of exchanges

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MetadataApi()
try {
    val result : kotlin.collections.List<FinFeedAPIExchangeModel> = apiInstance.v1ExchangesGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MetadataApi#v1ExchangesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MetadataApi#v1ExchangesGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;FinFeedAPIExchangeModel&gt;**](FinFeedAPIExchangeModel.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT statically:
```kotlin
ApiClient.accessToken = ""
```
Configure JWT dynamically:
```kotlin
apiInstance.accessTokenProvider = { "" }
```

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1SymbolsExchangeIdGet"></a>
# **v1SymbolsExchangeIdGet**
> kotlin.collections.List&lt;FinFeedAPISymbolModel&gt; v1SymbolsExchangeIdGet(exchangeId, filterSymbolId)

List of symbols for the exchange

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MetadataApi()
val exchangeId : kotlin.String = exchangeId_example // kotlin.String | The ID of the exchange (from the Metadata -> Exchanges)
val filterSymbolId : kotlin.String = filterSymbolId_example // kotlin.String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
try {
    val result : kotlin.collections.List<FinFeedAPISymbolModel> = apiInstance.v1SymbolsExchangeIdGet(exchangeId, filterSymbolId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MetadataApi#v1SymbolsExchangeIdGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MetadataApi#v1SymbolsExchangeIdGet")
    e.printStackTrace()
}
```

### Parameters
| **exchangeId** | **kotlin.String**| The ID of the exchange (from the Metadata -&gt; Exchanges) | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **filterSymbolId** | **kotlin.String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] |

### Return type

[**kotlin.collections.List&lt;FinFeedAPISymbolModel&gt;**](FinFeedAPISymbolModel.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT statically:
```kotlin
ApiClient.accessToken = ""
```
Configure JWT dynamically:
```kotlin
apiInstance.accessTokenProvider = { "" }
```

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

