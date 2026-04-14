# ExchangeRatesRealtimeRestApi.RateLimitApi

All URIs are relative to *https://api-realtime.exrates.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**internalRatelimitWsconconApikeyGet**](RateLimitApi.md#internalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**internalRatelimitWshelloIpGet**](RateLimitApi.md#internalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip | 
[**internalRatelimitWsreqIpGet**](RateLimitApi.md#internalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip | 



## internalRatelimitWsconconApikeyGet

> internalRatelimitWsconconApikeyGet()



### Example

```javascript
import ExchangeRatesRealtimeRestApi from 'exchange_rates_realtime_rest_api';
let defaultClient = ExchangeRatesRealtimeRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ExchangeRatesRealtimeRestApi.RateLimitApi();
apiInstance.internalRatelimitWsconconApikeyGet((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## internalRatelimitWshelloIpGet

> internalRatelimitWshelloIpGet()



### Example

```javascript
import ExchangeRatesRealtimeRestApi from 'exchange_rates_realtime_rest_api';
let defaultClient = ExchangeRatesRealtimeRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ExchangeRatesRealtimeRestApi.RateLimitApi();
apiInstance.internalRatelimitWshelloIpGet((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## internalRatelimitWsreqIpGet

> internalRatelimitWsreqIpGet()



### Example

```javascript
import ExchangeRatesRealtimeRestApi from 'exchange_rates_realtime_rest_api';
let defaultClient = ExchangeRatesRealtimeRestApi.ApiClient.instance;
// Configure API key authorization: APIKey
let APIKey = defaultClient.authentications['APIKey'];
APIKey.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//APIKey.apiKeyPrefix = 'Token';
// Configure Bearer (JWT) access token for authorization: JWT
let JWT = defaultClient.authentications['JWT'];
JWT.accessToken = "YOUR ACCESS TOKEN"

let apiInstance = new ExchangeRatesRealtimeRestApi.RateLimitApi();
apiInstance.internalRatelimitWsreqIpGet((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

null (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

