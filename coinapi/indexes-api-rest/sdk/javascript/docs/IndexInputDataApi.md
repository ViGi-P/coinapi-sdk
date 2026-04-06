# CoinApiIndexesRestApi.IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time



## v1IndexdefInputDataIndexDefinitionIdAllGet

> [ModelsIndexDefinitionInputData] v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId)

Returns all data inputs for a specific index definition

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

let apiInstance = new CoinApiIndexesRestApi.IndexInputDataApi();
let indexDefinitionId = "indexDefinitionId_example"; // String | 
apiInstance.v1IndexdefInputDataIndexDefinitionIdAllGet(indexDefinitionId, (error, data, response) => {
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

[**[ModelsIndexDefinitionInputData]**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack


## v1IndexdefInputDataIndexDefinitionIdGet

> [ModelsIndexDefinitionSnapshotEntry] v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, opts)

Returns data inputs for certain index definition and time

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

let apiInstance = new CoinApiIndexesRestApi.IndexInputDataApi();
let indexDefinitionId = "indexDefinitionId_example"; // String | 
let opts = {
  'time': new Date("2013-10-20T19:20:30+01:00"), // Date | 
  'enabledOnly': false, // Boolean | 
  'pendingOnly': false, // Boolean | 
  'filterAssetId': "filterAssetId_example", // String | 
  'withStatusInfo': false // Boolean | 
};
apiInstance.v1IndexdefInputDataIndexDefinitionIdGet(indexDefinitionId, opts, (error, data, response) => {
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
 **enabledOnly** | **Boolean**|  | [optional] [default to false]
 **pendingOnly** | **Boolean**|  | [optional] [default to false]
 **filterAssetId** | **String**|  | [optional] 
 **withStatusInfo** | **Boolean**|  | [optional] [default to false]

### Return type

[**[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

