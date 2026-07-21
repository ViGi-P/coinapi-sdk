# MarketDataMetadataSymbol

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SymbolId** | Pointer to **NullableString** | The symbol identifier. | [optional] 
**ExchangeId** | Pointer to **NullableString** | The exchange identifier. | [optional] 
**SymbolType** | Pointer to **NullableString** | The symbol type. | [optional] 
**AssetIdBase** | Pointer to **NullableString** | The base asset identifier. | [optional] 
**AssetIdQuote** | Pointer to **NullableString** | The quote asset identifier. | [optional] 
**AssetIdUnit** | Pointer to **NullableString** | The unit asset identifier. | [optional] 
**FutureContractUnit** | Pointer to **NullableFloat64** | The contract unit for futures. | [optional] 
**FutureContractUnitAsset** | Pointer to **NullableString** | The asset used as the unit for futures contract. | [optional] 
**FutureDeliveryTime** | Pointer to **NullableTime** | The future delivery time for futures contract. | [optional] 
**OptionTypeIsCall** | Pointer to **NullableBool** | Indicates whether the option type is a call. | [optional] 
**OptionStrikePrice** | Pointer to **NullableFloat64** | The strike price for options. | [optional] 
**OptionContractUnit** | Pointer to **NullableFloat64** | The contract unit for options. | [optional] 
**OptionExerciseStyle** | Pointer to **NullableString** | The exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] 
**OptionExpirationTime** | Pointer to **NullableTime** | The expiration time for options. | [optional] 
**ContractDeliveryTime** | Pointer to **NullableTime** | The delivery time for contracts. | [optional] 
**ContractUnit** | Pointer to **NullableFloat64** | The contract unit for contracts. | [optional] 
**ContractUnitAsset** | Pointer to **NullableString** | The asset used as the unit for contracts. | [optional] 
**ContractId** | Pointer to **NullableString** | The contract identifier. | [optional] 
**ContractDisplayName** | Pointer to **NullableString** | The display name of the contract. | [optional] 
**ContractDisplayDescription** | Pointer to **NullableString** | The display description of the contract. | [optional] 
**DataStart** | Pointer to **NullableString** |  | [optional] [readonly] 
**DataEnd** | Pointer to **NullableString** |  | [optional] [readonly] 
**DataQuoteStart** | Pointer to **NullableTime** | The start date of quote data. | [optional] 
**DataQuoteEnd** | Pointer to **NullableTime** | The end date of quote data. | [optional] 
**DataOrderbookStart** | Pointer to **NullableTime** | The start date of order book data. | [optional] 
**DataOrderbookEnd** | Pointer to **NullableTime** | The end date of order book data. | [optional] 
**DataTradeStart** | Pointer to **NullableTime** | The start date of trade data. | [optional] 
**DataTradeEnd** | Pointer to **NullableTime** | The end date of trade data. | [optional] 
**IndexId** | Pointer to **NullableString** | The index identifier. | [optional] 
**IndexDisplayName** | Pointer to **NullableString** | The display name of the index. | [optional] 
**IndexDisplayDescription** | Pointer to **NullableString** | The display description of the index. | [optional] 
**Volume1hrs** | Pointer to **NullableFloat64** | The volume in the last 1 hour. | [optional] 
**Volume1hrsUsd** | Pointer to **NullableFloat64** | The volume in USD in the last 1 hour. | [optional] 
**Volume1day** | Pointer to **NullableFloat64** | The volume in the last 1 day. | [optional] 
**Volume1dayUsd** | Pointer to **NullableFloat64** | The volume in USD in the last 1 day. | [optional] 
**Volume1mth** | Pointer to **NullableFloat64** | The volume in the last 1 month. | [optional] 
**Volume1mthUsd** | Pointer to **NullableFloat64** | The volume in USD in the last 1 month. | [optional] 
**Price** | Pointer to **NullableFloat64** | The price. | [optional] 
**SymbolIdExchange** | Pointer to **NullableString** | The symbol identifier in the exchange. | [optional] 
**AssetIdBaseExchange** | Pointer to **NullableString** | The base asset identifier in the exchange. | [optional] 
**AssetIdQuoteExchange** | Pointer to **NullableString** | The quote asset identifier in the exchange. | [optional] 
**PricePrecision** | Pointer to **NullableFloat64** | The price precision. | [optional] 
**SizePrecision** | Pointer to **NullableFloat64** | The size precision. | [optional] 
**RawKvp** | Pointer to **map[string]string** | Key Value Pair store with raw data from the data source. | [optional] 
**FutureIsInverse** | Pointer to **NullableBool** | Indicates whether the futures contract is inverse (coin-margined). | [optional] 
**FutureIsQuanto** | Pointer to **NullableBool** | Indicates whether the futures contract is quanto. | [optional] 
**VolumeToUsd** | Pointer to **NullableFloat64** | Volume unit in USD. | [optional] 
**OptionBarrierUpPrice** | Pointer to **NullableFloat64** | The up barrier price for barrier options. | [optional] 
**OptionBarrierUpType** | Pointer to **NullableString** | The up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**OptionBarrierDownPrice** | Pointer to **NullableFloat64** | The down barrier price for barrier options. | [optional] 
**OptionBarrierDownType** | Pointer to **NullableString** | The down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**SymbolIdInt** | Pointer to **NullableInt32** | The symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional] [readonly] 

## Methods

### NewMarketDataMetadataSymbol

`func NewMarketDataMetadataSymbol() *MarketDataMetadataSymbol`

NewMarketDataMetadataSymbol instantiates a new MarketDataMetadataSymbol object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMarketDataMetadataSymbolWithDefaults

`func NewMarketDataMetadataSymbolWithDefaults() *MarketDataMetadataSymbol`

NewMarketDataMetadataSymbolWithDefaults instantiates a new MarketDataMetadataSymbol object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbolId

`func (o *MarketDataMetadataSymbol) GetSymbolId() string`

GetSymbolId returns the SymbolId field if non-nil, zero value otherwise.

### GetSymbolIdOk

`func (o *MarketDataMetadataSymbol) GetSymbolIdOk() (*string, bool)`

GetSymbolIdOk returns a tuple with the SymbolId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbolId

`func (o *MarketDataMetadataSymbol) SetSymbolId(v string)`

SetSymbolId sets SymbolId field to given value.

### HasSymbolId

`func (o *MarketDataMetadataSymbol) HasSymbolId() bool`

HasSymbolId returns a boolean if a field has been set.

### SetSymbolIdNil

`func (o *MarketDataMetadataSymbol) SetSymbolIdNil(b bool)`

 SetSymbolIdNil sets the value for SymbolId to be an explicit nil

### UnsetSymbolId
`func (o *MarketDataMetadataSymbol) UnsetSymbolId()`

UnsetSymbolId ensures that no value is present for SymbolId, not even an explicit nil
### GetExchangeId

`func (o *MarketDataMetadataSymbol) GetExchangeId() string`

GetExchangeId returns the ExchangeId field if non-nil, zero value otherwise.

### GetExchangeIdOk

`func (o *MarketDataMetadataSymbol) GetExchangeIdOk() (*string, bool)`

GetExchangeIdOk returns a tuple with the ExchangeId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExchangeId

`func (o *MarketDataMetadataSymbol) SetExchangeId(v string)`

SetExchangeId sets ExchangeId field to given value.

### HasExchangeId

`func (o *MarketDataMetadataSymbol) HasExchangeId() bool`

HasExchangeId returns a boolean if a field has been set.

### SetExchangeIdNil

`func (o *MarketDataMetadataSymbol) SetExchangeIdNil(b bool)`

 SetExchangeIdNil sets the value for ExchangeId to be an explicit nil

### UnsetExchangeId
`func (o *MarketDataMetadataSymbol) UnsetExchangeId()`

UnsetExchangeId ensures that no value is present for ExchangeId, not even an explicit nil
### GetSymbolType

`func (o *MarketDataMetadataSymbol) GetSymbolType() string`

GetSymbolType returns the SymbolType field if non-nil, zero value otherwise.

### GetSymbolTypeOk

`func (o *MarketDataMetadataSymbol) GetSymbolTypeOk() (*string, bool)`

GetSymbolTypeOk returns a tuple with the SymbolType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbolType

`func (o *MarketDataMetadataSymbol) SetSymbolType(v string)`

SetSymbolType sets SymbolType field to given value.

### HasSymbolType

`func (o *MarketDataMetadataSymbol) HasSymbolType() bool`

HasSymbolType returns a boolean if a field has been set.

### SetSymbolTypeNil

`func (o *MarketDataMetadataSymbol) SetSymbolTypeNil(b bool)`

 SetSymbolTypeNil sets the value for SymbolType to be an explicit nil

### UnsetSymbolType
`func (o *MarketDataMetadataSymbol) UnsetSymbolType()`

UnsetSymbolType ensures that no value is present for SymbolType, not even an explicit nil
### GetAssetIdBase

`func (o *MarketDataMetadataSymbol) GetAssetIdBase() string`

GetAssetIdBase returns the AssetIdBase field if non-nil, zero value otherwise.

### GetAssetIdBaseOk

`func (o *MarketDataMetadataSymbol) GetAssetIdBaseOk() (*string, bool)`

GetAssetIdBaseOk returns a tuple with the AssetIdBase field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdBase

`func (o *MarketDataMetadataSymbol) SetAssetIdBase(v string)`

SetAssetIdBase sets AssetIdBase field to given value.

### HasAssetIdBase

`func (o *MarketDataMetadataSymbol) HasAssetIdBase() bool`

HasAssetIdBase returns a boolean if a field has been set.

### SetAssetIdBaseNil

`func (o *MarketDataMetadataSymbol) SetAssetIdBaseNil(b bool)`

 SetAssetIdBaseNil sets the value for AssetIdBase to be an explicit nil

### UnsetAssetIdBase
`func (o *MarketDataMetadataSymbol) UnsetAssetIdBase()`

UnsetAssetIdBase ensures that no value is present for AssetIdBase, not even an explicit nil
### GetAssetIdQuote

`func (o *MarketDataMetadataSymbol) GetAssetIdQuote() string`

GetAssetIdQuote returns the AssetIdQuote field if non-nil, zero value otherwise.

### GetAssetIdQuoteOk

`func (o *MarketDataMetadataSymbol) GetAssetIdQuoteOk() (*string, bool)`

GetAssetIdQuoteOk returns a tuple with the AssetIdQuote field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdQuote

`func (o *MarketDataMetadataSymbol) SetAssetIdQuote(v string)`

SetAssetIdQuote sets AssetIdQuote field to given value.

### HasAssetIdQuote

`func (o *MarketDataMetadataSymbol) HasAssetIdQuote() bool`

HasAssetIdQuote returns a boolean if a field has been set.

### SetAssetIdQuoteNil

`func (o *MarketDataMetadataSymbol) SetAssetIdQuoteNil(b bool)`

 SetAssetIdQuoteNil sets the value for AssetIdQuote to be an explicit nil

### UnsetAssetIdQuote
`func (o *MarketDataMetadataSymbol) UnsetAssetIdQuote()`

UnsetAssetIdQuote ensures that no value is present for AssetIdQuote, not even an explicit nil
### GetAssetIdUnit

`func (o *MarketDataMetadataSymbol) GetAssetIdUnit() string`

GetAssetIdUnit returns the AssetIdUnit field if non-nil, zero value otherwise.

### GetAssetIdUnitOk

`func (o *MarketDataMetadataSymbol) GetAssetIdUnitOk() (*string, bool)`

GetAssetIdUnitOk returns a tuple with the AssetIdUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdUnit

`func (o *MarketDataMetadataSymbol) SetAssetIdUnit(v string)`

SetAssetIdUnit sets AssetIdUnit field to given value.

### HasAssetIdUnit

`func (o *MarketDataMetadataSymbol) HasAssetIdUnit() bool`

HasAssetIdUnit returns a boolean if a field has been set.

### SetAssetIdUnitNil

`func (o *MarketDataMetadataSymbol) SetAssetIdUnitNil(b bool)`

 SetAssetIdUnitNil sets the value for AssetIdUnit to be an explicit nil

### UnsetAssetIdUnit
`func (o *MarketDataMetadataSymbol) UnsetAssetIdUnit()`

UnsetAssetIdUnit ensures that no value is present for AssetIdUnit, not even an explicit nil
### GetFutureContractUnit

`func (o *MarketDataMetadataSymbol) GetFutureContractUnit() float64`

GetFutureContractUnit returns the FutureContractUnit field if non-nil, zero value otherwise.

### GetFutureContractUnitOk

`func (o *MarketDataMetadataSymbol) GetFutureContractUnitOk() (*float64, bool)`

GetFutureContractUnitOk returns a tuple with the FutureContractUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFutureContractUnit

`func (o *MarketDataMetadataSymbol) SetFutureContractUnit(v float64)`

SetFutureContractUnit sets FutureContractUnit field to given value.

### HasFutureContractUnit

`func (o *MarketDataMetadataSymbol) HasFutureContractUnit() bool`

HasFutureContractUnit returns a boolean if a field has been set.

### SetFutureContractUnitNil

`func (o *MarketDataMetadataSymbol) SetFutureContractUnitNil(b bool)`

 SetFutureContractUnitNil sets the value for FutureContractUnit to be an explicit nil

### UnsetFutureContractUnit
`func (o *MarketDataMetadataSymbol) UnsetFutureContractUnit()`

UnsetFutureContractUnit ensures that no value is present for FutureContractUnit, not even an explicit nil
### GetFutureContractUnitAsset

`func (o *MarketDataMetadataSymbol) GetFutureContractUnitAsset() string`

GetFutureContractUnitAsset returns the FutureContractUnitAsset field if non-nil, zero value otherwise.

### GetFutureContractUnitAssetOk

`func (o *MarketDataMetadataSymbol) GetFutureContractUnitAssetOk() (*string, bool)`

GetFutureContractUnitAssetOk returns a tuple with the FutureContractUnitAsset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFutureContractUnitAsset

`func (o *MarketDataMetadataSymbol) SetFutureContractUnitAsset(v string)`

SetFutureContractUnitAsset sets FutureContractUnitAsset field to given value.

### HasFutureContractUnitAsset

`func (o *MarketDataMetadataSymbol) HasFutureContractUnitAsset() bool`

HasFutureContractUnitAsset returns a boolean if a field has been set.

### SetFutureContractUnitAssetNil

`func (o *MarketDataMetadataSymbol) SetFutureContractUnitAssetNil(b bool)`

 SetFutureContractUnitAssetNil sets the value for FutureContractUnitAsset to be an explicit nil

### UnsetFutureContractUnitAsset
`func (o *MarketDataMetadataSymbol) UnsetFutureContractUnitAsset()`

UnsetFutureContractUnitAsset ensures that no value is present for FutureContractUnitAsset, not even an explicit nil
### GetFutureDeliveryTime

`func (o *MarketDataMetadataSymbol) GetFutureDeliveryTime() time.Time`

GetFutureDeliveryTime returns the FutureDeliveryTime field if non-nil, zero value otherwise.

### GetFutureDeliveryTimeOk

`func (o *MarketDataMetadataSymbol) GetFutureDeliveryTimeOk() (*time.Time, bool)`

GetFutureDeliveryTimeOk returns a tuple with the FutureDeliveryTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFutureDeliveryTime

`func (o *MarketDataMetadataSymbol) SetFutureDeliveryTime(v time.Time)`

SetFutureDeliveryTime sets FutureDeliveryTime field to given value.

### HasFutureDeliveryTime

`func (o *MarketDataMetadataSymbol) HasFutureDeliveryTime() bool`

HasFutureDeliveryTime returns a boolean if a field has been set.

### SetFutureDeliveryTimeNil

`func (o *MarketDataMetadataSymbol) SetFutureDeliveryTimeNil(b bool)`

 SetFutureDeliveryTimeNil sets the value for FutureDeliveryTime to be an explicit nil

### UnsetFutureDeliveryTime
`func (o *MarketDataMetadataSymbol) UnsetFutureDeliveryTime()`

UnsetFutureDeliveryTime ensures that no value is present for FutureDeliveryTime, not even an explicit nil
### GetOptionTypeIsCall

`func (o *MarketDataMetadataSymbol) GetOptionTypeIsCall() bool`

GetOptionTypeIsCall returns the OptionTypeIsCall field if non-nil, zero value otherwise.

### GetOptionTypeIsCallOk

`func (o *MarketDataMetadataSymbol) GetOptionTypeIsCallOk() (*bool, bool)`

GetOptionTypeIsCallOk returns a tuple with the OptionTypeIsCall field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionTypeIsCall

`func (o *MarketDataMetadataSymbol) SetOptionTypeIsCall(v bool)`

SetOptionTypeIsCall sets OptionTypeIsCall field to given value.

### HasOptionTypeIsCall

`func (o *MarketDataMetadataSymbol) HasOptionTypeIsCall() bool`

HasOptionTypeIsCall returns a boolean if a field has been set.

### SetOptionTypeIsCallNil

`func (o *MarketDataMetadataSymbol) SetOptionTypeIsCallNil(b bool)`

 SetOptionTypeIsCallNil sets the value for OptionTypeIsCall to be an explicit nil

### UnsetOptionTypeIsCall
`func (o *MarketDataMetadataSymbol) UnsetOptionTypeIsCall()`

UnsetOptionTypeIsCall ensures that no value is present for OptionTypeIsCall, not even an explicit nil
### GetOptionStrikePrice

`func (o *MarketDataMetadataSymbol) GetOptionStrikePrice() float64`

GetOptionStrikePrice returns the OptionStrikePrice field if non-nil, zero value otherwise.

### GetOptionStrikePriceOk

`func (o *MarketDataMetadataSymbol) GetOptionStrikePriceOk() (*float64, bool)`

GetOptionStrikePriceOk returns a tuple with the OptionStrikePrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionStrikePrice

`func (o *MarketDataMetadataSymbol) SetOptionStrikePrice(v float64)`

SetOptionStrikePrice sets OptionStrikePrice field to given value.

### HasOptionStrikePrice

`func (o *MarketDataMetadataSymbol) HasOptionStrikePrice() bool`

HasOptionStrikePrice returns a boolean if a field has been set.

### SetOptionStrikePriceNil

`func (o *MarketDataMetadataSymbol) SetOptionStrikePriceNil(b bool)`

 SetOptionStrikePriceNil sets the value for OptionStrikePrice to be an explicit nil

### UnsetOptionStrikePrice
`func (o *MarketDataMetadataSymbol) UnsetOptionStrikePrice()`

UnsetOptionStrikePrice ensures that no value is present for OptionStrikePrice, not even an explicit nil
### GetOptionContractUnit

`func (o *MarketDataMetadataSymbol) GetOptionContractUnit() float64`

GetOptionContractUnit returns the OptionContractUnit field if non-nil, zero value otherwise.

### GetOptionContractUnitOk

`func (o *MarketDataMetadataSymbol) GetOptionContractUnitOk() (*float64, bool)`

GetOptionContractUnitOk returns a tuple with the OptionContractUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionContractUnit

`func (o *MarketDataMetadataSymbol) SetOptionContractUnit(v float64)`

SetOptionContractUnit sets OptionContractUnit field to given value.

### HasOptionContractUnit

`func (o *MarketDataMetadataSymbol) HasOptionContractUnit() bool`

HasOptionContractUnit returns a boolean if a field has been set.

### SetOptionContractUnitNil

`func (o *MarketDataMetadataSymbol) SetOptionContractUnitNil(b bool)`

 SetOptionContractUnitNil sets the value for OptionContractUnit to be an explicit nil

### UnsetOptionContractUnit
`func (o *MarketDataMetadataSymbol) UnsetOptionContractUnit()`

UnsetOptionContractUnit ensures that no value is present for OptionContractUnit, not even an explicit nil
### GetOptionExerciseStyle

`func (o *MarketDataMetadataSymbol) GetOptionExerciseStyle() string`

GetOptionExerciseStyle returns the OptionExerciseStyle field if non-nil, zero value otherwise.

### GetOptionExerciseStyleOk

`func (o *MarketDataMetadataSymbol) GetOptionExerciseStyleOk() (*string, bool)`

GetOptionExerciseStyleOk returns a tuple with the OptionExerciseStyle field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionExerciseStyle

`func (o *MarketDataMetadataSymbol) SetOptionExerciseStyle(v string)`

SetOptionExerciseStyle sets OptionExerciseStyle field to given value.

### HasOptionExerciseStyle

`func (o *MarketDataMetadataSymbol) HasOptionExerciseStyle() bool`

HasOptionExerciseStyle returns a boolean if a field has been set.

### SetOptionExerciseStyleNil

`func (o *MarketDataMetadataSymbol) SetOptionExerciseStyleNil(b bool)`

 SetOptionExerciseStyleNil sets the value for OptionExerciseStyle to be an explicit nil

### UnsetOptionExerciseStyle
`func (o *MarketDataMetadataSymbol) UnsetOptionExerciseStyle()`

UnsetOptionExerciseStyle ensures that no value is present for OptionExerciseStyle, not even an explicit nil
### GetOptionExpirationTime

`func (o *MarketDataMetadataSymbol) GetOptionExpirationTime() time.Time`

GetOptionExpirationTime returns the OptionExpirationTime field if non-nil, zero value otherwise.

### GetOptionExpirationTimeOk

`func (o *MarketDataMetadataSymbol) GetOptionExpirationTimeOk() (*time.Time, bool)`

GetOptionExpirationTimeOk returns a tuple with the OptionExpirationTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionExpirationTime

`func (o *MarketDataMetadataSymbol) SetOptionExpirationTime(v time.Time)`

SetOptionExpirationTime sets OptionExpirationTime field to given value.

### HasOptionExpirationTime

`func (o *MarketDataMetadataSymbol) HasOptionExpirationTime() bool`

HasOptionExpirationTime returns a boolean if a field has been set.

### SetOptionExpirationTimeNil

`func (o *MarketDataMetadataSymbol) SetOptionExpirationTimeNil(b bool)`

 SetOptionExpirationTimeNil sets the value for OptionExpirationTime to be an explicit nil

### UnsetOptionExpirationTime
`func (o *MarketDataMetadataSymbol) UnsetOptionExpirationTime()`

UnsetOptionExpirationTime ensures that no value is present for OptionExpirationTime, not even an explicit nil
### GetContractDeliveryTime

`func (o *MarketDataMetadataSymbol) GetContractDeliveryTime() time.Time`

GetContractDeliveryTime returns the ContractDeliveryTime field if non-nil, zero value otherwise.

### GetContractDeliveryTimeOk

`func (o *MarketDataMetadataSymbol) GetContractDeliveryTimeOk() (*time.Time, bool)`

GetContractDeliveryTimeOk returns a tuple with the ContractDeliveryTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractDeliveryTime

`func (o *MarketDataMetadataSymbol) SetContractDeliveryTime(v time.Time)`

SetContractDeliveryTime sets ContractDeliveryTime field to given value.

### HasContractDeliveryTime

`func (o *MarketDataMetadataSymbol) HasContractDeliveryTime() bool`

HasContractDeliveryTime returns a boolean if a field has been set.

### SetContractDeliveryTimeNil

`func (o *MarketDataMetadataSymbol) SetContractDeliveryTimeNil(b bool)`

 SetContractDeliveryTimeNil sets the value for ContractDeliveryTime to be an explicit nil

### UnsetContractDeliveryTime
`func (o *MarketDataMetadataSymbol) UnsetContractDeliveryTime()`

UnsetContractDeliveryTime ensures that no value is present for ContractDeliveryTime, not even an explicit nil
### GetContractUnit

`func (o *MarketDataMetadataSymbol) GetContractUnit() float64`

GetContractUnit returns the ContractUnit field if non-nil, zero value otherwise.

### GetContractUnitOk

`func (o *MarketDataMetadataSymbol) GetContractUnitOk() (*float64, bool)`

GetContractUnitOk returns a tuple with the ContractUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractUnit

`func (o *MarketDataMetadataSymbol) SetContractUnit(v float64)`

SetContractUnit sets ContractUnit field to given value.

### HasContractUnit

`func (o *MarketDataMetadataSymbol) HasContractUnit() bool`

HasContractUnit returns a boolean if a field has been set.

### SetContractUnitNil

`func (o *MarketDataMetadataSymbol) SetContractUnitNil(b bool)`

 SetContractUnitNil sets the value for ContractUnit to be an explicit nil

### UnsetContractUnit
`func (o *MarketDataMetadataSymbol) UnsetContractUnit()`

UnsetContractUnit ensures that no value is present for ContractUnit, not even an explicit nil
### GetContractUnitAsset

`func (o *MarketDataMetadataSymbol) GetContractUnitAsset() string`

GetContractUnitAsset returns the ContractUnitAsset field if non-nil, zero value otherwise.

### GetContractUnitAssetOk

`func (o *MarketDataMetadataSymbol) GetContractUnitAssetOk() (*string, bool)`

GetContractUnitAssetOk returns a tuple with the ContractUnitAsset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractUnitAsset

`func (o *MarketDataMetadataSymbol) SetContractUnitAsset(v string)`

SetContractUnitAsset sets ContractUnitAsset field to given value.

### HasContractUnitAsset

`func (o *MarketDataMetadataSymbol) HasContractUnitAsset() bool`

HasContractUnitAsset returns a boolean if a field has been set.

### SetContractUnitAssetNil

`func (o *MarketDataMetadataSymbol) SetContractUnitAssetNil(b bool)`

 SetContractUnitAssetNil sets the value for ContractUnitAsset to be an explicit nil

### UnsetContractUnitAsset
`func (o *MarketDataMetadataSymbol) UnsetContractUnitAsset()`

UnsetContractUnitAsset ensures that no value is present for ContractUnitAsset, not even an explicit nil
### GetContractId

`func (o *MarketDataMetadataSymbol) GetContractId() string`

GetContractId returns the ContractId field if non-nil, zero value otherwise.

### GetContractIdOk

`func (o *MarketDataMetadataSymbol) GetContractIdOk() (*string, bool)`

GetContractIdOk returns a tuple with the ContractId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractId

`func (o *MarketDataMetadataSymbol) SetContractId(v string)`

SetContractId sets ContractId field to given value.

### HasContractId

`func (o *MarketDataMetadataSymbol) HasContractId() bool`

HasContractId returns a boolean if a field has been set.

### SetContractIdNil

`func (o *MarketDataMetadataSymbol) SetContractIdNil(b bool)`

 SetContractIdNil sets the value for ContractId to be an explicit nil

### UnsetContractId
`func (o *MarketDataMetadataSymbol) UnsetContractId()`

UnsetContractId ensures that no value is present for ContractId, not even an explicit nil
### GetContractDisplayName

`func (o *MarketDataMetadataSymbol) GetContractDisplayName() string`

GetContractDisplayName returns the ContractDisplayName field if non-nil, zero value otherwise.

### GetContractDisplayNameOk

`func (o *MarketDataMetadataSymbol) GetContractDisplayNameOk() (*string, bool)`

GetContractDisplayNameOk returns a tuple with the ContractDisplayName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractDisplayName

`func (o *MarketDataMetadataSymbol) SetContractDisplayName(v string)`

SetContractDisplayName sets ContractDisplayName field to given value.

### HasContractDisplayName

`func (o *MarketDataMetadataSymbol) HasContractDisplayName() bool`

HasContractDisplayName returns a boolean if a field has been set.

### SetContractDisplayNameNil

`func (o *MarketDataMetadataSymbol) SetContractDisplayNameNil(b bool)`

 SetContractDisplayNameNil sets the value for ContractDisplayName to be an explicit nil

### UnsetContractDisplayName
`func (o *MarketDataMetadataSymbol) UnsetContractDisplayName()`

UnsetContractDisplayName ensures that no value is present for ContractDisplayName, not even an explicit nil
### GetContractDisplayDescription

`func (o *MarketDataMetadataSymbol) GetContractDisplayDescription() string`

GetContractDisplayDescription returns the ContractDisplayDescription field if non-nil, zero value otherwise.

### GetContractDisplayDescriptionOk

`func (o *MarketDataMetadataSymbol) GetContractDisplayDescriptionOk() (*string, bool)`

GetContractDisplayDescriptionOk returns a tuple with the ContractDisplayDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContractDisplayDescription

`func (o *MarketDataMetadataSymbol) SetContractDisplayDescription(v string)`

SetContractDisplayDescription sets ContractDisplayDescription field to given value.

### HasContractDisplayDescription

`func (o *MarketDataMetadataSymbol) HasContractDisplayDescription() bool`

HasContractDisplayDescription returns a boolean if a field has been set.

### SetContractDisplayDescriptionNil

`func (o *MarketDataMetadataSymbol) SetContractDisplayDescriptionNil(b bool)`

 SetContractDisplayDescriptionNil sets the value for ContractDisplayDescription to be an explicit nil

### UnsetContractDisplayDescription
`func (o *MarketDataMetadataSymbol) UnsetContractDisplayDescription()`

UnsetContractDisplayDescription ensures that no value is present for ContractDisplayDescription, not even an explicit nil
### GetDataStart

`func (o *MarketDataMetadataSymbol) GetDataStart() string`

GetDataStart returns the DataStart field if non-nil, zero value otherwise.

### GetDataStartOk

`func (o *MarketDataMetadataSymbol) GetDataStartOk() (*string, bool)`

GetDataStartOk returns a tuple with the DataStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataStart

`func (o *MarketDataMetadataSymbol) SetDataStart(v string)`

SetDataStart sets DataStart field to given value.

### HasDataStart

`func (o *MarketDataMetadataSymbol) HasDataStart() bool`

HasDataStart returns a boolean if a field has been set.

### SetDataStartNil

`func (o *MarketDataMetadataSymbol) SetDataStartNil(b bool)`

 SetDataStartNil sets the value for DataStart to be an explicit nil

### UnsetDataStart
`func (o *MarketDataMetadataSymbol) UnsetDataStart()`

UnsetDataStart ensures that no value is present for DataStart, not even an explicit nil
### GetDataEnd

`func (o *MarketDataMetadataSymbol) GetDataEnd() string`

GetDataEnd returns the DataEnd field if non-nil, zero value otherwise.

### GetDataEndOk

`func (o *MarketDataMetadataSymbol) GetDataEndOk() (*string, bool)`

GetDataEndOk returns a tuple with the DataEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataEnd

`func (o *MarketDataMetadataSymbol) SetDataEnd(v string)`

SetDataEnd sets DataEnd field to given value.

### HasDataEnd

`func (o *MarketDataMetadataSymbol) HasDataEnd() bool`

HasDataEnd returns a boolean if a field has been set.

### SetDataEndNil

`func (o *MarketDataMetadataSymbol) SetDataEndNil(b bool)`

 SetDataEndNil sets the value for DataEnd to be an explicit nil

### UnsetDataEnd
`func (o *MarketDataMetadataSymbol) UnsetDataEnd()`

UnsetDataEnd ensures that no value is present for DataEnd, not even an explicit nil
### GetDataQuoteStart

`func (o *MarketDataMetadataSymbol) GetDataQuoteStart() time.Time`

GetDataQuoteStart returns the DataQuoteStart field if non-nil, zero value otherwise.

### GetDataQuoteStartOk

`func (o *MarketDataMetadataSymbol) GetDataQuoteStartOk() (*time.Time, bool)`

GetDataQuoteStartOk returns a tuple with the DataQuoteStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataQuoteStart

`func (o *MarketDataMetadataSymbol) SetDataQuoteStart(v time.Time)`

SetDataQuoteStart sets DataQuoteStart field to given value.

### HasDataQuoteStart

`func (o *MarketDataMetadataSymbol) HasDataQuoteStart() bool`

HasDataQuoteStart returns a boolean if a field has been set.

### SetDataQuoteStartNil

`func (o *MarketDataMetadataSymbol) SetDataQuoteStartNil(b bool)`

 SetDataQuoteStartNil sets the value for DataQuoteStart to be an explicit nil

### UnsetDataQuoteStart
`func (o *MarketDataMetadataSymbol) UnsetDataQuoteStart()`

UnsetDataQuoteStart ensures that no value is present for DataQuoteStart, not even an explicit nil
### GetDataQuoteEnd

`func (o *MarketDataMetadataSymbol) GetDataQuoteEnd() time.Time`

GetDataQuoteEnd returns the DataQuoteEnd field if non-nil, zero value otherwise.

### GetDataQuoteEndOk

`func (o *MarketDataMetadataSymbol) GetDataQuoteEndOk() (*time.Time, bool)`

GetDataQuoteEndOk returns a tuple with the DataQuoteEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataQuoteEnd

`func (o *MarketDataMetadataSymbol) SetDataQuoteEnd(v time.Time)`

SetDataQuoteEnd sets DataQuoteEnd field to given value.

### HasDataQuoteEnd

`func (o *MarketDataMetadataSymbol) HasDataQuoteEnd() bool`

HasDataQuoteEnd returns a boolean if a field has been set.

### SetDataQuoteEndNil

`func (o *MarketDataMetadataSymbol) SetDataQuoteEndNil(b bool)`

 SetDataQuoteEndNil sets the value for DataQuoteEnd to be an explicit nil

### UnsetDataQuoteEnd
`func (o *MarketDataMetadataSymbol) UnsetDataQuoteEnd()`

UnsetDataQuoteEnd ensures that no value is present for DataQuoteEnd, not even an explicit nil
### GetDataOrderbookStart

`func (o *MarketDataMetadataSymbol) GetDataOrderbookStart() time.Time`

GetDataOrderbookStart returns the DataOrderbookStart field if non-nil, zero value otherwise.

### GetDataOrderbookStartOk

`func (o *MarketDataMetadataSymbol) GetDataOrderbookStartOk() (*time.Time, bool)`

GetDataOrderbookStartOk returns a tuple with the DataOrderbookStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataOrderbookStart

`func (o *MarketDataMetadataSymbol) SetDataOrderbookStart(v time.Time)`

SetDataOrderbookStart sets DataOrderbookStart field to given value.

### HasDataOrderbookStart

`func (o *MarketDataMetadataSymbol) HasDataOrderbookStart() bool`

HasDataOrderbookStart returns a boolean if a field has been set.

### SetDataOrderbookStartNil

`func (o *MarketDataMetadataSymbol) SetDataOrderbookStartNil(b bool)`

 SetDataOrderbookStartNil sets the value for DataOrderbookStart to be an explicit nil

### UnsetDataOrderbookStart
`func (o *MarketDataMetadataSymbol) UnsetDataOrderbookStart()`

UnsetDataOrderbookStart ensures that no value is present for DataOrderbookStart, not even an explicit nil
### GetDataOrderbookEnd

`func (o *MarketDataMetadataSymbol) GetDataOrderbookEnd() time.Time`

GetDataOrderbookEnd returns the DataOrderbookEnd field if non-nil, zero value otherwise.

### GetDataOrderbookEndOk

`func (o *MarketDataMetadataSymbol) GetDataOrderbookEndOk() (*time.Time, bool)`

GetDataOrderbookEndOk returns a tuple with the DataOrderbookEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataOrderbookEnd

`func (o *MarketDataMetadataSymbol) SetDataOrderbookEnd(v time.Time)`

SetDataOrderbookEnd sets DataOrderbookEnd field to given value.

### HasDataOrderbookEnd

`func (o *MarketDataMetadataSymbol) HasDataOrderbookEnd() bool`

HasDataOrderbookEnd returns a boolean if a field has been set.

### SetDataOrderbookEndNil

`func (o *MarketDataMetadataSymbol) SetDataOrderbookEndNil(b bool)`

 SetDataOrderbookEndNil sets the value for DataOrderbookEnd to be an explicit nil

### UnsetDataOrderbookEnd
`func (o *MarketDataMetadataSymbol) UnsetDataOrderbookEnd()`

UnsetDataOrderbookEnd ensures that no value is present for DataOrderbookEnd, not even an explicit nil
### GetDataTradeStart

`func (o *MarketDataMetadataSymbol) GetDataTradeStart() time.Time`

GetDataTradeStart returns the DataTradeStart field if non-nil, zero value otherwise.

### GetDataTradeStartOk

`func (o *MarketDataMetadataSymbol) GetDataTradeStartOk() (*time.Time, bool)`

GetDataTradeStartOk returns a tuple with the DataTradeStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataTradeStart

`func (o *MarketDataMetadataSymbol) SetDataTradeStart(v time.Time)`

SetDataTradeStart sets DataTradeStart field to given value.

### HasDataTradeStart

`func (o *MarketDataMetadataSymbol) HasDataTradeStart() bool`

HasDataTradeStart returns a boolean if a field has been set.

### SetDataTradeStartNil

`func (o *MarketDataMetadataSymbol) SetDataTradeStartNil(b bool)`

 SetDataTradeStartNil sets the value for DataTradeStart to be an explicit nil

### UnsetDataTradeStart
`func (o *MarketDataMetadataSymbol) UnsetDataTradeStart()`

UnsetDataTradeStart ensures that no value is present for DataTradeStart, not even an explicit nil
### GetDataTradeEnd

`func (o *MarketDataMetadataSymbol) GetDataTradeEnd() time.Time`

GetDataTradeEnd returns the DataTradeEnd field if non-nil, zero value otherwise.

### GetDataTradeEndOk

`func (o *MarketDataMetadataSymbol) GetDataTradeEndOk() (*time.Time, bool)`

GetDataTradeEndOk returns a tuple with the DataTradeEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataTradeEnd

`func (o *MarketDataMetadataSymbol) SetDataTradeEnd(v time.Time)`

SetDataTradeEnd sets DataTradeEnd field to given value.

### HasDataTradeEnd

`func (o *MarketDataMetadataSymbol) HasDataTradeEnd() bool`

HasDataTradeEnd returns a boolean if a field has been set.

### SetDataTradeEndNil

`func (o *MarketDataMetadataSymbol) SetDataTradeEndNil(b bool)`

 SetDataTradeEndNil sets the value for DataTradeEnd to be an explicit nil

### UnsetDataTradeEnd
`func (o *MarketDataMetadataSymbol) UnsetDataTradeEnd()`

UnsetDataTradeEnd ensures that no value is present for DataTradeEnd, not even an explicit nil
### GetIndexId

`func (o *MarketDataMetadataSymbol) GetIndexId() string`

GetIndexId returns the IndexId field if non-nil, zero value otherwise.

### GetIndexIdOk

`func (o *MarketDataMetadataSymbol) GetIndexIdOk() (*string, bool)`

GetIndexIdOk returns a tuple with the IndexId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIndexId

`func (o *MarketDataMetadataSymbol) SetIndexId(v string)`

SetIndexId sets IndexId field to given value.

### HasIndexId

`func (o *MarketDataMetadataSymbol) HasIndexId() bool`

HasIndexId returns a boolean if a field has been set.

### SetIndexIdNil

`func (o *MarketDataMetadataSymbol) SetIndexIdNil(b bool)`

 SetIndexIdNil sets the value for IndexId to be an explicit nil

### UnsetIndexId
`func (o *MarketDataMetadataSymbol) UnsetIndexId()`

UnsetIndexId ensures that no value is present for IndexId, not even an explicit nil
### GetIndexDisplayName

`func (o *MarketDataMetadataSymbol) GetIndexDisplayName() string`

GetIndexDisplayName returns the IndexDisplayName field if non-nil, zero value otherwise.

### GetIndexDisplayNameOk

`func (o *MarketDataMetadataSymbol) GetIndexDisplayNameOk() (*string, bool)`

GetIndexDisplayNameOk returns a tuple with the IndexDisplayName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIndexDisplayName

`func (o *MarketDataMetadataSymbol) SetIndexDisplayName(v string)`

SetIndexDisplayName sets IndexDisplayName field to given value.

### HasIndexDisplayName

`func (o *MarketDataMetadataSymbol) HasIndexDisplayName() bool`

HasIndexDisplayName returns a boolean if a field has been set.

### SetIndexDisplayNameNil

`func (o *MarketDataMetadataSymbol) SetIndexDisplayNameNil(b bool)`

 SetIndexDisplayNameNil sets the value for IndexDisplayName to be an explicit nil

### UnsetIndexDisplayName
`func (o *MarketDataMetadataSymbol) UnsetIndexDisplayName()`

UnsetIndexDisplayName ensures that no value is present for IndexDisplayName, not even an explicit nil
### GetIndexDisplayDescription

`func (o *MarketDataMetadataSymbol) GetIndexDisplayDescription() string`

GetIndexDisplayDescription returns the IndexDisplayDescription field if non-nil, zero value otherwise.

### GetIndexDisplayDescriptionOk

`func (o *MarketDataMetadataSymbol) GetIndexDisplayDescriptionOk() (*string, bool)`

GetIndexDisplayDescriptionOk returns a tuple with the IndexDisplayDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIndexDisplayDescription

`func (o *MarketDataMetadataSymbol) SetIndexDisplayDescription(v string)`

SetIndexDisplayDescription sets IndexDisplayDescription field to given value.

### HasIndexDisplayDescription

`func (o *MarketDataMetadataSymbol) HasIndexDisplayDescription() bool`

HasIndexDisplayDescription returns a boolean if a field has been set.

### SetIndexDisplayDescriptionNil

`func (o *MarketDataMetadataSymbol) SetIndexDisplayDescriptionNil(b bool)`

 SetIndexDisplayDescriptionNil sets the value for IndexDisplayDescription to be an explicit nil

### UnsetIndexDisplayDescription
`func (o *MarketDataMetadataSymbol) UnsetIndexDisplayDescription()`

UnsetIndexDisplayDescription ensures that no value is present for IndexDisplayDescription, not even an explicit nil
### GetVolume1hrs

`func (o *MarketDataMetadataSymbol) GetVolume1hrs() float64`

GetVolume1hrs returns the Volume1hrs field if non-nil, zero value otherwise.

### GetVolume1hrsOk

`func (o *MarketDataMetadataSymbol) GetVolume1hrsOk() (*float64, bool)`

GetVolume1hrsOk returns a tuple with the Volume1hrs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1hrs

`func (o *MarketDataMetadataSymbol) SetVolume1hrs(v float64)`

SetVolume1hrs sets Volume1hrs field to given value.

### HasVolume1hrs

`func (o *MarketDataMetadataSymbol) HasVolume1hrs() bool`

HasVolume1hrs returns a boolean if a field has been set.

### SetVolume1hrsNil

`func (o *MarketDataMetadataSymbol) SetVolume1hrsNil(b bool)`

 SetVolume1hrsNil sets the value for Volume1hrs to be an explicit nil

### UnsetVolume1hrs
`func (o *MarketDataMetadataSymbol) UnsetVolume1hrs()`

UnsetVolume1hrs ensures that no value is present for Volume1hrs, not even an explicit nil
### GetVolume1hrsUsd

`func (o *MarketDataMetadataSymbol) GetVolume1hrsUsd() float64`

GetVolume1hrsUsd returns the Volume1hrsUsd field if non-nil, zero value otherwise.

### GetVolume1hrsUsdOk

`func (o *MarketDataMetadataSymbol) GetVolume1hrsUsdOk() (*float64, bool)`

GetVolume1hrsUsdOk returns a tuple with the Volume1hrsUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1hrsUsd

`func (o *MarketDataMetadataSymbol) SetVolume1hrsUsd(v float64)`

SetVolume1hrsUsd sets Volume1hrsUsd field to given value.

### HasVolume1hrsUsd

`func (o *MarketDataMetadataSymbol) HasVolume1hrsUsd() bool`

HasVolume1hrsUsd returns a boolean if a field has been set.

### SetVolume1hrsUsdNil

`func (o *MarketDataMetadataSymbol) SetVolume1hrsUsdNil(b bool)`

 SetVolume1hrsUsdNil sets the value for Volume1hrsUsd to be an explicit nil

### UnsetVolume1hrsUsd
`func (o *MarketDataMetadataSymbol) UnsetVolume1hrsUsd()`

UnsetVolume1hrsUsd ensures that no value is present for Volume1hrsUsd, not even an explicit nil
### GetVolume1day

`func (o *MarketDataMetadataSymbol) GetVolume1day() float64`

GetVolume1day returns the Volume1day field if non-nil, zero value otherwise.

### GetVolume1dayOk

`func (o *MarketDataMetadataSymbol) GetVolume1dayOk() (*float64, bool)`

GetVolume1dayOk returns a tuple with the Volume1day field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1day

`func (o *MarketDataMetadataSymbol) SetVolume1day(v float64)`

SetVolume1day sets Volume1day field to given value.

### HasVolume1day

`func (o *MarketDataMetadataSymbol) HasVolume1day() bool`

HasVolume1day returns a boolean if a field has been set.

### SetVolume1dayNil

`func (o *MarketDataMetadataSymbol) SetVolume1dayNil(b bool)`

 SetVolume1dayNil sets the value for Volume1day to be an explicit nil

### UnsetVolume1day
`func (o *MarketDataMetadataSymbol) UnsetVolume1day()`

UnsetVolume1day ensures that no value is present for Volume1day, not even an explicit nil
### GetVolume1dayUsd

`func (o *MarketDataMetadataSymbol) GetVolume1dayUsd() float64`

GetVolume1dayUsd returns the Volume1dayUsd field if non-nil, zero value otherwise.

### GetVolume1dayUsdOk

`func (o *MarketDataMetadataSymbol) GetVolume1dayUsdOk() (*float64, bool)`

GetVolume1dayUsdOk returns a tuple with the Volume1dayUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1dayUsd

`func (o *MarketDataMetadataSymbol) SetVolume1dayUsd(v float64)`

SetVolume1dayUsd sets Volume1dayUsd field to given value.

### HasVolume1dayUsd

`func (o *MarketDataMetadataSymbol) HasVolume1dayUsd() bool`

HasVolume1dayUsd returns a boolean if a field has been set.

### SetVolume1dayUsdNil

`func (o *MarketDataMetadataSymbol) SetVolume1dayUsdNil(b bool)`

 SetVolume1dayUsdNil sets the value for Volume1dayUsd to be an explicit nil

### UnsetVolume1dayUsd
`func (o *MarketDataMetadataSymbol) UnsetVolume1dayUsd()`

UnsetVolume1dayUsd ensures that no value is present for Volume1dayUsd, not even an explicit nil
### GetVolume1mth

`func (o *MarketDataMetadataSymbol) GetVolume1mth() float64`

GetVolume1mth returns the Volume1mth field if non-nil, zero value otherwise.

### GetVolume1mthOk

`func (o *MarketDataMetadataSymbol) GetVolume1mthOk() (*float64, bool)`

GetVolume1mthOk returns a tuple with the Volume1mth field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1mth

`func (o *MarketDataMetadataSymbol) SetVolume1mth(v float64)`

SetVolume1mth sets Volume1mth field to given value.

### HasVolume1mth

`func (o *MarketDataMetadataSymbol) HasVolume1mth() bool`

HasVolume1mth returns a boolean if a field has been set.

### SetVolume1mthNil

`func (o *MarketDataMetadataSymbol) SetVolume1mthNil(b bool)`

 SetVolume1mthNil sets the value for Volume1mth to be an explicit nil

### UnsetVolume1mth
`func (o *MarketDataMetadataSymbol) UnsetVolume1mth()`

UnsetVolume1mth ensures that no value is present for Volume1mth, not even an explicit nil
### GetVolume1mthUsd

`func (o *MarketDataMetadataSymbol) GetVolume1mthUsd() float64`

GetVolume1mthUsd returns the Volume1mthUsd field if non-nil, zero value otherwise.

### GetVolume1mthUsdOk

`func (o *MarketDataMetadataSymbol) GetVolume1mthUsdOk() (*float64, bool)`

GetVolume1mthUsdOk returns a tuple with the Volume1mthUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1mthUsd

`func (o *MarketDataMetadataSymbol) SetVolume1mthUsd(v float64)`

SetVolume1mthUsd sets Volume1mthUsd field to given value.

### HasVolume1mthUsd

`func (o *MarketDataMetadataSymbol) HasVolume1mthUsd() bool`

HasVolume1mthUsd returns a boolean if a field has been set.

### SetVolume1mthUsdNil

`func (o *MarketDataMetadataSymbol) SetVolume1mthUsdNil(b bool)`

 SetVolume1mthUsdNil sets the value for Volume1mthUsd to be an explicit nil

### UnsetVolume1mthUsd
`func (o *MarketDataMetadataSymbol) UnsetVolume1mthUsd()`

UnsetVolume1mthUsd ensures that no value is present for Volume1mthUsd, not even an explicit nil
### GetPrice

`func (o *MarketDataMetadataSymbol) GetPrice() float64`

GetPrice returns the Price field if non-nil, zero value otherwise.

### GetPriceOk

`func (o *MarketDataMetadataSymbol) GetPriceOk() (*float64, bool)`

GetPriceOk returns a tuple with the Price field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPrice

`func (o *MarketDataMetadataSymbol) SetPrice(v float64)`

SetPrice sets Price field to given value.

### HasPrice

`func (o *MarketDataMetadataSymbol) HasPrice() bool`

HasPrice returns a boolean if a field has been set.

### SetPriceNil

`func (o *MarketDataMetadataSymbol) SetPriceNil(b bool)`

 SetPriceNil sets the value for Price to be an explicit nil

### UnsetPrice
`func (o *MarketDataMetadataSymbol) UnsetPrice()`

UnsetPrice ensures that no value is present for Price, not even an explicit nil
### GetSymbolIdExchange

`func (o *MarketDataMetadataSymbol) GetSymbolIdExchange() string`

GetSymbolIdExchange returns the SymbolIdExchange field if non-nil, zero value otherwise.

### GetSymbolIdExchangeOk

`func (o *MarketDataMetadataSymbol) GetSymbolIdExchangeOk() (*string, bool)`

GetSymbolIdExchangeOk returns a tuple with the SymbolIdExchange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbolIdExchange

`func (o *MarketDataMetadataSymbol) SetSymbolIdExchange(v string)`

SetSymbolIdExchange sets SymbolIdExchange field to given value.

### HasSymbolIdExchange

`func (o *MarketDataMetadataSymbol) HasSymbolIdExchange() bool`

HasSymbolIdExchange returns a boolean if a field has been set.

### SetSymbolIdExchangeNil

`func (o *MarketDataMetadataSymbol) SetSymbolIdExchangeNil(b bool)`

 SetSymbolIdExchangeNil sets the value for SymbolIdExchange to be an explicit nil

### UnsetSymbolIdExchange
`func (o *MarketDataMetadataSymbol) UnsetSymbolIdExchange()`

UnsetSymbolIdExchange ensures that no value is present for SymbolIdExchange, not even an explicit nil
### GetAssetIdBaseExchange

`func (o *MarketDataMetadataSymbol) GetAssetIdBaseExchange() string`

GetAssetIdBaseExchange returns the AssetIdBaseExchange field if non-nil, zero value otherwise.

### GetAssetIdBaseExchangeOk

`func (o *MarketDataMetadataSymbol) GetAssetIdBaseExchangeOk() (*string, bool)`

GetAssetIdBaseExchangeOk returns a tuple with the AssetIdBaseExchange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdBaseExchange

`func (o *MarketDataMetadataSymbol) SetAssetIdBaseExchange(v string)`

SetAssetIdBaseExchange sets AssetIdBaseExchange field to given value.

### HasAssetIdBaseExchange

`func (o *MarketDataMetadataSymbol) HasAssetIdBaseExchange() bool`

HasAssetIdBaseExchange returns a boolean if a field has been set.

### SetAssetIdBaseExchangeNil

`func (o *MarketDataMetadataSymbol) SetAssetIdBaseExchangeNil(b bool)`

 SetAssetIdBaseExchangeNil sets the value for AssetIdBaseExchange to be an explicit nil

### UnsetAssetIdBaseExchange
`func (o *MarketDataMetadataSymbol) UnsetAssetIdBaseExchange()`

UnsetAssetIdBaseExchange ensures that no value is present for AssetIdBaseExchange, not even an explicit nil
### GetAssetIdQuoteExchange

`func (o *MarketDataMetadataSymbol) GetAssetIdQuoteExchange() string`

GetAssetIdQuoteExchange returns the AssetIdQuoteExchange field if non-nil, zero value otherwise.

### GetAssetIdQuoteExchangeOk

`func (o *MarketDataMetadataSymbol) GetAssetIdQuoteExchangeOk() (*string, bool)`

GetAssetIdQuoteExchangeOk returns a tuple with the AssetIdQuoteExchange field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetIdQuoteExchange

`func (o *MarketDataMetadataSymbol) SetAssetIdQuoteExchange(v string)`

SetAssetIdQuoteExchange sets AssetIdQuoteExchange field to given value.

### HasAssetIdQuoteExchange

`func (o *MarketDataMetadataSymbol) HasAssetIdQuoteExchange() bool`

HasAssetIdQuoteExchange returns a boolean if a field has been set.

### SetAssetIdQuoteExchangeNil

`func (o *MarketDataMetadataSymbol) SetAssetIdQuoteExchangeNil(b bool)`

 SetAssetIdQuoteExchangeNil sets the value for AssetIdQuoteExchange to be an explicit nil

### UnsetAssetIdQuoteExchange
`func (o *MarketDataMetadataSymbol) UnsetAssetIdQuoteExchange()`

UnsetAssetIdQuoteExchange ensures that no value is present for AssetIdQuoteExchange, not even an explicit nil
### GetPricePrecision

`func (o *MarketDataMetadataSymbol) GetPricePrecision() float64`

GetPricePrecision returns the PricePrecision field if non-nil, zero value otherwise.

### GetPricePrecisionOk

`func (o *MarketDataMetadataSymbol) GetPricePrecisionOk() (*float64, bool)`

GetPricePrecisionOk returns a tuple with the PricePrecision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPricePrecision

`func (o *MarketDataMetadataSymbol) SetPricePrecision(v float64)`

SetPricePrecision sets PricePrecision field to given value.

### HasPricePrecision

`func (o *MarketDataMetadataSymbol) HasPricePrecision() bool`

HasPricePrecision returns a boolean if a field has been set.

### SetPricePrecisionNil

`func (o *MarketDataMetadataSymbol) SetPricePrecisionNil(b bool)`

 SetPricePrecisionNil sets the value for PricePrecision to be an explicit nil

### UnsetPricePrecision
`func (o *MarketDataMetadataSymbol) UnsetPricePrecision()`

UnsetPricePrecision ensures that no value is present for PricePrecision, not even an explicit nil
### GetSizePrecision

`func (o *MarketDataMetadataSymbol) GetSizePrecision() float64`

GetSizePrecision returns the SizePrecision field if non-nil, zero value otherwise.

### GetSizePrecisionOk

`func (o *MarketDataMetadataSymbol) GetSizePrecisionOk() (*float64, bool)`

GetSizePrecisionOk returns a tuple with the SizePrecision field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSizePrecision

`func (o *MarketDataMetadataSymbol) SetSizePrecision(v float64)`

SetSizePrecision sets SizePrecision field to given value.

### HasSizePrecision

`func (o *MarketDataMetadataSymbol) HasSizePrecision() bool`

HasSizePrecision returns a boolean if a field has been set.

### SetSizePrecisionNil

`func (o *MarketDataMetadataSymbol) SetSizePrecisionNil(b bool)`

 SetSizePrecisionNil sets the value for SizePrecision to be an explicit nil

### UnsetSizePrecision
`func (o *MarketDataMetadataSymbol) UnsetSizePrecision()`

UnsetSizePrecision ensures that no value is present for SizePrecision, not even an explicit nil
### GetRawKvp

`func (o *MarketDataMetadataSymbol) GetRawKvp() map[string]*string`

GetRawKvp returns the RawKvp field if non-nil, zero value otherwise.

### GetRawKvpOk

`func (o *MarketDataMetadataSymbol) GetRawKvpOk() (*map[string]*string, bool)`

GetRawKvpOk returns a tuple with the RawKvp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRawKvp

`func (o *MarketDataMetadataSymbol) SetRawKvp(v map[string]*string)`

SetRawKvp sets RawKvp field to given value.

### HasRawKvp

`func (o *MarketDataMetadataSymbol) HasRawKvp() bool`

HasRawKvp returns a boolean if a field has been set.

### SetRawKvpNil

`func (o *MarketDataMetadataSymbol) SetRawKvpNil(b bool)`

 SetRawKvpNil sets the value for RawKvp to be an explicit nil

### UnsetRawKvp
`func (o *MarketDataMetadataSymbol) UnsetRawKvp()`

UnsetRawKvp ensures that no value is present for RawKvp, not even an explicit nil
### GetFutureIsInverse

`func (o *MarketDataMetadataSymbol) GetFutureIsInverse() bool`

GetFutureIsInverse returns the FutureIsInverse field if non-nil, zero value otherwise.

### GetFutureIsInverseOk

`func (o *MarketDataMetadataSymbol) GetFutureIsInverseOk() (*bool, bool)`

GetFutureIsInverseOk returns a tuple with the FutureIsInverse field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFutureIsInverse

`func (o *MarketDataMetadataSymbol) SetFutureIsInverse(v bool)`

SetFutureIsInverse sets FutureIsInverse field to given value.

### HasFutureIsInverse

`func (o *MarketDataMetadataSymbol) HasFutureIsInverse() bool`

HasFutureIsInverse returns a boolean if a field has been set.

### SetFutureIsInverseNil

`func (o *MarketDataMetadataSymbol) SetFutureIsInverseNil(b bool)`

 SetFutureIsInverseNil sets the value for FutureIsInverse to be an explicit nil

### UnsetFutureIsInverse
`func (o *MarketDataMetadataSymbol) UnsetFutureIsInverse()`

UnsetFutureIsInverse ensures that no value is present for FutureIsInverse, not even an explicit nil
### GetFutureIsQuanto

`func (o *MarketDataMetadataSymbol) GetFutureIsQuanto() bool`

GetFutureIsQuanto returns the FutureIsQuanto field if non-nil, zero value otherwise.

### GetFutureIsQuantoOk

`func (o *MarketDataMetadataSymbol) GetFutureIsQuantoOk() (*bool, bool)`

GetFutureIsQuantoOk returns a tuple with the FutureIsQuanto field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFutureIsQuanto

`func (o *MarketDataMetadataSymbol) SetFutureIsQuanto(v bool)`

SetFutureIsQuanto sets FutureIsQuanto field to given value.

### HasFutureIsQuanto

`func (o *MarketDataMetadataSymbol) HasFutureIsQuanto() bool`

HasFutureIsQuanto returns a boolean if a field has been set.

### SetFutureIsQuantoNil

`func (o *MarketDataMetadataSymbol) SetFutureIsQuantoNil(b bool)`

 SetFutureIsQuantoNil sets the value for FutureIsQuanto to be an explicit nil

### UnsetFutureIsQuanto
`func (o *MarketDataMetadataSymbol) UnsetFutureIsQuanto()`

UnsetFutureIsQuanto ensures that no value is present for FutureIsQuanto, not even an explicit nil
### GetVolumeToUsd

`func (o *MarketDataMetadataSymbol) GetVolumeToUsd() float64`

GetVolumeToUsd returns the VolumeToUsd field if non-nil, zero value otherwise.

### GetVolumeToUsdOk

`func (o *MarketDataMetadataSymbol) GetVolumeToUsdOk() (*float64, bool)`

GetVolumeToUsdOk returns a tuple with the VolumeToUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolumeToUsd

`func (o *MarketDataMetadataSymbol) SetVolumeToUsd(v float64)`

SetVolumeToUsd sets VolumeToUsd field to given value.

### HasVolumeToUsd

`func (o *MarketDataMetadataSymbol) HasVolumeToUsd() bool`

HasVolumeToUsd returns a boolean if a field has been set.

### SetVolumeToUsdNil

`func (o *MarketDataMetadataSymbol) SetVolumeToUsdNil(b bool)`

 SetVolumeToUsdNil sets the value for VolumeToUsd to be an explicit nil

### UnsetVolumeToUsd
`func (o *MarketDataMetadataSymbol) UnsetVolumeToUsd()`

UnsetVolumeToUsd ensures that no value is present for VolumeToUsd, not even an explicit nil
### GetOptionBarrierUpPrice

`func (o *MarketDataMetadataSymbol) GetOptionBarrierUpPrice() float64`

GetOptionBarrierUpPrice returns the OptionBarrierUpPrice field if non-nil, zero value otherwise.

### GetOptionBarrierUpPriceOk

`func (o *MarketDataMetadataSymbol) GetOptionBarrierUpPriceOk() (*float64, bool)`

GetOptionBarrierUpPriceOk returns a tuple with the OptionBarrierUpPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionBarrierUpPrice

`func (o *MarketDataMetadataSymbol) SetOptionBarrierUpPrice(v float64)`

SetOptionBarrierUpPrice sets OptionBarrierUpPrice field to given value.

### HasOptionBarrierUpPrice

`func (o *MarketDataMetadataSymbol) HasOptionBarrierUpPrice() bool`

HasOptionBarrierUpPrice returns a boolean if a field has been set.

### SetOptionBarrierUpPriceNil

`func (o *MarketDataMetadataSymbol) SetOptionBarrierUpPriceNil(b bool)`

 SetOptionBarrierUpPriceNil sets the value for OptionBarrierUpPrice to be an explicit nil

### UnsetOptionBarrierUpPrice
`func (o *MarketDataMetadataSymbol) UnsetOptionBarrierUpPrice()`

UnsetOptionBarrierUpPrice ensures that no value is present for OptionBarrierUpPrice, not even an explicit nil
### GetOptionBarrierUpType

`func (o *MarketDataMetadataSymbol) GetOptionBarrierUpType() string`

GetOptionBarrierUpType returns the OptionBarrierUpType field if non-nil, zero value otherwise.

### GetOptionBarrierUpTypeOk

`func (o *MarketDataMetadataSymbol) GetOptionBarrierUpTypeOk() (*string, bool)`

GetOptionBarrierUpTypeOk returns a tuple with the OptionBarrierUpType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionBarrierUpType

`func (o *MarketDataMetadataSymbol) SetOptionBarrierUpType(v string)`

SetOptionBarrierUpType sets OptionBarrierUpType field to given value.

### HasOptionBarrierUpType

`func (o *MarketDataMetadataSymbol) HasOptionBarrierUpType() bool`

HasOptionBarrierUpType returns a boolean if a field has been set.

### SetOptionBarrierUpTypeNil

`func (o *MarketDataMetadataSymbol) SetOptionBarrierUpTypeNil(b bool)`

 SetOptionBarrierUpTypeNil sets the value for OptionBarrierUpType to be an explicit nil

### UnsetOptionBarrierUpType
`func (o *MarketDataMetadataSymbol) UnsetOptionBarrierUpType()`

UnsetOptionBarrierUpType ensures that no value is present for OptionBarrierUpType, not even an explicit nil
### GetOptionBarrierDownPrice

`func (o *MarketDataMetadataSymbol) GetOptionBarrierDownPrice() float64`

GetOptionBarrierDownPrice returns the OptionBarrierDownPrice field if non-nil, zero value otherwise.

### GetOptionBarrierDownPriceOk

`func (o *MarketDataMetadataSymbol) GetOptionBarrierDownPriceOk() (*float64, bool)`

GetOptionBarrierDownPriceOk returns a tuple with the OptionBarrierDownPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionBarrierDownPrice

`func (o *MarketDataMetadataSymbol) SetOptionBarrierDownPrice(v float64)`

SetOptionBarrierDownPrice sets OptionBarrierDownPrice field to given value.

### HasOptionBarrierDownPrice

`func (o *MarketDataMetadataSymbol) HasOptionBarrierDownPrice() bool`

HasOptionBarrierDownPrice returns a boolean if a field has been set.

### SetOptionBarrierDownPriceNil

`func (o *MarketDataMetadataSymbol) SetOptionBarrierDownPriceNil(b bool)`

 SetOptionBarrierDownPriceNil sets the value for OptionBarrierDownPrice to be an explicit nil

### UnsetOptionBarrierDownPrice
`func (o *MarketDataMetadataSymbol) UnsetOptionBarrierDownPrice()`

UnsetOptionBarrierDownPrice ensures that no value is present for OptionBarrierDownPrice, not even an explicit nil
### GetOptionBarrierDownType

`func (o *MarketDataMetadataSymbol) GetOptionBarrierDownType() string`

GetOptionBarrierDownType returns the OptionBarrierDownType field if non-nil, zero value otherwise.

### GetOptionBarrierDownTypeOk

`func (o *MarketDataMetadataSymbol) GetOptionBarrierDownTypeOk() (*string, bool)`

GetOptionBarrierDownTypeOk returns a tuple with the OptionBarrierDownType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOptionBarrierDownType

`func (o *MarketDataMetadataSymbol) SetOptionBarrierDownType(v string)`

SetOptionBarrierDownType sets OptionBarrierDownType field to given value.

### HasOptionBarrierDownType

`func (o *MarketDataMetadataSymbol) HasOptionBarrierDownType() bool`

HasOptionBarrierDownType returns a boolean if a field has been set.

### SetOptionBarrierDownTypeNil

`func (o *MarketDataMetadataSymbol) SetOptionBarrierDownTypeNil(b bool)`

 SetOptionBarrierDownTypeNil sets the value for OptionBarrierDownType to be an explicit nil

### UnsetOptionBarrierDownType
`func (o *MarketDataMetadataSymbol) UnsetOptionBarrierDownType()`

UnsetOptionBarrierDownType ensures that no value is present for OptionBarrierDownType, not even an explicit nil
### GetSymbolIdInt

`func (o *MarketDataMetadataSymbol) GetSymbolIdInt() int32`

GetSymbolIdInt returns the SymbolIdInt field if non-nil, zero value otherwise.

### GetSymbolIdIntOk

`func (o *MarketDataMetadataSymbol) GetSymbolIdIntOk() (*int32, bool)`

GetSymbolIdIntOk returns a tuple with the SymbolIdInt field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbolIdInt

`func (o *MarketDataMetadataSymbol) SetSymbolIdInt(v int32)`

SetSymbolIdInt sets SymbolIdInt field to given value.

### HasSymbolIdInt

`func (o *MarketDataMetadataSymbol) HasSymbolIdInt() bool`

HasSymbolIdInt returns a boolean if a field has been set.

### SetSymbolIdIntNil

`func (o *MarketDataMetadataSymbol) SetSymbolIdIntNil(b bool)`

 SetSymbolIdIntNil sets the value for SymbolIdInt to be an explicit nil

### UnsetSymbolIdInt
`func (o *MarketDataMetadataSymbol) UnsetSymbolIdInt()`

UnsetSymbolIdInt ensures that no value is present for SymbolIdInt, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


