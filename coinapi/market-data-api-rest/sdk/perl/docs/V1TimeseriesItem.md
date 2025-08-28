# WWW::OpenAPIClient::Object::V1TimeseriesItem

## Load the model package
```perl
use WWW::OpenAPIClient::Object::V1TimeseriesItem;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**time_period_start** | **DATE_TIME** | The start time of the time period. | [optional] 
**time_period_end** | **DATE_TIME** | The end time of the time period. | [optional] 
**time_open** | **DATE_TIME** | The time when the price opened. | [optional] 
**time_close** | **DATE_TIME** | The time when the price closed. | [optional] 
**price_open** | **double** | The opening price. | [optional] 
**price_high** | **double** | The highest price during the time period. | [optional] 
**price_low** | **double** | The lowest price during the time period. | [optional] 
**price_close** | **double** | The closing price. | [optional] 
**volume_traded** | **double** | The total volume traded during the time period. This could be zero if there was not transactions and there was only orderbook activity. | [optional] 
**trades_count** | **int** | The number of trades executed during the time period. This could be zero if there was not transactions and there was only orderbook activity. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


