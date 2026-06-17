# MarketDataMetadataExchange

Represents an exchange.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **str** | Gets or sets the exchange ID. | [optional] 
**website** | **str** | Gets or sets the website URL of the exchange. | [optional] 
**name** | **str** | Gets or sets the name of the exchange. | [optional] 
**data_start** | **str** |  | [optional] [readonly] 
**data_end** | **str** |  | [optional] [readonly] 
**data_quote_start** | **datetime** | Gets or sets the start date of quote data. | [optional] 
**data_quote_end** | **datetime** | Gets or sets the end date of quote data. | [optional] 
**data_orderbook_start** | **datetime** | Gets or sets the start date of order book data. | [optional] 
**data_orderbook_end** | **datetime** | Gets or sets the end date of order book data. | [optional] 
**data_trade_start** | **datetime** | Gets or sets the start date of trade data. | [optional] 
**data_trade_end** | **datetime** | Gets or sets the end date of trade data. | [optional] 
**data_trade_count** | **int** | Gets or sets the number of trades. | [optional] 
**data_symbols_count** | **int** | Gets or sets the number of symbols. | [optional] 
**volume_1hrs_usd** | **float** | Gets or sets the USD volume in the last 1 hour. | [optional] 
**volume_1day_usd** | **float** | Gets or sets the USD volume in the last 1 day. | [optional] 
**volume_1mth_usd** | **float** | Gets or sets the USD volume in the last 1 month. | [optional] 
**metric_id** | **List[str]** | Gets or sets the list of metric IDs. | [optional] 
**icons** | [**List[MarketDataMetadataIcon]**](MarketDataMetadataIcon.md) | Gets or sets the list of icons for the exchange. | [optional] [readonly] 
**rank** | **float** | Rank of the exchange. | [optional] 
**integration_status** | **str** | Status of the integration | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.market_data_metadata_exchange import MarketDataMetadataExchange

# TODO update the JSON string below
json = "{}"
# create an instance of MarketDataMetadataExchange from a JSON string
market_data_metadata_exchange_instance = MarketDataMetadataExchange.from_json(json)
# print the JSON string representation of the object
print(MarketDataMetadataExchange.to_json())

# convert the object into a dict
market_data_metadata_exchange_dict = market_data_metadata_exchange_instance.to_dict()
# create an instance of MarketDataMetadataExchange from a dict
market_data_metadata_exchange_from_dict = MarketDataMetadataExchange.from_dict(market_data_metadata_exchange_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


