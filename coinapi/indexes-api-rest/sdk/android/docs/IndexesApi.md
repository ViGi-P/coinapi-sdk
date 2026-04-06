# IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexesGet**](IndexesApi.md#v1IndexesGet) | **GET** /v1/indexes | List indexes
[**v1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#v1IndexesIndexDefinitionIdCurrentSnapshotGet) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition
[**v1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#v1IndexesIndexDefinitionIdHistorySnapshotGet) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition
[**v1IndexesIndexIdCurrentGet**](IndexesApi.md#v1IndexesIndexIdCurrentGet) | **GET** /v1/indexes/{index_id}/current | Current Index Value
[**v1IndexesIndexIdHistoryGet**](IndexesApi.md#v1IndexesIndexIdHistoryGet) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition
[**v1IndexesIndexIdTimeseriesGet**](IndexesApi.md#v1IndexesIndexIdTimeseriesGet) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value



## v1IndexesGet

> List&lt;ModelsIndexIdentifier&gt; v1IndexesGet()

List indexes

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
try {
    List<ModelsIndexIdentifier> result = apiInstance.v1IndexesGet();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesGet");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**List&lt;ModelsIndexIdentifier&gt;**](ModelsIndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexDefinitionIdCurrentSnapshotGet

> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId)

Current Index Values for index definition

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
String indexDefinitionId = null; // String | 
try {
    List<ModelsIndexDefinitionSnapshotEntry> result = apiInstance.v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesIndexDefinitionIdCurrentSnapshotGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | [default to null]

### Return type

[**List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexDefinitionIdHistorySnapshotGet

> List&lt;ModelsIndexDefinitionSnapshotEntry&gt; v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time)

Historical Index Values for index definition

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
String indexDefinitionId = null; // String | 
Date time = null; // Date | 
try {
    List<ModelsIndexDefinitionSnapshotEntry> result = apiInstance.v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, time);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesIndexDefinitionIdHistorySnapshotGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | [default to null]
 **time** | **Date**|  | [optional] [default to null]

### Return type

[**List&lt;ModelsIndexDefinitionSnapshotEntry&gt;**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdCurrentGet

> ModelsIndexValue v1IndexesIndexIdCurrentGet(indexId)

Current Index Value

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
String indexId = null; // String | 
try {
    ModelsIndexValue result = apiInstance.v1IndexesIndexIdCurrentGet(indexId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesIndexIdCurrentGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | [default to null]

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdHistoryGet

> List&lt;ModelsIndexValue&gt; v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit)

Historical Index Value w/Composition

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
String indexId = null; // String | 
Date timeStart = null; // Date | 
Date timeEnd = null; // Date | 
Integer limit = 100; // Integer | 
try {
    List<ModelsIndexValue> result = apiInstance.v1IndexesIndexIdHistoryGet(indexId, timeStart, timeEnd, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesIndexIdHistoryGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | [default to null]
 **timeStart** | **Date**|  | [optional] [default to null]
 **timeEnd** | **Date**|  | [optional] [default to null]
 **limit** | **Integer**|  | [optional] [default to 100]

### Return type

[**List&lt;ModelsIndexValue&gt;**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdTimeseriesGet

> List&lt;ModelsIndexTimeseriesItem&gt; v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit)

Timeseries Index Value

### Example

```java
// Import classes:
//import org.openapitools.client.api.IndexesApi;

IndexesApi apiInstance = new IndexesApi();
String indexId = null; // String | 
String periodId = null; // String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
String timeStart = null; // String | Timeseries starting time in ISO 8601
String timeEnd = null; // String | Timeseries ending time in ISO 8601
Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
try {
    List<ModelsIndexTimeseriesItem> result = apiInstance.v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling IndexesApi#v1IndexesIndexIdTimeseriesGet");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | [default to null]
 **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | [default to null]
 **timeStart** | **String**| Timeseries starting time in ISO 8601 | [default to null]
 **timeEnd** | **String**| Timeseries ending time in ISO 8601 | [default to null]
 **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**List&lt;ModelsIndexTimeseriesItem&gt;**](ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

