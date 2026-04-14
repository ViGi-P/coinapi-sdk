# OpenAPI\Client\RateLimitApi



All URIs are relative to https://api-realtime.fx.finfeedapi.com, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**internalRatelimitWsconconApikeyGet()**](RateLimitApi.md#internalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey |  |
| [**internalRatelimitWshelloIpGet()**](RateLimitApi.md#internalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip |  |
| [**internalRatelimitWsreqIpGet()**](RateLimitApi.md#internalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip |  |


## `internalRatelimitWsconconApikeyGet()`

```php
internalRatelimitWsconconApikeyGet()
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: APIKey
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('Authorization', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('Authorization', 'Bearer');

// Configure Bearer (JWT) authorization: JWT
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RateLimitApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->internalRatelimitWsconconApikeyGet();
} catch (Exception $e) {
    echo 'Exception when calling RateLimitApi->internalRatelimitWsconconApikeyGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `internalRatelimitWshelloIpGet()`

```php
internalRatelimitWshelloIpGet()
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: APIKey
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('Authorization', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('Authorization', 'Bearer');

// Configure Bearer (JWT) authorization: JWT
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RateLimitApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->internalRatelimitWshelloIpGet();
} catch (Exception $e) {
    echo 'Exception when calling RateLimitApi->internalRatelimitWshelloIpGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `internalRatelimitWsreqIpGet()`

```php
internalRatelimitWsreqIpGet()
```



### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: APIKey
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKey('Authorization', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setApiKeyPrefix('Authorization', 'Bearer');

// Configure Bearer (JWT) authorization: JWT
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\RateLimitApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $apiInstance->internalRatelimitWsreqIpGet();
} catch (Exception $e) {
    echo 'Exception when calling RateLimitApi->internalRatelimitWsreqIpGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
