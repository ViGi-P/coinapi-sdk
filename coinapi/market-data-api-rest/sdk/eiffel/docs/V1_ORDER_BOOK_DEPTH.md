# V1_ORDER_BOOK_DEPTH

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | [**STRING_32**](STRING_32.md) | Gets or sets the symbol identifier. | [optional] [default to null]
**time_exchange** | [**DATE_TIME**](DATE_TIME.md) | Gets or sets the exchange time of the order book. | [optional] [default to null]
**time_coinapi** | [**DATE_TIME**](DATE_TIME.md) | Gets or sets the CoinAPI time when the order book was received. | [optional] [default to null]
**ask_levels** | **INTEGER_64** | Gets or sets the number of ask levels in the order book. | [optional] [default to null]
**bid_levels** | **INTEGER_64** | Gets or sets the number of bid levels in the order book. | [optional] [default to null]
**ask_depth** | **REAL_64** | Gets or sets the depth of the ask side of the order book. | [optional] [default to null]
**bid_depth** | **REAL_64** | Gets or sets the depth of the bid side of the order book. | [optional] [default to null]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


