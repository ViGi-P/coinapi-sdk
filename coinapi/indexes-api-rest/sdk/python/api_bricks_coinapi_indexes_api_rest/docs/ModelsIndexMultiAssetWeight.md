# ModelsIndexMultiAssetWeight


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**index_id** | **str** |  | [optional] 
**asset_id** | **str** |  | [optional] 
**weight** | **float** |  | [optional] 

## Example

```python
from api_bricks_coinapi_indexes_api_rest.models.models_index_multi_asset_weight import ModelsIndexMultiAssetWeight

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsIndexMultiAssetWeight from a JSON string
models_index_multi_asset_weight_instance = ModelsIndexMultiAssetWeight.from_json(json)
# print the JSON string representation of the object
print(ModelsIndexMultiAssetWeight.to_json())

# convert the object into a dict
models_index_multi_asset_weight_dict = models_index_multi_asset_weight_instance.to_dict()
# create an instance of ModelsIndexMultiAssetWeight from a dict
models_index_multi_asset_weight_from_dict = ModelsIndexMultiAssetWeight.from_dict(models_index_multi_asset_weight_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


