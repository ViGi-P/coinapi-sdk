# openapi.model.V1OptionExchangeGroup

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**assetIdBase** | **String** | Gets or sets the base asset identifier. | [optional] 
**assetIdQuote** | **String** | Gets or sets the quote asset identifier. | [optional] 
**underlyingPrice** | **double** | Gets or sets the underlying price of the option. | [optional] 
**timeExpiration** | [**DateTime**](DateTime.md) | Gets or sets the expiration time of the option. | [optional] 
**strikes** | [**List<V1Strike>**](V1Strike.md) | Gets or sets the list of strikes available. | [optional] [default to const []]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


