# IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |


<a id="v1IndexdefInputDataIndexDefinitionIdAllGet"></a>
# **v1IndexdefInputDataIndexDefinitionIdAllGet**
> kotlin.collections.List&lt;ModelsIndexDefinitionInputData&gt; v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)

Returns all data inputs for a specific index definition

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexInputDataApi()
val indexDefinitionId : kotlin.String = indexDefinitionId_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ModelsIndexDefinitionInputData> = apiInstance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **indexDefinitionId** | **kotlin.String**|  | |

### Return type

[**kotlin.collections.List&lt;ModelsIndexDefinitionInputData&gt;**](ModelsIndexDefinitionInputData.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexdefInputDataIndexDefinitionIdGet"></a>
# **v1IndexdefInputDataIndexDefinitionIdGet**
> kotlin.collections.List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)

Returns data inputs for certain index definition and time

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = IndexInputDataApi()
val indexDefinitionId : kotlin.String = indexDefinitionId_example // kotlin.String | 
val time : java.time.OffsetDateTime = 2013-10-20T19:20:30+01:00 // java.time.OffsetDateTime | 
val enabledOnly : kotlin.Boolean = true // kotlin.Boolean | 
val pendingOnly : kotlin.Boolean = true // kotlin.Boolean | 
val filterAssetId : kotlin.String = filterAssetId_example // kotlin.String | 
val withStatusInfo : kotlin.Boolean = true // kotlin.Boolean | 
try {
    val result : kotlin.collections.List<ModelsIndexDefinitionSnapshotEntry> = apiInstance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet")
    e.printStackTrace()
}
```

### Parameters
| **indexDefinitionId** | **kotlin.String**|  | |
| **time** | **java.time.OffsetDateTime**|  | [optional] |
| **enabledOnly** | **kotlin.Boolean**|  | [optional] [default to false] |
| **pendingOnly** | **kotlin.Boolean**|  | [optional] [default to false] |
| **filterAssetId** | **kotlin.String**|  | [optional] |
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **withStatusInfo** | **kotlin.Boolean**|  | [optional] [default to false] |

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

