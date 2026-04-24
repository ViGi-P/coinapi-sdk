# OpenapiClient::V1OrderBook

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol_id** | **String** | Gets or sets the symbol identifier. | [optional] |
| **time_exchange** | **Time** | Gets or sets the exchange time of the order book. | [optional] |
| **time_coinapi** | **Time** | Gets or sets the CoinAPI time when the order book was received. | [optional] |
| **asks** | **Object** | Gets or sets the asks made by market makers. | [optional] |
| **bids** | **Object** | Gets or sets the bids made by market makers. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1OrderBook.new(
  symbol_id: null,
  time_exchange: null,
  time_coinapi: null,
  asks: null,
  bids: null
)
```

