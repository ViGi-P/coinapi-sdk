# APIBricks.CoinAPI.ExchangeRatesAPI.Historical.REST.V1.Api.MetadataApi

All URIs are relative to *https://api-historical.exrates.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1AssetsAssetIdGet**](MetadataApi.md#v1assetsassetidget) | **GET** /v1/assets/{asset_id} | List all assets by asset ID |
| [**V1AssetsGet**](MetadataApi.md#v1assetsget) | **GET** /v1/assets | List all assets |
| [**V1AssetsIconsSizeGet**](MetadataApi.md#v1assetsiconssizeget) | **GET** /v1/assets/icons/{size} | List all asset icons |

<a id="v1assetsassetidget"></a>
# **V1AssetsAssetIdGet**
> List&lt;V1Asset&gt; V1AssetsAssetIdGet (string assetId)

List all assets by asset ID


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **assetId** | **string** | The asset ID. |  |

### Return type

[**List&lt;V1Asset&gt;**](V1Asset.md)

### Authorization

[APIKey](../README.md#APIKey)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1assetsget"></a>
# **V1AssetsGet**
> List&lt;V1Asset&gt; V1AssetsGet (string filterAssetId = null)

List all assets

Retrieves all assets.              :::info Our asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency). :::              :::info Properties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **filterAssetId** | **string** | Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. &#x60;BTC;ETH&#x60;). | [optional]  |

### Return type

[**List&lt;V1Asset&gt;**](V1Asset.md)

### Authorization

[APIKey](../README.md#APIKey)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

<a id="v1assetsiconssizeget"></a>
# **V1AssetsIconsSizeGet**
> List&lt;V1Icon&gt; V1AssetsIconsSizeGet (int size)

List all asset icons

Gets the list of icons (of the given size) for all the assets.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **size** | **int** | The size of the icons. |  |

### Return type

[**List&lt;V1Icon&gt;**](V1Icon.md)

### Authorization

[APIKey](../README.md#APIKey)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

