# ModelsExchange

Represents an exchange.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **str** | Gets or sets the exchange ID. | [optional] 
**website** | **str** | Gets or sets the website URL of the exchange. | [optional] 
**name** | **str** | Gets or sets the name of the exchange. | [optional] 

## Example

```python
from api_bricks_coinapi_indexes_api_rest.models.models_exchange import ModelsExchange

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsExchange from a JSON string
models_exchange_instance = ModelsExchange.from_json(json)
# print the JSON string representation of the object
print(ModelsExchange.to_json())

# convert the object into a dict
models_exchange_dict = models_exchange_instance.to_dict()
# create an instance of ModelsExchange from a dict
models_exchange_from_dict = ModelsExchange.from_dict(models_exchange_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


