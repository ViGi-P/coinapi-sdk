/*
CoinAPI Indexes REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: v1
Contact: support@apibricks.io
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// checks if the MetadataTimeseriesPeriod type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &MetadataTimeseriesPeriod{}

// MetadataTimeseriesPeriod Represents a timeseries period used in exchange rate data.
type MetadataTimeseriesPeriod struct {
	// Gets or sets the period ID.
	PeriodId NullableString `json:"period_id,omitempty"`
	// Gets or sets the length of the period in seconds.
	LengthSeconds *int32 `json:"length_seconds,omitempty"`
	// Gets or sets the length of the period in months.
	LengthMonths *int32 `json:"length_months,omitempty"`
	// Gets or sets the unit count.
	UnitCount NullableInt32 `json:"unit_count,omitempty"`
	// Gets or sets the unit name.
	UnitName NullableString `json:"unit_name,omitempty"`
	// Gets or sets the display name of the timeseries period.
	DisplayName NullableString `json:"display_name,omitempty"`
}

// NewMetadataTimeseriesPeriod instantiates a new MetadataTimeseriesPeriod object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMetadataTimeseriesPeriod() *MetadataTimeseriesPeriod {
	this := MetadataTimeseriesPeriod{}
	return &this
}

// NewMetadataTimeseriesPeriodWithDefaults instantiates a new MetadataTimeseriesPeriod object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMetadataTimeseriesPeriodWithDefaults() *MetadataTimeseriesPeriod {
	this := MetadataTimeseriesPeriod{}
	return &this
}

// GetPeriodId returns the PeriodId field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *MetadataTimeseriesPeriod) GetPeriodId() string {
	if o == nil || IsNil(o.PeriodId.Get()) {
		var ret string
		return ret
	}
	return *o.PeriodId.Get()
}

// GetPeriodIdOk returns a tuple with the PeriodId field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *MetadataTimeseriesPeriod) GetPeriodIdOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.PeriodId.Get(), o.PeriodId.IsSet()
}

// HasPeriodId returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasPeriodId() bool {
	if o != nil && o.PeriodId.IsSet() {
		return true
	}

	return false
}

// SetPeriodId gets a reference to the given NullableString and assigns it to the PeriodId field.
func (o *MetadataTimeseriesPeriod) SetPeriodId(v string) {
	o.PeriodId.Set(&v)
}
// SetPeriodIdNil sets the value for PeriodId to be an explicit nil
func (o *MetadataTimeseriesPeriod) SetPeriodIdNil() {
	o.PeriodId.Set(nil)
}

// UnsetPeriodId ensures that no value is present for PeriodId, not even an explicit nil
func (o *MetadataTimeseriesPeriod) UnsetPeriodId() {
	o.PeriodId.Unset()
}

// GetLengthSeconds returns the LengthSeconds field value if set, zero value otherwise.
func (o *MetadataTimeseriesPeriod) GetLengthSeconds() int32 {
	if o == nil || IsNil(o.LengthSeconds) {
		var ret int32
		return ret
	}
	return *o.LengthSeconds
}

// GetLengthSecondsOk returns a tuple with the LengthSeconds field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MetadataTimeseriesPeriod) GetLengthSecondsOk() (*int32, bool) {
	if o == nil || IsNil(o.LengthSeconds) {
		return nil, false
	}
	return o.LengthSeconds, true
}

// HasLengthSeconds returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasLengthSeconds() bool {
	if o != nil && !IsNil(o.LengthSeconds) {
		return true
	}

	return false
}

// SetLengthSeconds gets a reference to the given int32 and assigns it to the LengthSeconds field.
func (o *MetadataTimeseriesPeriod) SetLengthSeconds(v int32) {
	o.LengthSeconds = &v
}

// GetLengthMonths returns the LengthMonths field value if set, zero value otherwise.
func (o *MetadataTimeseriesPeriod) GetLengthMonths() int32 {
	if o == nil || IsNil(o.LengthMonths) {
		var ret int32
		return ret
	}
	return *o.LengthMonths
}

// GetLengthMonthsOk returns a tuple with the LengthMonths field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MetadataTimeseriesPeriod) GetLengthMonthsOk() (*int32, bool) {
	if o == nil || IsNil(o.LengthMonths) {
		return nil, false
	}
	return o.LengthMonths, true
}

// HasLengthMonths returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasLengthMonths() bool {
	if o != nil && !IsNil(o.LengthMonths) {
		return true
	}

	return false
}

// SetLengthMonths gets a reference to the given int32 and assigns it to the LengthMonths field.
func (o *MetadataTimeseriesPeriod) SetLengthMonths(v int32) {
	o.LengthMonths = &v
}

// GetUnitCount returns the UnitCount field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *MetadataTimeseriesPeriod) GetUnitCount() int32 {
	if o == nil || IsNil(o.UnitCount.Get()) {
		var ret int32
		return ret
	}
	return *o.UnitCount.Get()
}

// GetUnitCountOk returns a tuple with the UnitCount field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *MetadataTimeseriesPeriod) GetUnitCountOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return o.UnitCount.Get(), o.UnitCount.IsSet()
}

// HasUnitCount returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasUnitCount() bool {
	if o != nil && o.UnitCount.IsSet() {
		return true
	}

	return false
}

// SetUnitCount gets a reference to the given NullableInt32 and assigns it to the UnitCount field.
func (o *MetadataTimeseriesPeriod) SetUnitCount(v int32) {
	o.UnitCount.Set(&v)
}
// SetUnitCountNil sets the value for UnitCount to be an explicit nil
func (o *MetadataTimeseriesPeriod) SetUnitCountNil() {
	o.UnitCount.Set(nil)
}

// UnsetUnitCount ensures that no value is present for UnitCount, not even an explicit nil
func (o *MetadataTimeseriesPeriod) UnsetUnitCount() {
	o.UnitCount.Unset()
}

// GetUnitName returns the UnitName field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *MetadataTimeseriesPeriod) GetUnitName() string {
	if o == nil || IsNil(o.UnitName.Get()) {
		var ret string
		return ret
	}
	return *o.UnitName.Get()
}

// GetUnitNameOk returns a tuple with the UnitName field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *MetadataTimeseriesPeriod) GetUnitNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.UnitName.Get(), o.UnitName.IsSet()
}

// HasUnitName returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasUnitName() bool {
	if o != nil && o.UnitName.IsSet() {
		return true
	}

	return false
}

// SetUnitName gets a reference to the given NullableString and assigns it to the UnitName field.
func (o *MetadataTimeseriesPeriod) SetUnitName(v string) {
	o.UnitName.Set(&v)
}
// SetUnitNameNil sets the value for UnitName to be an explicit nil
func (o *MetadataTimeseriesPeriod) SetUnitNameNil() {
	o.UnitName.Set(nil)
}

// UnsetUnitName ensures that no value is present for UnitName, not even an explicit nil
func (o *MetadataTimeseriesPeriod) UnsetUnitName() {
	o.UnitName.Unset()
}

// GetDisplayName returns the DisplayName field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *MetadataTimeseriesPeriod) GetDisplayName() string {
	if o == nil || IsNil(o.DisplayName.Get()) {
		var ret string
		return ret
	}
	return *o.DisplayName.Get()
}

// GetDisplayNameOk returns a tuple with the DisplayName field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *MetadataTimeseriesPeriod) GetDisplayNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.DisplayName.Get(), o.DisplayName.IsSet()
}

// HasDisplayName returns a boolean if a field has been set.
func (o *MetadataTimeseriesPeriod) HasDisplayName() bool {
	if o != nil && o.DisplayName.IsSet() {
		return true
	}

	return false
}

// SetDisplayName gets a reference to the given NullableString and assigns it to the DisplayName field.
func (o *MetadataTimeseriesPeriod) SetDisplayName(v string) {
	o.DisplayName.Set(&v)
}
// SetDisplayNameNil sets the value for DisplayName to be an explicit nil
func (o *MetadataTimeseriesPeriod) SetDisplayNameNil() {
	o.DisplayName.Set(nil)
}

// UnsetDisplayName ensures that no value is present for DisplayName, not even an explicit nil
func (o *MetadataTimeseriesPeriod) UnsetDisplayName() {
	o.DisplayName.Unset()
}

func (o MetadataTimeseriesPeriod) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o MetadataTimeseriesPeriod) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if o.PeriodId.IsSet() {
		toSerialize["period_id"] = o.PeriodId.Get()
	}
	if !IsNil(o.LengthSeconds) {
		toSerialize["length_seconds"] = o.LengthSeconds
	}
	if !IsNil(o.LengthMonths) {
		toSerialize["length_months"] = o.LengthMonths
	}
	if o.UnitCount.IsSet() {
		toSerialize["unit_count"] = o.UnitCount.Get()
	}
	if o.UnitName.IsSet() {
		toSerialize["unit_name"] = o.UnitName.Get()
	}
	if o.DisplayName.IsSet() {
		toSerialize["display_name"] = o.DisplayName.Get()
	}
	return toSerialize, nil
}

type NullableMetadataTimeseriesPeriod struct {
	value *MetadataTimeseriesPeriod
	isSet bool
}

func (v NullableMetadataTimeseriesPeriod) Get() *MetadataTimeseriesPeriod {
	return v.value
}

func (v *NullableMetadataTimeseriesPeriod) Set(val *MetadataTimeseriesPeriod) {
	v.value = val
	v.isSet = true
}

func (v NullableMetadataTimeseriesPeriod) IsSet() bool {
	return v.isSet
}

func (v *NullableMetadataTimeseriesPeriod) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMetadataTimeseriesPeriod(val *MetadataTimeseriesPeriod) *NullableMetadataTimeseriesPeriod {
	return &NullableMetadataTimeseriesPeriod{value: val, isSet: true}
}

func (v NullableMetadataTimeseriesPeriod) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMetadataTimeseriesPeriod) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


