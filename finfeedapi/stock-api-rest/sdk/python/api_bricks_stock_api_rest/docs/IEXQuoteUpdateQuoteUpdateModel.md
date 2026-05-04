# IEXQuoteUpdateQuoteUpdateModel

Represents the response DTO for quote update information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol** | **str** | The stock symbol | [optional] 
**timestamp_nanos** | **int** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **datetime** | Time when the quote update was recorded as DateTime | [optional] 
**is_symbol_available** | **bool** | Gets whether the symbol is available for trading True if active, False if halted, paused, or otherwise not available | [optional] 
**is_pre_post_market_session** | **bool** | Gets whether the market session is regular or pre/post-market True if pre/post-market session, False if regular market session | [optional] 
**ask_size** | **int** | Ask size in number of shares | [optional] 
**ask_price** | **float** | Ask price as decimal | [optional] 
**bid_price** | **float** | Bid price as decimal | [optional] 
**bid_size** | **int** | Bid size in number of shares | [optional] 

## Example

```python
from api_bricks_stock_api_rest.models.iex_quote_update_quote_update_model import IEXQuoteUpdateQuoteUpdateModel

# TODO update the JSON string below
json = "{}"
# create an instance of IEXQuoteUpdateQuoteUpdateModel from a JSON string
iex_quote_update_quote_update_model_instance = IEXQuoteUpdateQuoteUpdateModel.from_json(json)
# print the JSON string representation of the object
print(IEXQuoteUpdateQuoteUpdateModel.to_json())

# convert the object into a dict
iex_quote_update_quote_update_model_dict = iex_quote_update_quote_update_model_instance.to_dict()
# create an instance of IEXQuoteUpdateQuoteUpdateModel from a dict
iex_quote_update_quote_update_model_from_dict = IEXQuoteUpdateQuoteUpdateModel.from_dict(iex_quote_update_quote_update_model_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


