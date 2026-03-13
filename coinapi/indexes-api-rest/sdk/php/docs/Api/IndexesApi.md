# OpenAPI\Client\IndexesApi



All URIs are relative to https://rest-api.indexes.coinapi.io, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexdefMultiassetGet()**](IndexesApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**v1IndexdefMultiassetIndexIdGet()**](IndexesApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |
| [**v1IndexesGet()**](IndexesApi.md#v1IndexesGet) | **GET** /v1/indexes | List indexes |
| [**v1IndexesIndexDefinitionIdCurrentSnapshotGet()**](IndexesApi.md#v1IndexesIndexDefinitionIdCurrentSnapshotGet) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| [**v1IndexesIndexDefinitionIdHistorySnapshotGet()**](IndexesApi.md#v1IndexesIndexDefinitionIdHistorySnapshotGet) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| [**v1IndexesIndexIdCurrentGet()**](IndexesApi.md#v1IndexesIndexIdCurrentGet) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| [**v1IndexesIndexIdHistoryGet()**](IndexesApi.md#v1IndexesIndexIdHistoryGet) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| [**v1IndexesIndexIdTimeseriesGet()**](IndexesApi.md#v1IndexesIndexIdTimeseriesGet) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |


## `v1IndexdefMultiassetGet()`

```php
v1IndexdefMultiassetGet(): \OpenAPI\Client\Model\ModelsIndexMultiAssetWeight[]
```

Get all multi-asset weights

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->v1IndexdefMultiassetGet();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexdefMultiassetGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ModelsIndexMultiAssetWeight[]**](../Model/ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexdefMultiassetIndexIdGet()`

```php
v1IndexdefMultiassetIndexIdGet($index_id): \OpenAPI\Client\Model\ModelsIndexMultiAssetWeight[]
```

Get multi-asset weights for specific index

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_id = 'index_id_example'; // string

try {
    $result = $apiInstance->v1IndexdefMultiassetIndexIdGet($index_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexdefMultiassetIndexIdGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_id** | **string**|  | |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexMultiAssetWeight[]**](../Model/ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesGet()`

```php
v1IndexesGet(): \OpenAPI\Client\Model\ModelsIndexIdentifier[]
```

List indexes

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->v1IndexesGet();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\ModelsIndexIdentifier[]**](../Model/ModelsIndexIdentifier.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesIndexDefinitionIdCurrentSnapshotGet()`

```php
v1IndexesIndexDefinitionIdCurrentSnapshotGet($index_definition_id): \OpenAPI\Client\Model\ModelsIndexDefinitionSnapshotEntry[]
```

Current Index Values for index definition

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_definition_id = 'index_definition_id_example'; // string

try {
    $result = $apiInstance->v1IndexesIndexDefinitionIdCurrentSnapshotGet($index_definition_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesIndexDefinitionIdCurrentSnapshotGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_definition_id** | **string**|  | |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexDefinitionSnapshotEntry[]**](../Model/ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesIndexDefinitionIdHistorySnapshotGet()`

```php
v1IndexesIndexDefinitionIdHistorySnapshotGet($index_definition_id, $time): \OpenAPI\Client\Model\ModelsIndexDefinitionSnapshotEntry[]
```

Historical Index Values for index definition

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_definition_id = 'index_definition_id_example'; // string
$time = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime

try {
    $result = $apiInstance->v1IndexesIndexDefinitionIdHistorySnapshotGet($index_definition_id, $time);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesIndexDefinitionIdHistorySnapshotGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_definition_id** | **string**|  | |
| **time** | **\DateTime**|  | [optional] |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexDefinitionSnapshotEntry[]**](../Model/ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesIndexIdCurrentGet()`

```php
v1IndexesIndexIdCurrentGet($index_id): \OpenAPI\Client\Model\ModelsIndexValue
```

Current Index Value

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_id = 'index_id_example'; // string

try {
    $result = $apiInstance->v1IndexesIndexIdCurrentGet($index_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesIndexIdCurrentGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_id** | **string**|  | |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexValue**](../Model/ModelsIndexValue.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesIndexIdHistoryGet()`

```php
v1IndexesIndexIdHistoryGet($index_id, $time_start, $time_end, $limit): \OpenAPI\Client\Model\ModelsIndexValue[]
```

Historical Index Value w/Composition

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_id = 'index_id_example'; // string
$time_start = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$time_end = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$limit = 100; // int

try {
    $result = $apiInstance->v1IndexesIndexIdHistoryGet($index_id, $time_start, $time_end, $limit);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesIndexIdHistoryGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_id** | **string**|  | |
| **time_start** | **\DateTime**|  | [optional] |
| **time_end** | **\DateTime**|  | [optional] |
| **limit** | **int**|  | [optional] [default to 100] |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexValue[]**](../Model/ModelsIndexValue.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexesIndexIdTimeseriesGet()`

```php
v1IndexesIndexIdTimeseriesGet($index_id, $period_id, $time_start, $time_end, $limit): \OpenAPI\Client\Model\ModelsIndexTimeseriesItem[]
```

Timeseries Index Value

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


$apiInstance = new OpenAPI\Client\Api\IndexesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_id = 'index_id_example'; // string | 
$period_id = 'period_id_example'; // string | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
$time_start = 'time_start_example'; // string | Timeseries starting time in ISO 8601
$time_end = 'time_end_example'; // string | Timeseries ending time in ISO 8601
$limit = 100; // int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

try {
    $result = $apiInstance->v1IndexesIndexIdTimeseriesGet($index_id, $period_id, $time_start, $time_end, $limit);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexesApi->v1IndexesIndexIdTimeseriesGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_id** | **string**|  | |
| **period_id** | **string**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | |
| **time_start** | **string**| Timeseries starting time in ISO 8601 | |
| **time_end** | **string**| Timeseries ending time in ISO 8601 | |
| **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexTimeseriesItem[]**](../Model/ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
