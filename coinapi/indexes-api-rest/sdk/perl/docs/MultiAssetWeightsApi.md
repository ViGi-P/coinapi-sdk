# WWW::OpenAPIClient::MultiAssetWeightsApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::MultiAssetWeightsApi;
```

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_indexdef_multiasset_get**](MultiAssetWeightsApi.md#v1_indexdef_multiasset_get) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**v1_indexdef_multiasset_index_id_get**](MultiAssetWeightsApi.md#v1_indexdef_multiasset_index_id_get) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


# **v1_indexdef_multiasset_get**
> ARRAY[ModelsIndexMultiAssetWeight] v1_indexdef_multiasset_get()

Get all multi-asset weights

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MultiAssetWeightsApi;
my $api_instance = WWW::OpenAPIClient::MultiAssetWeightsApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->v1_indexdef_multiasset_get();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MultiAssetWeightsApi->v1_indexdef_multiasset_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[ModelsIndexMultiAssetWeight]**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_indexdef_multiasset_index_id_get**
> ARRAY[ModelsIndexMultiAssetWeight] v1_indexdef_multiasset_index_id_get(index_id => $index_id)

Get multi-asset weights for specific index

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MultiAssetWeightsApi;
my $api_instance = WWW::OpenAPIClient::MultiAssetWeightsApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $index_id = "index_id_example"; # string | 

eval {
    my $result = $api_instance->v1_indexdef_multiasset_index_id_get(index_id => $index_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MultiAssetWeightsApi->v1_indexdef_multiasset_index_id_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **index_id** | **string**|  | 

### Return type

[**ARRAY[ModelsIndexMultiAssetWeight]**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

