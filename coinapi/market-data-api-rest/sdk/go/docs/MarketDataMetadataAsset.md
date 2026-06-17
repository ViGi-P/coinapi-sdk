# MarketDataMetadataAsset

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AssetId** | Pointer to **NullableString** | Gets or sets the asset ID. | [optional] 
**Name** | Pointer to **NullableString** | Gets or sets the name of the asset. | [optional] 
**TypeIsCrypto** | Pointer to **int32** | Gets or sets a value indicating whether the asset is a cryptocurrency. | [optional] 
**DataQuoteStart** | Pointer to **NullableTime** | Gets or sets the start date of quote data. | [optional] 
**DataQuoteEnd** | Pointer to **NullableTime** | Gets or sets the end date of quote data. | [optional] 
**DataOrderbookStart** | Pointer to **NullableTime** | Gets or sets the start date of order book data. | [optional] 
**DataOrderbookEnd** | Pointer to **NullableTime** | Gets or sets the end date of order book data. | [optional] 
**DataTradeStart** | Pointer to **NullableTime** | Gets or sets the start date of trade data. | [optional] 
**DataTradeEnd** | Pointer to **NullableTime** | Gets or sets the end date of trade data. | [optional] 
**DataSymbolsCount** | Pointer to **NullableInt64** | Gets or sets the number of symbols. | [optional] 
**Volume1hrsUsd** | Pointer to **NullableFloat64** | Gets or sets the USD volume in the last 1 hour. | [optional] 
**Volume1dayUsd** | Pointer to **NullableFloat64** | Gets or sets the USD volume in the last 1 day. | [optional] 
**Volume1mthUsd** | Pointer to **NullableFloat64** | Gets or sets the USD volume in the last 1 month. | [optional] 
**PriceUsd** | Pointer to **NullableFloat64** | Gets or sets the USD price of the asset. | [optional] 
**IdIcon** | Pointer to **NullableString** | Gets or sets the ID of the icon for the asset. | [optional] 
**SupplyCurrent** | Pointer to **NullableFloat64** | Gets or sets the current supply of the asset. | [optional] 
**SupplyTotal** | Pointer to **NullableFloat64** | Gets or sets the total supply of the asset. | [optional] 
**SupplyMax** | Pointer to **NullableFloat64** | Gets or sets the maximum supply of the asset. | [optional] 
**ChainAddresses** | Pointer to [**[]V1ChainNetworkAddress**](V1ChainNetworkAddress.md) |  | [optional] 
**DataStart** | Pointer to **NullableString** |  | [optional] [readonly] 
**DataEnd** | Pointer to **NullableString** |  | [optional] [readonly] 

## Methods

### NewMarketDataMetadataAsset

`func NewMarketDataMetadataAsset() *MarketDataMetadataAsset`

NewMarketDataMetadataAsset instantiates a new MarketDataMetadataAsset object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMarketDataMetadataAssetWithDefaults

`func NewMarketDataMetadataAssetWithDefaults() *MarketDataMetadataAsset`

NewMarketDataMetadataAssetWithDefaults instantiates a new MarketDataMetadataAsset object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAssetId

`func (o *MarketDataMetadataAsset) GetAssetId() string`

GetAssetId returns the AssetId field if non-nil, zero value otherwise.

### GetAssetIdOk

`func (o *MarketDataMetadataAsset) GetAssetIdOk() (*string, bool)`

GetAssetIdOk returns a tuple with the AssetId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetId

`func (o *MarketDataMetadataAsset) SetAssetId(v string)`

SetAssetId sets AssetId field to given value.

### HasAssetId

`func (o *MarketDataMetadataAsset) HasAssetId() bool`

HasAssetId returns a boolean if a field has been set.

### SetAssetIdNil

`func (o *MarketDataMetadataAsset) SetAssetIdNil(b bool)`

 SetAssetIdNil sets the value for AssetId to be an explicit nil

### UnsetAssetId
`func (o *MarketDataMetadataAsset) UnsetAssetId()`

UnsetAssetId ensures that no value is present for AssetId, not even an explicit nil
### GetName

`func (o *MarketDataMetadataAsset) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *MarketDataMetadataAsset) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *MarketDataMetadataAsset) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *MarketDataMetadataAsset) HasName() bool`

HasName returns a boolean if a field has been set.

### SetNameNil

`func (o *MarketDataMetadataAsset) SetNameNil(b bool)`

 SetNameNil sets the value for Name to be an explicit nil

### UnsetName
`func (o *MarketDataMetadataAsset) UnsetName()`

UnsetName ensures that no value is present for Name, not even an explicit nil
### GetTypeIsCrypto

`func (o *MarketDataMetadataAsset) GetTypeIsCrypto() int32`

GetTypeIsCrypto returns the TypeIsCrypto field if non-nil, zero value otherwise.

### GetTypeIsCryptoOk

`func (o *MarketDataMetadataAsset) GetTypeIsCryptoOk() (*int32, bool)`

GetTypeIsCryptoOk returns a tuple with the TypeIsCrypto field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTypeIsCrypto

`func (o *MarketDataMetadataAsset) SetTypeIsCrypto(v int32)`

SetTypeIsCrypto sets TypeIsCrypto field to given value.

### HasTypeIsCrypto

`func (o *MarketDataMetadataAsset) HasTypeIsCrypto() bool`

HasTypeIsCrypto returns a boolean if a field has been set.

### GetDataQuoteStart

`func (o *MarketDataMetadataAsset) GetDataQuoteStart() time.Time`

GetDataQuoteStart returns the DataQuoteStart field if non-nil, zero value otherwise.

### GetDataQuoteStartOk

`func (o *MarketDataMetadataAsset) GetDataQuoteStartOk() (*time.Time, bool)`

GetDataQuoteStartOk returns a tuple with the DataQuoteStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataQuoteStart

`func (o *MarketDataMetadataAsset) SetDataQuoteStart(v time.Time)`

SetDataQuoteStart sets DataQuoteStart field to given value.

### HasDataQuoteStart

`func (o *MarketDataMetadataAsset) HasDataQuoteStart() bool`

HasDataQuoteStart returns a boolean if a field has been set.

### SetDataQuoteStartNil

`func (o *MarketDataMetadataAsset) SetDataQuoteStartNil(b bool)`

 SetDataQuoteStartNil sets the value for DataQuoteStart to be an explicit nil

### UnsetDataQuoteStart
`func (o *MarketDataMetadataAsset) UnsetDataQuoteStart()`

UnsetDataQuoteStart ensures that no value is present for DataQuoteStart, not even an explicit nil
### GetDataQuoteEnd

`func (o *MarketDataMetadataAsset) GetDataQuoteEnd() time.Time`

GetDataQuoteEnd returns the DataQuoteEnd field if non-nil, zero value otherwise.

### GetDataQuoteEndOk

`func (o *MarketDataMetadataAsset) GetDataQuoteEndOk() (*time.Time, bool)`

GetDataQuoteEndOk returns a tuple with the DataQuoteEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataQuoteEnd

`func (o *MarketDataMetadataAsset) SetDataQuoteEnd(v time.Time)`

SetDataQuoteEnd sets DataQuoteEnd field to given value.

### HasDataQuoteEnd

`func (o *MarketDataMetadataAsset) HasDataQuoteEnd() bool`

HasDataQuoteEnd returns a boolean if a field has been set.

### SetDataQuoteEndNil

`func (o *MarketDataMetadataAsset) SetDataQuoteEndNil(b bool)`

 SetDataQuoteEndNil sets the value for DataQuoteEnd to be an explicit nil

### UnsetDataQuoteEnd
`func (o *MarketDataMetadataAsset) UnsetDataQuoteEnd()`

UnsetDataQuoteEnd ensures that no value is present for DataQuoteEnd, not even an explicit nil
### GetDataOrderbookStart

`func (o *MarketDataMetadataAsset) GetDataOrderbookStart() time.Time`

GetDataOrderbookStart returns the DataOrderbookStart field if non-nil, zero value otherwise.

### GetDataOrderbookStartOk

`func (o *MarketDataMetadataAsset) GetDataOrderbookStartOk() (*time.Time, bool)`

GetDataOrderbookStartOk returns a tuple with the DataOrderbookStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataOrderbookStart

`func (o *MarketDataMetadataAsset) SetDataOrderbookStart(v time.Time)`

SetDataOrderbookStart sets DataOrderbookStart field to given value.

### HasDataOrderbookStart

`func (o *MarketDataMetadataAsset) HasDataOrderbookStart() bool`

HasDataOrderbookStart returns a boolean if a field has been set.

### SetDataOrderbookStartNil

`func (o *MarketDataMetadataAsset) SetDataOrderbookStartNil(b bool)`

 SetDataOrderbookStartNil sets the value for DataOrderbookStart to be an explicit nil

### UnsetDataOrderbookStart
`func (o *MarketDataMetadataAsset) UnsetDataOrderbookStart()`

UnsetDataOrderbookStart ensures that no value is present for DataOrderbookStart, not even an explicit nil
### GetDataOrderbookEnd

`func (o *MarketDataMetadataAsset) GetDataOrderbookEnd() time.Time`

GetDataOrderbookEnd returns the DataOrderbookEnd field if non-nil, zero value otherwise.

### GetDataOrderbookEndOk

`func (o *MarketDataMetadataAsset) GetDataOrderbookEndOk() (*time.Time, bool)`

GetDataOrderbookEndOk returns a tuple with the DataOrderbookEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataOrderbookEnd

`func (o *MarketDataMetadataAsset) SetDataOrderbookEnd(v time.Time)`

SetDataOrderbookEnd sets DataOrderbookEnd field to given value.

### HasDataOrderbookEnd

`func (o *MarketDataMetadataAsset) HasDataOrderbookEnd() bool`

HasDataOrderbookEnd returns a boolean if a field has been set.

### SetDataOrderbookEndNil

`func (o *MarketDataMetadataAsset) SetDataOrderbookEndNil(b bool)`

 SetDataOrderbookEndNil sets the value for DataOrderbookEnd to be an explicit nil

### UnsetDataOrderbookEnd
`func (o *MarketDataMetadataAsset) UnsetDataOrderbookEnd()`

UnsetDataOrderbookEnd ensures that no value is present for DataOrderbookEnd, not even an explicit nil
### GetDataTradeStart

`func (o *MarketDataMetadataAsset) GetDataTradeStart() time.Time`

GetDataTradeStart returns the DataTradeStart field if non-nil, zero value otherwise.

### GetDataTradeStartOk

`func (o *MarketDataMetadataAsset) GetDataTradeStartOk() (*time.Time, bool)`

GetDataTradeStartOk returns a tuple with the DataTradeStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataTradeStart

`func (o *MarketDataMetadataAsset) SetDataTradeStart(v time.Time)`

SetDataTradeStart sets DataTradeStart field to given value.

### HasDataTradeStart

`func (o *MarketDataMetadataAsset) HasDataTradeStart() bool`

HasDataTradeStart returns a boolean if a field has been set.

### SetDataTradeStartNil

`func (o *MarketDataMetadataAsset) SetDataTradeStartNil(b bool)`

 SetDataTradeStartNil sets the value for DataTradeStart to be an explicit nil

### UnsetDataTradeStart
`func (o *MarketDataMetadataAsset) UnsetDataTradeStart()`

UnsetDataTradeStart ensures that no value is present for DataTradeStart, not even an explicit nil
### GetDataTradeEnd

`func (o *MarketDataMetadataAsset) GetDataTradeEnd() time.Time`

GetDataTradeEnd returns the DataTradeEnd field if non-nil, zero value otherwise.

### GetDataTradeEndOk

`func (o *MarketDataMetadataAsset) GetDataTradeEndOk() (*time.Time, bool)`

GetDataTradeEndOk returns a tuple with the DataTradeEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataTradeEnd

`func (o *MarketDataMetadataAsset) SetDataTradeEnd(v time.Time)`

SetDataTradeEnd sets DataTradeEnd field to given value.

### HasDataTradeEnd

`func (o *MarketDataMetadataAsset) HasDataTradeEnd() bool`

HasDataTradeEnd returns a boolean if a field has been set.

### SetDataTradeEndNil

`func (o *MarketDataMetadataAsset) SetDataTradeEndNil(b bool)`

 SetDataTradeEndNil sets the value for DataTradeEnd to be an explicit nil

### UnsetDataTradeEnd
`func (o *MarketDataMetadataAsset) UnsetDataTradeEnd()`

UnsetDataTradeEnd ensures that no value is present for DataTradeEnd, not even an explicit nil
### GetDataSymbolsCount

`func (o *MarketDataMetadataAsset) GetDataSymbolsCount() int64`

GetDataSymbolsCount returns the DataSymbolsCount field if non-nil, zero value otherwise.

### GetDataSymbolsCountOk

`func (o *MarketDataMetadataAsset) GetDataSymbolsCountOk() (*int64, bool)`

GetDataSymbolsCountOk returns a tuple with the DataSymbolsCount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataSymbolsCount

`func (o *MarketDataMetadataAsset) SetDataSymbolsCount(v int64)`

SetDataSymbolsCount sets DataSymbolsCount field to given value.

### HasDataSymbolsCount

`func (o *MarketDataMetadataAsset) HasDataSymbolsCount() bool`

HasDataSymbolsCount returns a boolean if a field has been set.

### SetDataSymbolsCountNil

`func (o *MarketDataMetadataAsset) SetDataSymbolsCountNil(b bool)`

 SetDataSymbolsCountNil sets the value for DataSymbolsCount to be an explicit nil

### UnsetDataSymbolsCount
`func (o *MarketDataMetadataAsset) UnsetDataSymbolsCount()`

UnsetDataSymbolsCount ensures that no value is present for DataSymbolsCount, not even an explicit nil
### GetVolume1hrsUsd

`func (o *MarketDataMetadataAsset) GetVolume1hrsUsd() float64`

GetVolume1hrsUsd returns the Volume1hrsUsd field if non-nil, zero value otherwise.

### GetVolume1hrsUsdOk

`func (o *MarketDataMetadataAsset) GetVolume1hrsUsdOk() (*float64, bool)`

GetVolume1hrsUsdOk returns a tuple with the Volume1hrsUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1hrsUsd

`func (o *MarketDataMetadataAsset) SetVolume1hrsUsd(v float64)`

SetVolume1hrsUsd sets Volume1hrsUsd field to given value.

### HasVolume1hrsUsd

`func (o *MarketDataMetadataAsset) HasVolume1hrsUsd() bool`

HasVolume1hrsUsd returns a boolean if a field has been set.

### SetVolume1hrsUsdNil

`func (o *MarketDataMetadataAsset) SetVolume1hrsUsdNil(b bool)`

 SetVolume1hrsUsdNil sets the value for Volume1hrsUsd to be an explicit nil

### UnsetVolume1hrsUsd
`func (o *MarketDataMetadataAsset) UnsetVolume1hrsUsd()`

UnsetVolume1hrsUsd ensures that no value is present for Volume1hrsUsd, not even an explicit nil
### GetVolume1dayUsd

`func (o *MarketDataMetadataAsset) GetVolume1dayUsd() float64`

GetVolume1dayUsd returns the Volume1dayUsd field if non-nil, zero value otherwise.

### GetVolume1dayUsdOk

`func (o *MarketDataMetadataAsset) GetVolume1dayUsdOk() (*float64, bool)`

GetVolume1dayUsdOk returns a tuple with the Volume1dayUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1dayUsd

`func (o *MarketDataMetadataAsset) SetVolume1dayUsd(v float64)`

SetVolume1dayUsd sets Volume1dayUsd field to given value.

### HasVolume1dayUsd

`func (o *MarketDataMetadataAsset) HasVolume1dayUsd() bool`

HasVolume1dayUsd returns a boolean if a field has been set.

### SetVolume1dayUsdNil

`func (o *MarketDataMetadataAsset) SetVolume1dayUsdNil(b bool)`

 SetVolume1dayUsdNil sets the value for Volume1dayUsd to be an explicit nil

### UnsetVolume1dayUsd
`func (o *MarketDataMetadataAsset) UnsetVolume1dayUsd()`

UnsetVolume1dayUsd ensures that no value is present for Volume1dayUsd, not even an explicit nil
### GetVolume1mthUsd

`func (o *MarketDataMetadataAsset) GetVolume1mthUsd() float64`

GetVolume1mthUsd returns the Volume1mthUsd field if non-nil, zero value otherwise.

### GetVolume1mthUsdOk

`func (o *MarketDataMetadataAsset) GetVolume1mthUsdOk() (*float64, bool)`

GetVolume1mthUsdOk returns a tuple with the Volume1mthUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume1mthUsd

`func (o *MarketDataMetadataAsset) SetVolume1mthUsd(v float64)`

SetVolume1mthUsd sets Volume1mthUsd field to given value.

### HasVolume1mthUsd

`func (o *MarketDataMetadataAsset) HasVolume1mthUsd() bool`

HasVolume1mthUsd returns a boolean if a field has been set.

### SetVolume1mthUsdNil

`func (o *MarketDataMetadataAsset) SetVolume1mthUsdNil(b bool)`

 SetVolume1mthUsdNil sets the value for Volume1mthUsd to be an explicit nil

### UnsetVolume1mthUsd
`func (o *MarketDataMetadataAsset) UnsetVolume1mthUsd()`

UnsetVolume1mthUsd ensures that no value is present for Volume1mthUsd, not even an explicit nil
### GetPriceUsd

`func (o *MarketDataMetadataAsset) GetPriceUsd() float64`

GetPriceUsd returns the PriceUsd field if non-nil, zero value otherwise.

### GetPriceUsdOk

`func (o *MarketDataMetadataAsset) GetPriceUsdOk() (*float64, bool)`

GetPriceUsdOk returns a tuple with the PriceUsd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPriceUsd

`func (o *MarketDataMetadataAsset) SetPriceUsd(v float64)`

SetPriceUsd sets PriceUsd field to given value.

### HasPriceUsd

`func (o *MarketDataMetadataAsset) HasPriceUsd() bool`

HasPriceUsd returns a boolean if a field has been set.

### SetPriceUsdNil

`func (o *MarketDataMetadataAsset) SetPriceUsdNil(b bool)`

 SetPriceUsdNil sets the value for PriceUsd to be an explicit nil

### UnsetPriceUsd
`func (o *MarketDataMetadataAsset) UnsetPriceUsd()`

UnsetPriceUsd ensures that no value is present for PriceUsd, not even an explicit nil
### GetIdIcon

`func (o *MarketDataMetadataAsset) GetIdIcon() string`

GetIdIcon returns the IdIcon field if non-nil, zero value otherwise.

### GetIdIconOk

`func (o *MarketDataMetadataAsset) GetIdIconOk() (*string, bool)`

GetIdIconOk returns a tuple with the IdIcon field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIdIcon

`func (o *MarketDataMetadataAsset) SetIdIcon(v string)`

SetIdIcon sets IdIcon field to given value.

### HasIdIcon

`func (o *MarketDataMetadataAsset) HasIdIcon() bool`

HasIdIcon returns a boolean if a field has been set.

### SetIdIconNil

`func (o *MarketDataMetadataAsset) SetIdIconNil(b bool)`

 SetIdIconNil sets the value for IdIcon to be an explicit nil

### UnsetIdIcon
`func (o *MarketDataMetadataAsset) UnsetIdIcon()`

UnsetIdIcon ensures that no value is present for IdIcon, not even an explicit nil
### GetSupplyCurrent

`func (o *MarketDataMetadataAsset) GetSupplyCurrent() float64`

GetSupplyCurrent returns the SupplyCurrent field if non-nil, zero value otherwise.

### GetSupplyCurrentOk

`func (o *MarketDataMetadataAsset) GetSupplyCurrentOk() (*float64, bool)`

GetSupplyCurrentOk returns a tuple with the SupplyCurrent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSupplyCurrent

`func (o *MarketDataMetadataAsset) SetSupplyCurrent(v float64)`

SetSupplyCurrent sets SupplyCurrent field to given value.

### HasSupplyCurrent

`func (o *MarketDataMetadataAsset) HasSupplyCurrent() bool`

HasSupplyCurrent returns a boolean if a field has been set.

### SetSupplyCurrentNil

`func (o *MarketDataMetadataAsset) SetSupplyCurrentNil(b bool)`

 SetSupplyCurrentNil sets the value for SupplyCurrent to be an explicit nil

### UnsetSupplyCurrent
`func (o *MarketDataMetadataAsset) UnsetSupplyCurrent()`

UnsetSupplyCurrent ensures that no value is present for SupplyCurrent, not even an explicit nil
### GetSupplyTotal

`func (o *MarketDataMetadataAsset) GetSupplyTotal() float64`

GetSupplyTotal returns the SupplyTotal field if non-nil, zero value otherwise.

### GetSupplyTotalOk

`func (o *MarketDataMetadataAsset) GetSupplyTotalOk() (*float64, bool)`

GetSupplyTotalOk returns a tuple with the SupplyTotal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSupplyTotal

`func (o *MarketDataMetadataAsset) SetSupplyTotal(v float64)`

SetSupplyTotal sets SupplyTotal field to given value.

### HasSupplyTotal

`func (o *MarketDataMetadataAsset) HasSupplyTotal() bool`

HasSupplyTotal returns a boolean if a field has been set.

### SetSupplyTotalNil

`func (o *MarketDataMetadataAsset) SetSupplyTotalNil(b bool)`

 SetSupplyTotalNil sets the value for SupplyTotal to be an explicit nil

### UnsetSupplyTotal
`func (o *MarketDataMetadataAsset) UnsetSupplyTotal()`

UnsetSupplyTotal ensures that no value is present for SupplyTotal, not even an explicit nil
### GetSupplyMax

`func (o *MarketDataMetadataAsset) GetSupplyMax() float64`

GetSupplyMax returns the SupplyMax field if non-nil, zero value otherwise.

### GetSupplyMaxOk

`func (o *MarketDataMetadataAsset) GetSupplyMaxOk() (*float64, bool)`

GetSupplyMaxOk returns a tuple with the SupplyMax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSupplyMax

`func (o *MarketDataMetadataAsset) SetSupplyMax(v float64)`

SetSupplyMax sets SupplyMax field to given value.

### HasSupplyMax

`func (o *MarketDataMetadataAsset) HasSupplyMax() bool`

HasSupplyMax returns a boolean if a field has been set.

### SetSupplyMaxNil

`func (o *MarketDataMetadataAsset) SetSupplyMaxNil(b bool)`

 SetSupplyMaxNil sets the value for SupplyMax to be an explicit nil

### UnsetSupplyMax
`func (o *MarketDataMetadataAsset) UnsetSupplyMax()`

UnsetSupplyMax ensures that no value is present for SupplyMax, not even an explicit nil
### GetChainAddresses

`func (o *MarketDataMetadataAsset) GetChainAddresses() []V1ChainNetworkAddress`

GetChainAddresses returns the ChainAddresses field if non-nil, zero value otherwise.

### GetChainAddressesOk

`func (o *MarketDataMetadataAsset) GetChainAddressesOk() (*[]V1ChainNetworkAddress, bool)`

GetChainAddressesOk returns a tuple with the ChainAddresses field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChainAddresses

`func (o *MarketDataMetadataAsset) SetChainAddresses(v []V1ChainNetworkAddress)`

SetChainAddresses sets ChainAddresses field to given value.

### HasChainAddresses

`func (o *MarketDataMetadataAsset) HasChainAddresses() bool`

HasChainAddresses returns a boolean if a field has been set.

### SetChainAddressesNil

`func (o *MarketDataMetadataAsset) SetChainAddressesNil(b bool)`

 SetChainAddressesNil sets the value for ChainAddresses to be an explicit nil

### UnsetChainAddresses
`func (o *MarketDataMetadataAsset) UnsetChainAddresses()`

UnsetChainAddresses ensures that no value is present for ChainAddresses, not even an explicit nil
### GetDataStart

`func (o *MarketDataMetadataAsset) GetDataStart() string`

GetDataStart returns the DataStart field if non-nil, zero value otherwise.

### GetDataStartOk

`func (o *MarketDataMetadataAsset) GetDataStartOk() (*string, bool)`

GetDataStartOk returns a tuple with the DataStart field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataStart

`func (o *MarketDataMetadataAsset) SetDataStart(v string)`

SetDataStart sets DataStart field to given value.

### HasDataStart

`func (o *MarketDataMetadataAsset) HasDataStart() bool`

HasDataStart returns a boolean if a field has been set.

### SetDataStartNil

`func (o *MarketDataMetadataAsset) SetDataStartNil(b bool)`

 SetDataStartNil sets the value for DataStart to be an explicit nil

### UnsetDataStart
`func (o *MarketDataMetadataAsset) UnsetDataStart()`

UnsetDataStart ensures that no value is present for DataStart, not even an explicit nil
### GetDataEnd

`func (o *MarketDataMetadataAsset) GetDataEnd() string`

GetDataEnd returns the DataEnd field if non-nil, zero value otherwise.

### GetDataEndOk

`func (o *MarketDataMetadataAsset) GetDataEndOk() (*string, bool)`

GetDataEndOk returns a tuple with the DataEnd field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDataEnd

`func (o *MarketDataMetadataAsset) SetDataEnd(v string)`

SetDataEnd sets DataEnd field to given value.

### HasDataEnd

`func (o *MarketDataMetadataAsset) HasDataEnd() bool`

HasDataEnd returns a boolean if a field has been set.

### SetDataEndNil

`func (o *MarketDataMetadataAsset) SetDataEndNil(b bool)`

 SetDataEndNil sets the value for DataEnd to be an explicit nil

### UnsetDataEnd
`func (o *MarketDataMetadataAsset) UnsetDataEnd()`

UnsetDataEnd ensures that no value is present for DataEnd, not even an explicit nil

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


