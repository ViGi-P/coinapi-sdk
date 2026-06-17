# MarketDataMetadataChain

Represents a blockchain chain.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chain_id** | **str** | Gets or sets the chain identifier. | [optional] 
**name** | **str** | Gets or sets the name of the chain. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.market_data_metadata_chain import MarketDataMetadataChain

# TODO update the JSON string below
json = "{}"
# create an instance of MarketDataMetadataChain from a JSON string
market_data_metadata_chain_instance = MarketDataMetadataChain.from_json(json)
# print the JSON string representation of the object
print(MarketDataMetadataChain.to_json())

# convert the object into a dict
market_data_metadata_chain_dict = market_data_metadata_chain_instance.to_dict()
# create an instance of MarketDataMetadataChain from a dict
market_data_metadata_chain_from_dict = MarketDataMetadataChain.from_dict(market_data_metadata_chain_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


