# ModelsIndexDefinitionSnapshotEntry


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**index_id** | **str** |  | [optional] 
**timestamp** | **datetime** |  | [optional] 
**value** | **float** |  | [optional] 

## Example

```python
from api_bricks_coinapi_indexes_api_rest.models.models_index_definition_snapshot_entry import ModelsIndexDefinitionSnapshotEntry

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsIndexDefinitionSnapshotEntry from a JSON string
models_index_definition_snapshot_entry_instance = ModelsIndexDefinitionSnapshotEntry.from_json(json)
# print the JSON string representation of the object
print(ModelsIndexDefinitionSnapshotEntry.to_json())

# convert the object into a dict
models_index_definition_snapshot_entry_dict = models_index_definition_snapshot_entry_instance.to_dict()
# create an instance of ModelsIndexDefinitionSnapshotEntry from a dict
models_index_definition_snapshot_entry_from_dict = ModelsIndexDefinitionSnapshotEntry.from_dict(models_index_definition_snapshot_entry_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


