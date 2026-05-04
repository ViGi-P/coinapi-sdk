# ModelsOrderBookModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AddOrder** | Pointer to [**ModelsAddOrderModel**](ModelsAddOrderModel.md) |  | [optional] 
**DeleteOrder** | Pointer to [**ModelsDeleteOrderModel**](ModelsDeleteOrderModel.md) |  | [optional] 
**ModifyOrder** | Pointer to [**ModelsModifyOrderModel**](ModelsModifyOrderModel.md) |  | [optional] 
**ExecutedOrder** | Pointer to [**ModelsExecutedOrderModel**](ModelsExecutedOrderModel.md) |  | [optional] 
**ClearBook** | Pointer to [**ModelsClearBookModel**](ModelsClearBookModel.md) |  | [optional] 

## Methods

### NewModelsOrderBookModel

`func NewModelsOrderBookModel() *ModelsOrderBookModel`

NewModelsOrderBookModel instantiates a new ModelsOrderBookModel object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewModelsOrderBookModelWithDefaults

`func NewModelsOrderBookModelWithDefaults() *ModelsOrderBookModel`

NewModelsOrderBookModelWithDefaults instantiates a new ModelsOrderBookModel object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddOrder

`func (o *ModelsOrderBookModel) GetAddOrder() ModelsAddOrderModel`

GetAddOrder returns the AddOrder field if non-nil, zero value otherwise.

### GetAddOrderOk

`func (o *ModelsOrderBookModel) GetAddOrderOk() (*ModelsAddOrderModel, bool)`

GetAddOrderOk returns a tuple with the AddOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddOrder

`func (o *ModelsOrderBookModel) SetAddOrder(v ModelsAddOrderModel)`

SetAddOrder sets AddOrder field to given value.

### HasAddOrder

`func (o *ModelsOrderBookModel) HasAddOrder() bool`

HasAddOrder returns a boolean if a field has been set.

### GetDeleteOrder

`func (o *ModelsOrderBookModel) GetDeleteOrder() ModelsDeleteOrderModel`

GetDeleteOrder returns the DeleteOrder field if non-nil, zero value otherwise.

### GetDeleteOrderOk

`func (o *ModelsOrderBookModel) GetDeleteOrderOk() (*ModelsDeleteOrderModel, bool)`

GetDeleteOrderOk returns a tuple with the DeleteOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDeleteOrder

`func (o *ModelsOrderBookModel) SetDeleteOrder(v ModelsDeleteOrderModel)`

SetDeleteOrder sets DeleteOrder field to given value.

### HasDeleteOrder

`func (o *ModelsOrderBookModel) HasDeleteOrder() bool`

HasDeleteOrder returns a boolean if a field has been set.

### GetModifyOrder

`func (o *ModelsOrderBookModel) GetModifyOrder() ModelsModifyOrderModel`

GetModifyOrder returns the ModifyOrder field if non-nil, zero value otherwise.

### GetModifyOrderOk

`func (o *ModelsOrderBookModel) GetModifyOrderOk() (*ModelsModifyOrderModel, bool)`

GetModifyOrderOk returns a tuple with the ModifyOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetModifyOrder

`func (o *ModelsOrderBookModel) SetModifyOrder(v ModelsModifyOrderModel)`

SetModifyOrder sets ModifyOrder field to given value.

### HasModifyOrder

`func (o *ModelsOrderBookModel) HasModifyOrder() bool`

HasModifyOrder returns a boolean if a field has been set.

### GetExecutedOrder

`func (o *ModelsOrderBookModel) GetExecutedOrder() ModelsExecutedOrderModel`

GetExecutedOrder returns the ExecutedOrder field if non-nil, zero value otherwise.

### GetExecutedOrderOk

`func (o *ModelsOrderBookModel) GetExecutedOrderOk() (*ModelsExecutedOrderModel, bool)`

GetExecutedOrderOk returns a tuple with the ExecutedOrder field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExecutedOrder

`func (o *ModelsOrderBookModel) SetExecutedOrder(v ModelsExecutedOrderModel)`

SetExecutedOrder sets ExecutedOrder field to given value.

### HasExecutedOrder

`func (o *ModelsOrderBookModel) HasExecutedOrder() bool`

HasExecutedOrder returns a boolean if a field has been set.

### GetClearBook

`func (o *ModelsOrderBookModel) GetClearBook() ModelsClearBookModel`

GetClearBook returns the ClearBook field if non-nil, zero value otherwise.

### GetClearBookOk

`func (o *ModelsOrderBookModel) GetClearBookOk() (*ModelsClearBookModel, bool)`

GetClearBookOk returns a tuple with the ClearBook field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClearBook

`func (o *ModelsOrderBookModel) SetClearBook(v ModelsClearBookModel)`

SetClearBook sets ClearBook field to given value.

### HasClearBook

`func (o *ModelsOrderBookModel) HasClearBook() bool`

HasClearBook returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


