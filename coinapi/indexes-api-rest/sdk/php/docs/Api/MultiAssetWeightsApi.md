# OpenAPI\Client\MultiAssetWeightsApi



All URIs are relative to https://rest-api.indexes.coinapi.io, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1IndexdefMultiassetGet()**](MultiAssetWeightsApi.md#v1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| [**v1IndexdefMultiassetIndexIdGet()**](MultiAssetWeightsApi.md#v1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |


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


$apiInstance = new OpenAPI\Client\Api\MultiAssetWeightsApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->v1IndexdefMultiassetGet();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetGet: ', $e->getMessage(), PHP_EOL;
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


$apiInstance = new OpenAPI\Client\Api\MultiAssetWeightsApi(
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
    echo 'Exception when calling MultiAssetWeightsApi->v1IndexdefMultiassetIndexIdGet: ', $e->getMessage(), PHP_EOL;
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
