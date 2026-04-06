# api_bricks_coinapi_indexes_api_rest.IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexdef_input_data_index_definition_id_all_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_all_get) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1_indexdef_input_data_index_definition_id_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_get) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **v1_indexdef_input_data_index_definition_id_all_get**
> List[ModelsIndexDefinitionInputData] v1_indexdef_input_data_index_definition_id_all_get(index_definition_id)

Returns all data inputs for a specific index definition

### Example

* Api Key Authentication (APIKey):
* Bearer (JWT) Authentication (JWT):

```python
import api_bricks_coinapi_indexes_api_rest
from api_bricks_coinapi_indexes_api_rest.models.models_index_definition_input_data import ModelsIndexDefinitionInputData
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
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexInputDataApi(api_client)
    index_definition_id = 'index_definition_id_example' # str | 

    try:
        # Returns all data inputs for a specific index definition
        api_response = api_instance.v1_indexdef_input_data_index_definition_id_all_get(index_definition_id)
        print("The response of IndexInputDataApi->v1_indexdef_input_data_index_definition_id_all_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_all_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **str**|  | 

### Return type

[**List[ModelsIndexDefinitionInputData]**](ModelsIndexDefinitionInputData.md)

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

# **v1_indexdef_input_data_index_definition_id_get**
> List[ModelsIndexDefinitionSnapshotEntry] v1_indexdef_input_data_index_definition_id_get(index_definition_id, time=time, enabled_only=enabled_only, pending_only=pending_only, filter_asset_id=filter_asset_id, with_status_info=with_status_info)

Returns data inputs for certain index definition and time

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
    api_instance = api_bricks_coinapi_indexes_api_rest.IndexInputDataApi(api_client)
    index_definition_id = 'index_definition_id_example' # str | 
    time = '2013-10-20T19:20:30+01:00' # datetime |  (optional)
    enabled_only = False # bool |  (optional) (default to False)
    pending_only = False # bool |  (optional) (default to False)
    filter_asset_id = 'filter_asset_id_example' # str |  (optional)
    with_status_info = False # bool |  (optional) (default to False)

    try:
        # Returns data inputs for certain index definition and time
        api_response = api_instance.v1_indexdef_input_data_index_definition_id_get(index_definition_id, time=time, enabled_only=enabled_only, pending_only=pending_only, filter_asset_id=filter_asset_id, with_status_info=with_status_info)
        print("The response of IndexInputDataApi->v1_indexdef_input_data_index_definition_id_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **str**|  | 
 **time** | **datetime**|  | [optional] 
 **enabled_only** | **bool**|  | [optional] [default to False]
 **pending_only** | **bool**|  | [optional] [default to False]
 **filter_asset_id** | **str**|  | [optional] 
 **with_status_info** | **bool**|  | [optional] [default to False]

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

