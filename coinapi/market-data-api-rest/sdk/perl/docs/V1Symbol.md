# WWW::OpenAPIClient::Object::V1Symbol

## Load the model package
```perl
use WWW::OpenAPIClient::Object::V1Symbol;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol_id** | **string** | Gets or sets the symbol identifier. | [optional] 
**exchange_id** | **string** | Gets or sets the exchange identifier. | [optional] 
**symbol_type** | **string** | Gets or sets the symbol type. | [optional] 
**asset_id_base** | **string** | Gets or sets the base asset identifier. | [optional] 
**asset_id_quote** | **string** | Gets or sets the quote asset identifier. | [optional] 
**asset_id_unit** | **string** | Gets or sets the unit asset identifier. | [optional] 
**future_contract_unit** | **double** | Gets or sets the contract unit for futures. | [optional] 
**future_contract_unit_asset** | **string** | Gets or sets the asset used as the unit for futures contract. | [optional] 
**future_delivery_time** | **DATE_TIME** | Gets or sets the future delivery time for futures contract. | [optional] 
**option_type_is_call** | **boolean** | Gets or sets a value indicating whether the option type is a call. | [optional] 
**option_strike_price** | **double** | Gets or sets the strike price for options. | [optional] 
**option_contract_unit** | **double** | Gets or sets the contract unit for options. | [optional] 
**option_exercise_style** | **string** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] 
**option_expiration_time** | **DATE_TIME** | Gets or sets the expiration time for options. | [optional] 
**contract_delivery_time** | **DATE_TIME** | Gets or sets the delivery time for contracts. | [optional] 
**contract_unit** | **double** | Gets or sets the contract unit for contracts. | [optional] 
**contract_unit_asset** | **string** | Gets or sets the asset used as the unit for contracts. | [optional] 
**contract_id** | **string** | Gets or sets the contract identifier. | [optional] 
**contract_display_name** | **string** | Gets or sets the display name of the contract. | [optional] 
**contract_display_description** | **string** | Gets or sets the display description of the contract. | [optional] 
**data_start** | **string** | Gets the start date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional] [readonly] 
**data_end** | **string** | Gets the end date of the data in string format (\&quot;yyyy-MM-dd\&quot;). | [optional] [readonly] 
**data_quote_start** | **DATE_TIME** | Gets or sets the start date of quote data. | [optional] 
**data_quote_end** | **DATE_TIME** | Gets or sets the end date of quote data. | [optional] 
**data_orderbook_start** | **DATE_TIME** | Gets or sets the start date of order book data. | [optional] 
**data_orderbook_end** | **DATE_TIME** | Gets or sets the end date of order book data. | [optional] 
**data_trade_start** | **DATE_TIME** | Gets or sets the start date of trade data. | [optional] 
**data_trade_end** | **DATE_TIME** | Gets or sets the end date of trade data. | [optional] 
**index_id** | **string** | Gets or sets the index identifier. | [optional] 
**index_display_name** | **string** | Gets or sets the display name of the index. | [optional] 
**index_display_description** | **string** | Gets or sets the display description of the index. | [optional] 
**volume_1hrs** | **double** | Gets or sets the volume in the last 1 hour. | [optional] 
**volume_1hrs_usd** | **double** | Gets or sets the volume in USD in the last 1 hour. | [optional] 
**volume_1day** | **double** | Gets or sets the volume in the last 1 day. | [optional] 
**volume_1day_usd** | **double** | Gets or sets the volume in USD in the last 1 day. | [optional] 
**volume_1mth** | **double** | Gets or sets the volume in the last 1 month. | [optional] 
**volume_1mth_usd** | **double** | Gets or sets the volume in USD in the last 1 month. | [optional] 
**price** | **double** | Gets or sets the price. | [optional] 
**symbol_id_exchange** | **string** | Gets or sets the symbol identifier in the exchange. | [optional] 
**asset_id_base_exchange** | **string** | Gets or sets the base asset identifier in the exchange. | [optional] 
**asset_id_quote_exchange** | **string** | Gets or sets the quote asset identifier in the exchange. | [optional] 
**price_precision** | **double** | Gets or sets the price precision. | [optional] 
**size_precision** | **double** | Gets or sets the size precision. | [optional] 
**raw_kvp** | **HASH[string,string]** | Key Value Pair store with raw data from the data source. | [optional] 
**future_is_inverse** | **boolean** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). | [optional] 
**future_is_quanto** | **boolean** | Gets or sets a value indicating whether the futures contract is quanto. | [optional] 
**volume_to_usd** | **double** | Gets or sets the volume in USD. | [optional] 
**option_barrier_up_price** | **double** | Gets or sets the up barrier price for barrier options. | [optional] 
**option_barrier_up_type** | **string** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**option_barrier_down_price** | **double** | Gets or sets the down barrier price for barrier options. | [optional] 
**option_barrier_down_type** | **string** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**symbol_id_int** | **int** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional] [readonly] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


