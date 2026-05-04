# IEXQuoteUpdateQuoteUpdateModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the quote update was recorded as DateTime | [optional] 
**IsSymbolAvailable** | Pointer to **bool** | Gets whether the symbol is available for trading True if active, False if halted, paused, or otherwise not available | [optional] 
**IsPrePostMarketSession** | Pointer to **bool** | Gets whether the market session is regular or pre/post-market True if pre/post-market session, False if regular market session | [optional] 
**AskSize** | Pointer to **int32** | Ask size in number of shares | [optional] 
**AskPrice** | Pointer to **float64** | Ask price as decimal | [optional] 
**BidPrice** | Pointer to **float64** | Bid price as decimal | [optional] 
**BidSize** | Pointer to **int32** | Bid size in number of shares | [optional] 

## Methods

### NewIEXQuoteUpdateQuoteUpdateModel

`func NewIEXQuoteUpdateQuoteUpdateModel() *IEXQuoteUpdateQuoteUpdateModel`

NewIEXQuoteUpdateQuoteUpdateModel instantiates a new IEXQuoteUpdateQuoteUpdateModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIEXQuoteUpdateQuoteUpdateModelWithDefaults

`func NewIEXQuoteUpdateQuoteUpdateModelWithDefaults() *IEXQuoteUpdateQuoteUpdateModel`

NewIEXQuoteUpdateQuoteUpdateModelWithDefaults instantiates a new IEXQuoteUpdateQuoteUpdateModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *IEXQuoteUpdateQuoteUpdateModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetIsSymbolAvailable

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetIsSymbolAvailable() bool`

GetIsSymbolAvailable returns the IsSymbolAvailable field if non-nil, zero value otherwise.

### GetIsSymbolAvailableOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetIsSymbolAvailableOk() (*bool, bool)`

GetIsSymbolAvailableOk returns a tuple with the IsSymbolAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSymbolAvailable

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetIsSymbolAvailable(v bool)`

SetIsSymbolAvailable sets IsSymbolAvailable field to given value.

### HasIsSymbolAvailable

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasIsSymbolAvailable() bool`

HasIsSymbolAvailable returns a boolean if a field has been set.

### GetIsPrePostMarketSession

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetIsPrePostMarketSession() bool`

GetIsPrePostMarketSession returns the IsPrePostMarketSession field if non-nil, zero value otherwise.

### GetIsPrePostMarketSessionOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetIsPrePostMarketSessionOk() (*bool, bool)`

GetIsPrePostMarketSessionOk returns a tuple with the IsPrePostMarketSession field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPrePostMarketSession

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetIsPrePostMarketSession(v bool)`

SetIsPrePostMarketSession sets IsPrePostMarketSession field to given value.

### HasIsPrePostMarketSession

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasIsPrePostMarketSession() bool`

HasIsPrePostMarketSession returns a boolean if a field has been set.

### GetAskSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetAskSize() int32`

GetAskSize returns the AskSize field if non-nil, zero value otherwise.

### GetAskSizeOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetAskSizeOk() (*int32, bool)`

GetAskSizeOk returns a tuple with the AskSize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAskSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetAskSize(v int32)`

SetAskSize sets AskSize field to given value.

### HasAskSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasAskSize() bool`

HasAskSize returns a boolean if a field has been set.

### GetAskPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetAskPrice() float64`

GetAskPrice returns the AskPrice field if non-nil, zero value otherwise.

### GetAskPriceOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetAskPriceOk() (*float64, bool)`

GetAskPriceOk returns a tuple with the AskPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAskPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetAskPrice(v float64)`

SetAskPrice sets AskPrice field to given value.

### HasAskPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasAskPrice() bool`

HasAskPrice returns a boolean if a field has been set.

### GetBidPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetBidPrice() float64`

GetBidPrice returns the BidPrice field if non-nil, zero value otherwise.

### GetBidPriceOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetBidPriceOk() (*float64, bool)`

GetBidPriceOk returns a tuple with the BidPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBidPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetBidPrice(v float64)`

SetBidPrice sets BidPrice field to given value.

### HasBidPrice

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasBidPrice() bool`

HasBidPrice returns a boolean if a field has been set.

### GetBidSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetBidSize() int32`

GetBidSize returns the BidSize field if non-nil, zero value otherwise.

### GetBidSizeOk

`func (o *IEXQuoteUpdateQuoteUpdateModel) GetBidSizeOk() (*int32, bool)`

GetBidSizeOk returns a tuple with the BidSize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBidSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) SetBidSize(v int32)`

SetBidSize sets BidSize field to given value.

### HasBidSize

`func (o *IEXQuoteUpdateQuoteUpdateModel) HasBidSize() bool`

HasBidSize returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


