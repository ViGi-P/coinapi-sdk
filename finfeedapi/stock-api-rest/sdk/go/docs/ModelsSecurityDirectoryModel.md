# ModelsSecurityDirectoryModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the security directory information was recorded as DateTime | [optional] 
**Flags** | Pointer to **int32** | Flags for the security | [optional] 
**RoundLotSize** | Pointer to **int32** | Number of shares that represent a round lot | [optional] 
**AdjustedPocPrice** | Pointer to **float64** | Adjusted previous official closing price as decimal | [optional] 
**LuldTier** | Pointer to **int32** | LULD tier as byte value | [optional] 
**LuldTierCode** | Pointer to **NullableString** | LULD tier as numeric string | [optional] 
**LuldTierText** | Pointer to **NullableString** | Human-readable description of the LULD tier | [optional] 
**IsLuldTierNotApplicable** | Pointer to **bool** | Indicates if LULD Tier is &#39;Not applicable&#39; (0x0). | [optional] 
**IsLuldTier1** | Pointer to **bool** | Indicates if LULD Tier is &#39;Tier 1 NMS Stock&#39; (0x1). | [optional] 
**IsLuldTier2** | Pointer to **bool** | Indicates if LULD Tier is &#39;Tier 2 NMS Stock&#39; (0x2). | [optional] 

## Methods

### NewModelsSecurityDirectoryModel

`func NewModelsSecurityDirectoryModel() *ModelsSecurityDirectoryModel`

NewModelsSecurityDirectoryModel instantiates a new ModelsSecurityDirectoryModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsSecurityDirectoryModelWithDefaults

`func NewModelsSecurityDirectoryModelWithDefaults() *ModelsSecurityDirectoryModel`

NewModelsSecurityDirectoryModelWithDefaults instantiates a new ModelsSecurityDirectoryModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsSecurityDirectoryModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsSecurityDirectoryModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsSecurityDirectoryModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsSecurityDirectoryModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsSecurityDirectoryModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsSecurityDirectoryModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsSecurityDirectoryModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsSecurityDirectoryModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsSecurityDirectoryModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsSecurityDirectoryModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsSecurityDirectoryModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsSecurityDirectoryModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsSecurityDirectoryModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsSecurityDirectoryModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetFlags

`func (o *ModelsSecurityDirectoryModel) GetFlags() int32`

GetFlags returns the Flags field if non-nil, zero value otherwise.

### GetFlagsOk

`func (o *ModelsSecurityDirectoryModel) GetFlagsOk() (*int32, bool)`

GetFlagsOk returns a tuple with the Flags field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFlags

`func (o *ModelsSecurityDirectoryModel) SetFlags(v int32)`

SetFlags sets Flags field to given value.

### HasFlags

`func (o *ModelsSecurityDirectoryModel) HasFlags() bool`

HasFlags returns a boolean if a field has been set.

### GetRoundLotSize

`func (o *ModelsSecurityDirectoryModel) GetRoundLotSize() int32`

GetRoundLotSize returns the RoundLotSize field if non-nil, zero value otherwise.

### GetRoundLotSizeOk

`func (o *ModelsSecurityDirectoryModel) GetRoundLotSizeOk() (*int32, bool)`

GetRoundLotSizeOk returns a tuple with the RoundLotSize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRoundLotSize

`func (o *ModelsSecurityDirectoryModel) SetRoundLotSize(v int32)`

SetRoundLotSize sets RoundLotSize field to given value.

### HasRoundLotSize

`func (o *ModelsSecurityDirectoryModel) HasRoundLotSize() bool`

HasRoundLotSize returns a boolean if a field has been set.

### GetAdjustedPocPrice

`func (o *ModelsSecurityDirectoryModel) GetAdjustedPocPrice() float64`

GetAdjustedPocPrice returns the AdjustedPocPrice field if non-nil, zero value otherwise.

### GetAdjustedPocPriceOk

`func (o *ModelsSecurityDirectoryModel) GetAdjustedPocPriceOk() (*float64, bool)`

GetAdjustedPocPriceOk returns a tuple with the AdjustedPocPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdjustedPocPrice

`func (o *ModelsSecurityDirectoryModel) SetAdjustedPocPrice(v float64)`

SetAdjustedPocPrice sets AdjustedPocPrice field to given value.

### HasAdjustedPocPrice

`func (o *ModelsSecurityDirectoryModel) HasAdjustedPocPrice() bool`

HasAdjustedPocPrice returns a boolean if a field has been set.

### GetLuldTier

`func (o *ModelsSecurityDirectoryModel) GetLuldTier() int32`

GetLuldTier returns the LuldTier field if non-nil, zero value otherwise.

### GetLuldTierOk

`func (o *ModelsSecurityDirectoryModel) GetLuldTierOk() (*int32, bool)`

GetLuldTierOk returns a tuple with the LuldTier field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLuldTier

`func (o *ModelsSecurityDirectoryModel) SetLuldTier(v int32)`

SetLuldTier sets LuldTier field to given value.

### HasLuldTier

`func (o *ModelsSecurityDirectoryModel) HasLuldTier() bool`

HasLuldTier returns a boolean if a field has been set.

### GetLuldTierCode

`func (o *ModelsSecurityDirectoryModel) GetLuldTierCode() string`

GetLuldTierCode returns the LuldTierCode field if non-nil, zero value otherwise.

### GetLuldTierCodeOk

`func (o *ModelsSecurityDirectoryModel) GetLuldTierCodeOk() (*string, bool)`

GetLuldTierCodeOk returns a tuple with the LuldTierCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLuldTierCode

`func (o *ModelsSecurityDirectoryModel) SetLuldTierCode(v string)`

SetLuldTierCode sets LuldTierCode field to given value.

### HasLuldTierCode

`func (o *ModelsSecurityDirectoryModel) HasLuldTierCode() bool`

HasLuldTierCode returns a boolean if a field has been set.

### SetLuldTierCodeNil

`func (o *ModelsSecurityDirectoryModel) SetLuldTierCodeNil(b bool)`

 SetLuldTierCodeNil sets the value for LuldTierCode to be an explicit nil

### UnsetLuldTierCode
`func (o *ModelsSecurityDirectoryModel) UnsetLuldTierCode()`

UnsetLuldTierCode ensures that no value is present for LuldTierCode, not even an explicit nil
### GetLuldTierText

`func (o *ModelsSecurityDirectoryModel) GetLuldTierText() string`

GetLuldTierText returns the LuldTierText field if non-nil, zero value otherwise.

### GetLuldTierTextOk

`func (o *ModelsSecurityDirectoryModel) GetLuldTierTextOk() (*string, bool)`

GetLuldTierTextOk returns a tuple with the LuldTierText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLuldTierText

`func (o *ModelsSecurityDirectoryModel) SetLuldTierText(v string)`

SetLuldTierText sets LuldTierText field to given value.

### HasLuldTierText

`func (o *ModelsSecurityDirectoryModel) HasLuldTierText() bool`

HasLuldTierText returns a boolean if a field has been set.

### SetLuldTierTextNil

`func (o *ModelsSecurityDirectoryModel) SetLuldTierTextNil(b bool)`

 SetLuldTierTextNil sets the value for LuldTierText to be an explicit nil

### UnsetLuldTierText
`func (o *ModelsSecurityDirectoryModel) UnsetLuldTierText()`

UnsetLuldTierText ensures that no value is present for LuldTierText, not even an explicit nil
### GetIsLuldTierNotApplicable

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTierNotApplicable() bool`

GetIsLuldTierNotApplicable returns the IsLuldTierNotApplicable field if non-nil, zero value otherwise.

### GetIsLuldTierNotApplicableOk

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTierNotApplicableOk() (*bool, bool)`

GetIsLuldTierNotApplicableOk returns a tuple with the IsLuldTierNotApplicable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsLuldTierNotApplicable

`func (o *ModelsSecurityDirectoryModel) SetIsLuldTierNotApplicable(v bool)`

SetIsLuldTierNotApplicable sets IsLuldTierNotApplicable field to given value.

### HasIsLuldTierNotApplicable

`func (o *ModelsSecurityDirectoryModel) HasIsLuldTierNotApplicable() bool`

HasIsLuldTierNotApplicable returns a boolean if a field has been set.

### GetIsLuldTier1

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTier1() bool`

GetIsLuldTier1 returns the IsLuldTier1 field if non-nil, zero value otherwise.

### GetIsLuldTier1Ok

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTier1Ok() (*bool, bool)`

GetIsLuldTier1Ok returns a tuple with the IsLuldTier1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsLuldTier1

`func (o *ModelsSecurityDirectoryModel) SetIsLuldTier1(v bool)`

SetIsLuldTier1 sets IsLuldTier1 field to given value.

### HasIsLuldTier1

`func (o *ModelsSecurityDirectoryModel) HasIsLuldTier1() bool`

HasIsLuldTier1 returns a boolean if a field has been set.

### GetIsLuldTier2

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTier2() bool`

GetIsLuldTier2 returns the IsLuldTier2 field if non-nil, zero value otherwise.

### GetIsLuldTier2Ok

`func (o *ModelsSecurityDirectoryModel) GetIsLuldTier2Ok() (*bool, bool)`

GetIsLuldTier2Ok returns a tuple with the IsLuldTier2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsLuldTier2

`func (o *ModelsSecurityDirectoryModel) SetIsLuldTier2(v bool)`

SetIsLuldTier2 sets IsLuldTier2 field to given value.

### HasIsLuldTier2

`func (o *ModelsSecurityDirectoryModel) HasIsLuldTier2() bool`

HasIsLuldTier2 returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


