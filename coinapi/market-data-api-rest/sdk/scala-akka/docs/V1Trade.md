

# Trade

Represents a trade executed on the exchange.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | The symbol identifier. |  [optional]
**timeExchange** | **OffsetDateTime** | The time of trade reported by the exchange. |  [optional]
**timeCoinapi** | **OffsetDateTime** | The time when the trade was received by CoinAPI. |  [optional]
**uuid** | **UUID** | The unique identifier for the trade. |  [optional]
**price** | **Double** | The price of the transaction. |  [optional]
**size** | **Double** | The base asset amount traded in the transaction. If the value is zero, it indicates that the transaction price is just marking a data point, such as in the index time series. |  [optional]
**takerSide** | **String** | The aggressor side of the transaction (BUY/SELL/BUY_ESTIMATED/SELL_ESTIMATED/UNKNOWN). |  [optional]
**idTrade** | **String** | The trade identifier. |  [optional]
**idOrderMaker** | **String** | The order maker identifier. |  [optional]
**idOrderTaker** | **String** | The order taker identifier. |  [optional]



