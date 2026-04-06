# OpenAPI\Client\IndexInputDataApi



All URIs are relative to https://rest-api.indexes.coinapi.io, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexdefInputDataIndexDefinitionIdAllGet()**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| [**v1IndexdefInputDataIndexDefinitionIdGet()**](IndexInputDataApi.md#v1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |


## `v1IndexdefInputDataIndexDefinitionIdAllGet()`

```php
v1IndexdefInputDataIndexDefinitionIdAllGet($index_definition_id): \OpenAPI\Client\Model\ModelsIndexDefinitionInputData[]
```

Returns all data inputs for a specific index definition

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


$apiInstance = new OpenAPI\Client\Api\IndexInputDataApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_definition_id = 'index_definition_id_example'; // string

try {
    $result = $apiInstance->v1IndexdefInputDataIndexDefinitionIdAllGet($index_definition_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexInputDataApi->v1IndexdefInputDataIndexDefinitionIdAllGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_definition_id** | **string**|  | |

### Return type

[**\OpenAPI\Client\Model\ModelsIndexDefinitionInputData[]**](../Model/ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`, `application/x-msgpack`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1IndexdefInputDataIndexDefinitionIdGet()`

```php
v1IndexdefInputDataIndexDefinitionIdGet($index_definition_id, $time, $enabled_only, $pending_only, $filter_asset_id, $with_status_info): \OpenAPI\Client\Model\ModelsIndexDefinitionSnapshotEntry[]
```

Returns data inputs for certain index definition and time

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


$apiInstance = new OpenAPI\Client\Api\IndexInputDataApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$index_definition_id = 'index_definition_id_example'; // string
$time = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$enabled_only = false; // bool
$pending_only = false; // bool
$filter_asset_id = 'filter_asset_id_example'; // string
$with_status_info = false; // bool

try {
    $result = $apiInstance->v1IndexdefInputDataIndexDefinitionIdGet($index_definition_id, $time, $enabled_only, $pending_only, $filter_asset_id, $with_status_info);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling IndexInputDataApi->v1IndexdefInputDataIndexDefinitionIdGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **index_definition_id** | **string**|  | |
| **time** | **\DateTime**|  | [optional] |
| **enabled_only** | **bool**|  | [optional] [default to false] |
| **pending_only** | **bool**|  | [optional] [default to false] |
| **filter_asset_id** | **string**|  | [optional] |
| **with_status_info** | **bool**|  | [optional] [default to false] |

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
