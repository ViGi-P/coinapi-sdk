# ModelsOrderBookModel

Represents the response DTO for Level-3 order book information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**add_order** | [**ModelsAddOrderModel**](ModelsAddOrderModel.md) |  | [optional] 
**delete_order** | [**ModelsDeleteOrderModel**](ModelsDeleteOrderModel.md) |  | [optional] 
**modify_order** | [**ModelsModifyOrderModel**](ModelsModifyOrderModel.md) |  | [optional] 
**executed_order** | [**ModelsExecutedOrderModel**](ModelsExecutedOrderModel.md) |  | [optional] 
**clear_book** | [**ModelsClearBookModel**](ModelsClearBookModel.md) |  | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.models_order_book_model import ModelsOrderBookModel

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsOrderBookModel from a JSON string
models_order_book_model_instance = ModelsOrderBookModel.from_json(json)
# print the JSON string representation of the object
print(ModelsOrderBookModel.to_json())

# convert the object into a dict
models_order_book_model_dict = models_order_book_model_instance.to_dict()
# create an instance of ModelsOrderBookModel from a dict
models_order_book_model_from_dict = ModelsOrderBookModel.from_dict(models_order_book_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


