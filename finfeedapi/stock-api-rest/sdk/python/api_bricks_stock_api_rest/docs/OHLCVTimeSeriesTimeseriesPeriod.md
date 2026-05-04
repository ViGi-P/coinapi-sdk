# OHLCVTimeSeriesTimeseriesPeriod

Represents a timeseries period used in exchange rate data.

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**period_id** | **str** | Gets or sets the period ID. | [optional] 
**length_seconds** | **int** | Gets or sets the length of the period in seconds. | [optional] 
**length_months** | **int** | Gets or sets the length of the period in months. | [optional] 
**unit_count** | **int** | Gets or sets the unit count. | [optional] 
**unit_name** | **str** | Gets or sets the unit name. | [optional] 
**display_name** | **str** | Gets or sets the display name of the timeseries period. | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.ohlcv_time_series_timeseries_period import OHLCVTimeSeriesTimeseriesPeriod

# TODO update the JSON string below
json = "{}"
# create an instance of OHLCVTimeSeriesTimeseriesPeriod from a JSON string
ohlcv_time_series_timeseries_period_instance = OHLCVTimeSeriesTimeseriesPeriod.from_json(json)
# print the JSON string representation of the object
print(OHLCVTimeSeriesTimeseriesPeriod.to_json())

# convert the object into a dict
ohlcv_time_series_timeseries_period_dict = ohlcv_time_series_timeseries_period_instance.to_dict()
# create an instance of OHLCVTimeSeriesTimeseriesPeriod from a dict
ohlcv_time_series_timeseries_period_from_dict = OHLCVTimeSeriesTimeseriesPeriod.from_dict(ohlcv_time_series_timeseries_period_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


