# V1Quote

Represents a quote data model.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **str** | The symbol identifier. | [optional] 
**time_exchange** | **datetime** | The exchange time of the quote. | [optional] 
**time_coinapi** | **datetime** | The CoinAPI time when the quote was received. | [optional] 
**ask_price** | **float** | The best asking price. | [optional] 
**ask_size** | **float** | The volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**bid_price** | **float** | The best bidding price. | [optional] 
**bid_size** | **float** | The volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_quote import V1Quote

# TODO update the JSON string below
json = "{}"
# create an instance of V1Quote from a JSON string
v1_quote_instance = V1Quote.from_json(json)
# print the JSON string representation of the object
print(V1Quote.to_json())

# convert the object into a dict
v1_quote_dict = v1_quote_instance.to_dict()
# create an instance of V1Quote from a dict
v1_quote_from_dict = V1Quote.from_dict(v1_quote_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


