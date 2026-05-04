# ModelsOperationalHaltStatusModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the operational halt status was recorded as DateTime | [optional] 
**OperationalHaltStatus** | Pointer to **int32** | Operational halt status as byte value | [optional] 
**OperationalHaltStatusCode** | Pointer to **NullableString** | Operational halt status as character string | [optional] 
**OperationalHaltStatusText** | Pointer to **NullableString** | Human-readable description of the operational halt status | [optional] 
**IsOperationallyHalted** | Pointer to **bool** | Indicates if the status is &#39;IEX specific operational trading halt&#39; (&#39;O&#39;/0x4f). | [optional] 
**IsNotOperationallyHalted** | Pointer to **bool** | Indicates if the status is &#39;Not operationally halted on IEX&#39; (&#39;N&#39;/0x4e). | [optional] 

## Methods

### NewModelsOperationalHaltStatusModel

`func NewModelsOperationalHaltStatusModel() *ModelsOperationalHaltStatusModel`

NewModelsOperationalHaltStatusModel instantiates a new ModelsOperationalHaltStatusModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsOperationalHaltStatusModelWithDefaults

`func NewModelsOperationalHaltStatusModelWithDefaults() *ModelsOperationalHaltStatusModel`

NewModelsOperationalHaltStatusModelWithDefaults instantiates a new ModelsOperationalHaltStatusModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsOperationalHaltStatusModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsOperationalHaltStatusModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsOperationalHaltStatusModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsOperationalHaltStatusModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsOperationalHaltStatusModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsOperationalHaltStatusModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsOperationalHaltStatusModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsOperationalHaltStatusModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsOperationalHaltStatusModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsOperationalHaltStatusModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsOperationalHaltStatusModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsOperationalHaltStatusModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsOperationalHaltStatusModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsOperationalHaltStatusModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetOperationalHaltStatus

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatus() int32`

GetOperationalHaltStatus returns the OperationalHaltStatus field if non-nil, zero value otherwise.

### GetOperationalHaltStatusOk

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatusOk() (*int32, bool)`

GetOperationalHaltStatusOk returns a tuple with the OperationalHaltStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOperationalHaltStatus

`func (o *ModelsOperationalHaltStatusModel) SetOperationalHaltStatus(v int32)`

SetOperationalHaltStatus sets OperationalHaltStatus field to given value.

### HasOperationalHaltStatus

`func (o *ModelsOperationalHaltStatusModel) HasOperationalHaltStatus() bool`

HasOperationalHaltStatus returns a boolean if a field has been set.

### GetOperationalHaltStatusCode

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatusCode() string`

GetOperationalHaltStatusCode returns the OperationalHaltStatusCode field if non-nil, zero value otherwise.

### GetOperationalHaltStatusCodeOk

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatusCodeOk() (*string, bool)`

GetOperationalHaltStatusCodeOk returns a tuple with the OperationalHaltStatusCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOperationalHaltStatusCode

`func (o *ModelsOperationalHaltStatusModel) SetOperationalHaltStatusCode(v string)`

SetOperationalHaltStatusCode sets OperationalHaltStatusCode field to given value.

### HasOperationalHaltStatusCode

`func (o *ModelsOperationalHaltStatusModel) HasOperationalHaltStatusCode() bool`

HasOperationalHaltStatusCode returns a boolean if a field has been set.

### SetOperationalHaltStatusCodeNil

`func (o *ModelsOperationalHaltStatusModel) SetOperationalHaltStatusCodeNil(b bool)`

 SetOperationalHaltStatusCodeNil sets the value for OperationalHaltStatusCode to be an explicit nil

### UnsetOperationalHaltStatusCode
`func (o *ModelsOperationalHaltStatusModel) UnsetOperationalHaltStatusCode()`

UnsetOperationalHaltStatusCode ensures that no value is present for OperationalHaltStatusCode, not even an explicit nil
### GetOperationalHaltStatusText

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatusText() string`

GetOperationalHaltStatusText returns the OperationalHaltStatusText field if non-nil, zero value otherwise.

### GetOperationalHaltStatusTextOk

`func (o *ModelsOperationalHaltStatusModel) GetOperationalHaltStatusTextOk() (*string, bool)`

GetOperationalHaltStatusTextOk returns a tuple with the OperationalHaltStatusText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOperationalHaltStatusText

`func (o *ModelsOperationalHaltStatusModel) SetOperationalHaltStatusText(v string)`

SetOperationalHaltStatusText sets OperationalHaltStatusText field to given value.

### HasOperationalHaltStatusText

`func (o *ModelsOperationalHaltStatusModel) HasOperationalHaltStatusText() bool`

HasOperationalHaltStatusText returns a boolean if a field has been set.

### SetOperationalHaltStatusTextNil

`func (o *ModelsOperationalHaltStatusModel) SetOperationalHaltStatusTextNil(b bool)`

 SetOperationalHaltStatusTextNil sets the value for OperationalHaltStatusText to be an explicit nil

### UnsetOperationalHaltStatusText
`func (o *ModelsOperationalHaltStatusModel) UnsetOperationalHaltStatusText()`

UnsetOperationalHaltStatusText ensures that no value is present for OperationalHaltStatusText, not even an explicit nil
### GetIsOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) GetIsOperationallyHalted() bool`

GetIsOperationallyHalted returns the IsOperationallyHalted field if non-nil, zero value otherwise.

### GetIsOperationallyHaltedOk

`func (o *ModelsOperationalHaltStatusModel) GetIsOperationallyHaltedOk() (*bool, bool)`

GetIsOperationallyHaltedOk returns a tuple with the IsOperationallyHalted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) SetIsOperationallyHalted(v bool)`

SetIsOperationallyHalted sets IsOperationallyHalted field to given value.

### HasIsOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) HasIsOperationallyHalted() bool`

HasIsOperationallyHalted returns a boolean if a field has been set.

### GetIsNotOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) GetIsNotOperationallyHalted() bool`

GetIsNotOperationallyHalted returns the IsNotOperationallyHalted field if non-nil, zero value otherwise.

### GetIsNotOperationallyHaltedOk

`func (o *ModelsOperationalHaltStatusModel) GetIsNotOperationallyHaltedOk() (*bool, bool)`

GetIsNotOperationallyHaltedOk returns a tuple with the IsNotOperationallyHalted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsNotOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) SetIsNotOperationallyHalted(v bool)`

SetIsNotOperationallyHalted sets IsNotOperationallyHalted field to given value.

### HasIsNotOperationallyHalted

`func (o *ModelsOperationalHaltStatusModel) HasIsNotOperationallyHalted() bool`

HasIsNotOperationallyHalted returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


