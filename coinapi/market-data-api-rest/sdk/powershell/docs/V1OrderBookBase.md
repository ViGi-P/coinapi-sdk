# V1OrderBookBase
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**TimeExchange** | **System.DateTime** | Gets or sets the exchange time of the order book. | [optional] 
**TimeCoinapi** | **System.DateTime** | Gets or sets the CoinAPI time when the order book was received. | [optional] 
**Asks** | [**AnyType**](.md) | Gets or sets the asks made by market makers. | [optional] 
**Bids** | [**AnyType**](.md) | Gets or sets the bids made by market makers. | [optional] 

## Examples

- Prepare the resource
```powershell
$V1OrderBookBase = Initialize-PSOpenAPIToolsV1OrderBookBase  -SymbolId null `
 -TimeExchange null `
 -TimeCoinapi null `
 -Asks null `
 -Bids null
```

- Convert the resource to JSON
```powershell
$V1OrderBookBase | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

