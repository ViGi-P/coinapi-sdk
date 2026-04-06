# api_bricks_coinapi_indexes_api_rest.IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexes_get**](IndexesApi.md#v1_indexes_get) | **GET** /v1/indexes | List indexes
[**v1_indexes_index_definition_id_current_snapshot_get**](IndexesApi.md#v1_indexes_index_definition_id_current_snapshot_get) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition
[**v1_indexes_index_definition_id_history_snapshot_get**](IndexesApi.md#v1_indexes_index_definition_id_history_snapshot_get) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition
[**v1_indexes_index_id_current_get**](IndexesApi.md#v1_indexes_index_id_current_get) | **GET** /v1/indexes/{index_id}/current | Current Index Value
[**v1_indexes_index_id_history_get**](IndexesApi.md#v1_indexes_index_id_history_get) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition
[**v1_indexes_index_id_timeseries_get**](IndexesApi.md#v1_indexes_index_id_timeseries_get) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value


# **v1_indexes_get**
> List[ModelsIndexIdentifier] v1_indexes_get()

List indexes

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_identifier import ModelsIndexIdentifier
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)

    try:
        # List indexes
        api_response = api_instance.v1_indexes_get()
        print("The response of IndexesApi->v1_indexes_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**List[ModelsIndexIdentifier]**](ModelsIndexIdentifier.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexes_index_definition_id_current_snapshot_get**
> List[ModelsIndexDefinitionSnapshotEntry] v1_indexes_index_definition_id_current_snapshot_get(index_definition_id)

Current Index Values for index definition

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_definition_snapshot_entry import ModelsIndexDefinitionSnapshotEntry
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)
    index_definition_id = 'index_definition_id_example' # str | 

    try:
        # Current Index Values for index definition
        api_response = api_instance.v1_indexes_index_definition_id_current_snapshot_get(index_definition_id)
        print("The response of IndexesApi->v1_indexes_index_definition_id_current_snapshot_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_index_definition_id_current_snapshot_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **str**|  | 

### Return type

[**List[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexes_index_definition_id_history_snapshot_get**
> List[ModelsIndexDefinitionSnapshotEntry] v1_indexes_index_definition_id_history_snapshot_get(index_definition_id, time=time)

Historical Index Values for index definition

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_definition_snapshot_entry import ModelsIndexDefinitionSnapshotEntry
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)
    index_definition_id = 'index_definition_id_example' # str | 
    time = '2013-10-20T19:20:30+01:00' # datetime |  (optional)

    try:
        # Historical Index Values for index definition
        api_response = api_instance.v1_indexes_index_definition_id_history_snapshot_get(index_definition_id, time=time)
        print("The response of IndexesApi->v1_indexes_index_definition_id_history_snapshot_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_index_definition_id_history_snapshot_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **str**|  | 
 **time** | **datetime**|  | [optional] 

### Return type

[**List[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexes_index_id_current_get**
> ModelsIndexValue v1_indexes_index_id_current_get(index_id)

Current Index Value

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_value import ModelsIndexValue
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)
    index_id = 'index_id_example' # str | 

    try:
        # Current Index Value
        api_response = api_instance.v1_indexes_index_id_current_get(index_id)
        print("The response of IndexesApi->v1_indexes_index_id_current_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_index_id_current_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **str**|  | 

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexes_index_id_history_get**
> List[ModelsIndexValue] v1_indexes_index_id_history_get(index_id, time_start=time_start, time_end=time_end, limit=limit)

Historical Index Value w/Composition

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_value import ModelsIndexValue
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)
    index_id = 'index_id_example' # str | 
    time_start = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    time_end = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    limit = 100 # int |  (optional) (default to 100)

    try:
        # Historical Index Value w/Composition
        api_response = api_instance.v1_indexes_index_id_history_get(index_id, time_start=time_start, time_end=time_end, limit=limit)
        print("The response of IndexesApi->v1_indexes_index_id_history_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_index_id_history_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **str**|  | 
 **time_start** | **datetime**|  | [optional] 
 **time_end** | **datetime**|  | [optional] 
 **limit** | **int**|  | [optional] [default to 100]

### Return type

[**List[ModelsIndexValue]**](ModelsIndexValue.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexes_index_id_timeseries_get**
> List[ModelsIndexTimeseriesItem] v1_indexes_index_id_timeseries_get(index_id, period_id, time_start, time_end, limit=limit)

Timeseries Index Value

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_timeseries_item import ModelsIndexTimeseriesItem
from api_bricks_coinapi_indexes_api_rest.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://rest-api.indexes.coinapi.io
# See configuration.py for a list of all supported configuration parameters.
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    host = "https://rest-api.indexes.coinapi.io"
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
configuration = api_bricks_coinapi_indexes_api_rest.Configuration(
    access_token = os.environ["BEARER_TOKEN"]
)

# Enter a context with an instance of the API client
with api_bricks_coinapi_indexes_api_rest.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexesApi(api_client)
    index_id = 'index_id_example' # str | 
    period_id = 'period_id_example' # str | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
    time_start = 'time_start_example' # str | Timeseries starting time in ISO 8601
    time_end = 'time_end_example' # str | Timeseries ending time in ISO 8601
    limit = 100 # int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (optional) (default to 100)

    try:
        # Timeseries Index Value
        api_response = api_instance.v1_indexes_index_id_timeseries_get(index_id, period_id, time_start, time_end, limit=limit)
        print("The response of IndexesApi->v1_indexes_index_id_timeseries_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexesApi->v1_indexes_index_id_timeseries_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **str**|  | 
 **period_id** | **str**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | 
 **time_start** | **str**| Timeseries starting time in ISO 8601 | 
 **time_end** | **str**| Timeseries ending time in ISO 8601 | 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**List[ModelsIndexTimeseriesItem]**](ModelsIndexTimeseriesItem.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

