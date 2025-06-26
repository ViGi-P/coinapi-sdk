# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api.OptionsApi

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1OptionsExchangeIdCurrentGet**](OptionsApi.md#v1optionsexchangeidcurrentget) | **GET** /v1/options/{exchange_id}/current | Current data by Exchange |

<a id="v1optionsexchangeidcurrentget"></a>
# **V1OptionsExchangeIdCurrentGet**
> List&lt;OptionsOptionExchangeGroup&gt; V1OptionsExchangeIdCurrentGet (string exchangeId)

Current data by Exchange

Get current options data for a specific exchange.  Returns option data grouped by underlying asset, quote currency, and expiration time, with quotes for both calls and puts at each strike price.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** | Exchange identifier (from the Metadata -&gt; Exchanges) |  |

### Return type

[**List&lt;OptionsOptionExchangeGroup&gt;**](OptionsOptionExchangeGroup.md)

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

