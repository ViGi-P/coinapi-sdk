# WWW::OpenAPIClient::RateLimitApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::RateLimitApi;
```

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**internal_ratelimit_wsconcon_apikey_get**](RateLimitApi.md#internal_ratelimit_wsconcon_apikey_get) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**internal_ratelimit_wshello_ip_get**](RateLimitApi.md#internal_ratelimit_wshello_ip_get) | **GET** /internal/ratelimit/wshello/ip | 
[**internal_ratelimit_wsreq_ip_get**](RateLimitApi.md#internal_ratelimit_wsreq_ip_get) | **GET** /internal/ratelimit/wsreq/ip | 


# **internal_ratelimit_wsconcon_apikey_get**
> internal_ratelimit_wsconcon_apikey_get()



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RateLimitApi;
my $api_instance = WWW::OpenAPIClient::RateLimitApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->internal_ratelimit_wsconcon_apikey_get();
};
if ($@) {
    warn "Exception when calling RateLimitApi->internal_ratelimit_wsconcon_apikey_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **internal_ratelimit_wshello_ip_get**
> internal_ratelimit_wshello_ip_get()



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RateLimitApi;
my $api_instance = WWW::OpenAPIClient::RateLimitApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->internal_ratelimit_wshello_ip_get();
};
if ($@) {
    warn "Exception when calling RateLimitApi->internal_ratelimit_wshello_ip_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **internal_ratelimit_wsreq_ip_get**
> internal_ratelimit_wsreq_ip_get()



### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::RateLimitApi;
my $api_instance = WWW::OpenAPIClient::RateLimitApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    $api_instance->internal_ratelimit_wsreq_ip_get();
};
if ($@) {
    warn "Exception when calling RateLimitApi->internal_ratelimit_wsreq_ip_get: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

