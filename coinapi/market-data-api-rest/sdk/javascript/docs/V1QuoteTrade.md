# CoinApiMarketDataRestApi.V1QuoteTrade

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**timeExchange** | **Date** | Gets or sets the exchange time of the quote trade. | [optional] 
**timeCoinapi** | **Date** | Gets or sets the CoinAPI time when the quote trade was received. | [optional] 
**askPrice** | **Number** | Gets or sets the best asking price. | [optional] 
**askSize** | **Number** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**bidPrice** | **Number** | Gets or sets the best bidding price. | [optional] 
**bidSize** | **Number** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 
**lastTrade** | [**V1LastTrade**](V1LastTrade.md) |  | [optional] 


