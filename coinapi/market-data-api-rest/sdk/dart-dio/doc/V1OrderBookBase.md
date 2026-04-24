# openapi.model.V1OrderBookBase

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**timeExchange** | [**DateTime**](DateTime.md) | Gets or sets the exchange time of the order book. | [optional] 
**timeCoinapi** | [**DateTime**](DateTime.md) | Gets or sets the CoinAPI time when the order book was received. | [optional] 
**asks** | [**JsonObject**](.md) | Gets or sets the asks made by market makers. | [optional] 
**bids** | [**JsonObject**](.md) | Gets or sets the bids made by market makers. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


