# OpenapiClient::ModelsOrderBookModel

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **add_order** | [**ModelsAddOrderModel**](ModelsAddOrderModel.md) |  | [optional] |
| **delete_order** | [**ModelsDeleteOrderModel**](ModelsDeleteOrderModel.md) |  | [optional] |
| **modify_order** | [**ModelsModifyOrderModel**](ModelsModifyOrderModel.md) |  | [optional] |
| **executed_order** | [**ModelsExecutedOrderModel**](ModelsExecutedOrderModel.md) |  | [optional] |
| **clear_book** | [**ModelsClearBookModel**](ModelsClearBookModel.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ModelsOrderBookModel.new(
  add_order: null,
  delete_order: null,
  modify_order: null,
  executed_order: null,
  clear_book: null
)
```

