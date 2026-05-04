# ModelsAdminMessageModel
## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TradingStatus** | [**ModelsTradingStatusModel**](ModelsTradingStatusModel.md) |  | [optional] 
**OfficialPrice** | [**ModelsOfficialPriceModel**](ModelsOfficialPriceModel.md) |  | [optional] 
**SecurityEvent** | [**ModelsSecurityEventModel**](ModelsSecurityEventModel.md) |  | [optional] 
**AuctionInformation** | [**ModelsAuctionInformationModel**](ModelsAuctionInformationModel.md) |  | [optional] 
**ShortSalePriceTest** | [**ModelsShortSalePriceTestStatusModel**](ModelsShortSalePriceTestStatusModel.md) |  | [optional] 
**OperationalHaltStatus** | [**ModelsOperationalHaltStatusModel**](ModelsOperationalHaltStatusModel.md) |  | [optional] 
**RetailLiquidityIndicator** | [**ModelsRetailLiquidityIndicatorModel**](ModelsRetailLiquidityIndicatorModel.md) |  | [optional] 
**SystemEvent** | [**IEXSystemEventSystemEventModel**](IEXSystemEventSystemEventModel.md) |  | [optional] 
**SecurityDirectory** | [**ModelsSecurityDirectoryModel**](ModelsSecurityDirectoryModel.md) |  | [optional] 

## Examples

- Prepare the resource
```powershell
$ModelsAdminMessageModel = Initialize-PSOpenAPIToolsModelsAdminMessageModel  -TradingStatus null `
 -OfficialPrice null `
 -SecurityEvent null `
 -AuctionInformation null `
 -ShortSalePriceTest null `
 -OperationalHaltStatus null `
 -RetailLiquidityIndicator null `
 -SystemEvent null `
 -SecurityDirectory null
```

- Convert the resource to JSON
```powershell
$ModelsAdminMessageModel | ConvertTo-JSON
```

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

