# ModelsAdminMessageModel

Represents the response DTO for IEX admin information, combining all symbol-based admin message types

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**trading_status** | [**ModelsTradingStatusModel**](ModelsTradingStatusModel.md) |  | [optional] 
**official_price** | [**ModelsOfficialPriceModel**](ModelsOfficialPriceModel.md) |  | [optional] 
**security_event** | [**ModelsSecurityEventModel**](ModelsSecurityEventModel.md) |  | [optional] 
**auction_information** | [**ModelsAuctionInformationModel**](ModelsAuctionInformationModel.md) |  | [optional] 
**short_sale_price_test** | [**ModelsShortSalePriceTestStatusModel**](ModelsShortSalePriceTestStatusModel.md) |  | [optional] 
**operational_halt_status** | [**ModelsOperationalHaltStatusModel**](ModelsOperationalHaltStatusModel.md) |  | [optional] 
**retail_liquidity_indicator** | [**ModelsRetailLiquidityIndicatorModel**](ModelsRetailLiquidityIndicatorModel.md) |  | [optional] 
**system_event** | [**IEXSystemEventSystemEventModel**](IEXSystemEventSystemEventModel.md) |  | [optional] 
**security_directory** | [**ModelsSecurityDirectoryModel**](ModelsSecurityDirectoryModel.md) |  | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.models_admin_message_model import ModelsAdminMessageModel

# TODO update the JSON string below
json = "{}"
# create an instance of ModelsAdminMessageModel from a JSON string
models_admin_message_model_instance = ModelsAdminMessageModel.from_json(json)
# print the JSON string representation of the object
print(ModelsAdminMessageModel.to_json())

# convert the object into a dict
models_admin_message_model_dict = models_admin_message_model_instance.to_dict()
# create an instance of ModelsAdminMessageModel from a dict
models_admin_message_model_from_dict = ModelsAdminMessageModel.from_dict(models_admin_message_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


