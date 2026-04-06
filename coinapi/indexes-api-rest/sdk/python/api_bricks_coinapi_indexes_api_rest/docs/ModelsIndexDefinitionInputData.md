# ModelsIndexDefinitionInputData


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **str** |  | [optional] 
**exchange_symbol_id** | **str** |  | [optional] 
**base_asset_id** | **str** |  | [optional] 
**quote_asset_id** | **str** |  | [optional] 
**begin_date** | **datetime** |  | [optional] 
**end_date** | **datetime** |  | [optional] 
**status** | **str** |  | [optional] 
**status_info** | **str** |  | [optional] 
**last_modification_time** | **datetime** |  | [optional] 

## Example

```python
from api_bricks_coinapi_indexes_api_rest.models.models_index_definition_input_data import ModelsIndexDefinitionInputData

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsIndexDefinitionInputData from a JSON string
models_index_definition_input_data_instance = ModelsIndexDefinitionInputData.from_json(json)
# print the JSON string representation of the object
print(ModelsIndexDefinitionInputData.to_json())

# convert the object into a dict
models_index_definition_input_data_dict = models_index_definition_input_data_instance.to_dict()
# create an instance of ModelsIndexDefinitionInputData from a dict
models_index_definition_input_data_from_dict = ModelsIndexDefinitionInputData.from_dict(models_index_definition_input_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


