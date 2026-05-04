# ModelsShortSalePriceTestStatusModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the short sale price test status was recorded as DateTime | [optional] 
**ShortSalePriceTestStatus** | Pointer to **int32** | Short sale price test status as byte value | [optional] 
**ShortSalePriceTestStatusCode** | Pointer to **NullableString** | Short sale price test status as hex string | [optional] 
**ShortSalePriceTestStatusText** | Pointer to **NullableString** | Human-readable description of the short sale price test status | [optional] 
**IsShortSalePriceTestNotInEffect** | Pointer to **bool** | Indicates if the short sale price test is not in effect | [optional] 
**IsShortSalePriceTestInEffect** | Pointer to **bool** | Indicates if the short sale price test is in effect | [optional] 
**Detail** | Pointer to **int32** | Detail of the short sale price test as byte value | [optional] 
**DetailCode** | Pointer to **NullableString** | Detail of the short sale price test as character string | [optional] 
**DetailText** | Pointer to **NullableString** | Human-readable description of the short sale price test detail | [optional] 
**IsDetailNoPriceTest** | Pointer to **bool** | Indicates if there is no price test in place | [optional] 
**IsDetailActivated** | Pointer to **bool** | Indicates if the short sale price test restriction is in effect due to an intraday price drop | [optional] 
**IsDetailContinued** | Pointer to **bool** | Indicates if the short sale price test restriction remains in effect from prior day | [optional] 
**IsDetailDeactivated** | Pointer to **bool** | Indicates if the short sale price test restriction is deactivated | [optional] 
**IsDetailNotAvailable** | Pointer to **bool** | Indicates if the detail is not available | [optional] 

## Methods

### NewModelsShortSalePriceTestStatusModel

`func NewModelsShortSalePriceTestStatusModel() *ModelsShortSalePriceTestStatusModel`

NewModelsShortSalePriceTestStatusModel instantiates a new ModelsShortSalePriceTestStatusModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsShortSalePriceTestStatusModelWithDefaults

`func NewModelsShortSalePriceTestStatusModelWithDefaults() *ModelsShortSalePriceTestStatusModel`

NewModelsShortSalePriceTestStatusModelWithDefaults instantiates a new ModelsShortSalePriceTestStatusModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsShortSalePriceTestStatusModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsShortSalePriceTestStatusModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsShortSalePriceTestStatusModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsShortSalePriceTestStatusModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsShortSalePriceTestStatusModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsShortSalePriceTestStatusModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsShortSalePriceTestStatusModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsShortSalePriceTestStatusModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsShortSalePriceTestStatusModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsShortSalePriceTestStatusModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsShortSalePriceTestStatusModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsShortSalePriceTestStatusModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsShortSalePriceTestStatusModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsShortSalePriceTestStatusModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetShortSalePriceTestStatus

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatus() int32`

GetShortSalePriceTestStatus returns the ShortSalePriceTestStatus field if non-nil, zero value otherwise.

### GetShortSalePriceTestStatusOk

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatusOk() (*int32, bool)`

GetShortSalePriceTestStatusOk returns a tuple with the ShortSalePriceTestStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortSalePriceTestStatus

`func (o *ModelsShortSalePriceTestStatusModel) SetShortSalePriceTestStatus(v int32)`

SetShortSalePriceTestStatus sets ShortSalePriceTestStatus field to given value.

### HasShortSalePriceTestStatus

`func (o *ModelsShortSalePriceTestStatusModel) HasShortSalePriceTestStatus() bool`

HasShortSalePriceTestStatus returns a boolean if a field has been set.

### GetShortSalePriceTestStatusCode

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatusCode() string`

GetShortSalePriceTestStatusCode returns the ShortSalePriceTestStatusCode field if non-nil, zero value otherwise.

### GetShortSalePriceTestStatusCodeOk

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatusCodeOk() (*string, bool)`

GetShortSalePriceTestStatusCodeOk returns a tuple with the ShortSalePriceTestStatusCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortSalePriceTestStatusCode

`func (o *ModelsShortSalePriceTestStatusModel) SetShortSalePriceTestStatusCode(v string)`

SetShortSalePriceTestStatusCode sets ShortSalePriceTestStatusCode field to given value.

### HasShortSalePriceTestStatusCode

`func (o *ModelsShortSalePriceTestStatusModel) HasShortSalePriceTestStatusCode() bool`

HasShortSalePriceTestStatusCode returns a boolean if a field has been set.

### SetShortSalePriceTestStatusCodeNil

`func (o *ModelsShortSalePriceTestStatusModel) SetShortSalePriceTestStatusCodeNil(b bool)`

 SetShortSalePriceTestStatusCodeNil sets the value for ShortSalePriceTestStatusCode to be an explicit nil

### UnsetShortSalePriceTestStatusCode
`func (o *ModelsShortSalePriceTestStatusModel) UnsetShortSalePriceTestStatusCode()`

UnsetShortSalePriceTestStatusCode ensures that no value is present for ShortSalePriceTestStatusCode, not even an explicit nil
### GetShortSalePriceTestStatusText

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatusText() string`

GetShortSalePriceTestStatusText returns the ShortSalePriceTestStatusText field if non-nil, zero value otherwise.

### GetShortSalePriceTestStatusTextOk

`func (o *ModelsShortSalePriceTestStatusModel) GetShortSalePriceTestStatusTextOk() (*string, bool)`

GetShortSalePriceTestStatusTextOk returns a tuple with the ShortSalePriceTestStatusText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortSalePriceTestStatusText

`func (o *ModelsShortSalePriceTestStatusModel) SetShortSalePriceTestStatusText(v string)`

SetShortSalePriceTestStatusText sets ShortSalePriceTestStatusText field to given value.

### HasShortSalePriceTestStatusText

`func (o *ModelsShortSalePriceTestStatusModel) HasShortSalePriceTestStatusText() bool`

HasShortSalePriceTestStatusText returns a boolean if a field has been set.

### SetShortSalePriceTestStatusTextNil

`func (o *ModelsShortSalePriceTestStatusModel) SetShortSalePriceTestStatusTextNil(b bool)`

 SetShortSalePriceTestStatusTextNil sets the value for ShortSalePriceTestStatusText to be an explicit nil

### UnsetShortSalePriceTestStatusText
`func (o *ModelsShortSalePriceTestStatusModel) UnsetShortSalePriceTestStatusText()`

UnsetShortSalePriceTestStatusText ensures that no value is present for ShortSalePriceTestStatusText, not even an explicit nil
### GetIsShortSalePriceTestNotInEffect

`func (o *ModelsShortSalePriceTestStatusModel) GetIsShortSalePriceTestNotInEffect() bool`

GetIsShortSalePriceTestNotInEffect returns the IsShortSalePriceTestNotInEffect field if non-nil, zero value otherwise.

### GetIsShortSalePriceTestNotInEffectOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsShortSalePriceTestNotInEffectOk() (*bool, bool)`

GetIsShortSalePriceTestNotInEffectOk returns a tuple with the IsShortSalePriceTestNotInEffect field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsShortSalePriceTestNotInEffect

`func (o *ModelsShortSalePriceTestStatusModel) SetIsShortSalePriceTestNotInEffect(v bool)`

SetIsShortSalePriceTestNotInEffect sets IsShortSalePriceTestNotInEffect field to given value.

### HasIsShortSalePriceTestNotInEffect

`func (o *ModelsShortSalePriceTestStatusModel) HasIsShortSalePriceTestNotInEffect() bool`

HasIsShortSalePriceTestNotInEffect returns a boolean if a field has been set.

### GetIsShortSalePriceTestInEffect

`func (o *ModelsShortSalePriceTestStatusModel) GetIsShortSalePriceTestInEffect() bool`

GetIsShortSalePriceTestInEffect returns the IsShortSalePriceTestInEffect field if non-nil, zero value otherwise.

### GetIsShortSalePriceTestInEffectOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsShortSalePriceTestInEffectOk() (*bool, bool)`

GetIsShortSalePriceTestInEffectOk returns a tuple with the IsShortSalePriceTestInEffect field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsShortSalePriceTestInEffect

`func (o *ModelsShortSalePriceTestStatusModel) SetIsShortSalePriceTestInEffect(v bool)`

SetIsShortSalePriceTestInEffect sets IsShortSalePriceTestInEffect field to given value.

### HasIsShortSalePriceTestInEffect

`func (o *ModelsShortSalePriceTestStatusModel) HasIsShortSalePriceTestInEffect() bool`

HasIsShortSalePriceTestInEffect returns a boolean if a field has been set.

### GetDetail

`func (o *ModelsShortSalePriceTestStatusModel) GetDetail() int32`

GetDetail returns the Detail field if non-nil, zero value otherwise.

### GetDetailOk

`func (o *ModelsShortSalePriceTestStatusModel) GetDetailOk() (*int32, bool)`

GetDetailOk returns a tuple with the Detail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetail

`func (o *ModelsShortSalePriceTestStatusModel) SetDetail(v int32)`

SetDetail sets Detail field to given value.

### HasDetail

`func (o *ModelsShortSalePriceTestStatusModel) HasDetail() bool`

HasDetail returns a boolean if a field has been set.

### GetDetailCode

`func (o *ModelsShortSalePriceTestStatusModel) GetDetailCode() string`

GetDetailCode returns the DetailCode field if non-nil, zero value otherwise.

### GetDetailCodeOk

`func (o *ModelsShortSalePriceTestStatusModel) GetDetailCodeOk() (*string, bool)`

GetDetailCodeOk returns a tuple with the DetailCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetailCode

`func (o *ModelsShortSalePriceTestStatusModel) SetDetailCode(v string)`

SetDetailCode sets DetailCode field to given value.

### HasDetailCode

`func (o *ModelsShortSalePriceTestStatusModel) HasDetailCode() bool`

HasDetailCode returns a boolean if a field has been set.

### SetDetailCodeNil

`func (o *ModelsShortSalePriceTestStatusModel) SetDetailCodeNil(b bool)`

 SetDetailCodeNil sets the value for DetailCode to be an explicit nil

### UnsetDetailCode
`func (o *ModelsShortSalePriceTestStatusModel) UnsetDetailCode()`

UnsetDetailCode ensures that no value is present for DetailCode, not even an explicit nil
### GetDetailText

`func (o *ModelsShortSalePriceTestStatusModel) GetDetailText() string`

GetDetailText returns the DetailText field if non-nil, zero value otherwise.

### GetDetailTextOk

`func (o *ModelsShortSalePriceTestStatusModel) GetDetailTextOk() (*string, bool)`

GetDetailTextOk returns a tuple with the DetailText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetailText

`func (o *ModelsShortSalePriceTestStatusModel) SetDetailText(v string)`

SetDetailText sets DetailText field to given value.

### HasDetailText

`func (o *ModelsShortSalePriceTestStatusModel) HasDetailText() bool`

HasDetailText returns a boolean if a field has been set.

### SetDetailTextNil

`func (o *ModelsShortSalePriceTestStatusModel) SetDetailTextNil(b bool)`

 SetDetailTextNil sets the value for DetailText to be an explicit nil

### UnsetDetailText
`func (o *ModelsShortSalePriceTestStatusModel) UnsetDetailText()`

UnsetDetailText ensures that no value is present for DetailText, not even an explicit nil
### GetIsDetailNoPriceTest

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailNoPriceTest() bool`

GetIsDetailNoPriceTest returns the IsDetailNoPriceTest field if non-nil, zero value otherwise.

### GetIsDetailNoPriceTestOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailNoPriceTestOk() (*bool, bool)`

GetIsDetailNoPriceTestOk returns a tuple with the IsDetailNoPriceTest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDetailNoPriceTest

`func (o *ModelsShortSalePriceTestStatusModel) SetIsDetailNoPriceTest(v bool)`

SetIsDetailNoPriceTest sets IsDetailNoPriceTest field to given value.

### HasIsDetailNoPriceTest

`func (o *ModelsShortSalePriceTestStatusModel) HasIsDetailNoPriceTest() bool`

HasIsDetailNoPriceTest returns a boolean if a field has been set.

### GetIsDetailActivated

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailActivated() bool`

GetIsDetailActivated returns the IsDetailActivated field if non-nil, zero value otherwise.

### GetIsDetailActivatedOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailActivatedOk() (*bool, bool)`

GetIsDetailActivatedOk returns a tuple with the IsDetailActivated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDetailActivated

`func (o *ModelsShortSalePriceTestStatusModel) SetIsDetailActivated(v bool)`

SetIsDetailActivated sets IsDetailActivated field to given value.

### HasIsDetailActivated

`func (o *ModelsShortSalePriceTestStatusModel) HasIsDetailActivated() bool`

HasIsDetailActivated returns a boolean if a field has been set.

### GetIsDetailContinued

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailContinued() bool`

GetIsDetailContinued returns the IsDetailContinued field if non-nil, zero value otherwise.

### GetIsDetailContinuedOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailContinuedOk() (*bool, bool)`

GetIsDetailContinuedOk returns a tuple with the IsDetailContinued field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDetailContinued

`func (o *ModelsShortSalePriceTestStatusModel) SetIsDetailContinued(v bool)`

SetIsDetailContinued sets IsDetailContinued field to given value.

### HasIsDetailContinued

`func (o *ModelsShortSalePriceTestStatusModel) HasIsDetailContinued() bool`

HasIsDetailContinued returns a boolean if a field has been set.

### GetIsDetailDeactivated

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailDeactivated() bool`

GetIsDetailDeactivated returns the IsDetailDeactivated field if non-nil, zero value otherwise.

### GetIsDetailDeactivatedOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailDeactivatedOk() (*bool, bool)`

GetIsDetailDeactivatedOk returns a tuple with the IsDetailDeactivated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDetailDeactivated

`func (o *ModelsShortSalePriceTestStatusModel) SetIsDetailDeactivated(v bool)`

SetIsDetailDeactivated sets IsDetailDeactivated field to given value.

### HasIsDetailDeactivated

`func (o *ModelsShortSalePriceTestStatusModel) HasIsDetailDeactivated() bool`

HasIsDetailDeactivated returns a boolean if a field has been set.

### GetIsDetailNotAvailable

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailNotAvailable() bool`

GetIsDetailNotAvailable returns the IsDetailNotAvailable field if non-nil, zero value otherwise.

### GetIsDetailNotAvailableOk

`func (o *ModelsShortSalePriceTestStatusModel) GetIsDetailNotAvailableOk() (*bool, bool)`

GetIsDetailNotAvailableOk returns a tuple with the IsDetailNotAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDetailNotAvailable

`func (o *ModelsShortSalePriceTestStatusModel) SetIsDetailNotAvailable(v bool)`

SetIsDetailNotAvailable sets IsDetailNotAvailable field to given value.

### HasIsDetailNotAvailable

`func (o *ModelsShortSalePriceTestStatusModel) HasIsDetailNotAvailable() bool`

HasIsDetailNotAvailable returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


