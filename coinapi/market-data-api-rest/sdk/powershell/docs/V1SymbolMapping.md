# V1SymbolMapping
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **String** | Gets or sets the symbol ID. | [optional] 
**SymbolIdExchange** | **String** | Gets or sets the exchange-specific symbol ID. | [optional] 
**CoinapiDatainfoId** | **Int32** | Gets or sets the DataInfo ID. | [optional] 
**AssetIdBaseExchange** | **String** | Gets or sets the exchange-specific base asset ID. | [optional] 
**AssetIdQuoteExchange** | **String** | Gets or sets the exchange-specific quote asset ID. | [optional] 
**AssetIdBase** | **String** | Gets or sets the base asset ID. | [optional] 
**AssetIdQuote** | **String** | Gets or sets the quote asset ID. | [optional] 
**PricePrecision** | **Double** | Gets or sets the price precision. | [optional] 
**SizePrecision** | **Double** | Gets or sets the size precision. | [optional] 

## Examples

- Prepare the resource
```powershell
$V1SymbolMapping = Initialize-PSOpenAPIToolsV1SymbolMapping  -SymbolId null `
 -SymbolIdExchange null `
 -CoinapiDatainfoId null `
 -AssetIdBaseExchange null `
 -AssetIdQuoteExchange null `
 -AssetIdBase null `
 -AssetIdQuote null `
 -PricePrecision null `
 -SizePrecision null
```

- Convert the resource to JSON
```powershell
$V1SymbolMapping | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

