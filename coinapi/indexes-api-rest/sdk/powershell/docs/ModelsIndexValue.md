# ModelsIndexValue
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Timestamp** | **System.DateTime** |  | [optional] 
**Value** | **Double** |  | [optional] 
**Composition** | [**ModelsIndexValueComponent[]**](ModelsIndexValueComponent.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ModelsIndexValue = Initialize-PSOpenAPIToolsModelsIndexValue  -Timestamp null `
 -Value null `
 -Composition null
```

- Convert the resource to JSON
```powershell
$ModelsIndexValue | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

