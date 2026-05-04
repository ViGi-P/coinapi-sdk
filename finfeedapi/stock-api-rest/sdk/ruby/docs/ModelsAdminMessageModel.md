# OpenapiClient::ModelsAdminMessageModel

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **trading_status** | [**ModelsTradingStatusModel**](ModelsTradingStatusModel.md) |  | [optional] |
| **official_price** | [**ModelsOfficialPriceModel**](ModelsOfficialPriceModel.md) |  | [optional] |
| **security_event** | [**ModelsSecurityEventModel**](ModelsSecurityEventModel.md) |  | [optional] |
| **auction_information** | [**ModelsAuctionInformationModel**](ModelsAuctionInformationModel.md) |  | [optional] |
| **short_sale_price_test** | [**ModelsShortSalePriceTestStatusModel**](ModelsShortSalePriceTestStatusModel.md) |  | [optional] |
| **operational_halt_status** | [**ModelsOperationalHaltStatusModel**](ModelsOperationalHaltStatusModel.md) |  | [optional] |
| **retail_liquidity_indicator** | [**ModelsRetailLiquidityIndicatorModel**](ModelsRetailLiquidityIndicatorModel.md) |  | [optional] |
| **system_event** | [**IEXSystemEventSystemEventModel**](IEXSystemEventSystemEventModel.md) |  | [optional] |
| **security_directory** | [**ModelsSecurityDirectoryModel**](ModelsSecurityDirectoryModel.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ModelsAdminMessageModel.new(
  trading_status: null,
  official_price: null,
  security_event: null,
  auction_information: null,
  short_sale_price_test: null,
  operational_halt_status: null,
  retail_liquidity_indicator: null,
  system_event: null,
  security_directory: null
)
```

