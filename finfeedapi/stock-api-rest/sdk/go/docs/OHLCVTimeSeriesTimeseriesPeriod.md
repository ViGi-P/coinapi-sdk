# OHLCVTimeSeriesTimeseriesPeriod

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PeriodId** | Pointer to **NullableString** | Gets or sets the period ID. | [optional] 
**LengthSeconds** | Pointer to **int32** | Gets or sets the length of the period in seconds. | [optional] 
**LengthMonths** | Pointer to **int32** | Gets or sets the length of the period in months. | [optional] 
**UnitCount** | Pointer to **NullableInt32** | Gets or sets the unit count. | [optional] 
**UnitName** | Pointer to **NullableString** | Gets or sets the unit name. | [optional] 
**DisplayName** | Pointer to **NullableString** | Gets or sets the display name of the timeseries period. | [optional] 

## Methods

### NewOHLCVTimeSeriesTimeseriesPeriod

`func NewOHLCVTimeSeriesTimeseriesPeriod() *OHLCVTimeSeriesTimeseriesPeriod`

NewOHLCVTimeSeriesTimeseriesPeriod instantiates a new OHLCVTimeSeriesTimeseriesPeriod object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOHLCVTimeSeriesTimeseriesPeriodWithDefaults

`func NewOHLCVTimeSeriesTimeseriesPeriodWithDefaults() *OHLCVTimeSeriesTimeseriesPeriod`

NewOHLCVTimeSeriesTimeseriesPeriodWithDefaults instantiates a new OHLCVTimeSeriesTimeseriesPeriod object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPeriodId

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetPeriodId() string`

GetPeriodId returns the PeriodId field if non-nil, zero value otherwise.

### GetPeriodIdOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetPeriodIdOk() (*string, bool)`

GetPeriodIdOk returns a tuple with the PeriodId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPeriodId

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetPeriodId(v string)`

SetPeriodId sets PeriodId field to given value.

### HasPeriodId

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasPeriodId() bool`

HasPeriodId returns a boolean if a field has been set.

### SetPeriodIdNil

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetPeriodIdNil(b bool)`

 SetPeriodIdNil sets the value for PeriodId to be an explicit nil

### UnsetPeriodId
`func (o *OHLCVTimeSeriesTimeseriesPeriod) UnsetPeriodId()`

UnsetPeriodId ensures that no value is present for PeriodId, not even an explicit nil
### GetLengthSeconds

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetLengthSeconds() int32`

GetLengthSeconds returns the LengthSeconds field if non-nil, zero value otherwise.

### GetLengthSecondsOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetLengthSecondsOk() (*int32, bool)`

GetLengthSecondsOk returns a tuple with the LengthSeconds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLengthSeconds

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetLengthSeconds(v int32)`

SetLengthSeconds sets LengthSeconds field to given value.

### HasLengthSeconds

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasLengthSeconds() bool`

HasLengthSeconds returns a boolean if a field has been set.

### GetLengthMonths

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetLengthMonths() int32`

GetLengthMonths returns the LengthMonths field if non-nil, zero value otherwise.

### GetLengthMonthsOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetLengthMonthsOk() (*int32, bool)`

GetLengthMonthsOk returns a tuple with the LengthMonths field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLengthMonths

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetLengthMonths(v int32)`

SetLengthMonths sets LengthMonths field to given value.

### HasLengthMonths

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasLengthMonths() bool`

HasLengthMonths returns a boolean if a field has been set.

### GetUnitCount

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetUnitCount() int32`

GetUnitCount returns the UnitCount field if non-nil, zero value otherwise.

### GetUnitCountOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetUnitCountOk() (*int32, bool)`

GetUnitCountOk returns a tuple with the UnitCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitCount

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetUnitCount(v int32)`

SetUnitCount sets UnitCount field to given value.

### HasUnitCount

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasUnitCount() bool`

HasUnitCount returns a boolean if a field has been set.

### SetUnitCountNil

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetUnitCountNil(b bool)`

 SetUnitCountNil sets the value for UnitCount to be an explicit nil

### UnsetUnitCount
`func (o *OHLCVTimeSeriesTimeseriesPeriod) UnsetUnitCount()`

UnsetUnitCount ensures that no value is present for UnitCount, not even an explicit nil
### GetUnitName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetUnitName() string`

GetUnitName returns the UnitName field if non-nil, zero value otherwise.

### GetUnitNameOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetUnitNameOk() (*string, bool)`

GetUnitNameOk returns a tuple with the UnitName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnitName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetUnitName(v string)`

SetUnitName sets UnitName field to given value.

### HasUnitName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasUnitName() bool`

HasUnitName returns a boolean if a field has been set.

### SetUnitNameNil

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetUnitNameNil(b bool)`

 SetUnitNameNil sets the value for UnitName to be an explicit nil

### UnsetUnitName
`func (o *OHLCVTimeSeriesTimeseriesPeriod) UnsetUnitName()`

UnsetUnitName ensures that no value is present for UnitName, not even an explicit nil
### GetDisplayName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetDisplayName() string`

GetDisplayName returns the DisplayName field if non-nil, zero value otherwise.

### GetDisplayNameOk

`func (o *OHLCVTimeSeriesTimeseriesPeriod) GetDisplayNameOk() (*string, bool)`

GetDisplayNameOk returns a tuple with the DisplayName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDisplayName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetDisplayName(v string)`

SetDisplayName sets DisplayName field to given value.

### HasDisplayName

`func (o *OHLCVTimeSeriesTimeseriesPeriod) HasDisplayName() bool`

HasDisplayName returns a boolean if a field has been set.

### SetDisplayNameNil

`func (o *OHLCVTimeSeriesTimeseriesPeriod) SetDisplayNameNil(b bool)`

 SetDisplayNameNil sets the value for DisplayName to be an explicit nil

### UnsetDisplayName
`func (o *OHLCVTimeSeriesTimeseriesPeriod) UnsetDisplayName()`

UnsetDisplayName ensures that no value is present for DisplayName, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


