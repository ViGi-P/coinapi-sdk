# V1Strike
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StrikePrice** | **Double** | Gets or sets the strike price. | [optional] 
**Call** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 
**Put** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$V1Strike = Initialize-PSOpenAPIToolsV1Strike  -StrikePrice null `
 -Call null `
 -Put null
```

- Convert the resource to JSON
```powershell
$V1Strike | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

