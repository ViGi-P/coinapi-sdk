# OpenapiClient::V1Symbol

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **symbol_id** | **String** | Gets or sets the symbol identifier. | [optional] |
| **exchange_id** | **String** | Gets or sets the exchange identifier. | [optional] |
| **symbol_type** | **String** | Gets or sets the symbol type. | [optional] |
| **asset_id_base** | **String** | Gets or sets the base asset identifier. | [optional] |
| **asset_id_quote** | **String** | Gets or sets the quote asset identifier. | [optional] |
| **asset_id_unit** | **String** | Gets or sets the unit asset identifier. | [optional] |
| **future_contract_unit** | **Float** | Gets or sets the contract unit for futures. | [optional] |
| **future_contract_unit_asset** | **String** | Gets or sets the asset used as the unit for futures contract. | [optional] |
| **future_delivery_time** | **Time** | Gets or sets the future delivery time for futures contract. | [optional] |
| **option_type_is_call** | **Boolean** | Gets or sets a value indicating whether the option type is a call. | [optional] |
| **option_strike_price** | **Float** | Gets or sets the strike price for options. | [optional] |
| **option_contract_unit** | **Float** | Gets or sets the contract unit for options. | [optional] |
| **option_exercise_style** | **String** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] |
| **option_expiration_time** | **Time** | Gets or sets the expiration time for options. | [optional] |
| **contract_delivery_time** | **Time** | Gets or sets the delivery time for contracts. | [optional] |
| **contract_unit** | **Float** | Gets or sets the contract unit for contracts. | [optional] |
| **contract_unit_asset** | **String** | Gets or sets the asset used as the unit for contracts. | [optional] |
| **contract_id** | **String** | Gets or sets the contract identifier. | [optional] |
| **contract_display_name** | **String** | Gets or sets the display name of the contract. | [optional] |
| **contract_display_description** | **String** | Gets or sets the display description of the contract. | [optional] |
| **data_start** | **String** | Gets the start date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional][readonly] |
| **data_end** | **String** | Gets the end date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional][readonly] |
| **data_quote_start** | **Time** | Gets or sets the start date of quote data. | [optional] |
| **data_quote_end** | **Time** | Gets or sets the end date of quote data. | [optional] |
| **data_orderbook_start** | **Time** | Gets or sets the start date of order book data. | [optional] |
| **data_orderbook_end** | **Time** | Gets or sets the end date of order book data. | [optional] |
| **data_trade_start** | **Time** | Gets or sets the start date of trade data. | [optional] |
| **data_trade_end** | **Time** | Gets or sets the end date of trade data. | [optional] |
| **index_id** | **String** | Gets or sets the index identifier. | [optional] |
| **index_display_name** | **String** | Gets or sets the display name of the index. | [optional] |
| **index_display_description** | **String** | Gets or sets the display description of the index. | [optional] |
| **volume_1hrs** | **Float** | Gets or sets the volume in the last 1 hour. | [optional] |
| **volume_1hrs_usd** | **Float** | Gets or sets the volume in USD in the last 1 hour. | [optional] |
| **volume_1day** | **Float** | Gets or sets the volume in the last 1 day. | [optional] |
| **volume_1day_usd** | **Float** | Gets or sets the volume in USD in the last 1 day. | [optional] |
| **volume_1mth** | **Float** | Gets or sets the volume in the last 1 month. | [optional] |
| **volume_1mth_usd** | **Float** | Gets or sets the volume in USD in the last 1 month. | [optional] |
| **price** | **Float** | Gets or sets the price. | [optional] |
| **symbol_id_exchange** | **String** | Gets or sets the symbol identifier in the exchange. | [optional] |
| **asset_id_base_exchange** | **String** | Gets or sets the base asset identifier in the exchange. | [optional] |
| **asset_id_quote_exchange** | **String** | Gets or sets the quote asset identifier in the exchange. | [optional] |
| **price_precision** | **Float** | Gets or sets the price precision. | [optional] |
| **size_precision** | **Float** | Gets or sets the size precision. | [optional] |
| **raw_kvp** | **Hash&lt;String, String&gt;** | Key Value Pair store with raw data from the data source. | [optional] |
| **future_is_inverse** | **Boolean** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). | [optional] |
| **future_is_quanto** | **Boolean** | Gets or sets a value indicating whether the futures contract is quanto. | [optional] |
| **volume_to_usd** | **Float** | Gets or sets the volume in USD. | [optional] |
| **option_barrier_up_price** | **Float** | Gets or sets the up barrier price for barrier options. | [optional] |
| **option_barrier_up_type** | **String** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] |
| **option_barrier_down_price** | **Float** | Gets or sets the down barrier price for barrier options. | [optional] |
| **option_barrier_down_type** | **String** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] |
| **symbol_id_int** | **Integer** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional][readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::V1Symbol.new(
  symbol_id: null,
  exchange_id: null,
  symbol_type: null,
  asset_id_base: null,
  asset_id_quote: null,
  asset_id_unit: null,
  future_contract_unit: null,
  future_contract_unit_asset: null,
  future_delivery_time: null,
  option_type_is_call: null,
  option_strike_price: null,
  option_contract_unit: null,
  option_exercise_style: null,
  option_expiration_time: null,
  contract_delivery_time: null,
  contract_unit: null,
  contract_unit_asset: null,
  contract_id: null,
  contract_display_name: null,
  contract_display_description: null,
  data_start: null,
  data_end: null,
  data_quote_start: null,
  data_quote_end: null,
  data_orderbook_start: null,
  data_orderbook_end: null,
  data_trade_start: null,
  data_trade_end: null,
  index_id: null,
  index_display_name: null,
  index_display_description: null,
  volume_1hrs: null,
  volume_1hrs_usd: null,
  volume_1day: null,
  volume_1day_usd: null,
  volume_1mth: null,
  volume_1mth_usd: null,
  price: null,
  symbol_id_exchange: null,
  asset_id_base_exchange: null,
  asset_id_quote_exchange: null,
  price_precision: null,
  size_precision: null,
  raw_kvp: null,
  future_is_inverse: null,
  future_is_quanto: null,
  volume_to_usd: null,
  option_barrier_up_price: null,
  option_barrier_up_type: null,
  option_barrier_down_price: null,
  option_barrier_down_type: null,
  symbol_id_int: null
)
```

