# ModelsOfficialPriceModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the official price was recorded as DateTime | [optional] 
**PriceType** | Pointer to **int32** | Type of price as byte value | [optional] 
**PriceTypeCode** | Pointer to **NullableString** | Type of price as character string | [optional] 
**PriceTypeText** | Pointer to **NullableString** | Human-readable description of the price type | [optional] 
**IsPriceTypeOpening** | Pointer to **bool** | Indicates if the price type is &#39;IEX Official Opening Price&#39; (&#39;Q&#39;/0x51). | [optional] 
**IsPriceTypeClosing** | Pointer to **bool** | Indicates if the price type is &#39;IEX Official Closing Price&#39; (&#39;M&#39;/0x4d). | [optional] 
**OfficialPrice** | Pointer to **float64** | Official price as decimal | [optional] 

## Methods

### NewModelsOfficialPriceModel

`func NewModelsOfficialPriceModel() *ModelsOfficialPriceModel`

NewModelsOfficialPriceModel instantiates a new ModelsOfficialPriceModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsOfficialPriceModelWithDefaults

`func NewModelsOfficialPriceModelWithDefaults() *ModelsOfficialPriceModel`

NewModelsOfficialPriceModelWithDefaults instantiates a new ModelsOfficialPriceModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsOfficialPriceModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsOfficialPriceModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsOfficialPriceModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsOfficialPriceModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsOfficialPriceModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsOfficialPriceModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsOfficialPriceModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsOfficialPriceModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsOfficialPriceModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsOfficialPriceModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsOfficialPriceModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsOfficialPriceModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsOfficialPriceModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsOfficialPriceModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetPriceType

`func (o *ModelsOfficialPriceModel) GetPriceType() int32`

GetPriceType returns the PriceType field if non-nil, zero value otherwise.

### GetPriceTypeOk

`func (o *ModelsOfficialPriceModel) GetPriceTypeOk() (*int32, bool)`

GetPriceTypeOk returns a tuple with the PriceType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceType

`func (o *ModelsOfficialPriceModel) SetPriceType(v int32)`

SetPriceType sets PriceType field to given value.

### HasPriceType

`func (o *ModelsOfficialPriceModel) HasPriceType() bool`

HasPriceType returns a boolean if a field has been set.

### GetPriceTypeCode

`func (o *ModelsOfficialPriceModel) GetPriceTypeCode() string`

GetPriceTypeCode returns the PriceTypeCode field if non-nil, zero value otherwise.

### GetPriceTypeCodeOk

`func (o *ModelsOfficialPriceModel) GetPriceTypeCodeOk() (*string, bool)`

GetPriceTypeCodeOk returns a tuple with the PriceTypeCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceTypeCode

`func (o *ModelsOfficialPriceModel) SetPriceTypeCode(v string)`

SetPriceTypeCode sets PriceTypeCode field to given value.

### HasPriceTypeCode

`func (o *ModelsOfficialPriceModel) HasPriceTypeCode() bool`

HasPriceTypeCode returns a boolean if a field has been set.

### SetPriceTypeCodeNil

`func (o *ModelsOfficialPriceModel) SetPriceTypeCodeNil(b bool)`

 SetPriceTypeCodeNil sets the value for PriceTypeCode to be an explicit nil

### UnsetPriceTypeCode
`func (o *ModelsOfficialPriceModel) UnsetPriceTypeCode()`

UnsetPriceTypeCode ensures that no value is present for PriceTypeCode, not even an explicit nil
### GetPriceTypeText

`func (o *ModelsOfficialPriceModel) GetPriceTypeText() string`

GetPriceTypeText returns the PriceTypeText field if non-nil, zero value otherwise.

### GetPriceTypeTextOk

`func (o *ModelsOfficialPriceModel) GetPriceTypeTextOk() (*string, bool)`

GetPriceTypeTextOk returns a tuple with the PriceTypeText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceTypeText

`func (o *ModelsOfficialPriceModel) SetPriceTypeText(v string)`

SetPriceTypeText sets PriceTypeText field to given value.

### HasPriceTypeText

`func (o *ModelsOfficialPriceModel) HasPriceTypeText() bool`

HasPriceTypeText returns a boolean if a field has been set.

### SetPriceTypeTextNil

`func (o *ModelsOfficialPriceModel) SetPriceTypeTextNil(b bool)`

 SetPriceTypeTextNil sets the value for PriceTypeText to be an explicit nil

### UnsetPriceTypeText
`func (o *ModelsOfficialPriceModel) UnsetPriceTypeText()`

UnsetPriceTypeText ensures that no value is present for PriceTypeText, not even an explicit nil
### GetIsPriceTypeOpening

`func (o *ModelsOfficialPriceModel) GetIsPriceTypeOpening() bool`

GetIsPriceTypeOpening returns the IsPriceTypeOpening field if non-nil, zero value otherwise.

### GetIsPriceTypeOpeningOk

`func (o *ModelsOfficialPriceModel) GetIsPriceTypeOpeningOk() (*bool, bool)`

GetIsPriceTypeOpeningOk returns a tuple with the IsPriceTypeOpening field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPriceTypeOpening

`func (o *ModelsOfficialPriceModel) SetIsPriceTypeOpening(v bool)`

SetIsPriceTypeOpening sets IsPriceTypeOpening field to given value.

### HasIsPriceTypeOpening

`func (o *ModelsOfficialPriceModel) HasIsPriceTypeOpening() bool`

HasIsPriceTypeOpening returns a boolean if a field has been set.

### GetIsPriceTypeClosing

`func (o *ModelsOfficialPriceModel) GetIsPriceTypeClosing() bool`

GetIsPriceTypeClosing returns the IsPriceTypeClosing field if non-nil, zero value otherwise.

### GetIsPriceTypeClosingOk

`func (o *ModelsOfficialPriceModel) GetIsPriceTypeClosingOk() (*bool, bool)`

GetIsPriceTypeClosingOk returns a tuple with the IsPriceTypeClosing field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPriceTypeClosing

`func (o *ModelsOfficialPriceModel) SetIsPriceTypeClosing(v bool)`

SetIsPriceTypeClosing sets IsPriceTypeClosing field to given value.

### HasIsPriceTypeClosing

`func (o *ModelsOfficialPriceModel) HasIsPriceTypeClosing() bool`

HasIsPriceTypeClosing returns a boolean if a field has been set.

### GetOfficialPrice

`func (o *ModelsOfficialPriceModel) GetOfficialPrice() float64`

GetOfficialPrice returns the OfficialPrice field if non-nil, zero value otherwise.

### GetOfficialPriceOk

`func (o *ModelsOfficialPriceModel) GetOfficialPriceOk() (*float64, bool)`

GetOfficialPriceOk returns a tuple with the OfficialPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOfficialPrice

`func (o *ModelsOfficialPriceModel) SetOfficialPrice(v float64)`

SetOfficialPrice sets OfficialPrice field to given value.

### HasOfficialPrice

`func (o *ModelsOfficialPriceModel) HasOfficialPrice() bool`

HasOfficialPrice returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


