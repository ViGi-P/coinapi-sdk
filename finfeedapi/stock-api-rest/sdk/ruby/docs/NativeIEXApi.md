# OpenapiClient::NativeIEXApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**v1_native_iex_admin_messages_symbol_get**](NativeIEXApi.md#v1_native_iex_admin_messages_symbol_get) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages |
| [**v1_native_iex_admin_system_event_get**](NativeIEXApi.md#v1_native_iex_admin_system_event_get) | **GET** /v1/native/iex/admin/system-event | Get System Events |
| [**v1_native_iex_level1_quote_symbol_get**](NativeIEXApi.md#v1_native_iex_level1_quote_symbol_get) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes |
| [**v1_native_iex_level2_price_level_update_symbol_get**](NativeIEXApi.md#v1_native_iex_level2_price_level_update_symbol_get) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book |
| [**v1_native_iex_level3_order_book_symbol_get**](NativeIEXApi.md#v1_native_iex_level3_order_book_symbol_get) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book |
| [**v1_native_iex_trade_symbol_get**](NativeIEXApi.md#v1_native_iex_trade_symbol_get) | **GET** /v1/native/iex/trade/{symbol} | Get Trades |


## v1_native_iex_admin_messages_symbol_get

> <Array<ModelsAdminMessageModel>> v1_native_iex_admin_messages_symbol_get(symbol, date)

Get Admin Messages

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
symbol = 'symbol_example' # String | The symbol identifier
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Optional date in format YYYY-MM-DD (defaults to latest available data)

begin
  # Get Admin Messages
  result = api_instance.v1_native_iex_admin_messages_symbol_get(symbol, date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_admin_messages_symbol_get: #{e}"
end
```

#### Using the v1_native_iex_admin_messages_symbol_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsAdminMessageModel>>, Integer, Hash)> v1_native_iex_admin_messages_symbol_get_with_http_info(symbol, date)

```ruby
begin
  # Get Admin Messages
  data, status_code, headers = api_instance.v1_native_iex_admin_messages_symbol_get_with_http_info(symbol, date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsAdminMessageModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_admin_messages_symbol_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol** | **String** | The symbol identifier |  |
| **date** | **Time** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**Array&lt;ModelsAdminMessageModel&gt;**](ModelsAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1_native_iex_admin_system_event_get

> <Array<IEXSystemEventSystemEventModel>> v1_native_iex_admin_system_event_get(date)

Get System Events

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Date in format YYYY-MM-DD

begin
  # Get System Events
  result = api_instance.v1_native_iex_admin_system_event_get(date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_admin_system_event_get: #{e}"
end
```

#### Using the v1_native_iex_admin_system_event_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IEXSystemEventSystemEventModel>>, Integer, Hash)> v1_native_iex_admin_system_event_get_with_http_info(date)

```ruby
begin
  # Get System Events
  data, status_code, headers = api_instance.v1_native_iex_admin_system_event_get_with_http_info(date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IEXSystemEventSystemEventModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_admin_system_event_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **date** | **Time** | Date in format YYYY-MM-DD |  |

### Return type

[**Array&lt;IEXSystemEventSystemEventModel&gt;**](IEXSystemEventSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1_native_iex_level1_quote_symbol_get

> <Array<IEXQuoteUpdateQuoteUpdateModel>> v1_native_iex_level1_quote_symbol_get(symbol, date)

Get Level-1 Quotes

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
symbol = 'symbol_example' # String | The symbol identifier
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Optional date in format YYYY-MM-DD (defaults to latest available data)

begin
  # Get Level-1 Quotes
  result = api_instance.v1_native_iex_level1_quote_symbol_get(symbol, date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level1_quote_symbol_get: #{e}"
end
```

#### Using the v1_native_iex_level1_quote_symbol_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IEXQuoteUpdateQuoteUpdateModel>>, Integer, Hash)> v1_native_iex_level1_quote_symbol_get_with_http_info(symbol, date)

```ruby
begin
  # Get Level-1 Quotes
  data, status_code, headers = api_instance.v1_native_iex_level1_quote_symbol_get_with_http_info(symbol, date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IEXQuoteUpdateQuoteUpdateModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level1_quote_symbol_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol** | **String** | The symbol identifier |  |
| **date** | **Time** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**Array&lt;IEXQuoteUpdateQuoteUpdateModel&gt;**](IEXQuoteUpdateQuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1_native_iex_level2_price_level_update_symbol_get

> <Array<IEXPriceLevelUpdatePriceLevelUpdateModel>> v1_native_iex_level2_price_level_update_symbol_get(symbol, date)

Get Level-2 Price Level Book

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
symbol = 'symbol_example' # String | The symbol identifier
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Optional date in format YYYY-MM-DD (defaults to latest available data)

begin
  # Get Level-2 Price Level Book
  result = api_instance.v1_native_iex_level2_price_level_update_symbol_get(symbol, date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level2_price_level_update_symbol_get: #{e}"
end
```

#### Using the v1_native_iex_level2_price_level_update_symbol_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IEXPriceLevelUpdatePriceLevelUpdateModel>>, Integer, Hash)> v1_native_iex_level2_price_level_update_symbol_get_with_http_info(symbol, date)

```ruby
begin
  # Get Level-2 Price Level Book
  data, status_code, headers = api_instance.v1_native_iex_level2_price_level_update_symbol_get_with_http_info(symbol, date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IEXPriceLevelUpdatePriceLevelUpdateModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level2_price_level_update_symbol_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol** | **String** | The symbol identifier |  |
| **date** | **Time** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**Array&lt;IEXPriceLevelUpdatePriceLevelUpdateModel&gt;**](IEXPriceLevelUpdatePriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1_native_iex_level3_order_book_symbol_get

> <Array<ModelsOrderBookModel>> v1_native_iex_level3_order_book_symbol_get(symbol, date)

Get Level-3 Order Book

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
symbol = 'symbol_example' # String | The symbol identifier
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Optional date in format YYYY-MM-DD (defaults to latest available data)

begin
  # Get Level-3 Order Book
  result = api_instance.v1_native_iex_level3_order_book_symbol_get(symbol, date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level3_order_book_symbol_get: #{e}"
end
```

#### Using the v1_native_iex_level3_order_book_symbol_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<ModelsOrderBookModel>>, Integer, Hash)> v1_native_iex_level3_order_book_symbol_get_with_http_info(symbol, date)

```ruby
begin
  # Get Level-3 Order Book
  data, status_code, headers = api_instance.v1_native_iex_level3_order_book_symbol_get_with_http_info(symbol, date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<ModelsOrderBookModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_level3_order_book_symbol_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol** | **String** | The symbol identifier |  |
| **date** | **Time** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**Array&lt;ModelsOrderBookModel&gt;**](ModelsOrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## v1_native_iex_trade_symbol_get

> <Array<IEXTradeTradeModel>> v1_native_iex_trade_symbol_get(symbol, date)

Get Trades

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure API key authorization: APIKey
  config.api_key['Authorization'] = 'YOUR API KEY'
  # Uncomment the following line to set a prefix for the API key, e.g. 'Bearer' (defaults to nil)
  # config.api_key_prefix['Authorization'] = 'Bearer'

  # Configure Bearer authorization (JWT): JWT
  config.access_token = 'YOUR_BEARER_TOKEN'
end

api_instance = OpenapiClient::NativeIEXApi.new
symbol = 'symbol_example' # String | The symbol identifier
date = Time.parse('2013-10-20T19:20:30+01:00') # Time | Optional date in format YYYY-MM-DD (defaults to latest available data)

begin
  # Get Trades
  result = api_instance.v1_native_iex_trade_symbol_get(symbol, date)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_trade_symbol_get: #{e}"
end
```

#### Using the v1_native_iex_trade_symbol_get_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Array<IEXTradeTradeModel>>, Integer, Hash)> v1_native_iex_trade_symbol_get_with_http_info(symbol, date)

```ruby
begin
  # Get Trades
  data, status_code, headers = api_instance.v1_native_iex_trade_symbol_get_with_http_info(symbol, date)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Array<IEXTradeTradeModel>>
rescue OpenapiClient::ApiError => e
  puts "Error when calling NativeIEXApi->v1_native_iex_trade_symbol_get_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol** | **String** | The symbol identifier |  |
| **date** | **Time** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**Array&lt;IEXTradeTradeModel&gt;**](IEXTradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

