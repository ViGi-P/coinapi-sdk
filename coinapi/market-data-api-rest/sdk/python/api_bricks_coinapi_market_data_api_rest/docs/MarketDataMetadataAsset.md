# MarketDataMetadataAsset

Represents an asset.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asset_id** | **str** | Gets or sets the asset ID. | [optional] 
**name** | **str** | Gets or sets the name of the asset. | [optional] 
**type_is_crypto** | **int** | Gets or sets a value indicating whether the asset is a cryptocurrency. | [optional] 
**data_quote_start** | **datetime** | Gets or sets the start date of quote data. | [optional] 
**data_quote_end** | **datetime** | Gets or sets the end date of quote data. | [optional] 
**data_orderbook_start** | **datetime** | Gets or sets the start date of order book data. | [optional] 
**data_orderbook_end** | **datetime** | Gets or sets the end date of order book data. | [optional] 
**data_trade_start** | **datetime** | Gets or sets the start date of trade data. | [optional] 
**data_trade_end** | **datetime** | Gets or sets the end date of trade data. | [optional] 
**data_symbols_count** | **int** | Gets or sets the number of symbols. | [optional] 
**volume_1hrs_usd** | **float** | Gets or sets the USD volume in the last 1 hour. | [optional] 
**volume_1day_usd** | **float** | Gets or sets the USD volume in the last 1 day. | [optional] 
**volume_1mth_usd** | **float** | Gets or sets the USD volume in the last 1 month. | [optional] 
**price_usd** | **float** | Gets or sets the USD price of the asset. | [optional] 
**id_icon** | **UUID** | Gets or sets the ID of the icon for the asset. | [optional] 
**supply_current** | **float** | Gets or sets the current supply of the asset. | [optional] 
**supply_total** | **float** | Gets or sets the total supply of the asset. | [optional] 
**supply_max** | **float** | Gets or sets the maximum supply of the asset. | [optional] 
**chain_addresses** | [**List[V1ChainNetworkAddress]**](V1ChainNetworkAddress.md) |  | [optional] 
**asset_type** | **str** | Asset type classification. Possible values: FIAT, STABLECOIN, CRYPTO, COMMODITY, STOCK. | [optional] 
**data_start** | **str** |  | [optional] [readonly] 
**data_end** | **str** |  | [optional] [readonly] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.market_data_metadata_asset import MarketDataMetadataAsset

# TODO update the JSON string below
json = "{}"
# create an instance of MarketDataMetadataAsset from a JSON string
market_data_metadata_asset_instance = MarketDataMetadataAsset.from_json(json)
# print the JSON string representation of the object
print(MarketDataMetadataAsset.to_json())

# convert the object into a dict
market_data_metadata_asset_dict = market_data_metadata_asset_instance.to_dict()
# create an instance of MarketDataMetadataAsset from a dict
market_data_metadata_asset_from_dict = MarketDataMetadataAsset.from_dict(market_data_metadata_asset_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


