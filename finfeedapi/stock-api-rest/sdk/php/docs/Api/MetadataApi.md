# OpenAPI\Client\MetadataApi

Provides access to exchange and symbol metadata.

All URIs are relative to https://api-historical.stock.finfeedapi.com, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**v1ExchangesGet()**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges |
| [**v1SymbolsExchangeIdGet()**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange |


## `v1ExchangesGet()`

```php
v1ExchangesGet(): \OpenAPI\Client\Model\FinFeedAPIExchangeModel[]
```

List of exchanges

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


$apiInstance = new OpenAPI\Client\Api\MetadataApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->v1ExchangesGet();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MetadataApi->v1ExchangesGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\OpenAPI\Client\Model\FinFeedAPIExchangeModel[]**](../Model/FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `v1SymbolsExchangeIdGet()`

```php
v1SymbolsExchangeIdGet($exchange_id, $filter_symbol_id, $limit, $page): \OpenAPI\Client\Model\FinFeedAPISymbolModel[]
```

List of symbols for the exchange

Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).

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


$apiInstance = new OpenAPI\Client\Api\MetadataApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$exchange_id = 'exchange_id_example'; // string | The ID of the exchange (from the Metadata -> Exchanges)
$filter_symbol_id = 'filter_symbol_id_example'; // string | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
$limit = 100; // int | Maximum number of symbols to return (1-10000, default 100)
$page = 1; // int | Page number (1-based, default 1)

try {
    $result = $apiInstance->v1SymbolsExchangeIdGet($exchange_id, $filter_symbol_id, $limit, $page);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling MetadataApi->v1SymbolsExchangeIdGet: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **exchange_id** | **string**| The ID of the exchange (from the Metadata -&gt; Exchanges) | |
| **filter_symbol_id** | **string**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] |
| **limit** | **int**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100] |
| **page** | **int**| Page number (1-based, default 1) | [optional] [default to 1] |

### Return type

[**\OpenAPI\Client\Model\FinFeedAPISymbolModel[]**](../Model/FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../../README.md#APIKey), [JWT](../../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `text/plain`, `application/json`, `text/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
