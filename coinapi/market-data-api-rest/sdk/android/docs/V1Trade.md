

# V1Trade

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | The symbol identifier. |  [optional]
**timeExchange** | [**Date**](Date.md) | The time of trade reported by the exchange. |  [optional]
**timeCoinapi** | [**Date**](Date.md) | The time when the trade was received by CoinAPI. |  [optional]
**uuid** | [**UUID**](UUID.md) | The unique identifier for the trade. |  [optional]
**price** | **Double** | The price of the transaction. |  [optional]
**size** | **Double** | The base asset amount traded in the transaction. If the value is zero, it indicates that the transaction price is just marking a data point, such as in the index time series. |  [optional]
**takerSide** | **String** | The aggressor side of the transaction (BUY/SELL/BUY_ESTIMATED/SELL_ESTIMATED/UNKNOWN). |  [optional]
**idTrade** | **String** | The trade identifier. |  [optional]
**idOrderMaker** | **String** | The order maker identifier. |  [optional]
**idOrderTaker** | **String** | The order taker identifier. |  [optional]




