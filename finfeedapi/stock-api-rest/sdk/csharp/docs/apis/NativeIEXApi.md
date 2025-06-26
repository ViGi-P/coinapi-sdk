# APIBricks.FinFeedAPI.STOCKAPI.REST.V1.Api.NativeIEXApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1NativeIexAdminMessagesSymbolGet**](NativeIEXApi.md#v1nativeiexadminmessagessymbolget) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages |
| [**V1NativeIexAdminSystemEventGet**](NativeIEXApi.md#v1nativeiexadminsystemeventget) | **GET** /v1/native/iex/admin/system-event | Get System Events |
| [**V1NativeIexLevel1QuoteSymbolGet**](NativeIEXApi.md#v1nativeiexlevel1quotesymbolget) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes |
| [**V1NativeIexLevel2PriceLevelUpdateSymbolGet**](NativeIEXApi.md#v1nativeiexlevel2pricelevelupdatesymbolget) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book |
| [**V1NativeIexLevel3OrderBookSymbolGet**](NativeIEXApi.md#v1nativeiexlevel3orderbooksymbolget) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book |
| [**V1NativeIexTradeSymbolGet**](NativeIEXApi.md#v1nativeiextradesymbolget) | **GET** /v1/native/iex/trade/{symbol} | Get Trades |

<a id="v1nativeiexadminmessagessymbolget"></a>
# **V1NativeIexAdminMessagesSymbolGet**
> List&lt;AdminAdminMessageModel&gt; V1NativeIexAdminMessagesSymbolGet (string symbol, DateTime date)

Get Admin Messages


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbol** | **string** | The symbol identifier |  |
| **date** | **DateTime** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**List&lt;AdminAdminMessageModel&gt;**](AdminAdminMessageModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1nativeiexadminsystemeventget"></a>
# **V1NativeIexAdminSystemEventGet**
> List&lt;AdminSystemEventModel&gt; V1NativeIexAdminSystemEventGet (DateTime date)

Get System Events


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **date** | **DateTime** | Date in format YYYY-MM-DD |  |

### Return type

[**List&lt;AdminSystemEventModel&gt;**](AdminSystemEventModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1nativeiexlevel1quotesymbolget"></a>
# **V1NativeIexLevel1QuoteSymbolGet**
> List&lt;Level1QuoteUpdateModel&gt; V1NativeIexLevel1QuoteSymbolGet (string symbol, DateTime date)

Get Level-1 Quotes


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbol** | **string** | The symbol identifier |  |
| **date** | **DateTime** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**List&lt;Level1QuoteUpdateModel&gt;**](Level1QuoteUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1nativeiexlevel2pricelevelupdatesymbolget"></a>
# **V1NativeIexLevel2PriceLevelUpdateSymbolGet**
> List&lt;Level2PriceLevelUpdateModel&gt; V1NativeIexLevel2PriceLevelUpdateSymbolGet (string symbol, DateTime date)

Get Level-2 Price Level Book


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbol** | **string** | The symbol identifier |  |
| **date** | **DateTime** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**List&lt;Level2PriceLevelUpdateModel&gt;**](Level2PriceLevelUpdateModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1nativeiexlevel3orderbooksymbolget"></a>
# **V1NativeIexLevel3OrderBookSymbolGet**
> List&lt;Level3OrderBookModel&gt; V1NativeIexLevel3OrderBookSymbolGet (string symbol, DateTime date)

Get Level-3 Order Book


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbol** | **string** | The symbol identifier |  |
| **date** | **DateTime** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**List&lt;Level3OrderBookModel&gt;**](Level3OrderBookModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1nativeiextradesymbolget"></a>
# **V1NativeIexTradeSymbolGet**
> List&lt;TradeTradeModel&gt; V1NativeIexTradeSymbolGet (string symbol, DateTime date)

Get Trades


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **symbol** | **string** | The symbol identifier |  |
| **date** | **DateTime** | Optional date in format YYYY-MM-DD (defaults to latest available data) |  |

### Return type

[**List&lt;TradeTradeModel&gt;**](TradeTradeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

