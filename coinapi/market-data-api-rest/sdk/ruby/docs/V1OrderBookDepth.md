# OpenapiClient::V1OrderBookDepth

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol_id** | **String** | Gets or sets the symbol identifier. | [optional] |
| **time_exchange** | **Time** | Gets or sets the exchange time of the order book. | [optional] |
| **time_coinapi** | **Time** | Gets or sets the CoinAPI time when the order book was received. | [optional] |
| **ask_levels** | **Integer** | Gets or sets the number of ask levels in the order book. | [optional] |
| **bid_levels** | **Integer** | Gets or sets the number of bid levels in the order book. | [optional] |
| **ask_depth** | **Float** | Gets or sets the depth of the ask side of the order book. | [optional] |
| **bid_depth** | **Float** | Gets or sets the depth of the bid side of the order book. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1OrderBookDepth.new(
  symbol_id: null,
  time_exchange: null,
  time_coinapi: null,
  ask_levels: null,
  bid_levels: null,
  ask_depth: null,
  bid_depth: null
)
```

