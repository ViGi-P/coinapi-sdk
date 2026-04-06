# IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time



## v1IndexdefInputDataIndexDefinitionIdAllGet

> List&lt;ModelsIndexDefinitionInputData&gt; v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)

Returns all data inputs for a specific index definition

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexInputDataApi;

IndexInputDataApi apiInstance = new IndexInputDataApi();
String indexDefinitionId = null; // String | 
try {
    List<ModelsIndexDefinitionInputData> result = apiInstance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdAllGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | [default to null]

### Return type

[**List&lt;ModelsIndexDefinitionInputData&gt;**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexdefInputDataIndexDefinitionIdGet

> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo)

Returns data inputs for certain index definition and time

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexInputDataApi;

IndexInputDataApi apiInstance = new IndexInputDataApi();
String indexDefinitionId = null; // String | 
Date time = null; // Date | 
Boolean enabledOnly = false; // Boolean | 
Boolean pendingOnly = false; // Boolean | 
String filterAssetId = null; // String | 
Boolean withStatusInfo = false; // Boolean | 
try {
    List<ModelsIndexDefinitionSnapshotEntry> result = apiInstance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexInputDataApi#v1IndexdefInputDataIndexDefinitionIdGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | [default to null]
 **time** | **Date**|  | [optional] [default to null]
 **enabledOnly** | **Boolean**|  | [optional] [default to false]
 **pendingOnly** | **Boolean**|  | [optional] [default to false]
 **filterAssetId** | **String**|  | [optional] [default to null]
 **withStatusInfo** | **Boolean**|  | [optional] [default to false]

### Return type

[**List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

