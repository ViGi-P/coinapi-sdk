# WWW::OpenAPIClient::Object::V1QuoteTrade

## Load the model package
```perl
use WWW::OpenAPIClient::Object::V1QuoteTrade;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **string** | Gets or sets the symbol identifier. | [optional] 
**time_exchange** | **DATE_TIME** | Gets or sets the exchange time of the quote trade. | [optional] 
**time_coinapi** | **DATE_TIME** | Gets or sets the CoinAPI time when the quote trade was received. | [optional] 
**ask_price** | **double** | Gets or sets the best asking price. | [optional] 
**ask_size** | **double** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**bid_price** | **double** | Gets or sets the best bidding price. | [optional] 
**bid_size** | **double** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 
**last_trade** | [**V1LastTrade**](V1LastTrade.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


