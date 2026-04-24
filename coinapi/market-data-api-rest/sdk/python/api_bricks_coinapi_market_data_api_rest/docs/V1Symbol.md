# V1Symbol

Represents a symbol data model.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **str** | Gets or sets the symbol identifier. | [optional] 
**exchange_id** | **str** | Gets or sets the exchange identifier. | [optional] 
**symbol_type** | **str** | Gets or sets the symbol type. | [optional] 
**asset_id_base** | **str** | Gets or sets the base asset identifier. | [optional] 
**asset_id_quote** | **str** | Gets or sets the quote asset identifier. | [optional] 
**asset_id_unit** | **str** | Gets or sets the unit asset identifier. | [optional] 
**future_contract_unit** | **float** | Gets or sets the contract unit for futures. | [optional] 
**future_contract_unit_asset** | **str** | Gets or sets the asset used as the unit for futures contract. | [optional] 
**future_delivery_time** | **datetime** | Gets or sets the future delivery time for futures contract. | [optional] 
**option_type_is_call** | **bool** | Gets or sets a value indicating whether the option type is a call. | [optional] 
**option_strike_price** | **float** | Gets or sets the strike price for options. | [optional] 
**option_contract_unit** | **float** | Gets or sets the contract unit for options. | [optional] 
**option_exercise_style** | **str** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] 
**option_expiration_time** | **datetime** | Gets or sets the expiration time for options. | [optional] 
**contract_delivery_time** | **datetime** | Gets or sets the delivery time for contracts. | [optional] 
**contract_unit** | **float** | Gets or sets the contract unit for contracts. | [optional] 
**contract_unit_asset** | **str** | Gets or sets the asset used as the unit for contracts. | [optional] 
**contract_id** | **str** | Gets or sets the contract identifier. | [optional] 
**contract_display_name** | **str** | Gets or sets the display name of the contract. | [optional] 
**contract_display_description** | **str** | Gets or sets the display description of the contract. | [optional] 
**data_start** | **str** | Gets the start date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional] [readonly] 
**data_end** | **str** | Gets the end date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional] [readonly] 
**data_quote_start** | **datetime** | Gets or sets the start date of quote data. | [optional] 
**data_quote_end** | **datetime** | Gets or sets the end date of quote data. | [optional] 
**data_orderbook_start** | **datetime** | Gets or sets the start date of order book data. | [optional] 
**data_orderbook_end** | **datetime** | Gets or sets the end date of order book data. | [optional] 
**data_trade_start** | **datetime** | Gets or sets the start date of trade data. | [optional] 
**data_trade_end** | **datetime** | Gets or sets the end date of trade data. | [optional] 
**index_id** | **str** | Gets or sets the index identifier. | [optional] 
**index_display_name** | **str** | Gets or sets the display name of the index. | [optional] 
**index_display_description** | **str** | Gets or sets the display description of the index. | [optional] 
**volume_1hrs** | **float** | Gets or sets the volume in the last 1 hour. | [optional] 
**volume_1hrs_usd** | **float** | Gets or sets the volume in USD in the last 1 hour. | [optional] 
**volume_1day** | **float** | Gets or sets the volume in the last 1 day. | [optional] 
**volume_1day_usd** | **float** | Gets or sets the volume in USD in the last 1 day. | [optional] 
**volume_1mth** | **float** | Gets or sets the volume in the last 1 month. | [optional] 
**volume_1mth_usd** | **float** | Gets or sets the volume in USD in the last 1 month. | [optional] 
**price** | **float** | Gets or sets the price. | [optional] 
**symbol_id_exchange** | **str** | Gets or sets the symbol identifier in the exchange. | [optional] 
**asset_id_base_exchange** | **str** | Gets or sets the base asset identifier in the exchange. | [optional] 
**asset_id_quote_exchange** | **str** | Gets or sets the quote asset identifier in the exchange. | [optional] 
**price_precision** | **float** | Gets or sets the price precision. | [optional] 
**size_precision** | **float** | Gets or sets the size precision. | [optional] 
**raw_kvp** | **Dict[str, Optional[str]]** | Key Value Pair store with raw data from the data source. | [optional] 
**future_is_inverse** | **bool** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). | [optional] 
**future_is_quanto** | **bool** | Gets or sets a value indicating whether the futures contract is quanto. | [optional] 
**volume_to_usd** | **float** | Gets or sets the volume in USD. | [optional] 
**option_barrier_up_price** | **float** | Gets or sets the up barrier price for barrier options. | [optional] 
**option_barrier_up_type** | **str** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**option_barrier_down_price** | **float** | Gets or sets the down barrier price for barrier options. | [optional] 
**option_barrier_down_type** | **str** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**symbol_id_int** | **int** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional] [readonly] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_symbol import V1Symbol

# TODO update the JSON string below
json = "{}"
# create an instance of V1Symbol from a JSON string
v1_symbol_instance = V1Symbol.from_json(json)
# print the JSON string representation of the object
print(V1Symbol.to_json())

# convert the object into a dict
v1_symbol_dict = v1_symbol_instance.to_dict()
# create an instance of V1Symbol from a dict
v1_symbol_from_dict = V1Symbol.from_dict(v1_symbol_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


