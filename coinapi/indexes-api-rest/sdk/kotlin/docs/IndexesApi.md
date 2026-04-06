# IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexesGet**](IndexesApi.md#v1IndexesGet) | **GET** /v1/indexes | List indexes |
| [**v1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#v1IndexesIndexDefinitionIdCurrentSnapshotGet) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| [**v1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#v1IndexesIndexDefinitionIdHistorySnapshotGet) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| [**v1IndexesIndexIdCurrentGet**](IndexesApi.md#v1IndexesIndexIdCurrentGet) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| [**v1IndexesIndexIdHistoryGet**](IndexesApi.md#v1IndexesIndexIdHistoryGet) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| [**v1IndexesIndexIdTimeseriesGet**](IndexesApi.md#v1IndexesIndexIdTimeseriesGet) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |


<a id="v1IndexesGet"></a>
# **v1IndexesGet**
> kotlin.collections.List&lt;ModelsIndexIdentifier&gt; v1IndexesGet()

List indexes

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
try {
    val result : kotlin.collections.List<ModelsIndexIdentifier> = apiInstance.v1IndexesGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;ModelsIndexIdentifier&gt;**](ModelsIndexIdentifier.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexesIndexDefinitionIdCurrentSnapshotGet"></a>
# **v1IndexesIndexDefinitionIdCurrentSnapshotGet**
> kotlin.collections.List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId)

Current Index Values for index definition

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
val indexDefinitionId : kotlin.String = indexDefinitionId_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ModelsIndexDefinitionSnapshotEntry> = apiInstance.v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesIndexDefinitionIdCurrentSnapshotGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesIndexDefinitionIdCurrentSnapshotGet")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **indexDefinitionId** | **kotlin.String**|  | |

### Return type

[**kotlin.collections.List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexesIndexDefinitionIdHistorySnapshotGet"></a>
# **v1IndexesIndexDefinitionIdHistorySnapshotGet**
> kotlin.collections.List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time)

Historical Index Values for index definition

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
val indexDefinitionId : kotlin.String = indexDefinitionId_example // kotlin.String | 
val time : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
try {
    val result : kotlin.collections.List<ModelsIndexDefinitionSnapshotEntry> = apiInstance.v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesIndexDefinitionIdHistorySnapshotGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesIndexDefinitionIdHistorySnapshotGet")
    e.printStackTrace()
}
```

### Parameters
| **indexDefinitionId** | **kotlin.String**|  | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **time** | **java.time.OffsetDateTime**|  | [optional] |

### Return type

[**kotlin.collections.List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexesIndexIdCurrentGet"></a>
# **v1IndexesIndexIdCurrentGet**
> ModelsIndexValue v1IndexesIndexIdCurrentGet(indexId)

Current Index Value

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
val indexId : kotlin.String = indexId_example // kotlin.String | 
try {
    val result : ModelsIndexValue = apiInstance.v1IndexesIndexIdCurrentGet(indexId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesIndexIdCurrentGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesIndexIdCurrentGet")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **indexId** | **kotlin.String**|  | |

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexesIndexIdHistoryGet"></a>
# **v1IndexesIndexIdHistoryGet**
> kotlin.collections.List&lt;ModelsIndexValue&gt; v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit)

Historical Index Value w/Composition

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
val indexId : kotlin.String = indexId_example // kotlin.String | 
val timeStart : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val timeEnd : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val limit : kotlin.Int = 56 // kotlin.Int | 
try {
    val result : kotlin.collections.List<ModelsIndexValue> = apiInstance.v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesIndexIdHistoryGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesIndexIdHistoryGet")
    e.printStackTrace()
}
```

### Parameters
| **indexId** | **kotlin.String**|  | |
| **timeStart** | **java.time.OffsetDateTime**|  | [optional] |
| **timeEnd** | **java.time.OffsetDateTime**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **limit** | **kotlin.Int**|  | [optional] [default to 100] |

### Return type

[**kotlin.collections.List&lt;ModelsIndexValue&gt;**](ModelsIndexValue.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexesIndexIdTimeseriesGet"></a>
# **v1IndexesIndexIdTimeseriesGet**
> kotlin.collections.List&lt;ModelsIndexTimeseriesItem&gt; v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit)

Timeseries Index Value

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexesApi()
val indexId : kotlin.String = indexId_example // kotlin.String | 
val periodId : kotlin.String = periodId_example // kotlin.String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
val timeStart : kotlin.String = timeStart_example // kotlin.String | Timeseries starting time in ISO 8601
val timeEnd : kotlin.String = timeEnd_example // kotlin.String | Timeseries ending time in ISO 8601
val limit : kotlin.Int = 56 // kotlin.Int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
try {
    val result : kotlin.collections.List<ModelsIndexTimeseriesItem> = apiInstance.v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexesApi#v1IndexesIndexIdTimeseriesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexesApi#v1IndexesIndexIdTimeseriesGet")
    e.printStackTrace()
}
```

### Parameters
| **indexId** | **kotlin.String**|  | |
| **periodId** | **kotlin.String**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | |
| **timeStart** | **kotlin.String**| Timeseries starting time in ISO 8601 | |
| **timeEnd** | **kotlin.String**| Timeseries ending time in ISO 8601 | |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **limit** | **kotlin.Int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**kotlin.collections.List&lt;ModelsIndexTimeseriesItem&gt;**](ModelsIndexTimeseriesItem.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

