# CoinApiMarketDataRestApi.V1Exchange

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchangeId** | **String** | Gets or sets the exchange ID. | [optional] 
**website** | **String** | Gets or sets the website URL of the exchange. | [optional] 
**name** | **String** | Gets or sets the name of the exchange. | [optional] 
**dataStart** | **String** | Gets the start date of the exchange&#39;s data. | [optional] [readonly] 
**dataEnd** | **String** | Gets the end date of the exchange&#39;s data. | [optional] [readonly] 
**dataQuoteStart** | **Date** | Gets or sets the start date of quote data. | [optional] 
**dataQuoteEnd** | **Date** | Gets or sets the end date of quote data. | [optional] 
**dataOrderbookStart** | **Date** | Gets or sets the start date of order book data. | [optional] 
**dataOrderbookEnd** | **Date** | Gets or sets the end date of order book data. | [optional] 
**dataTradeStart** | **Date** | Gets or sets the start date of trade data. | [optional] 
**dataTradeEnd** | **Date** | Gets or sets the end date of trade data. | [optional] 
**dataTradeCount** | **Number** | Gets or sets the number of trades. | [optional] 
**dataSymbolsCount** | **Number** | Gets or sets the number of symbols. | [optional] 
**volume1hrsUsd** | **Number** | Gets or sets the USD volume in the last 1 hour. | [optional] 
**volume1dayUsd** | **Number** | Gets or sets the USD volume in the last 1 day. | [optional] 
**volume1mthUsd** | **Number** | Gets or sets the USD volume in the last 1 month. | [optional] 
**metricId** | **[String]** | Gets or sets the list of metric IDs. | [optional] 
**icons** | [**[V1Icon]**](V1Icon.md) | Gets or sets the list of icons for the exchange. | [optional] [readonly] 
**rank** | **Number** | Rank of the exchange - higher rank means exchange is more reliable | [optional] 
**integrationStatus** | **String** | Status of the integration | [optional] 


