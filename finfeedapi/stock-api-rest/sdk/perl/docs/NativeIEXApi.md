# WWW::OpenAPIClient::NativeIEXApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::NativeIEXApi;
```

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**v1_native_iex_admin_messages_symbol_get**](NativeIEXApi.md#v1_native_iex_admin_messages_symbol_get) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages
[**v1_native_iex_admin_system_event_get**](NativeIEXApi.md#v1_native_iex_admin_system_event_get) | **GET** /v1/native/iex/admin/system-event | Get System Events
[**v1_native_iex_level1_quote_symbol_get**](NativeIEXApi.md#v1_native_iex_level1_quote_symbol_get) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes
[**v1_native_iex_level2_price_level_update_symbol_get**](NativeIEXApi.md#v1_native_iex_level2_price_level_update_symbol_get) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book
[**v1_native_iex_level3_order_book_symbol_get**](NativeIEXApi.md#v1_native_iex_level3_order_book_symbol_get) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book
[**v1_native_iex_trade_symbol_get**](NativeIEXApi.md#v1_native_iex_trade_symbol_get) | **GET** /v1/native/iex/trade/{symbol} | Get Trades


# **v1_native_iex_admin_messages_symbol_get**
> ARRAY[ModelsAdminMessageModel] v1_native_iex_admin_messages_symbol_get(symbol => $symbol, date => $date, limit => $limit)

Get Admin Messages

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $symbol = "symbol_example"; # string | The symbol identifier
my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_admin_messages_symbol_get(symbol => $symbol, date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_admin_messages_symbol_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| The symbol identifier | 
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[ModelsAdminMessageModel]**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_native_iex_admin_system_event_get**
> ARRAY[IEXSystemEventSystemEventModel] v1_native_iex_admin_system_event_get(date => $date, limit => $limit)

Get System Events

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_admin_system_event_get(date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_admin_system_event_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[IEXSystemEventSystemEventModel]**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_native_iex_level1_quote_symbol_get**
> ARRAY[IEXQuoteUpdateQuoteUpdateModel] v1_native_iex_level1_quote_symbol_get(symbol => $symbol, date => $date, limit => $limit)

Get Level-1 Quotes

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $symbol = "symbol_example"; # string | The symbol identifier
my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_level1_quote_symbol_get(symbol => $symbol, date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_level1_quote_symbol_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| The symbol identifier | 
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[IEXQuoteUpdateQuoteUpdateModel]**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_native_iex_level2_price_level_update_symbol_get**
> ARRAY[IEXPriceLevelUpdatePriceLevelUpdateModel] v1_native_iex_level2_price_level_update_symbol_get(symbol => $symbol, date => $date, limit => $limit)

Get Level-2 Price Level Book

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $symbol = "symbol_example"; # string | The symbol identifier
my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_level2_price_level_update_symbol_get(symbol => $symbol, date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_level2_price_level_update_symbol_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| The symbol identifier | 
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[IEXPriceLevelUpdatePriceLevelUpdateModel]**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_native_iex_level3_order_book_symbol_get**
> ARRAY[ModelsOrderBookModel] v1_native_iex_level3_order_book_symbol_get(symbol => $symbol, date => $date, limit => $limit)

Get Level-3 Order Book

Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $symbol = "symbol_example"; # string | The symbol identifier
my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_level3_order_book_symbol_get(symbol => $symbol, date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_level3_order_book_symbol_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| The symbol identifier | 
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[ModelsOrderBookModel]**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **v1_native_iex_trade_symbol_get**
> ARRAY[IEXTradeTradeModel] v1_native_iex_trade_symbol_get(symbol => $symbol, date => $date, limit => $limit)

Get Trades

Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000).

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::NativeIEXApi;
my $api_instance = WWW::OpenAPIClient::NativeIEXApi->new(

    # Configure API key authorization: APIKey
    api_key => {'Authorization' => 'YOUR_API_KEY'},
    # uncomment below to setup prefix (e.g. Bearer) for API key, if needed
    #api_key_prefix => {'Authorization' => 'Bearer'},
    # Configure bearer access token for authorization: JWT
    access_token => 'YOUR_BEARER_TOKEN',
    
);

my $symbol = "symbol_example"; # string | The symbol identifier
my $date = DateTime->from_epoch(epoch => str2time('null')); # DATE_TIME | Date in format YYYY-MM-DD
my $limit = 100; # int | Maximum number of records to return (1-10000, default 100)

eval {
    my $result = $api_instance->v1_native_iex_trade_symbol_get(symbol => $symbol, date => $date, limit => $limit);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling NativeIEXApi->v1_native_iex_trade_symbol_get: $@\n";
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| The symbol identifier | 
 **date** | **DATE_TIME**| Date in format YYYY-MM-DD | 
 **limit** | **int**| Maximum number of records to return (1-10000, default 100) | [optional] [default to 100]

### Return type

[**ARRAY[IEXTradeTradeModel]**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

