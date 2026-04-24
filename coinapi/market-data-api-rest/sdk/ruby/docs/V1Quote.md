# OpenapiClient::V1Quote

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol_id** | **String** | Gets or sets the symbol identifier. | [optional] |
| **time_exchange** | **Time** | Gets or sets the exchange time of the quote. | [optional] |
| **time_coinapi** | **Time** | Gets or sets the CoinAPI time when the quote was received. | [optional] |
| **ask_price** | **Float** | Gets or sets the best asking price. | [optional] |
| **ask_size** | **Float** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] |
| **bid_price** | **Float** | Gets or sets the best bidding price. | [optional] |
| **bid_size** | **Float** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1Quote.new(
  symbol_id: null,
  time_exchange: null,
  time_coinapi: null,
  ask_price: null,
  ask_size: null,
  bid_price: null,
  bid_size: null
)
```

