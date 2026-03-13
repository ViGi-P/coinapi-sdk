# ModelsIndexTimeseriesItem

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TimePeriodStart** | Pointer to **time.Time** | Gets or sets the start time of the time period. | [optional] 
**TimePeriodEnd** | Pointer to **time.Time** | Gets or sets the end time of the time period. | [optional] 
**TimeOpen** | Pointer to **NullableTime** | Gets or sets the time when the value opened. | [optional] 
**TimeClose** | Pointer to **NullableTime** | Gets or sets the time when the value closed. | [optional] 
**ValueOpen** | Pointer to **NullableFloat64** | Gets or sets the opening value. | [optional] 
**ValueHigh** | Pointer to **NullableFloat64** | Gets or sets the highest value during the time period. | [optional] 
**ValueLow** | Pointer to **NullableFloat64** | Gets or sets the lowest value during the time period. | [optional] 
**ValueClose** | Pointer to **NullableFloat64** | Gets or sets the closing value. | [optional] 
**ValueCount** | Pointer to **int64** | Gets or sets the number of values during the time period. | [optional] 

## Methods

### NewModelsIndexTimeseriesItem

`func NewModelsIndexTimeseriesItem() *ModelsIndexTimeseriesItem`

NewModelsIndexTimeseriesItem instantiates a new ModelsIndexTimeseriesItem object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsIndexTimeseriesItemWithDefaults

`func NewModelsIndexTimeseriesItemWithDefaults() *ModelsIndexTimeseriesItem`

NewModelsIndexTimeseriesItemWithDefaults instantiates a new ModelsIndexTimeseriesItem object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTimePeriodStart

`func (o *ModelsIndexTimeseriesItem) GetTimePeriodStart() time.Time`

GetTimePeriodStart returns the TimePeriodStart field if non-nil, zero value otherwise.

### GetTimePeriodStartOk

`func (o *ModelsIndexTimeseriesItem) GetTimePeriodStartOk() (*time.Time, bool)`

GetTimePeriodStartOk returns a tuple with the TimePeriodStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimePeriodStart

`func (o *ModelsIndexTimeseriesItem) SetTimePeriodStart(v time.Time)`

SetTimePeriodStart sets TimePeriodStart field to given value.

### HasTimePeriodStart

`func (o *ModelsIndexTimeseriesItem) HasTimePeriodStart() bool`

HasTimePeriodStart returns a boolean if a field has been set.

### GetTimePeriodEnd

`func (o *ModelsIndexTimeseriesItem) GetTimePeriodEnd() time.Time`

GetTimePeriodEnd returns the TimePeriodEnd field if non-nil, zero value otherwise.

### GetTimePeriodEndOk

`func (o *ModelsIndexTimeseriesItem) GetTimePeriodEndOk() (*time.Time, bool)`

GetTimePeriodEndOk returns a tuple with the TimePeriodEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimePeriodEnd

`func (o *ModelsIndexTimeseriesItem) SetTimePeriodEnd(v time.Time)`

SetTimePeriodEnd sets TimePeriodEnd field to given value.

### HasTimePeriodEnd

`func (o *ModelsIndexTimeseriesItem) HasTimePeriodEnd() bool`

HasTimePeriodEnd returns a boolean if a field has been set.

### GetTimeOpen

`func (o *ModelsIndexTimeseriesItem) GetTimeOpen() time.Time`

GetTimeOpen returns the TimeOpen field if non-nil, zero value otherwise.

### GetTimeOpenOk

`func (o *ModelsIndexTimeseriesItem) GetTimeOpenOk() (*time.Time, bool)`

GetTimeOpenOk returns a tuple with the TimeOpen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeOpen

`func (o *ModelsIndexTimeseriesItem) SetTimeOpen(v time.Time)`

SetTimeOpen sets TimeOpen field to given value.

### HasTimeOpen

`func (o *ModelsIndexTimeseriesItem) HasTimeOpen() bool`

HasTimeOpen returns a boolean if a field has been set.

### SetTimeOpenNil

`func (o *ModelsIndexTimeseriesItem) SetTimeOpenNil(b bool)`

 SetTimeOpenNil sets the value for TimeOpen to be an explicit nil

### UnsetTimeOpen
`func (o *ModelsIndexTimeseriesItem) UnsetTimeOpen()`

UnsetTimeOpen ensures that no value is present for TimeOpen, not even an explicit nil
### GetTimeClose

`func (o *ModelsIndexTimeseriesItem) GetTimeClose() time.Time`

GetTimeClose returns the TimeClose field if non-nil, zero value otherwise.

### GetTimeCloseOk

`func (o *ModelsIndexTimeseriesItem) GetTimeCloseOk() (*time.Time, bool)`

GetTimeCloseOk returns a tuple with the TimeClose field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeClose

`func (o *ModelsIndexTimeseriesItem) SetTimeClose(v time.Time)`

SetTimeClose sets TimeClose field to given value.

### HasTimeClose

`func (o *ModelsIndexTimeseriesItem) HasTimeClose() bool`

HasTimeClose returns a boolean if a field has been set.

### SetTimeCloseNil

`func (o *ModelsIndexTimeseriesItem) SetTimeCloseNil(b bool)`

 SetTimeCloseNil sets the value for TimeClose to be an explicit nil

### UnsetTimeClose
`func (o *ModelsIndexTimeseriesItem) UnsetTimeClose()`

UnsetTimeClose ensures that no value is present for TimeClose, not even an explicit nil
### GetValueOpen

`func (o *ModelsIndexTimeseriesItem) GetValueOpen() float64`

GetValueOpen returns the ValueOpen field if non-nil, zero value otherwise.

### GetValueOpenOk

`func (o *ModelsIndexTimeseriesItem) GetValueOpenOk() (*float64, bool)`

GetValueOpenOk returns a tuple with the ValueOpen field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValueOpen

`func (o *ModelsIndexTimeseriesItem) SetValueOpen(v float64)`

SetValueOpen sets ValueOpen field to given value.

### HasValueOpen

`func (o *ModelsIndexTimeseriesItem) HasValueOpen() bool`

HasValueOpen returns a boolean if a field has been set.

### SetValueOpenNil

`func (o *ModelsIndexTimeseriesItem) SetValueOpenNil(b bool)`

 SetValueOpenNil sets the value for ValueOpen to be an explicit nil

### UnsetValueOpen
`func (o *ModelsIndexTimeseriesItem) UnsetValueOpen()`

UnsetValueOpen ensures that no value is present for ValueOpen, not even an explicit nil
### GetValueHigh

`func (o *ModelsIndexTimeseriesItem) GetValueHigh() float64`

GetValueHigh returns the ValueHigh field if non-nil, zero value otherwise.

### GetValueHighOk

`func (o *ModelsIndexTimeseriesItem) GetValueHighOk() (*float64, bool)`

GetValueHighOk returns a tuple with the ValueHigh field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValueHigh

`func (o *ModelsIndexTimeseriesItem) SetValueHigh(v float64)`

SetValueHigh sets ValueHigh field to given value.

### HasValueHigh

`func (o *ModelsIndexTimeseriesItem) HasValueHigh() bool`

HasValueHigh returns a boolean if a field has been set.

### SetValueHighNil

`func (o *ModelsIndexTimeseriesItem) SetValueHighNil(b bool)`

 SetValueHighNil sets the value for ValueHigh to be an explicit nil

### UnsetValueHigh
`func (o *ModelsIndexTimeseriesItem) UnsetValueHigh()`

UnsetValueHigh ensures that no value is present for ValueHigh, not even an explicit nil
### GetValueLow

`func (o *ModelsIndexTimeseriesItem) GetValueLow() float64`

GetValueLow returns the ValueLow field if non-nil, zero value otherwise.

### GetValueLowOk

`func (o *ModelsIndexTimeseriesItem) GetValueLowOk() (*float64, bool)`

GetValueLowOk returns a tuple with the ValueLow field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValueLow

`func (o *ModelsIndexTimeseriesItem) SetValueLow(v float64)`

SetValueLow sets ValueLow field to given value.

### HasValueLow

`func (o *ModelsIndexTimeseriesItem) HasValueLow() bool`

HasValueLow returns a boolean if a field has been set.

### SetValueLowNil

`func (o *ModelsIndexTimeseriesItem) SetValueLowNil(b bool)`

 SetValueLowNil sets the value for ValueLow to be an explicit nil

### UnsetValueLow
`func (o *ModelsIndexTimeseriesItem) UnsetValueLow()`

UnsetValueLow ensures that no value is present for ValueLow, not even an explicit nil
### GetValueClose

`func (o *ModelsIndexTimeseriesItem) GetValueClose() float64`

GetValueClose returns the ValueClose field if non-nil, zero value otherwise.

### GetValueCloseOk

`func (o *ModelsIndexTimeseriesItem) GetValueCloseOk() (*float64, bool)`

GetValueCloseOk returns a tuple with the ValueClose field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValueClose

`func (o *ModelsIndexTimeseriesItem) SetValueClose(v float64)`

SetValueClose sets ValueClose field to given value.

### HasValueClose

`func (o *ModelsIndexTimeseriesItem) HasValueClose() bool`

HasValueClose returns a boolean if a field has been set.

### SetValueCloseNil

`func (o *ModelsIndexTimeseriesItem) SetValueCloseNil(b bool)`

 SetValueCloseNil sets the value for ValueClose to be an explicit nil

### UnsetValueClose
`func (o *ModelsIndexTimeseriesItem) UnsetValueClose()`

UnsetValueClose ensures that no value is present for ValueClose, not even an explicit nil
### GetValueCount

`func (o *ModelsIndexTimeseriesItem) GetValueCount() int64`

GetValueCount returns the ValueCount field if non-nil, zero value otherwise.

### GetValueCountOk

`func (o *ModelsIndexTimeseriesItem) GetValueCountOk() (*int64, bool)`

GetValueCountOk returns a tuple with the ValueCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValueCount

`func (o *ModelsIndexTimeseriesItem) SetValueCount(v int64)`

SetValueCount sets ValueCount field to given value.

### HasValueCount

`func (o *ModelsIndexTimeseriesItem) HasValueCount() bool`

HasValueCount returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


