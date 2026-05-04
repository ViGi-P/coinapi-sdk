# ModelsOrderBookModel
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AddOrder** | [**ModelsAddOrderModel**](ModelsAddOrderModel.md) |  | [optional] 
**DeleteOrder** | [**ModelsDeleteOrderModel**](ModelsDeleteOrderModel.md) |  | [optional] 
**ModifyOrder** | [**ModelsModifyOrderModel**](ModelsModifyOrderModel.md) |  | [optional] 
**ExecutedOrder** | [**ModelsExecutedOrderModel**](ModelsExecutedOrderModel.md) |  | [optional] 
**ClearBook** | [**ModelsClearBookModel**](ModelsClearBookModel.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ModelsOrderBookModel = Initialize-PSOpenAPIToolsModelsOrderBookModel  -AddOrder null `
 -DeleteOrder null `
 -ModifyOrder null `
 -ExecutedOrder null `
 -ClearBook null
```

- Convert the resource to JSON
```powershell
$ModelsOrderBookModel | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

