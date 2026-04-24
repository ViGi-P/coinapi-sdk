# V1ListingItem
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**MetricId** | **String** | Gets or sets the metric ID. | [optional] 
**SymbolId** | **String** | Gets or sets the CoinAPI symbol ID. Null for exchange-level metrics. | [optional] 
**SymbolIdExternal** | **String** | Gets or sets the exchange-native symbol ID. Null for exchange-level metrics. | [optional] 
**ExchangeId** | **String** | Gets or sets the exchange ID. | [optional] 
**AssetId** | **String** | Gets or sets the asset ID. | [optional] 
**AssetIdExternal** | **String** | Gets or sets the asset ID. | [optional] 
**ChainId** | **String** | Gets or sets the chain ID. | [optional] 
**NetworkId** | **String** | Gets or sets the network ID. | [optional] 

## Examples

- Prepare the resource
```powershell
$V1ListingItem = Initialize-PSOpenAPIToolsV1ListingItem  -MetricId null `
 -SymbolId null `
 -SymbolIdExternal null `
 -ExchangeId null `
 -AssetId null `
 -AssetIdExternal null `
 -ChainId null `
 -NetworkId null
```

- Convert the resource to JSON
```powershell
$V1ListingItem | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

