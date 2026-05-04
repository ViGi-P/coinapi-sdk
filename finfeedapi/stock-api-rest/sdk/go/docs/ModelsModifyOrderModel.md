# ModelsModifyOrderModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the order was modified as DateTime (UTC) | [optional] 
**OrderIdReference** | Pointer to **int64** | Order identifier reference | [optional] 
**IsPriorityReset** | Pointer to **bool** | Indicates if priority is reseted | [optional] 
**Size** | Pointer to **int32** | New total quoted size in number of shares | [optional] 
**Price** | Pointer to **float64** | Price as decimal | [optional] 

## Methods

### NewModelsModifyOrderModel

`func NewModelsModifyOrderModel() *ModelsModifyOrderModel`

NewModelsModifyOrderModel instantiates a new ModelsModifyOrderModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsModifyOrderModelWithDefaults

`func NewModelsModifyOrderModelWithDefaults() *ModelsModifyOrderModel`

NewModelsModifyOrderModelWithDefaults instantiates a new ModelsModifyOrderModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsModifyOrderModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsModifyOrderModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsModifyOrderModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsModifyOrderModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsModifyOrderModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsModifyOrderModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsModifyOrderModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsModifyOrderModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsModifyOrderModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsModifyOrderModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsModifyOrderModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsModifyOrderModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsModifyOrderModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsModifyOrderModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetOrderIdReference

`func (o *ModelsModifyOrderModel) GetOrderIdReference() int64`

GetOrderIdReference returns the OrderIdReference field if non-nil, zero value otherwise.

### GetOrderIdReferenceOk

`func (o *ModelsModifyOrderModel) GetOrderIdReferenceOk() (*int64, bool)`

GetOrderIdReferenceOk returns a tuple with the OrderIdReference field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderIdReference

`func (o *ModelsModifyOrderModel) SetOrderIdReference(v int64)`

SetOrderIdReference sets OrderIdReference field to given value.

### HasOrderIdReference

`func (o *ModelsModifyOrderModel) HasOrderIdReference() bool`

HasOrderIdReference returns a boolean if a field has been set.

### GetIsPriorityReset

`func (o *ModelsModifyOrderModel) GetIsPriorityReset() bool`

GetIsPriorityReset returns the IsPriorityReset field if non-nil, zero value otherwise.

### GetIsPriorityResetOk

`func (o *ModelsModifyOrderModel) GetIsPriorityResetOk() (*bool, bool)`

GetIsPriorityResetOk returns a tuple with the IsPriorityReset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPriorityReset

`func (o *ModelsModifyOrderModel) SetIsPriorityReset(v bool)`

SetIsPriorityReset sets IsPriorityReset field to given value.

### HasIsPriorityReset

`func (o *ModelsModifyOrderModel) HasIsPriorityReset() bool`

HasIsPriorityReset returns a boolean if a field has been set.

### GetSize

`func (o *ModelsModifyOrderModel) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *ModelsModifyOrderModel) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *ModelsModifyOrderModel) SetSize(v int32)`

SetSize sets Size field to given value.

### HasSize

`func (o *ModelsModifyOrderModel) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetPrice

`func (o *ModelsModifyOrderModel) GetPrice() float64`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ModelsModifyOrderModel) GetPriceOk() (*float64, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ModelsModifyOrderModel) SetPrice(v float64)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ModelsModifyOrderModel) HasPrice() bool`

HasPrice returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


