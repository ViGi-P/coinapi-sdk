# ModelsAddOrderModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the order was added as DateTime (UTC) | [optional] 
**IsSideBuy** | Pointer to **bool** | Indicates if this is a Buy order (&#39;8&#39;/0x38). | [optional] 
**Size** | Pointer to **int32** | Quoted size in number of shares | [optional] 
**Price** | Pointer to **float64** | Price as decimal | [optional] 
**OrderId** | Pointer to **int64** | Order identifier | [optional] 

## Methods

### NewModelsAddOrderModel

`func NewModelsAddOrderModel() *ModelsAddOrderModel`

NewModelsAddOrderModel instantiates a new ModelsAddOrderModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsAddOrderModelWithDefaults

`func NewModelsAddOrderModelWithDefaults() *ModelsAddOrderModel`

NewModelsAddOrderModelWithDefaults instantiates a new ModelsAddOrderModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsAddOrderModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsAddOrderModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsAddOrderModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsAddOrderModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsAddOrderModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsAddOrderModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsAddOrderModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsAddOrderModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsAddOrderModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsAddOrderModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsAddOrderModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsAddOrderModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsAddOrderModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsAddOrderModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetIsSideBuy

`func (o *ModelsAddOrderModel) GetIsSideBuy() bool`

GetIsSideBuy returns the IsSideBuy field if non-nil, zero value otherwise.

### GetIsSideBuyOk

`func (o *ModelsAddOrderModel) GetIsSideBuyOk() (*bool, bool)`

GetIsSideBuyOk returns a tuple with the IsSideBuy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSideBuy

`func (o *ModelsAddOrderModel) SetIsSideBuy(v bool)`

SetIsSideBuy sets IsSideBuy field to given value.

### HasIsSideBuy

`func (o *ModelsAddOrderModel) HasIsSideBuy() bool`

HasIsSideBuy returns a boolean if a field has been set.

### GetSize

`func (o *ModelsAddOrderModel) GetSize() int32`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *ModelsAddOrderModel) GetSizeOk() (*int32, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *ModelsAddOrderModel) SetSize(v int32)`

SetSize sets Size field to given value.

### HasSize

`func (o *ModelsAddOrderModel) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetPrice

`func (o *ModelsAddOrderModel) GetPrice() float64`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *ModelsAddOrderModel) GetPriceOk() (*float64, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *ModelsAddOrderModel) SetPrice(v float64)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *ModelsAddOrderModel) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### GetOrderId

`func (o *ModelsAddOrderModel) GetOrderId() int64`

GetOrderId returns the OrderId field if non-nil, zero value otherwise.

### GetOrderIdOk

`func (o *ModelsAddOrderModel) GetOrderIdOk() (*int64, bool)`

GetOrderIdOk returns a tuple with the OrderId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrderId

`func (o *ModelsAddOrderModel) SetOrderId(v int64)`

SetOrderId sets OrderId field to given value.

### HasOrderId

`func (o *ModelsAddOrderModel) HasOrderId() bool`

HasOrderId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


