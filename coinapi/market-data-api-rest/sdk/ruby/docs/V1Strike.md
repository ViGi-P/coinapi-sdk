# OpenapiClient::V1Strike

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **strike_price** | **Float** | Gets or sets the strike price. | [optional] |
| **call** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] |
| **put** | [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1Strike.new(
  strike_price: null,
  call: null,
  put: null
)
```

