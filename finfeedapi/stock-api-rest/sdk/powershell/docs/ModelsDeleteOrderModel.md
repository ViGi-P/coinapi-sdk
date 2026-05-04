# ModelsDeleteOrderModel
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | **String** | The stock symbol | [optional] 
**TimestampNanos** | **Int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | **System.DateTime** | Time when the order was deleted as DateTime | [optional] 
**OrderIdReference** | **Int64** | Order identifier reference | [optional] 

## Examples

- Prepare the resource
```powershell
$ModelsDeleteOrderModel = Initialize-PSOpenAPIToolsModelsDeleteOrderModel  -Symbol null `
 -TimestampNanos null `
 -Timestamp null `
 -OrderIdReference null
```

- Convert the resource to JSON
```powershell
$ModelsDeleteOrderModel | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

