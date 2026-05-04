# ModelsTradingStatusModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Symbol** | Pointer to **NullableString** | The stock symbol | [optional] 
**TimestampNanos** | Pointer to **int64** | Original timestamp in nanoseconds since epoch | [optional] 
**Timestamp** | Pointer to **time.Time** | Time when the trading status was recorded as DateTime | [optional] 
**IsTradingLive** | Pointer to **bool** | Gets whether the security is currently trading on IEX | [optional] 
**IsTradingHalted** | Pointer to **bool** | Gets whether the security is halted across all US equity markets | [optional] 
**IsTradingInOrderAcceptancePeriod** | Pointer to **bool** | Gets whether the security is in Order Acceptance Period on IEX | [optional] 
**IsTradingPaused** | Pointer to **bool** | Gets whether the security is paused and in Order Acceptance Period on IEX | [optional] 
**IsReasonHaltNewsPending** | Pointer to **bool** | Gets whether the halt reason is News Pending | [optional] 
**IsReasonIpoNotYetTrading** | Pointer to **bool** | Gets whether the halt reason is IPO Not Yet Trading | [optional] 
**IsReasonIpoDeferred** | Pointer to **bool** | Gets whether the halt reason is IPO Deferred | [optional] 
**IsReasonHaltNewsDissemination** | Pointer to **bool** | Gets whether the order acceptance period reason is Halt News Dissemination | [optional] 
**IsReasonIpoOrderAcceptancePeriod** | Pointer to **bool** | Gets whether the order acceptance period reason is IPO Order Acceptance Period | [optional] 
**IsReasonIpoPreLaunchPeriod** | Pointer to **bool** | Gets whether the order acceptance period reason is IPO Pre-Launch Period | [optional] 
**IsReasonMarketWideCircuitBreakerLevel1** | Pointer to **bool** | Gets whether the order acceptance period reason is Market-Wide Circuit Breaker Level 1 – Breached | [optional] 
**IsReasonMarketWideCircuitBreakerLevel2** | Pointer to **bool** | Gets whether the order acceptance period reason is Market-Wide Circuit Breaker Level 2 – Breached | [optional] 
**IsReasonMarketWideCircuitBreakerLevel3** | Pointer to **bool** | Gets whether the halt reason is Market-Wide Circuit Breaker Level 3 – Breached | [optional] 
**IsReasonNotApplicable** | Pointer to **bool** | Gets whether the reason is Not Applicable | [optional] 
**IsReasonNotAvailable** | Pointer to **bool** | Gets whether the halt reason is Not Available | [optional] 

## Methods

### NewModelsTradingStatusModel

`func NewModelsTradingStatusModel() *ModelsTradingStatusModel`

NewModelsTradingStatusModel instantiates a new ModelsTradingStatusModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsTradingStatusModelWithDefaults

`func NewModelsTradingStatusModelWithDefaults() *ModelsTradingStatusModel`

NewModelsTradingStatusModelWithDefaults instantiates a new ModelsTradingStatusModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSymbol

`func (o *ModelsTradingStatusModel) GetSymbol() string`

GetSymbol returns the Symbol field if non-nil, zero value otherwise.

### GetSymbolOk

`func (o *ModelsTradingStatusModel) GetSymbolOk() (*string, bool)`

GetSymbolOk returns a tuple with the Symbol field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSymbol

`func (o *ModelsTradingStatusModel) SetSymbol(v string)`

SetSymbol sets Symbol field to given value.

### HasSymbol

`func (o *ModelsTradingStatusModel) HasSymbol() bool`

HasSymbol returns a boolean if a field has been set.

### SetSymbolNil

`func (o *ModelsTradingStatusModel) SetSymbolNil(b bool)`

 SetSymbolNil sets the value for Symbol to be an explicit nil

### UnsetSymbol
`func (o *ModelsTradingStatusModel) UnsetSymbol()`

UnsetSymbol ensures that no value is present for Symbol, not even an explicit nil
### GetTimestampNanos

`func (o *ModelsTradingStatusModel) GetTimestampNanos() int64`

GetTimestampNanos returns the TimestampNanos field if non-nil, zero value otherwise.

### GetTimestampNanosOk

`func (o *ModelsTradingStatusModel) GetTimestampNanosOk() (*int64, bool)`

GetTimestampNanosOk returns a tuple with the TimestampNanos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestampNanos

`func (o *ModelsTradingStatusModel) SetTimestampNanos(v int64)`

SetTimestampNanos sets TimestampNanos field to given value.

### HasTimestampNanos

`func (o *ModelsTradingStatusModel) HasTimestampNanos() bool`

HasTimestampNanos returns a boolean if a field has been set.

### GetTimestamp

`func (o *ModelsTradingStatusModel) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ModelsTradingStatusModel) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ModelsTradingStatusModel) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ModelsTradingStatusModel) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetIsTradingLive

`func (o *ModelsTradingStatusModel) GetIsTradingLive() bool`

GetIsTradingLive returns the IsTradingLive field if non-nil, zero value otherwise.

### GetIsTradingLiveOk

`func (o *ModelsTradingStatusModel) GetIsTradingLiveOk() (*bool, bool)`

GetIsTradingLiveOk returns a tuple with the IsTradingLive field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsTradingLive

`func (o *ModelsTradingStatusModel) SetIsTradingLive(v bool)`

SetIsTradingLive sets IsTradingLive field to given value.

### HasIsTradingLive

`func (o *ModelsTradingStatusModel) HasIsTradingLive() bool`

HasIsTradingLive returns a boolean if a field has been set.

### GetIsTradingHalted

`func (o *ModelsTradingStatusModel) GetIsTradingHalted() bool`

GetIsTradingHalted returns the IsTradingHalted field if non-nil, zero value otherwise.

### GetIsTradingHaltedOk

`func (o *ModelsTradingStatusModel) GetIsTradingHaltedOk() (*bool, bool)`

GetIsTradingHaltedOk returns a tuple with the IsTradingHalted field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsTradingHalted

`func (o *ModelsTradingStatusModel) SetIsTradingHalted(v bool)`

SetIsTradingHalted sets IsTradingHalted field to given value.

### HasIsTradingHalted

`func (o *ModelsTradingStatusModel) HasIsTradingHalted() bool`

HasIsTradingHalted returns a boolean if a field has been set.

### GetIsTradingInOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) GetIsTradingInOrderAcceptancePeriod() bool`

GetIsTradingInOrderAcceptancePeriod returns the IsTradingInOrderAcceptancePeriod field if non-nil, zero value otherwise.

### GetIsTradingInOrderAcceptancePeriodOk

`func (o *ModelsTradingStatusModel) GetIsTradingInOrderAcceptancePeriodOk() (*bool, bool)`

GetIsTradingInOrderAcceptancePeriodOk returns a tuple with the IsTradingInOrderAcceptancePeriod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsTradingInOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) SetIsTradingInOrderAcceptancePeriod(v bool)`

SetIsTradingInOrderAcceptancePeriod sets IsTradingInOrderAcceptancePeriod field to given value.

### HasIsTradingInOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) HasIsTradingInOrderAcceptancePeriod() bool`

HasIsTradingInOrderAcceptancePeriod returns a boolean if a field has been set.

### GetIsTradingPaused

`func (o *ModelsTradingStatusModel) GetIsTradingPaused() bool`

GetIsTradingPaused returns the IsTradingPaused field if non-nil, zero value otherwise.

### GetIsTradingPausedOk

`func (o *ModelsTradingStatusModel) GetIsTradingPausedOk() (*bool, bool)`

GetIsTradingPausedOk returns a tuple with the IsTradingPaused field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsTradingPaused

`func (o *ModelsTradingStatusModel) SetIsTradingPaused(v bool)`

SetIsTradingPaused sets IsTradingPaused field to given value.

### HasIsTradingPaused

`func (o *ModelsTradingStatusModel) HasIsTradingPaused() bool`

HasIsTradingPaused returns a boolean if a field has been set.

### GetIsReasonHaltNewsPending

`func (o *ModelsTradingStatusModel) GetIsReasonHaltNewsPending() bool`

GetIsReasonHaltNewsPending returns the IsReasonHaltNewsPending field if non-nil, zero value otherwise.

### GetIsReasonHaltNewsPendingOk

`func (o *ModelsTradingStatusModel) GetIsReasonHaltNewsPendingOk() (*bool, bool)`

GetIsReasonHaltNewsPendingOk returns a tuple with the IsReasonHaltNewsPending field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonHaltNewsPending

`func (o *ModelsTradingStatusModel) SetIsReasonHaltNewsPending(v bool)`

SetIsReasonHaltNewsPending sets IsReasonHaltNewsPending field to given value.

### HasIsReasonHaltNewsPending

`func (o *ModelsTradingStatusModel) HasIsReasonHaltNewsPending() bool`

HasIsReasonHaltNewsPending returns a boolean if a field has been set.

### GetIsReasonIpoNotYetTrading

`func (o *ModelsTradingStatusModel) GetIsReasonIpoNotYetTrading() bool`

GetIsReasonIpoNotYetTrading returns the IsReasonIpoNotYetTrading field if non-nil, zero value otherwise.

### GetIsReasonIpoNotYetTradingOk

`func (o *ModelsTradingStatusModel) GetIsReasonIpoNotYetTradingOk() (*bool, bool)`

GetIsReasonIpoNotYetTradingOk returns a tuple with the IsReasonIpoNotYetTrading field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonIpoNotYetTrading

`func (o *ModelsTradingStatusModel) SetIsReasonIpoNotYetTrading(v bool)`

SetIsReasonIpoNotYetTrading sets IsReasonIpoNotYetTrading field to given value.

### HasIsReasonIpoNotYetTrading

`func (o *ModelsTradingStatusModel) HasIsReasonIpoNotYetTrading() bool`

HasIsReasonIpoNotYetTrading returns a boolean if a field has been set.

### GetIsReasonIpoDeferred

`func (o *ModelsTradingStatusModel) GetIsReasonIpoDeferred() bool`

GetIsReasonIpoDeferred returns the IsReasonIpoDeferred field if non-nil, zero value otherwise.

### GetIsReasonIpoDeferredOk

`func (o *ModelsTradingStatusModel) GetIsReasonIpoDeferredOk() (*bool, bool)`

GetIsReasonIpoDeferredOk returns a tuple with the IsReasonIpoDeferred field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonIpoDeferred

`func (o *ModelsTradingStatusModel) SetIsReasonIpoDeferred(v bool)`

SetIsReasonIpoDeferred sets IsReasonIpoDeferred field to given value.

### HasIsReasonIpoDeferred

`func (o *ModelsTradingStatusModel) HasIsReasonIpoDeferred() bool`

HasIsReasonIpoDeferred returns a boolean if a field has been set.

### GetIsReasonHaltNewsDissemination

`func (o *ModelsTradingStatusModel) GetIsReasonHaltNewsDissemination() bool`

GetIsReasonHaltNewsDissemination returns the IsReasonHaltNewsDissemination field if non-nil, zero value otherwise.

### GetIsReasonHaltNewsDisseminationOk

`func (o *ModelsTradingStatusModel) GetIsReasonHaltNewsDisseminationOk() (*bool, bool)`

GetIsReasonHaltNewsDisseminationOk returns a tuple with the IsReasonHaltNewsDissemination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonHaltNewsDissemination

`func (o *ModelsTradingStatusModel) SetIsReasonHaltNewsDissemination(v bool)`

SetIsReasonHaltNewsDissemination sets IsReasonHaltNewsDissemination field to given value.

### HasIsReasonHaltNewsDissemination

`func (o *ModelsTradingStatusModel) HasIsReasonHaltNewsDissemination() bool`

HasIsReasonHaltNewsDissemination returns a boolean if a field has been set.

### GetIsReasonIpoOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) GetIsReasonIpoOrderAcceptancePeriod() bool`

GetIsReasonIpoOrderAcceptancePeriod returns the IsReasonIpoOrderAcceptancePeriod field if non-nil, zero value otherwise.

### GetIsReasonIpoOrderAcceptancePeriodOk

`func (o *ModelsTradingStatusModel) GetIsReasonIpoOrderAcceptancePeriodOk() (*bool, bool)`

GetIsReasonIpoOrderAcceptancePeriodOk returns a tuple with the IsReasonIpoOrderAcceptancePeriod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonIpoOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) SetIsReasonIpoOrderAcceptancePeriod(v bool)`

SetIsReasonIpoOrderAcceptancePeriod sets IsReasonIpoOrderAcceptancePeriod field to given value.

### HasIsReasonIpoOrderAcceptancePeriod

`func (o *ModelsTradingStatusModel) HasIsReasonIpoOrderAcceptancePeriod() bool`

HasIsReasonIpoOrderAcceptancePeriod returns a boolean if a field has been set.

### GetIsReasonIpoPreLaunchPeriod

`func (o *ModelsTradingStatusModel) GetIsReasonIpoPreLaunchPeriod() bool`

GetIsReasonIpoPreLaunchPeriod returns the IsReasonIpoPreLaunchPeriod field if non-nil, zero value otherwise.

### GetIsReasonIpoPreLaunchPeriodOk

`func (o *ModelsTradingStatusModel) GetIsReasonIpoPreLaunchPeriodOk() (*bool, bool)`

GetIsReasonIpoPreLaunchPeriodOk returns a tuple with the IsReasonIpoPreLaunchPeriod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonIpoPreLaunchPeriod

`func (o *ModelsTradingStatusModel) SetIsReasonIpoPreLaunchPeriod(v bool)`

SetIsReasonIpoPreLaunchPeriod sets IsReasonIpoPreLaunchPeriod field to given value.

### HasIsReasonIpoPreLaunchPeriod

`func (o *ModelsTradingStatusModel) HasIsReasonIpoPreLaunchPeriod() bool`

HasIsReasonIpoPreLaunchPeriod returns a boolean if a field has been set.

### GetIsReasonMarketWideCircuitBreakerLevel1

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel1() bool`

GetIsReasonMarketWideCircuitBreakerLevel1 returns the IsReasonMarketWideCircuitBreakerLevel1 field if non-nil, zero value otherwise.

### GetIsReasonMarketWideCircuitBreakerLevel1Ok

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel1Ok() (*bool, bool)`

GetIsReasonMarketWideCircuitBreakerLevel1Ok returns a tuple with the IsReasonMarketWideCircuitBreakerLevel1 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonMarketWideCircuitBreakerLevel1

`func (o *ModelsTradingStatusModel) SetIsReasonMarketWideCircuitBreakerLevel1(v bool)`

SetIsReasonMarketWideCircuitBreakerLevel1 sets IsReasonMarketWideCircuitBreakerLevel1 field to given value.

### HasIsReasonMarketWideCircuitBreakerLevel1

`func (o *ModelsTradingStatusModel) HasIsReasonMarketWideCircuitBreakerLevel1() bool`

HasIsReasonMarketWideCircuitBreakerLevel1 returns a boolean if a field has been set.

### GetIsReasonMarketWideCircuitBreakerLevel2

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel2() bool`

GetIsReasonMarketWideCircuitBreakerLevel2 returns the IsReasonMarketWideCircuitBreakerLevel2 field if non-nil, zero value otherwise.

### GetIsReasonMarketWideCircuitBreakerLevel2Ok

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel2Ok() (*bool, bool)`

GetIsReasonMarketWideCircuitBreakerLevel2Ok returns a tuple with the IsReasonMarketWideCircuitBreakerLevel2 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonMarketWideCircuitBreakerLevel2

`func (o *ModelsTradingStatusModel) SetIsReasonMarketWideCircuitBreakerLevel2(v bool)`

SetIsReasonMarketWideCircuitBreakerLevel2 sets IsReasonMarketWideCircuitBreakerLevel2 field to given value.

### HasIsReasonMarketWideCircuitBreakerLevel2

`func (o *ModelsTradingStatusModel) HasIsReasonMarketWideCircuitBreakerLevel2() bool`

HasIsReasonMarketWideCircuitBreakerLevel2 returns a boolean if a field has been set.

### GetIsReasonMarketWideCircuitBreakerLevel3

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel3() bool`

GetIsReasonMarketWideCircuitBreakerLevel3 returns the IsReasonMarketWideCircuitBreakerLevel3 field if non-nil, zero value otherwise.

### GetIsReasonMarketWideCircuitBreakerLevel3Ok

`func (o *ModelsTradingStatusModel) GetIsReasonMarketWideCircuitBreakerLevel3Ok() (*bool, bool)`

GetIsReasonMarketWideCircuitBreakerLevel3Ok returns a tuple with the IsReasonMarketWideCircuitBreakerLevel3 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonMarketWideCircuitBreakerLevel3

`func (o *ModelsTradingStatusModel) SetIsReasonMarketWideCircuitBreakerLevel3(v bool)`

SetIsReasonMarketWideCircuitBreakerLevel3 sets IsReasonMarketWideCircuitBreakerLevel3 field to given value.

### HasIsReasonMarketWideCircuitBreakerLevel3

`func (o *ModelsTradingStatusModel) HasIsReasonMarketWideCircuitBreakerLevel3() bool`

HasIsReasonMarketWideCircuitBreakerLevel3 returns a boolean if a field has been set.

### GetIsReasonNotApplicable

`func (o *ModelsTradingStatusModel) GetIsReasonNotApplicable() bool`

GetIsReasonNotApplicable returns the IsReasonNotApplicable field if non-nil, zero value otherwise.

### GetIsReasonNotApplicableOk

`func (o *ModelsTradingStatusModel) GetIsReasonNotApplicableOk() (*bool, bool)`

GetIsReasonNotApplicableOk returns a tuple with the IsReasonNotApplicable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonNotApplicable

`func (o *ModelsTradingStatusModel) SetIsReasonNotApplicable(v bool)`

SetIsReasonNotApplicable sets IsReasonNotApplicable field to given value.

### HasIsReasonNotApplicable

`func (o *ModelsTradingStatusModel) HasIsReasonNotApplicable() bool`

HasIsReasonNotApplicable returns a boolean if a field has been set.

### GetIsReasonNotAvailable

`func (o *ModelsTradingStatusModel) GetIsReasonNotAvailable() bool`

GetIsReasonNotAvailable returns the IsReasonNotAvailable field if non-nil, zero value otherwise.

### GetIsReasonNotAvailableOk

`func (o *ModelsTradingStatusModel) GetIsReasonNotAvailableOk() (*bool, bool)`

GetIsReasonNotAvailableOk returns a tuple with the IsReasonNotAvailable field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsReasonNotAvailable

`func (o *ModelsTradingStatusModel) SetIsReasonNotAvailable(v bool)`

SetIsReasonNotAvailable sets IsReasonNotAvailable field to given value.

### HasIsReasonNotAvailable

`func (o *ModelsTradingStatusModel) HasIsReasonNotAvailable() bool`

HasIsReasonNotAvailable returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


