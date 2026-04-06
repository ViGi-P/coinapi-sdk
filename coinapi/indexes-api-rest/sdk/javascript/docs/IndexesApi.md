# CoinApiIndexesRestApi.IndexesApi

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

> [ModelsIndexIdentifier] v1IndexesGet()

List indexes

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
apiInstance.v1IndexesGet((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[ModelsIndexIdentifier]**](ModelsIndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexDefinitionIdCurrentSnapshotGet

> [ModelsIndexDefinitionSnapshotEntry] v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId)

Current Index Values for index definition

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
let indexDefinitionId = "indexDefinitionId_example"; // String | 
apiInstance.v1IndexesIndexDefinitionIdCurrentSnapshotGet(indexDefinitionId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 

### Return type

[**[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexDefinitionIdHistorySnapshotGet

> [ModelsIndexDefinitionSnapshotEntry] v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, opts)

Historical Index Values for index definition

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
let indexDefinitionId = "indexDefinitionId_example"; // String | 
let opts = {
  'time': new Date("2013-10-20T19:20:30+01:00") // Date | 
};
apiInstance.v1IndexesIndexDefinitionIdHistorySnapshotGet(indexDefinitionId, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexDefinitionId** | **String**|  | 
 **time** | **Date**|  | [optional] 

### Return type

[**[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdCurrentGet

> ModelsIndexValue v1IndexesIndexIdCurrentGet(indexId)

Current Index Value

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
let indexId = "indexId_example"; // String | 
apiInstance.v1IndexesIndexIdCurrentGet(indexId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdHistoryGet

> [ModelsIndexValue] v1IndexesIndexIdHistoryGet(indexId, opts)

Historical Index Value w/Composition

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
let indexId = "indexId_example"; // String | 
let opts = {
  'timeStart': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'timeEnd': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'limit': 100 // Number | 
};
apiInstance.v1IndexesIndexIdHistoryGet(indexId, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 
 **timeStart** | **Date**|  | [optional] 
 **timeEnd** | **Date**|  | [optional] 
 **limit** | **Number**|  | [optional] [default to 100]

### Return type

[**[ModelsIndexValue]**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexesIndexIdTimeseriesGet

> [ModelsIndexTimeseriesItem] v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, opts)

Timeseries Index Value

### Example

```javascript
import CoinApiIndexesRestApi from 'coin_api_indexes_rest_api';
let defaultClient = CoinApiIndexesRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new CoinApiIndexesRestApi.IndexesApi();
let indexId = "indexId_example"; // String | 
let periodId = "periodId_example"; // String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
let timeStart = "timeStart_example"; // String | Timeseries starting time in ISO 8601
let timeEnd = "timeEnd_example"; // String | Timeseries ending time in ISO 8601
let opts = {
  'limit': 100 // Number | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
};
apiInstance.v1IndexesIndexIdTimeseriesGet(indexId, periodId, timeStart, timeEnd, opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **indexId** | **String**|  | 
 **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | 
 **timeStart** | **String**| Timeseries starting time in ISO 8601 | 
 **timeEnd** | **String**| Timeseries ending time in ISO 8601 | 
 **limit** | **Number**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**[ModelsIndexTimeseriesItem]**](ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

