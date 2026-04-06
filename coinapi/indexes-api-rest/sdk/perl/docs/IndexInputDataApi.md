# WWW::OpenAPIClient::IndexInputDataApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::IndexInputDataApi;
```

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexdef_input_data_index_definition_id_all_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_all_get) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**v1_indexdef_input_data_index_definition_id_get**](IndexInputDataApi.md#v1_indexdef_input_data_index_definition_id_get) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


# **v1_indexdef_input_data_index_definition_id_all_get**
> ARRAY[ModelsIndexDefinitionInputData] v1_indexdef_input_data_index_definition_id_all_get(index_definition_id => $index_definition_id)

Returns all data inputs for a specific index definition

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::IndexInputDataApi;
my $api_instance = WWW::OpenAPIClient::IndexInputDataApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $index_definition_id = "index_definition_id_example"; # string | 

eval {
    my $result = $api_instance->v1_indexdef_input_data_index_definition_id_all_get(index_definition_id => $index_definition_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_all_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **string**|  | 

### Return type

[**ARRAY[ModelsIndexDefinitionInputData]**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexdef_input_data_index_definition_id_get**
> ARRAY[ModelsIndexDefinitionSnapshotEntry] v1_indexdef_input_data_index_definition_id_get(index_definition_id => $index_definition_id, time => $time, enabled_only => $enabled_only, pending_only => $pending_only, filter_asset_id => $filter_asset_id, with_status_info => $with_status_info)

Returns data inputs for certain index definition and time

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::IndexInputDataApi;
my $api_instance = WWW::OpenAPIClient::IndexInputDataApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $index_definition_id = "index_definition_id_example"; # string | 
my $time = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | 
my $enabled_only = false; # boolean | 
my $pending_only = false; # boolean | 
my $filter_asset_id = "filter_asset_id_example"; # string | 
my $with_status_info = false; # boolean | 

eval {
    my $result = $api_instance->v1_indexdef_input_data_index_definition_id_get(index_definition_id => $index_definition_id, time => $time, enabled_only => $enabled_only, pending_only => $pending_only, filter_asset_id => $filter_asset_id, with_status_info => $with_status_info);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling IndexInputDataApi->v1_indexdef_input_data_index_definition_id_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_definition_id** | **string**|  | 
 **time** | **DATE_TIME**|  | [optional] 
 **enabled_only** | **boolean**|  | [optional] [default to false]
 **pending_only** | **boolean**|  | [optional] [default to false]
 **filter_asset_id** | **string**|  | [optional] 
 **with_status_info** | **boolean**|  | [optional] [default to false]

### Return type

[**ARRAY[ModelsIndexDefinitionSnapshotEntry]**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

