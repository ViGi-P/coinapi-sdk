# OpenapiClient::V1SymbolMapping

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol_id** | **String** | Gets or sets the symbol ID. | [optional] |
| **symbol_id_exchange** | **String** | Gets or sets the exchange-specific symbol ID. | [optional] |
| **coinapi_datainfo_id** | **Integer** | Gets or sets the DataInfo ID. | [optional] |
| **asset_id_base_exchange** | **String** | Gets or sets the exchange-specific base asset ID. | [optional] |
| **asset_id_quote_exchange** | **String** | Gets or sets the exchange-specific quote asset ID. | [optional] |
| **asset_id_base** | **String** | Gets or sets the base asset ID. | [optional] |
| **asset_id_quote** | **String** | Gets or sets the quote asset ID. | [optional] |
| **price_precision** | **Float** | Gets or sets the price precision. | [optional] |
| **size_precision** | **Float** | Gets or sets the size precision. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1SymbolMapping.new(
  symbol_id: null,
  symbol_id_exchange: null,
  coinapi_datainfo_id: null,
  asset_id_base_exchange: null,
  asset_id_quote_exchange: null,
  asset_id_base: null,
  asset_id_quote: null,
  price_precision: null,
  size_precision: null
)
```

