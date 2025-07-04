/*
FinFeedAPI Stock REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: v1
Contact: support@apibricks.io
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// checks if the AdminAdminMessageModel type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &AdminAdminMessageModel{}

// AdminAdminMessageModel Represents the response DTO for IEX admin information, combining all symbol-based admin message types
type AdminAdminMessageModel struct {
	TradingStatus *AdminTradingStatusModel `json:"trading_status,omitempty"`
	OfficialPrice *AdminOfficialPriceModel `json:"official_price,omitempty"`
	SecurityEvent *AdminSecurityEventModel `json:"security_event,omitempty"`
	AuctionInformation *AdminAuctionInformationModel `json:"auction_information,omitempty"`
	ShortSalePriceTest *AdminShortSalePriceTestStatusModel `json:"short_sale_price_test,omitempty"`
	OperationalHaltStatus *AdminOperationalHaltStatusModel `json:"operational_halt_status,omitempty"`
	RetailLiquidityIndicator *AdminRetailLiquidityIndicatorModel `json:"retail_liquidity_indicator,omitempty"`
	SystemEvent *AdminSystemEventModel `json:"system_event,omitempty"`
	SecurityDirectory *AdminSecurityDirectoryModel `json:"security_directory,omitempty"`
}

// NewAdminAdminMessageModel instantiates a new AdminAdminMessageModel object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAdminAdminMessageModel() *AdminAdminMessageModel {
	this := AdminAdminMessageModel{}
	return &this
}

// NewAdminAdminMessageModelWithDefaults instantiates a new AdminAdminMessageModel object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAdminAdminMessageModelWithDefaults() *AdminAdminMessageModel {
	this := AdminAdminMessageModel{}
	return &this
}

// GetTradingStatus returns the TradingStatus field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetTradingStatus() AdminTradingStatusModel {
	if o == nil || IsNil(o.TradingStatus) {
		var ret AdminTradingStatusModel
		return ret
	}
	return *o.TradingStatus
}

// GetTradingStatusOk returns a tuple with the TradingStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetTradingStatusOk() (*AdminTradingStatusModel, bool) {
	if o == nil || IsNil(o.TradingStatus) {
		return nil, false
	}
	return o.TradingStatus, true
}

// HasTradingStatus returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasTradingStatus() bool {
	if o != nil && !IsNil(o.TradingStatus) {
		return true
	}

	return false
}

// SetTradingStatus gets a reference to the given AdminTradingStatusModel and assigns it to the TradingStatus field.
func (o *AdminAdminMessageModel) SetTradingStatus(v AdminTradingStatusModel) {
	o.TradingStatus = &v
}

// GetOfficialPrice returns the OfficialPrice field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetOfficialPrice() AdminOfficialPriceModel {
	if o == nil || IsNil(o.OfficialPrice) {
		var ret AdminOfficialPriceModel
		return ret
	}
	return *o.OfficialPrice
}

// GetOfficialPriceOk returns a tuple with the OfficialPrice field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetOfficialPriceOk() (*AdminOfficialPriceModel, bool) {
	if o == nil || IsNil(o.OfficialPrice) {
		return nil, false
	}
	return o.OfficialPrice, true
}

// HasOfficialPrice returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasOfficialPrice() bool {
	if o != nil && !IsNil(o.OfficialPrice) {
		return true
	}

	return false
}

// SetOfficialPrice gets a reference to the given AdminOfficialPriceModel and assigns it to the OfficialPrice field.
func (o *AdminAdminMessageModel) SetOfficialPrice(v AdminOfficialPriceModel) {
	o.OfficialPrice = &v
}

// GetSecurityEvent returns the SecurityEvent field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetSecurityEvent() AdminSecurityEventModel {
	if o == nil || IsNil(o.SecurityEvent) {
		var ret AdminSecurityEventModel
		return ret
	}
	return *o.SecurityEvent
}

// GetSecurityEventOk returns a tuple with the SecurityEvent field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetSecurityEventOk() (*AdminSecurityEventModel, bool) {
	if o == nil || IsNil(o.SecurityEvent) {
		return nil, false
	}
	return o.SecurityEvent, true
}

// HasSecurityEvent returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasSecurityEvent() bool {
	if o != nil && !IsNil(o.SecurityEvent) {
		return true
	}

	return false
}

// SetSecurityEvent gets a reference to the given AdminSecurityEventModel and assigns it to the SecurityEvent field.
func (o *AdminAdminMessageModel) SetSecurityEvent(v AdminSecurityEventModel) {
	o.SecurityEvent = &v
}

// GetAuctionInformation returns the AuctionInformation field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetAuctionInformation() AdminAuctionInformationModel {
	if o == nil || IsNil(o.AuctionInformation) {
		var ret AdminAuctionInformationModel
		return ret
	}
	return *o.AuctionInformation
}

// GetAuctionInformationOk returns a tuple with the AuctionInformation field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetAuctionInformationOk() (*AdminAuctionInformationModel, bool) {
	if o == nil || IsNil(o.AuctionInformation) {
		return nil, false
	}
	return o.AuctionInformation, true
}

// HasAuctionInformation returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasAuctionInformation() bool {
	if o != nil && !IsNil(o.AuctionInformation) {
		return true
	}

	return false
}

// SetAuctionInformation gets a reference to the given AdminAuctionInformationModel and assigns it to the AuctionInformation field.
func (o *AdminAdminMessageModel) SetAuctionInformation(v AdminAuctionInformationModel) {
	o.AuctionInformation = &v
}

// GetShortSalePriceTest returns the ShortSalePriceTest field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetShortSalePriceTest() AdminShortSalePriceTestStatusModel {
	if o == nil || IsNil(o.ShortSalePriceTest) {
		var ret AdminShortSalePriceTestStatusModel
		return ret
	}
	return *o.ShortSalePriceTest
}

// GetShortSalePriceTestOk returns a tuple with the ShortSalePriceTest field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetShortSalePriceTestOk() (*AdminShortSalePriceTestStatusModel, bool) {
	if o == nil || IsNil(o.ShortSalePriceTest) {
		return nil, false
	}
	return o.ShortSalePriceTest, true
}

// HasShortSalePriceTest returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasShortSalePriceTest() bool {
	if o != nil && !IsNil(o.ShortSalePriceTest) {
		return true
	}

	return false
}

// SetShortSalePriceTest gets a reference to the given AdminShortSalePriceTestStatusModel and assigns it to the ShortSalePriceTest field.
func (o *AdminAdminMessageModel) SetShortSalePriceTest(v AdminShortSalePriceTestStatusModel) {
	o.ShortSalePriceTest = &v
}

// GetOperationalHaltStatus returns the OperationalHaltStatus field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetOperationalHaltStatus() AdminOperationalHaltStatusModel {
	if o == nil || IsNil(o.OperationalHaltStatus) {
		var ret AdminOperationalHaltStatusModel
		return ret
	}
	return *o.OperationalHaltStatus
}

// GetOperationalHaltStatusOk returns a tuple with the OperationalHaltStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetOperationalHaltStatusOk() (*AdminOperationalHaltStatusModel, bool) {
	if o == nil || IsNil(o.OperationalHaltStatus) {
		return nil, false
	}
	return o.OperationalHaltStatus, true
}

// HasOperationalHaltStatus returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasOperationalHaltStatus() bool {
	if o != nil && !IsNil(o.OperationalHaltStatus) {
		return true
	}

	return false
}

// SetOperationalHaltStatus gets a reference to the given AdminOperationalHaltStatusModel and assigns it to the OperationalHaltStatus field.
func (o *AdminAdminMessageModel) SetOperationalHaltStatus(v AdminOperationalHaltStatusModel) {
	o.OperationalHaltStatus = &v
}

// GetRetailLiquidityIndicator returns the RetailLiquidityIndicator field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetRetailLiquidityIndicator() AdminRetailLiquidityIndicatorModel {
	if o == nil || IsNil(o.RetailLiquidityIndicator) {
		var ret AdminRetailLiquidityIndicatorModel
		return ret
	}
	return *o.RetailLiquidityIndicator
}

// GetRetailLiquidityIndicatorOk returns a tuple with the RetailLiquidityIndicator field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetRetailLiquidityIndicatorOk() (*AdminRetailLiquidityIndicatorModel, bool) {
	if o == nil || IsNil(o.RetailLiquidityIndicator) {
		return nil, false
	}
	return o.RetailLiquidityIndicator, true
}

// HasRetailLiquidityIndicator returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasRetailLiquidityIndicator() bool {
	if o != nil && !IsNil(o.RetailLiquidityIndicator) {
		return true
	}

	return false
}

// SetRetailLiquidityIndicator gets a reference to the given AdminRetailLiquidityIndicatorModel and assigns it to the RetailLiquidityIndicator field.
func (o *AdminAdminMessageModel) SetRetailLiquidityIndicator(v AdminRetailLiquidityIndicatorModel) {
	o.RetailLiquidityIndicator = &v
}

// GetSystemEvent returns the SystemEvent field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetSystemEvent() AdminSystemEventModel {
	if o == nil || IsNil(o.SystemEvent) {
		var ret AdminSystemEventModel
		return ret
	}
	return *o.SystemEvent
}

// GetSystemEventOk returns a tuple with the SystemEvent field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetSystemEventOk() (*AdminSystemEventModel, bool) {
	if o == nil || IsNil(o.SystemEvent) {
		return nil, false
	}
	return o.SystemEvent, true
}

// HasSystemEvent returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasSystemEvent() bool {
	if o != nil && !IsNil(o.SystemEvent) {
		return true
	}

	return false
}

// SetSystemEvent gets a reference to the given AdminSystemEventModel and assigns it to the SystemEvent field.
func (o *AdminAdminMessageModel) SetSystemEvent(v AdminSystemEventModel) {
	o.SystemEvent = &v
}

// GetSecurityDirectory returns the SecurityDirectory field value if set, zero value otherwise.
func (o *AdminAdminMessageModel) GetSecurityDirectory() AdminSecurityDirectoryModel {
	if o == nil || IsNil(o.SecurityDirectory) {
		var ret AdminSecurityDirectoryModel
		return ret
	}
	return *o.SecurityDirectory
}

// GetSecurityDirectoryOk returns a tuple with the SecurityDirectory field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AdminAdminMessageModel) GetSecurityDirectoryOk() (*AdminSecurityDirectoryModel, bool) {
	if o == nil || IsNil(o.SecurityDirectory) {
		return nil, false
	}
	return o.SecurityDirectory, true
}

// HasSecurityDirectory returns a boolean if a field has been set.
func (o *AdminAdminMessageModel) HasSecurityDirectory() bool {
	if o != nil && !IsNil(o.SecurityDirectory) {
		return true
	}

	return false
}

// SetSecurityDirectory gets a reference to the given AdminSecurityDirectoryModel and assigns it to the SecurityDirectory field.
func (o *AdminAdminMessageModel) SetSecurityDirectory(v AdminSecurityDirectoryModel) {
	o.SecurityDirectory = &v
}

func (o AdminAdminMessageModel) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o AdminAdminMessageModel) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.TradingStatus) {
		toSerialize["trading_status"] = o.TradingStatus
	}
	if !IsNil(o.OfficialPrice) {
		toSerialize["official_price"] = o.OfficialPrice
	}
	if !IsNil(o.SecurityEvent) {
		toSerialize["security_event"] = o.SecurityEvent
	}
	if !IsNil(o.AuctionInformation) {
		toSerialize["auction_information"] = o.AuctionInformation
	}
	if !IsNil(o.ShortSalePriceTest) {
		toSerialize["short_sale_price_test"] = o.ShortSalePriceTest
	}
	if !IsNil(o.OperationalHaltStatus) {
		toSerialize["operational_halt_status"] = o.OperationalHaltStatus
	}
	if !IsNil(o.RetailLiquidityIndicator) {
		toSerialize["retail_liquidity_indicator"] = o.RetailLiquidityIndicator
	}
	if !IsNil(o.SystemEvent) {
		toSerialize["system_event"] = o.SystemEvent
	}
	if !IsNil(o.SecurityDirectory) {
		toSerialize["security_directory"] = o.SecurityDirectory
	}
	return toSerialize, nil
}

type NullableAdminAdminMessageModel struct {
	value *AdminAdminMessageModel
	isSet bool
}

func (v NullableAdminAdminMessageModel) Get() *AdminAdminMessageModel {
	return v.value
}

func (v *NullableAdminAdminMessageModel) Set(val *AdminAdminMessageModel) {
	v.value = val
	v.isSet = true
}

func (v NullableAdminAdminMessageModel) IsSet() bool {
	return v.isSet
}

func (v *NullableAdminAdminMessageModel) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdminAdminMessageModel(val *AdminAdminMessageModel) *NullableAdminAdminMessageModel {
	return &NullableAdminAdminMessageModel{value: val, isSet: true}
}

func (v NullableAdminAdminMessageModel) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdminAdminMessageModel) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


