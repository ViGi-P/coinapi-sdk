# WWW::OpenAPIClient::Object::V1OptionExchangeGroup

## Load the model package
```perl
use WWW::OpenAPIClient::Object::V1OptionExchangeGroup;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asset_id_base** | **string** | Gets or sets the base asset identifier. | [optional] 
**asset_id_quote** | **string** | Gets or sets the quote asset identifier. | [optional] 
**underlying_price** | **double** | Gets or sets the underlying price of the option. | [optional] 
**time_expiration** | **DATE_TIME** | Gets or sets the expiration time of the option. | [optional] 
**strikes** | [**ARRAY[V1Strike]**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


