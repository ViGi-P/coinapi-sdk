# V1Trade

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **string** | The symbol identifier. | [optional]
**time_exchange** | **\DateTime** | The time of trade reported by the exchange. | [optional]
**time_coinapi** | **\DateTime** | The time when the trade was received by CoinAPI. | [optional]
**uuid** | **string** | The unique identifier for the trade. | [optional]
**price** | **float** | The price of the transaction. | [optional]
**size** | **float** | The base asset amount traded in the transaction. If the value is zero, it indicates that the transaction price is just marking a data point, such as in the index time series. | [optional]
**taker_side** | **string** | The aggressor side of the transaction (BUY/SELL/BUY_ESTIMATED/SELL_ESTIMATED/UNKNOWN). | [optional]
**id_trade** | **string** | The trade identifier. | [optional]
**id_order_maker** | **string** | The order maker identifier. | [optional]
**id_order_taker** | **string** | The order taker identifier. | [optional]
**user_taker** | **string** | Wallet address of the taker (aggressive) side. Present only for L4 data sources. | [optional]
**user_maker** | **string** | Wallet address of the maker (passive) side. Present only for L4 data sources. | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
