# IEXSystemEventSystemEventModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the system event was recorded as DateTime | [optional] 
**SystemEvent** | Pointer to **int32** | System event as byte value | [optional] 
**SystemEventCode** | Pointer to **NullableString** | System event as string | [optional] 
**SystemEventText** | Pointer to **NullableString** | Human-readable description of the system event | [optional] 
**IsSystemEventStartOfMessages** | Pointer to **bool** | Indicates if the system event is &#39;Start of Messages&#39; (O). Outside of heartbeat messages on the lower level protocol,  the start of day message is the first message sent in any trading session. | [optional] 
**IsSystemEventStartOfSystemHours** | Pointer to **bool** | Indicates if the system event is &#39;Start of System Hours&#39; (S). This message indicates that IEX is open and ready to start accepting orders. | [optional] 
**IsSystemEventStartOfRegularMarketHours** | Pointer to **bool** | Indicates if the system event is &#39;Start of Regular Market Hours&#39; (R). This message indicates that DAY and GTX orders, as well as market orders and pegged orders,  are available for execution on IEX. | [optional] 
**IsSystemEventEndOfRegularMarketHours** | Pointer to **bool** | Indicates if the system event is &#39;End of Regular Market Hours&#39; (M). This message indicates that DAY orders, market orders, and pegged orders  are no longer accepted by IEX. | [optional] 
**IsSystemEventEndOfSystemHours** | Pointer to **bool** | Indicates if the system event is &#39;End of System Hours&#39; (E). This message indicates that IEX is now closed and will not accept  any new orders during this trading session. It is still possible  to receive messages after the end of day. | [optional] 
**IsSystemEventEndOfMessages** | Pointer to **bool** | Indicates if the system event is &#39;End of Messages&#39; (C). This is always the last message sent in any trading session. | [optional] 

## Methods

### NewIEXSystemEventSystemEventModel

`func NewIEXSystemEventSystemEventModel() *IEXSystemEventSystemEventModel`

NewIEXSystemEventSystemEventModel instantiates a new IEXSystemEventSystemEventModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewIEXSystemEventSystemEventModelWithDefaults

`func NewIEXSystemEventSystemEventModelWithDefaults() *IEXSystemEventSystemEventModel`

NewIEXSystemEventSystemEventModelWithDefaults instantiates a new IEXSystemEventSystemEventModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTimestampNanos

`func (o *IEXSystemEventSystemEventModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *IEXSystemEventSystemEventModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *IEXSystemEventSystemEventModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *IEXSystemEventSystemEventModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *IEXSystemEventSystemEventModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *IEXSystemEventSystemEventModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *IEXSystemEventSystemEventModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *IEXSystemEventSystemEventModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetSystemEvent

`func (o *IEXSystemEventSystemEventModel) GetSystemEvent() int32`

GetSystemEvent returns the SystemEvent field if non-nil, zero value otherwise.

### GetSystemEventOk

`func (o *IEXSystemEventSystemEventModel) GetSystemEventOk() (*int32, bool)`

GetSystemEventOk returns a tuple with the SystemEvent field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemEvent

`func (o *IEXSystemEventSystemEventModel) SetSystemEvent(v int32)`

SetSystemEvent sets SystemEvent field to given value.

### HasSystemEvent

`func (o *IEXSystemEventSystemEventModel) HasSystemEvent() bool`

HasSystemEvent returns a boolean if a field has been set.

### GetSystemEventCode

`func (o *IEXSystemEventSystemEventModel) GetSystemEventCode() string`

GetSystemEventCode returns the SystemEventCode field if non-nil, zero value otherwise.

### GetSystemEventCodeOk

`func (o *IEXSystemEventSystemEventModel) GetSystemEventCodeOk() (*string, bool)`

GetSystemEventCodeOk returns a tuple with the SystemEventCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemEventCode

`func (o *IEXSystemEventSystemEventModel) SetSystemEventCode(v string)`

SetSystemEventCode sets SystemEventCode field to given value.

### HasSystemEventCode

`func (o *IEXSystemEventSystemEventModel) HasSystemEventCode() bool`

HasSystemEventCode returns a boolean if a field has been set.

### SetSystemEventCodeNil

`func (o *IEXSystemEventSystemEventModel) SetSystemEventCodeNil(b bool)`

 SetSystemEventCodeNil sets the value for SystemEventCode to be an explicit nil

### UnsetSystemEventCode
`func (o *IEXSystemEventSystemEventModel) UnsetSystemEventCode()`

UnsetSystemEventCode ensures that no value is present for SystemEventCode, not even an explicit nil
### GetSystemEventText

`func (o *IEXSystemEventSystemEventModel) GetSystemEventText() string`

GetSystemEventText returns the SystemEventText field if non-nil, zero value otherwise.

### GetSystemEventTextOk

`func (o *IEXSystemEventSystemEventModel) GetSystemEventTextOk() (*string, bool)`

GetSystemEventTextOk returns a tuple with the SystemEventText field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSystemEventText

`func (o *IEXSystemEventSystemEventModel) SetSystemEventText(v string)`

SetSystemEventText sets SystemEventText field to given value.

### HasSystemEventText

`func (o *IEXSystemEventSystemEventModel) HasSystemEventText() bool`

HasSystemEventText returns a boolean if a field has been set.

### SetSystemEventTextNil

`func (o *IEXSystemEventSystemEventModel) SetSystemEventTextNil(b bool)`

 SetSystemEventTextNil sets the value for SystemEventText to be an explicit nil

### UnsetSystemEventText
`func (o *IEXSystemEventSystemEventModel) UnsetSystemEventText()`

UnsetSystemEventText ensures that no value is present for SystemEventText, not even an explicit nil
### GetIsSystemEventStartOfMessages

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfMessages() bool`

GetIsSystemEventStartOfMessages returns the IsSystemEventStartOfMessages field if non-nil, zero value otherwise.

### GetIsSystemEventStartOfMessagesOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfMessagesOk() (*bool, bool)`

GetIsSystemEventStartOfMessagesOk returns a tuple with the IsSystemEventStartOfMessages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventStartOfMessages

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventStartOfMessages(v bool)`

SetIsSystemEventStartOfMessages sets IsSystemEventStartOfMessages field to given value.

### HasIsSystemEventStartOfMessages

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventStartOfMessages() bool`

HasIsSystemEventStartOfMessages returns a boolean if a field has been set.

### GetIsSystemEventStartOfSystemHours

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfSystemHours() bool`

GetIsSystemEventStartOfSystemHours returns the IsSystemEventStartOfSystemHours field if non-nil, zero value otherwise.

### GetIsSystemEventStartOfSystemHoursOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfSystemHoursOk() (*bool, bool)`

GetIsSystemEventStartOfSystemHoursOk returns a tuple with the IsSystemEventStartOfSystemHours field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventStartOfSystemHours

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventStartOfSystemHours(v bool)`

SetIsSystemEventStartOfSystemHours sets IsSystemEventStartOfSystemHours field to given value.

### HasIsSystemEventStartOfSystemHours

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventStartOfSystemHours() bool`

HasIsSystemEventStartOfSystemHours returns a boolean if a field has been set.

### GetIsSystemEventStartOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfRegularMarketHours() bool`

GetIsSystemEventStartOfRegularMarketHours returns the IsSystemEventStartOfRegularMarketHours field if non-nil, zero value otherwise.

### GetIsSystemEventStartOfRegularMarketHoursOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventStartOfRegularMarketHoursOk() (*bool, bool)`

GetIsSystemEventStartOfRegularMarketHoursOk returns a tuple with the IsSystemEventStartOfRegularMarketHours field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventStartOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventStartOfRegularMarketHours(v bool)`

SetIsSystemEventStartOfRegularMarketHours sets IsSystemEventStartOfRegularMarketHours field to given value.

### HasIsSystemEventStartOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventStartOfRegularMarketHours() bool`

HasIsSystemEventStartOfRegularMarketHours returns a boolean if a field has been set.

### GetIsSystemEventEndOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfRegularMarketHours() bool`

GetIsSystemEventEndOfRegularMarketHours returns the IsSystemEventEndOfRegularMarketHours field if non-nil, zero value otherwise.

### GetIsSystemEventEndOfRegularMarketHoursOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfRegularMarketHoursOk() (*bool, bool)`

GetIsSystemEventEndOfRegularMarketHoursOk returns a tuple with the IsSystemEventEndOfRegularMarketHours field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventEndOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventEndOfRegularMarketHours(v bool)`

SetIsSystemEventEndOfRegularMarketHours sets IsSystemEventEndOfRegularMarketHours field to given value.

### HasIsSystemEventEndOfRegularMarketHours

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventEndOfRegularMarketHours() bool`

HasIsSystemEventEndOfRegularMarketHours returns a boolean if a field has been set.

### GetIsSystemEventEndOfSystemHours

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfSystemHours() bool`

GetIsSystemEventEndOfSystemHours returns the IsSystemEventEndOfSystemHours field if non-nil, zero value otherwise.

### GetIsSystemEventEndOfSystemHoursOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfSystemHoursOk() (*bool, bool)`

GetIsSystemEventEndOfSystemHoursOk returns a tuple with the IsSystemEventEndOfSystemHours field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventEndOfSystemHours

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventEndOfSystemHours(v bool)`

SetIsSystemEventEndOfSystemHours sets IsSystemEventEndOfSystemHours field to given value.

### HasIsSystemEventEndOfSystemHours

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventEndOfSystemHours() bool`

HasIsSystemEventEndOfSystemHours returns a boolean if a field has been set.

### GetIsSystemEventEndOfMessages

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfMessages() bool`

GetIsSystemEventEndOfMessages returns the IsSystemEventEndOfMessages field if non-nil, zero value otherwise.

### GetIsSystemEventEndOfMessagesOk

`func (o *IEXSystemEventSystemEventModel) GetIsSystemEventEndOfMessagesOk() (*bool, bool)`

GetIsSystemEventEndOfMessagesOk returns a tuple with the IsSystemEventEndOfMessages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsSystemEventEndOfMessages

`func (o *IEXSystemEventSystemEventModel) SetIsSystemEventEndOfMessages(v bool)`

SetIsSystemEventEndOfMessages sets IsSystemEventEndOfMessages field to given value.

### HasIsSystemEventEndOfMessages

`func (o *IEXSystemEventSystemEventModel) HasIsSystemEventEndOfMessages() bool`

HasIsSystemEventEndOfMessages returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


