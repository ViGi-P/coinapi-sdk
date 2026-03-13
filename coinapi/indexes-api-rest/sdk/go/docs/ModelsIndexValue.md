# ModelsIndexValue

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Timestamp** | Pointer to **time.Time** |  | [optional] 
**Value** | Pointer to **float64** |  | [optional] 
**Composition** | Pointer to [**[]ModelsIndexValueComponent**](ModelsIndexValueComponent.md) |  | [optional] 

## Methods

### NewModelsIndexValue

`func NewModelsIndexValue() *ModelsIndexValue`

NewModelsIndexValue instantiates a new ModelsIndexValue object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsIndexValueWithDefaults

`func NewModelsIndexValueWithDefaults() *ModelsIndexValue`

NewModelsIndexValueWithDefaults instantiates a new ModelsIndexValue object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTimestamp

`func (o *ModelsIndexValue) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsIndexValue) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsIndexValue) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsIndexValue) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetValue

`func (o *ModelsIndexValue) GetValue() float64`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *ModelsIndexValue) GetValueOk() (*float64, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *ModelsIndexValue) SetValue(v float64)`

SetValue sets Value field to given value.

### HasValue

`func (o *ModelsIndexValue) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetComposition

`func (o *ModelsIndexValue) GetComposition() []ModelsIndexValueComponent`

GetComposition returns the Composition field if non-nil, zero value otherwise.

### GetCompositionOk

`func (o *ModelsIndexValue) GetCompositionOk() (*[]ModelsIndexValueComponent, bool)`

GetCompositionOk returns a tuple with the Composition field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetComposition

`func (o *ModelsIndexValue) SetComposition(v []ModelsIndexValueComponent)`

SetComposition sets Composition field to given value.

### HasComposition

`func (o *ModelsIndexValue) HasComposition() bool`

HasComposition returns a boolean if a field has been set.

### SetCompositionNil

`func (o *ModelsIndexValue) SetCompositionNil(b bool)`

 SetCompositionNil sets the value for Composition to be an explicit nil

### UnsetComposition
`func (o *ModelsIndexValue) UnsetComposition()`

UnsetComposition ensures that no value is present for Composition, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


