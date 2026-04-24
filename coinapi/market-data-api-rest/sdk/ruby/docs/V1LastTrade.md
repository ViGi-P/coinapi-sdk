# OpenapiClient::V1LastTrade

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **time_exchange** | **Time** | Gets or sets the exchange time of the last trade. | [optional] |
| **time_coinapi** | **Time** | Gets or sets the CoinAPI time when the last trade was received. | [optional] |
| **uuid** | **String** | Gets or sets the UUID of the last trade. | [optional] |
| **price** | **Float** | Gets or sets the price of the last trade. | [optional] |
| **size** | **Float** | Gets or sets the size of the last trade. | [optional] |
| **taker_side** | **String** | Gets or sets the taker side of the last trade. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1LastTrade.new(
  time_exchange: null,
  time_coinapi: null,
  uuid: null,
  price: null,
  size: null,
  taker_side: null
)
```

