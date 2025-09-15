# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.MetadataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**ApiMetadataExchangesExchangeIdGet**](MetadataApi.md#apimetadataexchangesexchangeidget) | **GET** /api/metadata/exchanges/{exchange_id} | List all exchanges by exchange_id |
| [**ApiMetadataExchangesGet**](MetadataApi.md#apimetadataexchangesget) | **GET** /api/metadata/exchanges | List all exchanges |

<a id="apimetadataexchangesexchangeidget"></a>
# **ApiMetadataExchangesExchangeIdGet**
> List&lt;MetadataExchange&gt; ApiMetadataExchangesExchangeIdGet (string exchangeId)

List all exchanges by exchange_id


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **exchangeId** | **string** | The ID of the exchange. |  |

### Return type

[**List&lt;MetadataExchange&gt;**](MetadataExchange.md)

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

<a id="apimetadataexchangesget"></a>
# **ApiMetadataExchangesGet**
> List&lt;MetadataExchange&gt; ApiMetadataExchangesGet (string filterExchangeId = null)

List all exchanges

Get a detailed list of exchanges provided by the system.              :::info Properties of the output are providing aggregated information from across all symbols related to the specific exchange. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **filterExchangeId** | **string** | Comma or semicolon delimited exchange identifiers used to filter response. (optional, eg. &#x60;BITSTAMP;GEMINI&#x60;) | [optional]  |

### Return type

[**List&lt;MetadataExchange&gt;**](MetadataExchange.md)

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

