# OpenapiClient::V1OptionExchangeGroup

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **asset_id_base** | **String** | Gets or sets the base asset identifier. | [optional] |
| **asset_id_quote** | **String** | Gets or sets the quote asset identifier. | [optional] |
| **underlying_price** | **Float** | Gets or sets the underlying price of the option. | [optional] |
| **time_expiration** | **Time** | Gets or sets the expiration time of the option. | [optional] |
| **strikes** | [**Array&lt;V1Strike&gt;**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1OptionExchangeGroup.new(
  asset_id_base: null,
  asset_id_quote: null,
  underlying_price: null,
  time_expiration: null,
  strikes: null
)
```

