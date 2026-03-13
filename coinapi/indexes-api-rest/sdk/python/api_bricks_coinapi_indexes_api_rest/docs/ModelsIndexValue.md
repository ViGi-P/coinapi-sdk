# ModelsIndexValue


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**timestamp** | **datetime** |  | [optional] 
**value** | **float** |  | [optional] 
**composition** | [**List[ModelsIndexValueComponent]**](ModelsIndexValueComponent.md) |  | [optional] 

## Example

```python
from api_bricks_coinapi_indexes_api_rest.models.models_index_value import ModelsIndexValue

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsIndexValue from a JSON string
models_index_value_instance = ModelsIndexValue.from_json(json)
# print the JSON string representation of the object
print(ModelsIndexValue.to_json())

# convert the object into a dict
models_index_value_dict = models_index_value_instance.to_dict()
# create an instance of ModelsIndexValue from a dict
models_index_value_from_dict = ModelsIndexValue.from_dict(models_index_value_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


