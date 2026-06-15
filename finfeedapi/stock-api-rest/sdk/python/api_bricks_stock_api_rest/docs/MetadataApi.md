# api_bricks_stock_api_rest.MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_exchanges_get**](MetadataApi.md#v1_exchanges_get) | **GET** /v1/exchanges | List of exchanges
[**v1_symbols_exchange_id_get**](MetadataApi.md#v1_symbols_exchange_id_get) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange


# **v1_exchanges_get**
> List[FinFeedAPIExchangeModel] v1_exchanges_get()

List of exchanges

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_stock_api_rest
from api_bricks_stock_api_rest.models.fin_feed_api_exchange_model import FinFeedAPIExchangeModel
from api_bricks_stock_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api-historical.stock.finfeedapi.com
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_stock_api_rest.Configuration(
    host = "https://api-historical.stock.finfeedapi.com"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: APIKey
configuration.api_key['APIKey'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['APIKey'] = 'Bearer'

# Configure Bearer authorization (JWT): JWT
configuration = api_bricks_stock_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_stock_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_stock_api_rest.MetadataApi(api_client)

    try:
        # List of exchanges
        api_response = api_instance.v1_exchanges_get()
        print("The response of MetadataApi->v1_exchanges_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MetadataApi->v1_exchanges_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**List[FinFeedAPIExchangeModel]**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_symbols_exchange_id_get**
> List[FinFeedAPISymbolModel] v1_symbols_exchange_id_get(exchange_id, filter_symbol_id=filter_symbol_id, limit=limit, page=page)

List of symbols for the exchange

Results are paginated. Use `limit` and `page` to control page size and offset
(default limit: 100, max: 10000, default page: 1).

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_stock_api_rest
from api_bricks_stock_api_rest.models.fin_feed_api_symbol_model import FinFeedAPISymbolModel
from api_bricks_stock_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api-historical.stock.finfeedapi.com
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_stock_api_rest.Configuration(
    host = "https://api-historical.stock.finfeedapi.com"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: APIKey
configuration.api_key['APIKey'] = os.environ["API_KEY"]

# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['APIKey'] = 'Bearer'

# Configure Bearer authorization (JWT): JWT
configuration = api_bricks_stock_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_stock_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_stock_api_rest.MetadataApi(api_client)
    exchange_id = 'exchange_id_example' # str | The ID of the exchange (from the Metadata -> Exchanges)
    filter_symbol_id = 'filter_symbol_id_example' # str | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`) (optional)
    limit = 100 # int | Maximum number of symbols to return (1-10000, default 100) (optional) (default to 100)
    page = 1 # int | Page number (1-based, default 1) (optional) (default to 1)

    try:
        # List of symbols for the exchange
        api_response = api_instance.v1_symbols_exchange_id_get(exchange_id, filter_symbol_id=filter_symbol_id, limit=limit, page=page)
        print("The response of MetadataApi->v1_symbols_exchange_id_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling MetadataApi->v1_symbols_exchange_id_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **str**| The ID of the exchange (from the Metadata -&gt; Exchanges) | 
 **filter_symbol_id** | **str**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] 
 **limit** | **int**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **page** | **int**| Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**List[FinFeedAPISymbolModel]**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

