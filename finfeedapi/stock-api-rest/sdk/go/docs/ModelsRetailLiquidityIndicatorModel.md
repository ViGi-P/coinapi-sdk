# ModelsRetailLiquidityIndicatorModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the retail liquidity indicator was recorded as DateTime | [optional] 
**RetailLiquidityIndicator** | Pointer to **int32** | Retail liquidity indicator as byte value | [optional] 
**RetailLiquidityIndicatorCode** | Pointer to **NullableString** | Retail liquidity indicator as character string | [optional] 
**RetailLiquidityIndicatorText** | Pointer to **NullableString** | Human-readable description of the retail liquidity indicator | [optional] 
**IsRetailIndicatorNotApplicable** | Pointer to **bool** | Indicates if the indicator is &#39;Not Applicable&#39; (&#39; &#39;/0x20). | [optional] 
**IsRetailIndicatorBuyInterest** | Pointer to **bool** | Indicates if there is &#39;Buy interest for Retail&#39; (&#39;A&#39;/0x41). | [optional] 
**IsRetailIndicatorSellInterest** | Pointer to **bool** | Indicates if there is &#39;Sell interest for Retail&#39; (&#39;B&#39;/0x42). | [optional] 
**IsRetailIndicatorBuyAndSellInterest** | Pointer to **bool** | Indicates if there is &#39;Buy and sell interest for Retail&#39; (&#39;C&#39;/0x43). | [optional] 

## Methods

### NewModelsRetailLiquidityIndicatorModel

`func NewModelsRetailLiquidityIndicatorModel() *ModelsRetailLiquidityIndicatorModel`

NewModelsRetailLiquidityIndicatorModel instantiates a new ModelsRetailLiquidityIndicatorModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsRetailLiquidityIndicatorModelWithDefaults

`func NewModelsRetailLiquidityIndicatorModelWithDefaults() *ModelsRetailLiquidityIndicatorModel`

NewModelsRetailLiquidityIndicatorModelWithDefaults instantiates a new ModelsRetailLiquidityIndicatorModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsRetailLiquidityIndicatorModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsRetailLiquidityIndicatorModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsRetailLiquidityIndicatorModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsRetailLiquidityIndicatorModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsRetailLiquidityIndicatorModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsRetailLiquidityIndicatorModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsRetailLiquidityIndicatorModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsRetailLiquidityIndicatorModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsRetailLiquidityIndicatorModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsRetailLiquidityIndicatorModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsRetailLiquidityIndicatorModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetRetailLiquidityIndicator

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicator() int32`

GetRetailLiquidityIndicator returns the RetailLiquidityIndicator field if non-nil, zero value otherwise.

### GetRetailLiquidityIndicatorOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicatorOk() (*int32, bool)`

GetRetailLiquidityIndicatorOk returns a tuple with the RetailLiquidityIndicator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRetailLiquidityIndicator

`func (o *ModelsRetailLiquidityIndicatorModel) SetRetailLiquidityIndicator(v int32)`

SetRetailLiquidityIndicator sets RetailLiquidityIndicator field to given value.

### HasRetailLiquidityIndicator

`func (o *ModelsRetailLiquidityIndicatorModel) HasRetailLiquidityIndicator() bool`

HasRetailLiquidityIndicator returns a boolean if a field has been set.

### GetRetailLiquidityIndicatorCode

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicatorCode() string`

GetRetailLiquidityIndicatorCode returns the RetailLiquidityIndicatorCode field if non-nil, zero value otherwise.

### GetRetailLiquidityIndicatorCodeOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicatorCodeOk() (*string, bool)`

GetRetailLiquidityIndicatorCodeOk returns a tuple with the RetailLiquidityIndicatorCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRetailLiquidityIndicatorCode

`func (o *ModelsRetailLiquidityIndicatorModel) SetRetailLiquidityIndicatorCode(v string)`

SetRetailLiquidityIndicatorCode sets RetailLiquidityIndicatorCode field to given value.

### HasRetailLiquidityIndicatorCode

`func (o *ModelsRetailLiquidityIndicatorModel) HasRetailLiquidityIndicatorCode() bool`

HasRetailLiquidityIndicatorCode returns a boolean if a field has been set.

### SetRetailLiquidityIndicatorCodeNil

`func (o *ModelsRetailLiquidityIndicatorModel) SetRetailLiquidityIndicatorCodeNil(b bool)`

 SetRetailLiquidityIndicatorCodeNil sets the value for RetailLiquidityIndicatorCode to be an explicit nil

### UnsetRetailLiquidityIndicatorCode
`func (o *ModelsRetailLiquidityIndicatorModel) UnsetRetailLiquidityIndicatorCode()`

UnsetRetailLiquidityIndicatorCode ensures that no value is present for RetailLiquidityIndicatorCode, not even an explicit nil
### GetRetailLiquidityIndicatorText

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicatorText() string`

GetRetailLiquidityIndicatorText returns the RetailLiquidityIndicatorText field if non-nil, zero value otherwise.

### GetRetailLiquidityIndicatorTextOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetRetailLiquidityIndicatorTextOk() (*string, bool)`

GetRetailLiquidityIndicatorTextOk returns a tuple with the RetailLiquidityIndicatorText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRetailLiquidityIndicatorText

`func (o *ModelsRetailLiquidityIndicatorModel) SetRetailLiquidityIndicatorText(v string)`

SetRetailLiquidityIndicatorText sets RetailLiquidityIndicatorText field to given value.

### HasRetailLiquidityIndicatorText

`func (o *ModelsRetailLiquidityIndicatorModel) HasRetailLiquidityIndicatorText() bool`

HasRetailLiquidityIndicatorText returns a boolean if a field has been set.

### SetRetailLiquidityIndicatorTextNil

`func (o *ModelsRetailLiquidityIndicatorModel) SetRetailLiquidityIndicatorTextNil(b bool)`

 SetRetailLiquidityIndicatorTextNil sets the value for RetailLiquidityIndicatorText to be an explicit nil

### UnsetRetailLiquidityIndicatorText
`func (o *ModelsRetailLiquidityIndicatorModel) UnsetRetailLiquidityIndicatorText()`

UnsetRetailLiquidityIndicatorText ensures that no value is present for RetailLiquidityIndicatorText, not even an explicit nil
### GetIsRetailIndicatorNotApplicable

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorNotApplicable() bool`

GetIsRetailIndicatorNotApplicable returns the IsRetailIndicatorNotApplicable field if non-nil, zero value otherwise.

### GetIsRetailIndicatorNotApplicableOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorNotApplicableOk() (*bool, bool)`

GetIsRetailIndicatorNotApplicableOk returns a tuple with the IsRetailIndicatorNotApplicable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsRetailIndicatorNotApplicable

`func (o *ModelsRetailLiquidityIndicatorModel) SetIsRetailIndicatorNotApplicable(v bool)`

SetIsRetailIndicatorNotApplicable sets IsRetailIndicatorNotApplicable field to given value.

### HasIsRetailIndicatorNotApplicable

`func (o *ModelsRetailLiquidityIndicatorModel) HasIsRetailIndicatorNotApplicable() bool`

HasIsRetailIndicatorNotApplicable returns a boolean if a field has been set.

### GetIsRetailIndicatorBuyInterest

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorBuyInterest() bool`

GetIsRetailIndicatorBuyInterest returns the IsRetailIndicatorBuyInterest field if non-nil, zero value otherwise.

### GetIsRetailIndicatorBuyInterestOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorBuyInterestOk() (*bool, bool)`

GetIsRetailIndicatorBuyInterestOk returns a tuple with the IsRetailIndicatorBuyInterest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsRetailIndicatorBuyInterest

`func (o *ModelsRetailLiquidityIndicatorModel) SetIsRetailIndicatorBuyInterest(v bool)`

SetIsRetailIndicatorBuyInterest sets IsRetailIndicatorBuyInterest field to given value.

### HasIsRetailIndicatorBuyInterest

`func (o *ModelsRetailLiquidityIndicatorModel) HasIsRetailIndicatorBuyInterest() bool`

HasIsRetailIndicatorBuyInterest returns a boolean if a field has been set.

### GetIsRetailIndicatorSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorSellInterest() bool`

GetIsRetailIndicatorSellInterest returns the IsRetailIndicatorSellInterest field if non-nil, zero value otherwise.

### GetIsRetailIndicatorSellInterestOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorSellInterestOk() (*bool, bool)`

GetIsRetailIndicatorSellInterestOk returns a tuple with the IsRetailIndicatorSellInterest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsRetailIndicatorSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) SetIsRetailIndicatorSellInterest(v bool)`

SetIsRetailIndicatorSellInterest sets IsRetailIndicatorSellInterest field to given value.

### HasIsRetailIndicatorSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) HasIsRetailIndicatorSellInterest() bool`

HasIsRetailIndicatorSellInterest returns a boolean if a field has been set.

### GetIsRetailIndicatorBuyAndSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorBuyAndSellInterest() bool`

GetIsRetailIndicatorBuyAndSellInterest returns the IsRetailIndicatorBuyAndSellInterest field if non-nil, zero value otherwise.

### GetIsRetailIndicatorBuyAndSellInterestOk

`func (o *ModelsRetailLiquidityIndicatorModel) GetIsRetailIndicatorBuyAndSellInterestOk() (*bool, bool)`

GetIsRetailIndicatorBuyAndSellInterestOk returns a tuple with the IsRetailIndicatorBuyAndSellInterest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsRetailIndicatorBuyAndSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) SetIsRetailIndicatorBuyAndSellInterest(v bool)`

SetIsRetailIndicatorBuyAndSellInterest sets IsRetailIndicatorBuyAndSellInterest field to given value.

### HasIsRetailIndicatorBuyAndSellInterest

`func (o *ModelsRetailLiquidityIndicatorModel) HasIsRetailIndicatorBuyAndSellInterest() bool`

HasIsRetailIndicatorBuyAndSellInterest returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


