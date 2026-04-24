# V1TimeseriesItem

Represents a timeseries item with price and volume information.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**time_period_start** | **datetime** | Gets or sets the start time of the time period. | [optional] 
**time_period_end** | **datetime** | Gets or sets the end time of the time period. | [optional] 
**time_open** | **datetime** | Gets or sets the time when the price opened. | [optional] 
**time_close** | **datetime** | Gets or sets the time when the price closed. | [optional] 
**price_open** | **float** | Gets or sets the opening price. | [optional] 
**price_high** | **float** | Gets or sets the highest price during the time period. | [optional] 
**price_low** | **float** | Gets or sets the lowest price during the time period. | [optional] 
**price_close** | **float** | Gets or sets the closing price. | [optional] 
**volume_traded** | **float** | Gets or sets the total volume traded during the time period. | [optional] 
**trades_count** | **int** | Gets or sets the number of trades executed during the time period. | [optional] 

## Example

```python
from api_bricks_coinapi_market_data_api_rest.models.v1_timeseries_item import V1TimeseriesItem

# TODO update the JSON string below
json = "{}"
# create an instance of V1TimeseriesItem from a JSON string
v1_timeseries_item_instance = V1TimeseriesItem.from_json(json)
# print the JSON string representation of the object
print(V1TimeseriesItem.to_json())

# convert the object into a dict
v1_timeseries_item_dict = v1_timeseries_item_instance.to_dict()
# create an instance of V1TimeseriesItem from a dict
v1_timeseries_item_from_dict = V1TimeseriesItem.from_dict(v1_timeseries_item_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


