# OpenapiClient::V1ListingItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **metric_id** | **String** | Gets or sets the metric ID. | [optional] |
| **symbol_id** | **String** | The CoinAPI symbol identifier. Null for exchange-level metrics that are not associated with a specific symbol. | [optional] |
| **symbol_id_external** | **String** | The exchange-native symbol identifier. Null for exchange-level metrics. | [optional] |
| **exchange_id** | **String** | Gets or sets the exchange ID. | [optional] |
| **asset_id** | **String** | Gets or sets the asset ID. | [optional] |
| **asset_id_external** | **String** | Gets or sets the asset ID from the exchange. | [optional] |
| **chain_id** | **String** | Gets or sets the chain id. | [optional] |
| **network_id** | **String** | Gets or sets the network id. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1ListingItem.new(
  metric_id: null,
  symbol_id: null,
  symbol_id_external: null,
  exchange_id: null,
  asset_id: null,
  asset_id_external: null,
  chain_id: null,
  network_id: null
)
```

