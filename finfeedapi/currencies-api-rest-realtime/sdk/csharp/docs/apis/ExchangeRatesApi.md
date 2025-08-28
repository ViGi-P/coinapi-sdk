# APIBricks.FinFeedAPI.CurrenciesAPI.REST.V1.Realtime.Api.ExchangeRatesApi

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**GetSpecificRate**](ExchangeRatesApi.md#getspecificrate) | **GET** /v1/exchangerate/{asset_id_base}/{asset_id_quote} | Get specific rate |
| [**V1ExchangerateAssetIdBaseGet**](ExchangeRatesApi.md#v1exchangerateassetidbaseget) | **GET** /v1/exchangerate/{asset_id_base} | Get all current rates |

<a id="getspecificrate"></a>
# **GetSpecificRate**
> V1ExchangeRate GetSpecificRate (string assetIdBase, string assetIdQuote)

Get specific rate

Retrieves the exchange rate for a specific base and quote asset at a given time or the current rate.              :::info If you are using an exchange rate for mission-critical operations, then for best reliability, you should measure the difference between current time and the time returned from the response to ensure that value of the difference between those meets your internal requirements. :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **assetIdBase** | **string** | Requested exchange rate base asset identifier (from the Metadata -&gt; Assets) |  |
| **assetIdQuote** | **string** | Requested exchange rate quote asset identifier (from the Metadata -&gt; Assets) |  |

### Return type

[**V1ExchangeRate**](V1ExchangeRate.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1exchangerateassetidbaseget"></a>
# **V1ExchangerateAssetIdBaseGet**
> V1ExchangeRates V1ExchangerateAssetIdBaseGet (string assetIdBase, string filterAssetId = null, bool invert = null)

Get all current rates

Get the current exchange rate between requested asset and all other assets.              :::info If you are using an exchange rate for mission-critical operations, then for best reliability, you should measure the difference between current time and the time returned from the response to ensure that value of the difference between those meets your internal requirements. :::              :::info You can invert the rates by using Y = 1 / X equation, for example BTC/USD = 1 / (USD/BTC); :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **assetIdBase** | **string** | Requested exchange rates base asset identifier (from the Metadata -&gt; Assets) |  |
| **filterAssetId** | **string** | Comma or semicolon delimited asset identifiers used to filter response (optional) | [optional]  |
| **invert** | **bool** | True will invert all the rates (optional, if true then rates will be calculated as &#x60;rate &#x3D; 1 / actual_rate&#x60; eg. &#x60;USD/BTC&#x60; as &#x60;BTC/USD&#x60;) | [optional] [default to false] |

### Return type

[**V1ExchangeRates**](V1ExchangeRates.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

