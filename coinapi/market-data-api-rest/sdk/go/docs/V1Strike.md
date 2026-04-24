# V1Strike

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StrikePrice** | Pointer to **float64** | Gets or sets the strike price. | [optional] 
**Call** | Pointer to [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 
**Put** | Pointer to [**V1QuoteTrade**](V1QuoteTrade.md) |  | [optional] 

## Methods

### NewV1Strike

`func NewV1Strike() *V1Strike`

NewV1Strike instantiates a new V1Strike object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1StrikeWithDefaults

`func NewV1StrikeWithDefaults() *V1Strike`

NewV1StrikeWithDefaults instantiates a new V1Strike object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStrikePrice

`func (o *V1Strike) GetStrikePrice() float64`

GetStrikePrice returns the StrikePrice field if non-nil, zero value otherwise.

### GetStrikePriceOk

`func (o *V1Strike) GetStrikePriceOk() (*float64, bool)`

GetStrikePriceOk returns a tuple with the StrikePrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStrikePrice

`func (o *V1Strike) SetStrikePrice(v float64)`

SetStrikePrice sets StrikePrice field to given value.

### HasStrikePrice

`func (o *V1Strike) HasStrikePrice() bool`

HasStrikePrice returns a boolean if a field has been set.

### GetCall

`func (o *V1Strike) GetCall() V1QuoteTrade`

GetCall returns the Call field if non-nil, zero value otherwise.

### GetCallOk

`func (o *V1Strike) GetCallOk() (*V1QuoteTrade, bool)`

GetCallOk returns a tuple with the Call field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCall

`func (o *V1Strike) SetCall(v V1QuoteTrade)`

SetCall sets Call field to given value.

### HasCall

`func (o *V1Strike) HasCall() bool`

HasCall returns a boolean if a field has been set.

### GetPut

`func (o *V1Strike) GetPut() V1QuoteTrade`

GetPut returns the Put field if non-nil, zero value otherwise.

### GetPutOk

`func (o *V1Strike) GetPutOk() (*V1QuoteTrade, bool)`

GetPutOk returns a tuple with the Put field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPut

`func (o *V1Strike) SetPut(v V1QuoteTrade)`

SetPut sets Put field to given value.

### HasPut

`func (o *V1Strike) HasPut() bool`

HasPut returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


