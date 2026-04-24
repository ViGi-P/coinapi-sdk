# V1Strike

Represents a strike within the option exchange group.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**strike_price** | **float** | Gets or sets the strike price. | [optional] 
**call** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 
**put** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_strike import V1Strike

# TODO update the JSON string below
json = "{}"
# create an instance of V1Strike from a JSON string
v1_strike_instance = V1Strike.from_json(json)
# print the JSON string representation of the object
print(V1Strike.to_json())

# convert the object into a dict
v1_strike_dict = v1_strike_instance.to_dict()
# create an instance of V1Strike from a dict
v1_strike_from_dict = V1Strike.from_dict(v1_strike_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


