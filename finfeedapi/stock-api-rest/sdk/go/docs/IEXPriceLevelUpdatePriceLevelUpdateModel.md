# IEXPriceLevelUpdatePriceLevelUpdateModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the price level update was recorded as DateTime | [optional] 
**IsSideBuy** | Pointer to **bool** | Indicates if this is a price level update for the Buy Side. | [optional] 
**IsEventProcessingComplete** | Pointer to **bool** | Indicates if event processing is complete. | [optional] 
**Size** | Pointer to **int32** | Aggregate quoted size at the price level | [optional] 
**Price** | Pointer to **float64** | Price level as decimal | [optional] 

## Methods

### NewIEXPriceLevelUpdatePriceLevelUpdateModel

`func NewIEXPriceLevelUpdatePriceLevelUpdateModel() *IEXPriceLevelUpdatePriceLevelUpdateModel`

NewIEXPriceLevelUpdatePriceLevelUpdateModel instantiates a new IEXPriceLevelUpdatePriceLevelUpdateModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIEXPriceLevelUpdatePriceLevelUpdateModelWithDefaults

`func NewIEXPriceLevelUpdatePriceLevelUpdateModelWithDefaults() *IEXPriceLevelUpdatePriceLevelUpdateModel`

NewIEXPriceLevelUpdatePriceLevelUpdateModelWithDefaults instantiates a new IEXPriceLevelUpdatePriceLevelUpdateModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetIsSideBuy

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetIsSideBuy() bool`

GetIsSideBuy returns the IsSideBuy field if non-nil, zero value otherwise.

### GetIsSideBuyOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetIsSideBuyOk() (*bool, bool)`

GetIsSideBuyOk returns a tuple with the IsSideBuy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSideBuy

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetIsSideBuy(v bool)`

SetIsSideBuy sets IsSideBuy field to given value.

### HasIsSideBuy

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasIsSideBuy() bool`

HasIsSideBuy returns a boolean if a field has been set.

### GetIsEventProcessingComplete

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetIsEventProcessingComplete() bool`

GetIsEventProcessingComplete returns the IsEventProcessingComplete field if non-nil, zero value otherwise.

### GetIsEventProcessingCompleteOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetIsEventProcessingCompleteOk() (*bool, bool)`

GetIsEventProcessingCompleteOk returns a tuple with the IsEventProcessingComplete field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsEventProcessingComplete

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetIsEventProcessingComplete(v bool)`

SetIsEventProcessingComplete sets IsEventProcessingComplete field to given value.

### HasIsEventProcessingComplete

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasIsEventProcessingComplete() bool`

HasIsEventProcessingComplete returns a boolean if a field has been set.

### GetSize

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetSize(v int32)`

SetSize sets Size field to given value.

### HasSize

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetPrice

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetPrice() float64`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) GetPriceOk() (*float64, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) SetPrice(v float64)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *IEXPriceLevelUpdatePriceLevelUpdateModel) HasPrice() bool`

HasPrice returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


