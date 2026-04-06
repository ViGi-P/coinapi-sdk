# MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**v1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**v1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |


<a id="v1IndexdefMultiassetGet"></a>
# **v1IndexdefMultiassetGet**
> List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetGet()

Get all multi-asset weights

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MultiAssetWeightsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://rest-api.indexes.coinapi.io");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    MultiAssetWeightsApi apiInstance = new MultiAssetWeightsApi(defaultClient);
    try {
      List<ModelsIndexMultiAssetWeight> result = apiInstance.v1IndexdefMultiassetGet();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetGet");
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

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="v1IndexdefMultiassetIndexIdGet"></a>
# **v1IndexdefMultiassetIndexIdGet**
> List&lt;ModelsIndexMultiAssetWeight&gt; v1IndexdefMultiassetIndexIdGet(indexId)

Get multi-asset weights for specific index

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MultiAssetWeightsApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://rest-api.indexes.coinapi.io");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    MultiAssetWeightsApi apiInstance = new MultiAssetWeightsApi(defaultClient);
    String indexId = "indexId_example"; // String | 
    try {
      List<ModelsIndexMultiAssetWeight> result = apiInstance.v1IndexdefMultiassetIndexIdGet(indexId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MultiAssetWeightsApi#v1IndexdefMultiassetIndexIdGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **indexId** | **String**|  | |

### Return type

[**List&lt;ModelsIndexMultiAssetWeight&gt;**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

