# openapi::V1OrderBook

Represents an order book with additional information and functionality.

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **character** | Gets or sets the symbol identifier. | [optional] 
**time_exchange** | **character** | Gets or sets the exchange time of the order book. | [optional] 
**time_coinapi** | **character** | Gets or sets the CoinAPI time when the order book was received. | [optional] 
**asks** | [**AnyType**](.md) | Gets or sets the asks made by market makers. | [optional] 
**bids** | [**AnyType**](.md) | Gets or sets the bids made by market makers. | [optional] 


