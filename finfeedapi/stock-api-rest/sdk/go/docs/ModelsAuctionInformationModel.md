# ModelsAuctionInformationModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the auction data was recorded as DateTime | [optional] 
**AuctionType** | Pointer to **int32** | Type of auction as byte value | [optional] 
**AuctionTypeCode** | Pointer to **NullableString** | Type of auction as character string | [optional] 
**AuctionTypeText** | Pointer to **NullableString** | Human-readable description of the auction type | [optional] 
**IsAuctionTypeOpening** | Pointer to **bool** | Indicates if the auction type is &#39;Opening Auction&#39; (&#39;O&#39;/0x4f). | [optional] 
**IsAuctionTypeClosing** | Pointer to **bool** | Indicates if the auction type is &#39;Closing Auction&#39; (&#39;C&#39;/0x43). | [optional] 
**IsAuctionTypeIpo** | Pointer to **bool** | Indicates if the auction type is &#39;IPO Auction&#39; (&#39;I&#39;/0x49). | [optional] 
**IsAuctionTypeHalt** | Pointer to **bool** | Indicates if the auction type is &#39;Halt Auction&#39; (&#39;H&#39;/0x48). | [optional] 
**IsAuctionTypeVolatility** | Pointer to **bool** | Indicates if the auction type is &#39;Volatility Auction&#39; (&#39;V&#39;/0x56). | [optional] 
**PairedShares** | Pointer to **int32** | Number of shares paired at the Reference Price | [optional] 
**ReferencePrice** | Pointer to **float64** | Reference price as decimal | [optional] 
**IndicativeClearingPrice** | Pointer to **float64** | Indicative clearing price as decimal | [optional] 
**ImbalanceShares** | Pointer to **int32** | Number of unpaired shares at the Reference Price | [optional] 
**ImbalanceSide** | Pointer to **int32** | Side of the imbalance as byte value | [optional] 
**ImbalanceSideCode** | Pointer to **NullableString** | Side of the imbalance as character string | [optional] 
**ImbalanceSideText** | Pointer to **NullableString** | Human-readable description of the imbalance side | [optional] 
**IsImbalanceSideBuy** | Pointer to **bool** | Indicates if there is a buy-side imbalance (&#39;B&#39;/0x42). | [optional] 
**IsImbalanceSideSell** | Pointer to **bool** | Indicates if there is a sell-side imbalance (&#39;S&#39;/0x53). | [optional] 
**IsImbalanceSideNone** | Pointer to **bool** | Indicates if there is no imbalance (&#39;N&#39;/0x4e). | [optional] 
**ExtensionNumber** | Pointer to **int32** | Number of extensions to the auction | [optional] 
**ScheduledAuctionTimeSeconds** | Pointer to **int32** | Scheduled auction time in seconds since epoch | [optional] 
**ScheduledAuctionTime** | Pointer to **time.Time** | Scheduled time for the auction as DateTime | [optional] 
**AuctionBookClearingPrice** | Pointer to **float64** | Auction book clearing price as decimal | [optional] 
**CollarReferencePrice** | Pointer to **float64** | Collar reference price as decimal | [optional] 
**LowerAuctionCollar** | Pointer to **float64** | Lower auction collar as decimal | [optional] 
**UpperAuctionCollar** | Pointer to **float64** | Upper auction collar as decimal | [optional] 

## Methods

### NewModelsAuctionInformationModel

`func NewModelsAuctionInformationModel() *ModelsAuctionInformationModel`

NewModelsAuctionInformationModel instantiates a new ModelsAuctionInformationModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsAuctionInformationModelWithDefaults

`func NewModelsAuctionInformationModelWithDefaults() *ModelsAuctionInformationModel`

NewModelsAuctionInformationModelWithDefaults instantiates a new ModelsAuctionInformationModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsAuctionInformationModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsAuctionInformationModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsAuctionInformationModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsAuctionInformationModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsAuctionInformationModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsAuctionInformationModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsAuctionInformationModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsAuctionInformationModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsAuctionInformationModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsAuctionInformationModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsAuctionInformationModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsAuctionInformationModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsAuctionInformationModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsAuctionInformationModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetAuctionType

`func (o *ModelsAuctionInformationModel) GetAuctionType() int32`

GetAuctionType returns the AuctionType field if non-nil, zero value otherwise.

### GetAuctionTypeOk

`func (o *ModelsAuctionInformationModel) GetAuctionTypeOk() (*int32, bool)`

GetAuctionTypeOk returns a tuple with the AuctionType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuctionType

`func (o *ModelsAuctionInformationModel) SetAuctionType(v int32)`

SetAuctionType sets AuctionType field to given value.

### HasAuctionType

`func (o *ModelsAuctionInformationModel) HasAuctionType() bool`

HasAuctionType returns a boolean if a field has been set.

### GetAuctionTypeCode

`func (o *ModelsAuctionInformationModel) GetAuctionTypeCode() string`

GetAuctionTypeCode returns the AuctionTypeCode field if non-nil, zero value otherwise.

### GetAuctionTypeCodeOk

`func (o *ModelsAuctionInformationModel) GetAuctionTypeCodeOk() (*string, bool)`

GetAuctionTypeCodeOk returns a tuple with the AuctionTypeCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuctionTypeCode

`func (o *ModelsAuctionInformationModel) SetAuctionTypeCode(v string)`

SetAuctionTypeCode sets AuctionTypeCode field to given value.

### HasAuctionTypeCode

`func (o *ModelsAuctionInformationModel) HasAuctionTypeCode() bool`

HasAuctionTypeCode returns a boolean if a field has been set.

### SetAuctionTypeCodeNil

`func (o *ModelsAuctionInformationModel) SetAuctionTypeCodeNil(b bool)`

 SetAuctionTypeCodeNil sets the value for AuctionTypeCode to be an explicit nil

### UnsetAuctionTypeCode
`func (o *ModelsAuctionInformationModel) UnsetAuctionTypeCode()`

UnsetAuctionTypeCode ensures that no value is present for AuctionTypeCode, not even an explicit nil
### GetAuctionTypeText

`func (o *ModelsAuctionInformationModel) GetAuctionTypeText() string`

GetAuctionTypeText returns the AuctionTypeText field if non-nil, zero value otherwise.

### GetAuctionTypeTextOk

`func (o *ModelsAuctionInformationModel) GetAuctionTypeTextOk() (*string, bool)`

GetAuctionTypeTextOk returns a tuple with the AuctionTypeText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuctionTypeText

`func (o *ModelsAuctionInformationModel) SetAuctionTypeText(v string)`

SetAuctionTypeText sets AuctionTypeText field to given value.

### HasAuctionTypeText

`func (o *ModelsAuctionInformationModel) HasAuctionTypeText() bool`

HasAuctionTypeText returns a boolean if a field has been set.

### SetAuctionTypeTextNil

`func (o *ModelsAuctionInformationModel) SetAuctionTypeTextNil(b bool)`

 SetAuctionTypeTextNil sets the value for AuctionTypeText to be an explicit nil

### UnsetAuctionTypeText
`func (o *ModelsAuctionInformationModel) UnsetAuctionTypeText()`

UnsetAuctionTypeText ensures that no value is present for AuctionTypeText, not even an explicit nil
### GetIsAuctionTypeOpening

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeOpening() bool`

GetIsAuctionTypeOpening returns the IsAuctionTypeOpening field if non-nil, zero value otherwise.

### GetIsAuctionTypeOpeningOk

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeOpeningOk() (*bool, bool)`

GetIsAuctionTypeOpeningOk returns a tuple with the IsAuctionTypeOpening field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsAuctionTypeOpening

`func (o *ModelsAuctionInformationModel) SetIsAuctionTypeOpening(v bool)`

SetIsAuctionTypeOpening sets IsAuctionTypeOpening field to given value.

### HasIsAuctionTypeOpening

`func (o *ModelsAuctionInformationModel) HasIsAuctionTypeOpening() bool`

HasIsAuctionTypeOpening returns a boolean if a field has been set.

### GetIsAuctionTypeClosing

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeClosing() bool`

GetIsAuctionTypeClosing returns the IsAuctionTypeClosing field if non-nil, zero value otherwise.

### GetIsAuctionTypeClosingOk

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeClosingOk() (*bool, bool)`

GetIsAuctionTypeClosingOk returns a tuple with the IsAuctionTypeClosing field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsAuctionTypeClosing

`func (o *ModelsAuctionInformationModel) SetIsAuctionTypeClosing(v bool)`

SetIsAuctionTypeClosing sets IsAuctionTypeClosing field to given value.

### HasIsAuctionTypeClosing

`func (o *ModelsAuctionInformationModel) HasIsAuctionTypeClosing() bool`

HasIsAuctionTypeClosing returns a boolean if a field has been set.

### GetIsAuctionTypeIpo

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeIpo() bool`

GetIsAuctionTypeIpo returns the IsAuctionTypeIpo field if non-nil, zero value otherwise.

### GetIsAuctionTypeIpoOk

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeIpoOk() (*bool, bool)`

GetIsAuctionTypeIpoOk returns a tuple with the IsAuctionTypeIpo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsAuctionTypeIpo

`func (o *ModelsAuctionInformationModel) SetIsAuctionTypeIpo(v bool)`

SetIsAuctionTypeIpo sets IsAuctionTypeIpo field to given value.

### HasIsAuctionTypeIpo

`func (o *ModelsAuctionInformationModel) HasIsAuctionTypeIpo() bool`

HasIsAuctionTypeIpo returns a boolean if a field has been set.

### GetIsAuctionTypeHalt

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeHalt() bool`

GetIsAuctionTypeHalt returns the IsAuctionTypeHalt field if non-nil, zero value otherwise.

### GetIsAuctionTypeHaltOk

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeHaltOk() (*bool, bool)`

GetIsAuctionTypeHaltOk returns a tuple with the IsAuctionTypeHalt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsAuctionTypeHalt

`func (o *ModelsAuctionInformationModel) SetIsAuctionTypeHalt(v bool)`

SetIsAuctionTypeHalt sets IsAuctionTypeHalt field to given value.

### HasIsAuctionTypeHalt

`func (o *ModelsAuctionInformationModel) HasIsAuctionTypeHalt() bool`

HasIsAuctionTypeHalt returns a boolean if a field has been set.

### GetIsAuctionTypeVolatility

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeVolatility() bool`

GetIsAuctionTypeVolatility returns the IsAuctionTypeVolatility field if non-nil, zero value otherwise.

### GetIsAuctionTypeVolatilityOk

`func (o *ModelsAuctionInformationModel) GetIsAuctionTypeVolatilityOk() (*bool, bool)`

GetIsAuctionTypeVolatilityOk returns a tuple with the IsAuctionTypeVolatility field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsAuctionTypeVolatility

`func (o *ModelsAuctionInformationModel) SetIsAuctionTypeVolatility(v bool)`

SetIsAuctionTypeVolatility sets IsAuctionTypeVolatility field to given value.

### HasIsAuctionTypeVolatility

`func (o *ModelsAuctionInformationModel) HasIsAuctionTypeVolatility() bool`

HasIsAuctionTypeVolatility returns a boolean if a field has been set.

### GetPairedShares

`func (o *ModelsAuctionInformationModel) GetPairedShares() int32`

GetPairedShares returns the PairedShares field if non-nil, zero value otherwise.

### GetPairedSharesOk

`func (o *ModelsAuctionInformationModel) GetPairedSharesOk() (*int32, bool)`

GetPairedSharesOk returns a tuple with the PairedShares field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPairedShares

`func (o *ModelsAuctionInformationModel) SetPairedShares(v int32)`

SetPairedShares sets PairedShares field to given value.

### HasPairedShares

`func (o *ModelsAuctionInformationModel) HasPairedShares() bool`

HasPairedShares returns a boolean if a field has been set.

### GetReferencePrice

`func (o *ModelsAuctionInformationModel) GetReferencePrice() float64`

GetReferencePrice returns the ReferencePrice field if non-nil, zero value otherwise.

### GetReferencePriceOk

`func (o *ModelsAuctionInformationModel) GetReferencePriceOk() (*float64, bool)`

GetReferencePriceOk returns a tuple with the ReferencePrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReferencePrice

`func (o *ModelsAuctionInformationModel) SetReferencePrice(v float64)`

SetReferencePrice sets ReferencePrice field to given value.

### HasReferencePrice

`func (o *ModelsAuctionInformationModel) HasReferencePrice() bool`

HasReferencePrice returns a boolean if a field has been set.

### GetIndicativeClearingPrice

`func (o *ModelsAuctionInformationModel) GetIndicativeClearingPrice() float64`

GetIndicativeClearingPrice returns the IndicativeClearingPrice field if non-nil, zero value otherwise.

### GetIndicativeClearingPriceOk

`func (o *ModelsAuctionInformationModel) GetIndicativeClearingPriceOk() (*float64, bool)`

GetIndicativeClearingPriceOk returns a tuple with the IndicativeClearingPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIndicativeClearingPrice

`func (o *ModelsAuctionInformationModel) SetIndicativeClearingPrice(v float64)`

SetIndicativeClearingPrice sets IndicativeClearingPrice field to given value.

### HasIndicativeClearingPrice

`func (o *ModelsAuctionInformationModel) HasIndicativeClearingPrice() bool`

HasIndicativeClearingPrice returns a boolean if a field has been set.

### GetImbalanceShares

`func (o *ModelsAuctionInformationModel) GetImbalanceShares() int32`

GetImbalanceShares returns the ImbalanceShares field if non-nil, zero value otherwise.

### GetImbalanceSharesOk

`func (o *ModelsAuctionInformationModel) GetImbalanceSharesOk() (*int32, bool)`

GetImbalanceSharesOk returns a tuple with the ImbalanceShares field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImbalanceShares

`func (o *ModelsAuctionInformationModel) SetImbalanceShares(v int32)`

SetImbalanceShares sets ImbalanceShares field to given value.

### HasImbalanceShares

`func (o *ModelsAuctionInformationModel) HasImbalanceShares() bool`

HasImbalanceShares returns a boolean if a field has been set.

### GetImbalanceSide

`func (o *ModelsAuctionInformationModel) GetImbalanceSide() int32`

GetImbalanceSide returns the ImbalanceSide field if non-nil, zero value otherwise.

### GetImbalanceSideOk

`func (o *ModelsAuctionInformationModel) GetImbalanceSideOk() (*int32, bool)`

GetImbalanceSideOk returns a tuple with the ImbalanceSide field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImbalanceSide

`func (o *ModelsAuctionInformationModel) SetImbalanceSide(v int32)`

SetImbalanceSide sets ImbalanceSide field to given value.

### HasImbalanceSide

`func (o *ModelsAuctionInformationModel) HasImbalanceSide() bool`

HasImbalanceSide returns a boolean if a field has been set.

### GetImbalanceSideCode

`func (o *ModelsAuctionInformationModel) GetImbalanceSideCode() string`

GetImbalanceSideCode returns the ImbalanceSideCode field if non-nil, zero value otherwise.

### GetImbalanceSideCodeOk

`func (o *ModelsAuctionInformationModel) GetImbalanceSideCodeOk() (*string, bool)`

GetImbalanceSideCodeOk returns a tuple with the ImbalanceSideCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImbalanceSideCode

`func (o *ModelsAuctionInformationModel) SetImbalanceSideCode(v string)`

SetImbalanceSideCode sets ImbalanceSideCode field to given value.

### HasImbalanceSideCode

`func (o *ModelsAuctionInformationModel) HasImbalanceSideCode() bool`

HasImbalanceSideCode returns a boolean if a field has been set.

### SetImbalanceSideCodeNil

`func (o *ModelsAuctionInformationModel) SetImbalanceSideCodeNil(b bool)`

 SetImbalanceSideCodeNil sets the value for ImbalanceSideCode to be an explicit nil

### UnsetImbalanceSideCode
`func (o *ModelsAuctionInformationModel) UnsetImbalanceSideCode()`

UnsetImbalanceSideCode ensures that no value is present for ImbalanceSideCode, not even an explicit nil
### GetImbalanceSideText

`func (o *ModelsAuctionInformationModel) GetImbalanceSideText() string`

GetImbalanceSideText returns the ImbalanceSideText field if non-nil, zero value otherwise.

### GetImbalanceSideTextOk

`func (o *ModelsAuctionInformationModel) GetImbalanceSideTextOk() (*string, bool)`

GetImbalanceSideTextOk returns a tuple with the ImbalanceSideText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImbalanceSideText

`func (o *ModelsAuctionInformationModel) SetImbalanceSideText(v string)`

SetImbalanceSideText sets ImbalanceSideText field to given value.

### HasImbalanceSideText

`func (o *ModelsAuctionInformationModel) HasImbalanceSideText() bool`

HasImbalanceSideText returns a boolean if a field has been set.

### SetImbalanceSideTextNil

`func (o *ModelsAuctionInformationModel) SetImbalanceSideTextNil(b bool)`

 SetImbalanceSideTextNil sets the value for ImbalanceSideText to be an explicit nil

### UnsetImbalanceSideText
`func (o *ModelsAuctionInformationModel) UnsetImbalanceSideText()`

UnsetImbalanceSideText ensures that no value is present for ImbalanceSideText, not even an explicit nil
### GetIsImbalanceSideBuy

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideBuy() bool`

GetIsImbalanceSideBuy returns the IsImbalanceSideBuy field if non-nil, zero value otherwise.

### GetIsImbalanceSideBuyOk

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideBuyOk() (*bool, bool)`

GetIsImbalanceSideBuyOk returns a tuple with the IsImbalanceSideBuy field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsImbalanceSideBuy

`func (o *ModelsAuctionInformationModel) SetIsImbalanceSideBuy(v bool)`

SetIsImbalanceSideBuy sets IsImbalanceSideBuy field to given value.

### HasIsImbalanceSideBuy

`func (o *ModelsAuctionInformationModel) HasIsImbalanceSideBuy() bool`

HasIsImbalanceSideBuy returns a boolean if a field has been set.

### GetIsImbalanceSideSell

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideSell() bool`

GetIsImbalanceSideSell returns the IsImbalanceSideSell field if non-nil, zero value otherwise.

### GetIsImbalanceSideSellOk

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideSellOk() (*bool, bool)`

GetIsImbalanceSideSellOk returns a tuple with the IsImbalanceSideSell field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsImbalanceSideSell

`func (o *ModelsAuctionInformationModel) SetIsImbalanceSideSell(v bool)`

SetIsImbalanceSideSell sets IsImbalanceSideSell field to given value.

### HasIsImbalanceSideSell

`func (o *ModelsAuctionInformationModel) HasIsImbalanceSideSell() bool`

HasIsImbalanceSideSell returns a boolean if a field has been set.

### GetIsImbalanceSideNone

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideNone() bool`

GetIsImbalanceSideNone returns the IsImbalanceSideNone field if non-nil, zero value otherwise.

### GetIsImbalanceSideNoneOk

`func (o *ModelsAuctionInformationModel) GetIsImbalanceSideNoneOk() (*bool, bool)`

GetIsImbalanceSideNoneOk returns a tuple with the IsImbalanceSideNone field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsImbalanceSideNone

`func (o *ModelsAuctionInformationModel) SetIsImbalanceSideNone(v bool)`

SetIsImbalanceSideNone sets IsImbalanceSideNone field to given value.

### HasIsImbalanceSideNone

`func (o *ModelsAuctionInformationModel) HasIsImbalanceSideNone() bool`

HasIsImbalanceSideNone returns a boolean if a field has been set.

### GetExtensionNumber

`func (o *ModelsAuctionInformationModel) GetExtensionNumber() int32`

GetExtensionNumber returns the ExtensionNumber field if non-nil, zero value otherwise.

### GetExtensionNumberOk

`func (o *ModelsAuctionInformationModel) GetExtensionNumberOk() (*int32, bool)`

GetExtensionNumberOk returns a tuple with the ExtensionNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtensionNumber

`func (o *ModelsAuctionInformationModel) SetExtensionNumber(v int32)`

SetExtensionNumber sets ExtensionNumber field to given value.

### HasExtensionNumber

`func (o *ModelsAuctionInformationModel) HasExtensionNumber() bool`

HasExtensionNumber returns a boolean if a field has been set.

### GetScheduledAuctionTimeSeconds

`func (o *ModelsAuctionInformationModel) GetScheduledAuctionTimeSeconds() int32`

GetScheduledAuctionTimeSeconds returns the ScheduledAuctionTimeSeconds field if non-nil, zero value otherwise.

### GetScheduledAuctionTimeSecondsOk

`func (o *ModelsAuctionInformationModel) GetScheduledAuctionTimeSecondsOk() (*int32, bool)`

GetScheduledAuctionTimeSecondsOk returns a tuple with the ScheduledAuctionTimeSeconds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScheduledAuctionTimeSeconds

`func (o *ModelsAuctionInformationModel) SetScheduledAuctionTimeSeconds(v int32)`

SetScheduledAuctionTimeSeconds sets ScheduledAuctionTimeSeconds field to given value.

### HasScheduledAuctionTimeSeconds

`func (o *ModelsAuctionInformationModel) HasScheduledAuctionTimeSeconds() bool`

HasScheduledAuctionTimeSeconds returns a boolean if a field has been set.

### GetScheduledAuctionTime

`func (o *ModelsAuctionInformationModel) GetScheduledAuctionTime() time.Time`

GetScheduledAuctionTime returns the ScheduledAuctionTime field if non-nil, zero value otherwise.

### GetScheduledAuctionTimeOk

`func (o *ModelsAuctionInformationModel) GetScheduledAuctionTimeOk() (*time.Time, bool)`

GetScheduledAuctionTimeOk returns a tuple with the ScheduledAuctionTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScheduledAuctionTime

`func (o *ModelsAuctionInformationModel) SetScheduledAuctionTime(v time.Time)`

SetScheduledAuctionTime sets ScheduledAuctionTime field to given value.

### HasScheduledAuctionTime

`func (o *ModelsAuctionInformationModel) HasScheduledAuctionTime() bool`

HasScheduledAuctionTime returns a boolean if a field has been set.

### GetAuctionBookClearingPrice

`func (o *ModelsAuctionInformationModel) GetAuctionBookClearingPrice() float64`

GetAuctionBookClearingPrice returns the AuctionBookClearingPrice field if non-nil, zero value otherwise.

### GetAuctionBookClearingPriceOk

`func (o *ModelsAuctionInformationModel) GetAuctionBookClearingPriceOk() (*float64, bool)`

GetAuctionBookClearingPriceOk returns a tuple with the AuctionBookClearingPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuctionBookClearingPrice

`func (o *ModelsAuctionInformationModel) SetAuctionBookClearingPrice(v float64)`

SetAuctionBookClearingPrice sets AuctionBookClearingPrice field to given value.

### HasAuctionBookClearingPrice

`func (o *ModelsAuctionInformationModel) HasAuctionBookClearingPrice() bool`

HasAuctionBookClearingPrice returns a boolean if a field has been set.

### GetCollarReferencePrice

`func (o *ModelsAuctionInformationModel) GetCollarReferencePrice() float64`

GetCollarReferencePrice returns the CollarReferencePrice field if non-nil, zero value otherwise.

### GetCollarReferencePriceOk

`func (o *ModelsAuctionInformationModel) GetCollarReferencePriceOk() (*float64, bool)`

GetCollarReferencePriceOk returns a tuple with the CollarReferencePrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCollarReferencePrice

`func (o *ModelsAuctionInformationModel) SetCollarReferencePrice(v float64)`

SetCollarReferencePrice sets CollarReferencePrice field to given value.

### HasCollarReferencePrice

`func (o *ModelsAuctionInformationModel) HasCollarReferencePrice() bool`

HasCollarReferencePrice returns a boolean if a field has been set.

### GetLowerAuctionCollar

`func (o *ModelsAuctionInformationModel) GetLowerAuctionCollar() float64`

GetLowerAuctionCollar returns the LowerAuctionCollar field if non-nil, zero value otherwise.

### GetLowerAuctionCollarOk

`func (o *ModelsAuctionInformationModel) GetLowerAuctionCollarOk() (*float64, bool)`

GetLowerAuctionCollarOk returns a tuple with the LowerAuctionCollar field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLowerAuctionCollar

`func (o *ModelsAuctionInformationModel) SetLowerAuctionCollar(v float64)`

SetLowerAuctionCollar sets LowerAuctionCollar field to given value.

### HasLowerAuctionCollar

`func (o *ModelsAuctionInformationModel) HasLowerAuctionCollar() bool`

HasLowerAuctionCollar returns a boolean if a field has been set.

### GetUpperAuctionCollar

`func (o *ModelsAuctionInformationModel) GetUpperAuctionCollar() float64`

GetUpperAuctionCollar returns the UpperAuctionCollar field if non-nil, zero value otherwise.

### GetUpperAuctionCollarOk

`func (o *ModelsAuctionInformationModel) GetUpperAuctionCollarOk() (*float64, bool)`

GetUpperAuctionCollarOk returns a tuple with the UpperAuctionCollar field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUpperAuctionCollar

`func (o *ModelsAuctionInformationModel) SetUpperAuctionCollar(v float64)`

SetUpperAuctionCollar sets UpperAuctionCollar field to given value.

### HasUpperAuctionCollar

`func (o *ModelsAuctionInformationModel) HasUpperAuctionCollar() bool`

HasUpperAuctionCollar returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


