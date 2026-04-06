# IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |


<a id="v1IndexdefInputDataIndexDefinitionIdAllGet"></a>
# **v1IndexdefInputDataIndexDefinitionIdAllGet**
> List&lt;ModelsIndexDefinitionInputData&gt; v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)

Returns all data inputs for a specific index definition

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.IndexInputDataApi;

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

    IndexInputDataApi apiInstance = new IndexInputDataApi(defaultClient);
    String indexDefinitionId = "indexDefinitionId_example"; // String | 
    try {
      List<ModelsIndexDefinitionInputData> result = apiInstance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet");
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
| **indexDefinitionId** | **String**|  | |

### Return type

[**List&lt;ModelsIndexDefinitionInputData&gt;**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="v1IndexdefInputDataIndexDefinitionIdGet"></a>
# **v1IndexdefInputDataIndexDefinitionIdGet**
> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)

Returns data inputs for certain index definition and time

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.IndexInputDataApi;

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

    IndexInputDataApi apiInstance = new IndexInputDataApi(defaultClient);
    String indexDefinitionId = "indexDefinitionId_example"; // String | 
    OffsetDateTime time = OffsetDateTime.now(); // OffsetDateTime | 
    Boolean enabledOnly = false; // Boolean | 
    Boolean pendingOnly = false; // Boolean | 
    String filterAssetId = "filterAssetId_example"; // String | 
    Boolean withStatusInfo = false; // Boolean | 
    try {
      List<ModelsIndexDefinitionSnapshotEntry> result = apiInstance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet");
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
| **indexDefinitionId** | **String**|  | |
| **time** | **OffsetDateTime**|  | [optional] |
| **enabledOnly** | **Boolean**|  | [optional] [default to false] |
| **pendingOnly** | **Boolean**|  | [optional] [default to false] |
| **filterAssetId** | **String**|  | [optional] |
| **withStatusInfo** | **Boolean**|  | [optional] [default to false] |

### Return type

[**List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

