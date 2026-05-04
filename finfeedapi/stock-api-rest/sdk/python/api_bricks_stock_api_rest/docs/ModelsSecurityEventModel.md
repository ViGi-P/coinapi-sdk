# ModelsSecurityEventModel

Represents the response DTO for security event information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol** | **str** | The stock symbol | [optional] 
**timestamp_nanos** | **int** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **datetime** | Time when the security event was recorded as DateTime | [optional] 
**security_event** | **int** | Security event as byte value | [optional] 
**security_event_code** | **str** | Security event as character string (&#39;O&#39; or &#39;C&#39;) | [optional] 
**security_event_text** | **str** | Human-readable description of the security event | [optional] 
**is_opening_process_complete** | **bool** | Indicates if the security event is &#39;Opening Process Complete&#39; (&#39;O&#39;/0x4f). | [optional] 
**is_closing_process_complete** | **bool** | Indicates if the security event is &#39;Closing Process Complete&#39; (&#39;C&#39;/0x43). | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.models_security_event_model import ModelsSecurityEventModel

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsSecurityEventModel from a JSON string
models_security_event_model_instance = ModelsSecurityEventModel.from_json(json)
# print the JSON string representation of the object
print(ModelsSecurityEventModel.to_json())

# convert the object into a dict
models_security_event_model_dict = models_security_event_model_instance.to_dict()
# create an instance of ModelsSecurityEventModel from a dict
models_security_event_model_from_dict = ModelsSecurityEventModel.from_dict(models_security_event_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


