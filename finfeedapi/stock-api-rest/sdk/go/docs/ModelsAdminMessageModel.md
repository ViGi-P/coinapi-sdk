# ModelsAdminMessageModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TradingStatus** | Pointer to [**ModelsTradingStatusModel**](ModelsTradingStatusModel.md) |  | [optional] 
**OfficialPrice** | Pointer to [**ModelsOfficialPriceModel**](ModelsOfficialPriceModel.md) |  | [optional] 
**SecurityEvent** | Pointer to [**ModelsSecurityEventModel**](ModelsSecurityEventModel.md) |  | [optional] 
**AuctionInformation** | Pointer to [**ModelsAuctionInformationModel**](ModelsAuctionInformationModel.md) |  | [optional] 
**ShortSalePriceTest** | Pointer to [**ModelsShortSalePriceTestStatusModel**](ModelsShortSalePriceTestStatusModel.md) |  | [optional] 
**OperationalHaltStatus** | Pointer to [**ModelsOperationalHaltStatusModel**](ModelsOperationalHaltStatusModel.md) |  | [optional] 
**RetailLiquidityIndicator** | Pointer to [**ModelsRetailLiquidityIndicatorModel**](ModelsRetailLiquidityIndicatorModel.md) |  | [optional] 
**SystemEvent** | Pointer to [**IEXSystemEventSystemEventModel**](IEXSystemEventSystemEventModel.md) |  | [optional] 
**SecurityDirectory** | Pointer to [**ModelsSecurityDirectoryModel**](ModelsSecurityDirectoryModel.md) |  | [optional] 

## Methods

### NewModelsAdminMessageModel

`func NewModelsAdminMessageModel() *ModelsAdminMessageModel`

NewModelsAdminMessageModel instantiates a new ModelsAdminMessageModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsAdminMessageModelWithDefaults

`func NewModelsAdminMessageModelWithDefaults() *ModelsAdminMessageModel`

NewModelsAdminMessageModelWithDefaults instantiates a new ModelsAdminMessageModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTradingStatus

`func (o *ModelsAdminMessageModel) GetTradingStatus() ModelsTradingStatusModel`

GetTradingStatus returns the TradingStatus field if non-nil, zero value otherwise.

### GetTradingStatusOk

`func (o *ModelsAdminMessageModel) GetTradingStatusOk() (*ModelsTradingStatusModel, bool)`

GetTradingStatusOk returns a tuple with the TradingStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTradingStatus

`func (o *ModelsAdminMessageModel) SetTradingStatus(v ModelsTradingStatusModel)`

SetTradingStatus sets TradingStatus field to given value.

### HasTradingStatus

`func (o *ModelsAdminMessageModel) HasTradingStatus() bool`

HasTradingStatus returns a boolean if a field has been set.

### GetOfficialPrice

`func (o *ModelsAdminMessageModel) GetOfficialPrice() ModelsOfficialPriceModel`

GetOfficialPrice returns the OfficialPrice field if non-nil, zero value otherwise.

### GetOfficialPriceOk

`func (o *ModelsAdminMessageModel) GetOfficialPriceOk() (*ModelsOfficialPriceModel, bool)`

GetOfficialPriceOk returns a tuple with the OfficialPrice field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOfficialPrice

`func (o *ModelsAdminMessageModel) SetOfficialPrice(v ModelsOfficialPriceModel)`

SetOfficialPrice sets OfficialPrice field to given value.

### HasOfficialPrice

`func (o *ModelsAdminMessageModel) HasOfficialPrice() bool`

HasOfficialPrice returns a boolean if a field has been set.

### GetSecurityEvent

`func (o *ModelsAdminMessageModel) GetSecurityEvent() ModelsSecurityEventModel`

GetSecurityEvent returns the SecurityEvent field if non-nil, zero value otherwise.

### GetSecurityEventOk

`func (o *ModelsAdminMessageModel) GetSecurityEventOk() (*ModelsSecurityEventModel, bool)`

GetSecurityEventOk returns a tuple with the SecurityEvent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSecurityEvent

`func (o *ModelsAdminMessageModel) SetSecurityEvent(v ModelsSecurityEventModel)`

SetSecurityEvent sets SecurityEvent field to given value.

### HasSecurityEvent

`func (o *ModelsAdminMessageModel) HasSecurityEvent() bool`

HasSecurityEvent returns a boolean if a field has been set.

### GetAuctionInformation

`func (o *ModelsAdminMessageModel) GetAuctionInformation() ModelsAuctionInformationModel`

GetAuctionInformation returns the AuctionInformation field if non-nil, zero value otherwise.

### GetAuctionInformationOk

`func (o *ModelsAdminMessageModel) GetAuctionInformationOk() (*ModelsAuctionInformationModel, bool)`

GetAuctionInformationOk returns a tuple with the AuctionInformation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuctionInformation

`func (o *ModelsAdminMessageModel) SetAuctionInformation(v ModelsAuctionInformationModel)`

SetAuctionInformation sets AuctionInformation field to given value.

### HasAuctionInformation

`func (o *ModelsAdminMessageModel) HasAuctionInformation() bool`

HasAuctionInformation returns a boolean if a field has been set.

### GetShortSalePriceTest

`func (o *ModelsAdminMessageModel) GetShortSalePriceTest() ModelsShortSalePriceTestStatusModel`

GetShortSalePriceTest returns the ShortSalePriceTest field if non-nil, zero value otherwise.

### GetShortSalePriceTestOk

`func (o *ModelsAdminMessageModel) GetShortSalePriceTestOk() (*ModelsShortSalePriceTestStatusModel, bool)`

GetShortSalePriceTestOk returns a tuple with the ShortSalePriceTest field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShortSalePriceTest

`func (o *ModelsAdminMessageModel) SetShortSalePriceTest(v ModelsShortSalePriceTestStatusModel)`

SetShortSalePriceTest sets ShortSalePriceTest field to given value.

### HasShortSalePriceTest

`func (o *ModelsAdminMessageModel) HasShortSalePriceTest() bool`

HasShortSalePriceTest returns a boolean if a field has been set.

### GetOperationalHaltStatus

`func (o *ModelsAdminMessageModel) GetOperationalHaltStatus() ModelsOperationalHaltStatusModel`

GetOperationalHaltStatus returns the OperationalHaltStatus field if non-nil, zero value otherwise.

### GetOperationalHaltStatusOk

`func (o *ModelsAdminMessageModel) GetOperationalHaltStatusOk() (*ModelsOperationalHaltStatusModel, bool)`

GetOperationalHaltStatusOk returns a tuple with the OperationalHaltStatus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOperationalHaltStatus

`func (o *ModelsAdminMessageModel) SetOperationalHaltStatus(v ModelsOperationalHaltStatusModel)`

SetOperationalHaltStatus sets OperationalHaltStatus field to given value.

### HasOperationalHaltStatus

`func (o *ModelsAdminMessageModel) HasOperationalHaltStatus() bool`

HasOperationalHaltStatus returns a boolean if a field has been set.

### GetRetailLiquidityIndicator

`func (o *ModelsAdminMessageModel) GetRetailLiquidityIndicator() ModelsRetailLiquidityIndicatorModel`

GetRetailLiquidityIndicator returns the RetailLiquidityIndicator field if non-nil, zero value otherwise.

### GetRetailLiquidityIndicatorOk

`func (o *ModelsAdminMessageModel) GetRetailLiquidityIndicatorOk() (*ModelsRetailLiquidityIndicatorModel, bool)`

GetRetailLiquidityIndicatorOk returns a tuple with the RetailLiquidityIndicator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRetailLiquidityIndicator

`func (o *ModelsAdminMessageModel) SetRetailLiquidityIndicator(v ModelsRetailLiquidityIndicatorModel)`

SetRetailLiquidityIndicator sets RetailLiquidityIndicator field to given value.

### HasRetailLiquidityIndicator

`func (o *ModelsAdminMessageModel) HasRetailLiquidityIndicator() bool`

HasRetailLiquidityIndicator returns a boolean if a field has been set.

### GetSystemEvent

`func (o *ModelsAdminMessageModel) GetSystemEvent() IEXSystemEventSystemEventModel`

GetSystemEvent returns the SystemEvent field if non-nil, zero value otherwise.

### GetSystemEventOk

`func (o *ModelsAdminMessageModel) GetSystemEventOk() (*IEXSystemEventSystemEventModel, bool)`

GetSystemEventOk returns a tuple with the SystemEvent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemEvent

`func (o *ModelsAdminMessageModel) SetSystemEvent(v IEXSystemEventSystemEventModel)`

SetSystemEvent sets SystemEvent field to given value.

### HasSystemEvent

`func (o *ModelsAdminMessageModel) HasSystemEvent() bool`

HasSystemEvent returns a boolean if a field has been set.

### GetSecurityDirectory

`func (o *ModelsAdminMessageModel) GetSecurityDirectory() ModelsSecurityDirectoryModel`

GetSecurityDirectory returns the SecurityDirectory field if non-nil, zero value otherwise.

### GetSecurityDirectoryOk

`func (o *ModelsAdminMessageModel) GetSecurityDirectoryOk() (*ModelsSecurityDirectoryModel, bool)`

GetSecurityDirectoryOk returns a tuple with the SecurityDirectory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSecurityDirectory

`func (o *ModelsAdminMessageModel) SetSecurityDirectory(v ModelsSecurityDirectoryModel)`

SetSecurityDirectory sets SecurityDirectory field to given value.

### HasSecurityDirectory

`func (o *ModelsAdminMessageModel) HasSecurityDirectory() bool`

HasSecurityDirectory returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


