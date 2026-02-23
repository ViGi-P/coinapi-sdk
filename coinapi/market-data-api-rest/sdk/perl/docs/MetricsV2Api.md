# WWW::OpenAPIClient::MetricsV2Api

## Load the API package
```perl
use WWW::OpenAPIClient::Object::MetricsV2Api;
```

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**marketdata_list_metrics_v2_asset_history**](MetricsV2Api.md#marketdata_list_metrics_v2_asset_history) | **GET** /v2/metrics/asset/history | Historical metrics for the asset
[**marketdata_list_metrics_v2_asset_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_asset_listing) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**marketdata_list_metrics_v2_chain_history**](MetricsV2Api.md#marketdata_list_metrics_v2_chain_history) | **GET** /v2/metrics/chain/history | Historical metrics for the chain
[**marketdata_list_metrics_v2_chain_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_chain_listing) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**marketdata_list_metrics_v2_exchange_history**](MetricsV2Api.md#marketdata_list_metrics_v2_exchange_history) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange
[**marketdata_list_metrics_v2_exchange_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_exchange_listing) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**marketdata_list_metrics_v2_listing**](MetricsV2Api.md#marketdata_list_metrics_v2_listing) | **GET** /v2/metrics/listing | Listing of all supported metrics


# **marketdata_list_metrics_v2_asset_history**
> ARRAY[object] marketdata_list_metrics_v2_asset_history(metric_id => $metric_id, asset_id => $asset_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit)

Historical metrics for the asset

Get asset metrics history.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $metric_id = "metric_id_example"; # string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
my $asset_id = "asset_id_example"; # string | Asset identifier (e.g., `USDC`, `USDT`)
my $time_start = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Starting time in ISO 8601
my $time_end = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Ending time in ISO 8601
my $time_format = "time_format_example"; # string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
my $period_id = "period_id_example"; # string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
my $limit = 100; # int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_asset_history(metric_id => $metric_id, asset_id => $asset_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_asset_history: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **string**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **asset_id** | **string**| Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) | 
 **time_start** | **DATE_TIME**| Starting time in ISO 8601 | [optional] 
 **time_end** | **DATE_TIME**| Ending time in ISO 8601 | [optional] 
 **time_format** | **string**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **string**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**ARRAY[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_asset_listing**
> ARRAY[V1MetricInfo] marketdata_list_metrics_v2_asset_listing(asset_id => $asset_id)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $asset_id = "asset_id_example"; # string | Asset identifier (e.g., USDC, USDT)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_asset_listing(asset_id => $asset_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_asset_listing: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **asset_id** | **string**| Asset identifier (e.g., USDC, USDT) | 

### Return type

[**ARRAY[V1MetricInfo]**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_chain_history**
> ARRAY[object] marketdata_list_metrics_v2_chain_history(metric_id => $metric_id, chain_id => $chain_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit)

Historical metrics for the chain

Get chain metrics history.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $metric_id = "metric_id_example"; # string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
my $chain_id = "chain_id_example"; # string | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
my $time_start = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Starting time in ISO 8601
my $time_end = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Ending time in ISO 8601
my $time_format = "time_format_example"; # string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
my $period_id = "period_id_example"; # string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
my $limit = 100; # int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_chain_history(metric_id => $metric_id, chain_id => $chain_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_chain_history: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **string**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **chain_id** | **string**| Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) | 
 **time_start** | **DATE_TIME**| Starting time in ISO 8601 | [optional] 
 **time_end** | **DATE_TIME**| Ending time in ISO 8601 | [optional] 
 **time_format** | **string**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **string**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**ARRAY[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_chain_listing**
> ARRAY[V1MetricInfo] marketdata_list_metrics_v2_chain_listing(chain_id => $chain_id)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $chain_id = "chain_id_example"; # string | Chain identifier (e.g., ETHEREUM, ARBITRUM)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_chain_listing(chain_id => $chain_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_chain_listing: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chain_id** | **string**| Chain identifier (e.g., ETHEREUM, ARBITRUM) | 

### Return type

[**ARRAY[V1MetricInfo]**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_exchange_history**
> ARRAY[object] marketdata_list_metrics_v2_exchange_history(metric_id => $metric_id, exchange_id => $exchange_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit)

Historical metrics for the exchange

Get exchange metrics history.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $metric_id = "metric_id_example"; # string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
my $exchange_id = "exchange_id_example"; # string | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
my $time_start = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Starting time in ISO 8601
my $time_end = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Ending time in ISO 8601
my $time_format = "time_format_example"; # string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
my $period_id = "period_id_example"; # string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
my $limit = 100; # int | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_exchange_history(metric_id => $metric_id, exchange_id => $exchange_id, time_start => $time_start, time_end => $time_end, time_format => $time_format, period_id => $period_id, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_history: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metric_id** | **string**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **exchange_id** | **string**| Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) | 
 **time_start** | **DATE_TIME**| Starting time in ISO 8601 | [optional] 
 **time_end** | **DATE_TIME**| Ending time in ISO 8601 | [optional] 
 **time_format** | **string**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] 
 **period_id** | **string**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] 
 **limit** | **int**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

**ARRAY[object]**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_exchange_listing**
> ARRAY[V1MetricInfo] marketdata_list_metrics_v2_exchange_listing(exchange_id => $exchange_id)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $exchange_id = "exchange_id_example"; # string | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)

eval {
    my $result = $api_instance->marketdata_list_metrics_v2_exchange_listing(exchange_id => $exchange_id);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_exchange_listing: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchange_id** | **string**| Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) | 

### Return type

[**ARRAY[V1MetricInfo]**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **marketdata_list_metrics_v2_listing**
> ARRAY[V1MetricInfo] marketdata_list_metrics_v2_listing()

Listing of all supported metrics

Get all metrics available in the system.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::MetricsV2Api;
my $api_instance = WWW::OpenAPIClient::MetricsV2Api->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);


eval {
    my $result = $api_instance->marketdata_list_metrics_v2_listing();
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling MetricsV2Api->marketdata_list_metrics_v2_listing: $@\n";
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ARRAY[V1MetricInfo]**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

