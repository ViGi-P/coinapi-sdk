# V1OptionExchangeGroup
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AssetIdBase** | **String** | Gets or sets the base asset identifier. | [optional] 
**AssetIdQuote** | **String** | Gets or sets the quote asset identifier. | [optional] 
**UnderlyingPrice** | **Double** | Gets or sets the underlying price of the option. | [optional] 
**TimeExpiration** | **System.DateTime** | Gets or sets the expiration time of the option. | [optional] 
**Strikes** | [**V1Strike[]**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] 

## Examples

- Prepare the resource
```powershell
$V1OptionExchangeGroup = Initialize-PSOpenAPIToolsV1OptionExchangeGroup  -AssetIdBase null `
 -AssetIdQuote null `
 -UnderlyingPrice null `
 -TimeExpiration null `
 -Strikes null
```

- Convert the resource to JSON
```powershell
$V1OptionExchangeGroup | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

