# V1Symbol
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**ExchangeId** | **String** | Gets or sets the exchange identifier. | [optional] 
**SymbolType** | **String** | Gets or sets the symbol type. | [optional] 
**AssetIdBase** | **String** | Gets or sets the base asset identifier. | [optional] 
**AssetIdQuote** | **String** | Gets or sets the quote asset identifier. | [optional] 
**AssetIdUnit** | **String** | Gets or sets the unit asset identifier. | [optional] 
**FutureContractUnit** | **Double** | Gets or sets the contract unit for futures. | [optional] 
**FutureContractUnitAsset** | **String** | Gets or sets the asset used as the unit for futures contract. | [optional] 
**FutureDeliveryTime** | **System.DateTime** | Gets or sets the future delivery time for futures contract. | [optional] 
**OptionTypeIsCall** | **Boolean** | Gets or sets a value indicating whether the option type is a call. | [optional] 
**OptionStrikePrice** | **Double** | Gets or sets the strike price for options. | [optional] 
**OptionContractUnit** | **Double** | Gets or sets the contract unit for options. | [optional] 
**OptionExerciseStyle** | **String** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] 
**OptionExpirationTime** | **System.DateTime** | Gets or sets the expiration time for options. | [optional] 
**ContractDeliveryTime** | **System.DateTime** | Gets or sets the delivery time for contracts. | [optional] 
**ContractUnit** | **Double** | Gets or sets the contract unit for contracts. | [optional] 
**ContractUnitAsset** | **String** | Gets or sets the asset used as the unit for contracts. | [optional] 
**ContractId** | **String** | Gets or sets the contract identifier. | [optional] 
**ContractDisplayName** | **String** | Gets or sets the display name of the contract. | [optional] 
**ContractDisplayDescription** | **String** | Gets or sets the display description of the contract. | [optional] 
**DataStart** | **String** | Gets the start date of the data in string format (&quot;&quot;yyyy-MM-dd&quot;&quot;). | [optional] [readonly] 
**DataEnd** | **String** | Gets the end date of the data in string format (&quot;&quot;yyyy-MM-dd&quot;&quot;). | [optional] [readonly] 
**DataQuoteStart** | **System.DateTime** | Gets or sets the start date of quote data. | [optional] 
**DataQuoteEnd** | **System.DateTime** | Gets or sets the end date of quote data. | [optional] 
**DataOrderbookStart** | **System.DateTime** | Gets or sets the start date of order book data. | [optional] 
**DataOrderbookEnd** | **System.DateTime** | Gets or sets the end date of order book data. | [optional] 
**DataTradeStart** | **System.DateTime** | Gets or sets the start date of trade data. | [optional] 
**DataTradeEnd** | **System.DateTime** | Gets or sets the end date of trade data. | [optional] 
**IndexId** | **String** | Gets or sets the index identifier. | [optional] 
**IndexDisplayName** | **String** | Gets or sets the display name of the index. | [optional] 
**IndexDisplayDescription** | **String** | Gets or sets the display description of the index. | [optional] 
**Volume1hrs** | **Double** | Gets or sets the volume in the last 1 hour. | [optional] 
**Volume1hrsUsd** | **Double** | Gets or sets the volume in USD in the last 1 hour. | [optional] 
**Volume1day** | **Double** | Gets or sets the volume in the last 1 day. | [optional] 
**Volume1dayUsd** | **Double** | Gets or sets the volume in USD in the last 1 day. | [optional] 
**Volume1mth** | **Double** | Gets or sets the volume in the last 1 month. | [optional] 
**Volume1mthUsd** | **Double** | Gets or sets the volume in USD in the last 1 month. | [optional] 
**Price** | **Double** | Gets or sets the price. | [optional] 
**SymbolIdExchange** | **String** | Gets or sets the symbol identifier in the exchange. | [optional] 
**AssetIdBaseExchange** | **String** | Gets or sets the base asset identifier in the exchange. | [optional] 
**AssetIdQuoteExchange** | **String** | Gets or sets the quote asset identifier in the exchange. | [optional] 
**PricePrecision** | **Double** | Gets or sets the price precision. | [optional] 
**SizePrecision** | **Double** | Gets or sets the size precision. | [optional] 
**RawKvp** | **System.Collections.Hashtable** | Key Value Pair store with raw data from the data source. | [optional] 
**FutureIsInverse** | **Boolean** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). | [optional] 
**FutureIsQuanto** | **Boolean** | Gets or sets a value indicating whether the futures contract is quanto. | [optional] 
**VolumeToUsd** | **Double** | Gets or sets the volume in USD. | [optional] 
**OptionBarrierUpPrice** | **Double** | Gets or sets the up barrier price for barrier options. | [optional] 
**OptionBarrierUpType** | **String** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**OptionBarrierDownPrice** | **Double** | Gets or sets the down barrier price for barrier options. | [optional] 
**OptionBarrierDownType** | **String** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**SymbolIdInt** | **Int32** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional] [readonly] 

## Examples

- Prepare the resource
```powershell
$V1Symbol = Initialize-PSOpenAPIToolsV1Symbol  -SymbolId null `
 -ExchangeId null `
 -SymbolType null `
 -AssetIdBase null `
 -AssetIdQuote null `
 -AssetIdUnit null `
 -FutureContractUnit null `
 -FutureContractUnitAsset null `
 -FutureDeliveryTime null `
 -OptionTypeIsCall null `
 -OptionStrikePrice null `
 -OptionContractUnit null `
 -OptionExerciseStyle null `
 -OptionExpirationTime null `
 -ContractDeliveryTime null `
 -ContractUnit null `
 -ContractUnitAsset null `
 -ContractId null `
 -ContractDisplayName null `
 -ContractDisplayDescription null `
 -DataStart null `
 -DataEnd null `
 -DataQuoteStart null `
 -DataQuoteEnd null `
 -DataOrderbookStart null `
 -DataOrderbookEnd null `
 -DataTradeStart null `
 -DataTradeEnd null `
 -IndexId null `
 -IndexDisplayName null `
 -IndexDisplayDescription null `
 -Volume1hrs null `
 -Volume1hrsUsd null `
 -Volume1day null `
 -Volume1dayUsd null `
 -Volume1mth null `
 -Volume1mthUsd null `
 -Price null `
 -SymbolIdExchange null `
 -AssetIdBaseExchange null `
 -AssetIdQuoteExchange null `
 -PricePrecision null `
 -SizePrecision null `
 -RawKvp null `
 -FutureIsInverse null `
 -FutureIsQuanto null `
 -VolumeToUsd null `
 -OptionBarrierUpPrice null `
 -OptionBarrierUpType null `
 -OptionBarrierDownPrice null `
 -OptionBarrierDownType null `
 -SymbolIdInt null
```

- Convert the resource to JSON
```powershell
$V1Symbol | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

