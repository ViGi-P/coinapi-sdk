# MvcProblemDetails
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | **String** |  | [optional] 
**Title** | **String** |  | [optional] 
**Status** | **Int32** |  | [optional] 
**Detail** | **String** |  | [optional] 
**Instance** | **String** |  | [optional] 

## Examples

- Prepare the resource
```powershell
$MvcProblemDetails = Initialize-PSOpenAPIToolsMvcProblemDetails  -Type null `
 -Title null `
 -Status null `
 -Detail null `
 -Instance null
```

- Convert the resource to JSON
```powershell
$MvcProblemDetails | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

