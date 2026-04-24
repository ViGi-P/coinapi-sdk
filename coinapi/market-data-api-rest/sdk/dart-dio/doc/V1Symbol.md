# openapi.model.V1Symbol

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbolId** | **String** | Gets or sets the symbol identifier. | [optional] 
**exchangeId** | **String** | Gets or sets the exchange identifier. | [optional] 
**symbolType** | **String** | Gets or sets the symbol type. | [optional] 
**assetIdBase** | **String** | Gets or sets the base asset identifier. | [optional] 
**assetIdQuote** | **String** | Gets or sets the quote asset identifier. | [optional] 
**assetIdUnit** | **String** | Gets or sets the unit asset identifier. | [optional] 
**futureContractUnit** | **double** | Gets or sets the contract unit for futures. | [optional] 
**futureContractUnitAsset** | **String** | Gets or sets the asset used as the unit for futures contract. | [optional] 
**futureDeliveryTime** | [**DateTime**](DateTime.md) | Gets or sets the future delivery time for futures contract. | [optional] 
**optionTypeIsCall** | **bool** | Gets or sets a value indicating whether the option type is a call. | [optional] 
**optionStrikePrice** | **double** | Gets or sets the strike price for options. | [optional] 
**optionContractUnit** | **double** | Gets or sets the contract unit for options. | [optional] 
**optionExerciseStyle** | **String** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. | [optional] 
**optionExpirationTime** | [**DateTime**](DateTime.md) | Gets or sets the expiration time for options. | [optional] 
**contractDeliveryTime** | [**DateTime**](DateTime.md) | Gets or sets the delivery time for contracts. | [optional] 
**contractUnit** | **double** | Gets or sets the contract unit for contracts. | [optional] 
**contractUnitAsset** | **String** | Gets or sets the asset used as the unit for contracts. | [optional] 
**contractId** | **String** | Gets or sets the contract identifier. | [optional] 
**contractDisplayName** | **String** | Gets or sets the display name of the contract. | [optional] 
**contractDisplayDescription** | **String** | Gets or sets the display description of the contract. | [optional] 
**dataStart** | **String** | Gets the start date of the data in string format (\"yyyy-MM-dd\"). | [optional] 
**dataEnd** | **String** | Gets the end date of the data in string format (\"yyyy-MM-dd\"). | [optional] 
**dataQuoteStart** | [**DateTime**](DateTime.md) | Gets or sets the start date of quote data. | [optional] 
**dataQuoteEnd** | [**DateTime**](DateTime.md) | Gets or sets the end date of quote data. | [optional] 
**dataOrderbookStart** | [**DateTime**](DateTime.md) | Gets or sets the start date of order book data. | [optional] 
**dataOrderbookEnd** | [**DateTime**](DateTime.md) | Gets or sets the end date of order book data. | [optional] 
**dataTradeStart** | [**DateTime**](DateTime.md) | Gets or sets the start date of trade data. | [optional] 
**dataTradeEnd** | [**DateTime**](DateTime.md) | Gets or sets the end date of trade data. | [optional] 
**indexId** | **String** | Gets or sets the index identifier. | [optional] 
**indexDisplayName** | **String** | Gets or sets the display name of the index. | [optional] 
**indexDisplayDescription** | **String** | Gets or sets the display description of the index. | [optional] 
**volume1hrs** | **double** | Gets or sets the volume in the last 1 hour. | [optional] 
**volume1hrsUsd** | **double** | Gets or sets the volume in USD in the last 1 hour. | [optional] 
**volume1day** | **double** | Gets or sets the volume in the last 1 day. | [optional] 
**volume1dayUsd** | **double** | Gets or sets the volume in USD in the last 1 day. | [optional] 
**volume1mth** | **double** | Gets or sets the volume in the last 1 month. | [optional] 
**volume1mthUsd** | **double** | Gets or sets the volume in USD in the last 1 month. | [optional] 
**price** | **double** | Gets or sets the price. | [optional] 
**symbolIdExchange** | **String** | Gets or sets the symbol identifier in the exchange. | [optional] 
**assetIdBaseExchange** | **String** | Gets or sets the base asset identifier in the exchange. | [optional] 
**assetIdQuoteExchange** | **String** | Gets or sets the quote asset identifier in the exchange. | [optional] 
**pricePrecision** | **double** | Gets or sets the price precision. | [optional] 
**sizePrecision** | **double** | Gets or sets the size precision. | [optional] 
**rawKvp** | **BuiltMap&lt;String, String&gt;** | Key Value Pair store with raw data from the data source. | [optional] 
**futureIsInverse** | **bool** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). | [optional] 
**futureIsQuanto** | **bool** | Gets or sets a value indicating whether the futures contract is quanto. | [optional] 
**volumeToUsd** | **double** | Gets or sets the volume in USD. | [optional] 
**optionBarrierUpPrice** | **double** | Gets or sets the up barrier price for barrier options. | [optional] 
**optionBarrierUpType** | **String** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**optionBarrierDownPrice** | **double** | Gets or sets the down barrier price for barrier options. | [optional] 
**optionBarrierDownType** | **String** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. | [optional] 
**symbolIdInt** | **int** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


