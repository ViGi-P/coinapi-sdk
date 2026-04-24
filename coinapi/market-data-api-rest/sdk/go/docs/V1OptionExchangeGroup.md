# V1OptionExchangeGroup

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AssetIdBase** | Pointer to **NullableString** | Gets or sets the base asset identifier. | [optional] 
**AssetIdQuote** | Pointer to **NullableString** | Gets or sets the quote asset identifier. | [optional] 
**UnderlyingPrice** | Pointer to **NullableFloat64** | Gets or sets the underlying price of the option. | [optional] 
**TimeExpiration** | Pointer to **time.Time** | Gets or sets the expiration time of the option. | [optional] 
**Strikes** | Pointer to [**[]V1Strike**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] 

## Methods

### NewV1OptionExchangeGroup

`func NewV1OptionExchangeGroup() *V1OptionExchangeGroup`

NewV1OptionExchangeGroup instantiates a new V1OptionExchangeGroup object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1OptionExchangeGroupWithDefaults

`func NewV1OptionExchangeGroupWithDefaults() *V1OptionExchangeGroup`

NewV1OptionExchangeGroupWithDefaults instantiates a new V1OptionExchangeGroup object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAssetIdBase

`func (o *V1OptionExchangeGroup) GetAssetIdBase() string`

GetAssetIdBase returns the AssetIdBase field if non-nil, zero value otherwise.

### GetAssetIdBaseOk

`func (o *V1OptionExchangeGroup) GetAssetIdBaseOk() (*string, bool)`

GetAssetIdBaseOk returns a tuple with the AssetIdBase field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdBase

`func (o *V1OptionExchangeGroup) SetAssetIdBase(v string)`

SetAssetIdBase sets AssetIdBase field to given value.

### HasAssetIdBase

`func (o *V1OptionExchangeGroup) HasAssetIdBase() bool`

HasAssetIdBase returns a boolean if a field has been set.

### SetAssetIdBaseNil

`func (o *V1OptionExchangeGroup) SetAssetIdBaseNil(b bool)`

 SetAssetIdBaseNil sets the value for AssetIdBase to be an explicit nil

### UnsetAssetIdBase
`func (o *V1OptionExchangeGroup) UnsetAssetIdBase()`

UnsetAssetIdBase ensures that no value is present for AssetIdBase, not even an explicit nil
### GetAssetIdQuote

`func (o *V1OptionExchangeGroup) GetAssetIdQuote() string`

GetAssetIdQuote returns the AssetIdQuote field if non-nil, zero value otherwise.

### GetAssetIdQuoteOk

`func (o *V1OptionExchangeGroup) GetAssetIdQuoteOk() (*string, bool)`

GetAssetIdQuoteOk returns a tuple with the AssetIdQuote field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdQuote

`func (o *V1OptionExchangeGroup) SetAssetIdQuote(v string)`

SetAssetIdQuote sets AssetIdQuote field to given value.

### HasAssetIdQuote

`func (o *V1OptionExchangeGroup) HasAssetIdQuote() bool`

HasAssetIdQuote returns a boolean if a field has been set.

### SetAssetIdQuoteNil

`func (o *V1OptionExchangeGroup) SetAssetIdQuoteNil(b bool)`

 SetAssetIdQuoteNil sets the value for AssetIdQuote to be an explicit nil

### UnsetAssetIdQuote
`func (o *V1OptionExchangeGroup) UnsetAssetIdQuote()`

UnsetAssetIdQuote ensures that no value is present for AssetIdQuote, not even an explicit nil
### GetUnderlyingPrice

`func (o *V1OptionExchangeGroup) GetUnderlyingPrice() float64`

GetUnderlyingPrice returns the UnderlyingPrice field if non-nil, zero value otherwise.

### GetUnderlyingPriceOk

`func (o *V1OptionExchangeGroup) GetUnderlyingPriceOk() (*float64, bool)`

GetUnderlyingPriceOk returns a tuple with the UnderlyingPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnderlyingPrice

`func (o *V1OptionExchangeGroup) SetUnderlyingPrice(v float64)`

SetUnderlyingPrice sets UnderlyingPrice field to given value.

### HasUnderlyingPrice

`func (o *V1OptionExchangeGroup) HasUnderlyingPrice() bool`

HasUnderlyingPrice returns a boolean if a field has been set.

### SetUnderlyingPriceNil

`func (o *V1OptionExchangeGroup) SetUnderlyingPriceNil(b bool)`

 SetUnderlyingPriceNil sets the value for UnderlyingPrice to be an explicit nil

### UnsetUnderlyingPrice
`func (o *V1OptionExchangeGroup) UnsetUnderlyingPrice()`

UnsetUnderlyingPrice ensures that no value is present for UnderlyingPrice, not even an explicit nil
### GetTimeExpiration

`func (o *V1OptionExchangeGroup) GetTimeExpiration() time.Time`

GetTimeExpiration returns the TimeExpiration field if non-nil, zero value otherwise.

### GetTimeExpirationOk

`func (o *V1OptionExchangeGroup) GetTimeExpirationOk() (*time.Time, bool)`

GetTimeExpirationOk returns a tuple with the TimeExpiration field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimeExpiration

`func (o *V1OptionExchangeGroup) SetTimeExpiration(v time.Time)`

SetTimeExpiration sets TimeExpiration field to given value.

### HasTimeExpiration

`func (o *V1OptionExchangeGroup) HasTimeExpiration() bool`

HasTimeExpiration returns a boolean if a field has been set.

### GetStrikes

`func (o *V1OptionExchangeGroup) GetStrikes() []V1Strike`

GetStrikes returns the Strikes field if non-nil, zero value otherwise.

### GetStrikesOk

`func (o *V1OptionExchangeGroup) GetStrikesOk() (*[]V1Strike, bool)`

GetStrikesOk returns a tuple with the Strikes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStrikes

`func (o *V1OptionExchangeGroup) SetStrikes(v []V1Strike)`

SetStrikes sets Strikes field to given value.

### HasStrikes

`func (o *V1OptionExchangeGroup) HasStrikes() bool`

HasStrikes returns a boolean if a field has been set.

### SetStrikesNil

`func (o *V1OptionExchangeGroup) SetStrikesNil(b bool)`

 SetStrikesNil sets the value for Strikes to be an explicit nil

### UnsetStrikes
`func (o *V1OptionExchangeGroup) UnsetStrikes()`

UnsetStrikes ensures that no value is present for Strikes, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


