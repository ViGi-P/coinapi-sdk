# ModelsModifyOrderModel

Represents the response DTO for order modify information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol** | **str** | The stock symbol | [optional] 
**timestamp_nanos** | **int** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **datetime** | Time when the order was modified as DateTime (UTC) | [optional] 
**order_id_reference** | **int** | Order identifier reference | [optional] 
**is_priority_reset** | **bool** | Indicates if priority is reseted | [optional] 
**size** | **int** | New total quoted size in number of shares | [optional] 
**price** | **float** | Price as decimal | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.models_modify_order_model import ModelsModifyOrderModel

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsModifyOrderModel from a JSON string
models_modify_order_model_instance = ModelsModifyOrderModel.from_json(json)
# print the JSON string representation of the object
print(ModelsModifyOrderModel.to_json())

# convert the object into a dict
models_modify_order_model_dict = models_modify_order_model_instance.to_dict()
# create an instance of ModelsModifyOrderModel from a dict
models_modify_order_model_from_dict = ModelsModifyOrderModel.from_dict(models_modify_order_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


