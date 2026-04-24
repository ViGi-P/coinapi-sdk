# V1OptionExchangeGroup

Represents an option exchange group data model.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asset_id_base** | **str** | Gets or sets the base asset identifier. | [optional] 
**asset_id_quote** | **str** | Gets or sets the quote asset identifier. | [optional] 
**underlying_price** | **float** | Gets or sets the underlying price of the option. | [optional] 
**time_expiration** | **datetime** | Gets or sets the expiration time of the option. | [optional] 
**strikes** | [**List[V1Strike]**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_option_exchange_group import V1OptionExchangeGroup

# TODO update the JSON string below
json = "{}"
# create an instance of V1OptionExchangeGroup from a JSON string
v1_option_exchange_group_instance = V1OptionExchangeGroup.from_json(json)
# print the JSON string representation of the object
print(V1OptionExchangeGroup.to_json())

# convert the object into a dict
v1_option_exchange_group_dict = v1_option_exchange_group_instance.to_dict()
# create an instance of V1OptionExchangeGroup from a dict
v1_option_exchange_group_from_dict = V1OptionExchangeGroup.from_dict(v1_option_exchange_group_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


