# MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |


<a id="v1IndexdefMultiassetGet"></a>
# **v1IndexdefMultiassetGet**
> kotlin.collections.List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetGet()

Get all multi-asset weights

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MultiAssetWeightsApi()
try {
    val result : kotlin.collections.List<ModelsIndexMultiAssetWeight> = apiInstance.v1IndexdefMultiassetGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MultiAssetWeightsApi#v1IndexdefMultiassetGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MultiAssetWeightsApi#v1IndexdefMultiassetGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

<a id="v1IndexdefMultiassetIndexIdGet"></a>
# **v1IndexdefMultiassetIndexIdGet**
> kotlin.collections.List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetIndexIdGet(indexId)

Get multi-asset weights for specific index

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = MultiAssetWeightsApi()
val indexId : kotlin.String = indexId_example // kotlin.String | 
try {
    val result : kotlin.collections.List<ModelsIndexMultiAssetWeight> = apiInstance.v1IndexdefMultiassetIndexIdGet(indexId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **indexId** | **kotlin.String**|  | |

### Return type

[**kotlin.collections.List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization


Configure APIKey:
    ApiClient.apiKey["Authorization"] = ""
    ApiClient.apiKeyPrefix["Authorization"] = ""
Configure JWT:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json

