# APIBricks.CoinAPI.MarketDataAPI.REST.V1.Model.V1QuoteTrade
Represents a quote trade data model.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | **string** | Gets or sets the symbol identifier. | [optional] 
**TimeExchange** | **DateTime** | Gets or sets the exchange time of the quote trade. | [optional] 
**TimeCoinapi** | **DateTime** | Gets or sets the CoinAPI time when the quote trade was received. | [optional] 
**AskPrice** | **double** | Gets or sets the best asking price. | [optional] 
**AskSize** | **double** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**BidPrice** | **double** | Gets or sets the best bidding price. | [optional] 
**BidSize** | **double** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 
**LastTrade** | [**V1LastTrade**](V1LastTrade.md) |  | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

