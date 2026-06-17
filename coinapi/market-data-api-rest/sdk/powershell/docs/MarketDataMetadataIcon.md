# MarketDataMetadataIcon
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ExchangeId** | **String** | Gets or sets the exchange ID associated with the icon. | [optional] 
**AssetId** | **String** | Gets or sets the asset ID associated with the icon. | [optional] 
**Url** | **String** | Gets or sets the URL of the icon. | [optional] 

## Examples

- Prepare the resource
```powershell
$MarketDataMetadataIcon = Initialize-PSOpenAPIToolsMarketDataMetadataIcon  -ExchangeId null `
 -AssetId null `
 -Url null
```

- Convert the resource to JSON
```powershell
$MarketDataMetadataIcon | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

