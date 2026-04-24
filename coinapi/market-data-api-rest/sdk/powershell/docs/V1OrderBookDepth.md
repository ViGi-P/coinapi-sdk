# V1OrderBookDepth
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**TimeExchange** | **System.DateTime** | Gets or sets the exchange time of the order book. | [optional] 
**TimeCoinapi** | **System.DateTime** | Gets or sets the CoinAPI time when the order book was received. | [optional] 
**AskLevels** | **Int64** | Gets or sets the number of ask levels in the order book. | [optional] 
**BidLevels** | **Int64** | Gets or sets the number of bid levels in the order book. | [optional] 
**AskDepth** | **Double** | Gets or sets the depth of the ask side of the order book. | [optional] 
**BidDepth** | **Double** | Gets or sets the depth of the bid side of the order book. | [optional] 

## Examples

- Prepare the resource
```powershell
$V1OrderBookDepth = Initialize-PSOpenAPIToolsV1OrderBookDepth  -SymbolId null `
 -TimeExchange null `
 -TimeCoinapi null `
 -AskLevels null `
 -BidLevels null `
 -AskDepth null `
 -BidDepth null
```

- Convert the resource to JSON
```powershell
$V1OrderBookDepth | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

