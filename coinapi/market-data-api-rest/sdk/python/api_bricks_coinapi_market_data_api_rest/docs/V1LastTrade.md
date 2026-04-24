# V1LastTrade

Represents the last executed transaction.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**time_exchange** | **datetime** | Gets or sets the exchange time of the last trade. | [optional] 
**time_coinapi** | **datetime** | Gets or sets the CoinAPI time when the last trade was received. | [optional] 
**uuid** | **UUID** | Gets or sets the UUID of the last trade. | [optional] 
**price** | **float** | Gets or sets the price of the last trade. | [optional] 
**size** | **float** | Gets or sets the size of the last trade. | [optional] 
**taker_side** | **str** | Gets or sets the taker side of the last trade. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_last_trade import V1LastTrade

# TODO update the JSON string below
json = "{}"
# create an instance of V1LastTrade from a JSON string
v1_last_trade_instance = V1LastTrade.from_json(json)
# print the JSON string representation of the object
print(V1LastTrade.to_json())

# convert the object into a dict
v1_last_trade_dict = v1_last_trade_instance.to_dict()
# create an instance of V1LastTrade from a dict
v1_last_trade_from_dict = V1LastTrade.from_dict(v1_last_trade_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


