# openapi.model.V1QuoteTrade

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**timeExchange** | [**DateTime**](DateTime.md) | Gets or sets the exchange time of the quote trade. | [optional] 
**timeCoinapi** | [**DateTime**](DateTime.md) | Gets or sets the CoinAPI time when the quote trade was received. | [optional] 
**askPrice** | **double** | Gets or sets the best asking price. | [optional] 
**askSize** | **double** | Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. | [optional] 
**bidPrice** | **double** | Gets or sets the best bidding price. | [optional] 
**bidSize** | **double** | Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. | [optional] 
**lastTrade** | [**V1LastTrade**](V1LastTrade.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


