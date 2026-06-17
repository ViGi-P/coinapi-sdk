# MarketDataMetadataIcon

Represents an icon.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchange_id** | **str** | Gets or sets the exchange ID associated with the icon. | [optional] 
**asset_id** | **str** | Gets or sets the asset ID associated with the icon. | [optional] 
**url** | **str** | Gets or sets the URL of the icon. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.market_data_metadata_icon import MarketDataMetadataIcon

# TODO update the JSON string below
json = "{}"
# create an instance of MarketDataMetadataIcon from a JSON string
market_data_metadata_icon_instance = MarketDataMetadataIcon.from_json(json)
# print the JSON string representation of the object
print(MarketDataMetadataIcon.to_json())

# convert the object into a dict
market_data_metadata_icon_dict = market_data_metadata_icon_instance.to_dict()
# create an instance of MarketDataMetadataIcon from a dict
market_data_metadata_icon_from_dict = MarketDataMetadataIcon.from_dict(market_data_metadata_icon_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


