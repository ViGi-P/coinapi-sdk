# ModelsClearBookModel

Represents the response DTO for clear book information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol** | **str** | The stock symbol | [optional] 
**timestamp_nanos** | **int** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **datetime** | Time when the book was cleared as DateTime | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.models_clear_book_model import ModelsClearBookModel

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsClearBookModel from a JSON string
models_clear_book_model_instance = ModelsClearBookModel.from_json(json)
# print the JSON string representation of the object
print(ModelsClearBookModel.to_json())

# convert the object into a dict
models_clear_book_model_dict = models_clear_book_model_instance.to_dict()
# create an instance of ModelsClearBookModel from a dict
models_clear_book_model_from_dict = ModelsClearBookModel.from_dict(models_clear_book_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


