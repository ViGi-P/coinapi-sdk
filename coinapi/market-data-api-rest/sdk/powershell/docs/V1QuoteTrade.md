# V1QuoteTrade
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**TimeExchange** | **System.DateTime** | Gets or sets the exchange time of the quote trade. | [optional] 
**TimeCoinapi** | **System.DateTime** | Gets or sets the CoinAPI time when the quote trade was received. | [optional] 
**AskPrice** | **Double** | Gets or sets the best asking price. | [optional] 
**AskSize** | **Double** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**BidPrice** | **Double** | Gets or sets the best bidding price. | [optional] 
**BidSize** | **Double** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 
**LastTrade** | [**V1LastTrade**](V1LastTrade.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$V1QuoteTrade = Initialize-PSOpenAPIToolsV1QuoteTrade  -SymbolId null `
 -TimeExchange null `
 -TimeCoinapi null `
 -AskPrice null `
 -AskSize null `
 -BidPrice null `
 -BidSize null `
 -LastTrade null
```

- Convert the resource to JSON
```powershell
$V1QuoteTrade | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

