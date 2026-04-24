
# V1Symbol

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **symbolId** | **kotlin.String** | Gets or sets the symbol identifier. |  [optional] |
| **exchangeId** | **kotlin.String** | Gets or sets the exchange identifier. |  [optional] |
| **symbolType** | **kotlin.String** | Gets or sets the symbol type. |  [optional] |
| **assetIdBase** | **kotlin.String** | Gets or sets the base asset identifier. |  [optional] |
| **assetIdQuote** | **kotlin.String** | Gets or sets the quote asset identifier. |  [optional] |
| **assetIdUnit** | **kotlin.String** | Gets or sets the unit asset identifier. |  [optional] |
| **futureContractUnit** | **kotlin.Double** | Gets or sets the contract unit for futures. |  [optional] |
| **futureContractUnitAsset** | **kotlin.String** | Gets or sets the asset used as the unit for futures contract. |  [optional] |
| **futureDeliveryTime** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the future delivery time for futures contract. |  [optional] |
| **optionTypeIsCall** | **kotlin.Boolean** | Gets or sets a value indicating whether the option type is a call. |  [optional] |
| **optionStrikePrice** | **kotlin.Double** | Gets or sets the strike price for options. |  [optional] |
| **optionContractUnit** | **kotlin.Double** | Gets or sets the contract unit for options. |  [optional] |
| **optionExerciseStyle** | **kotlin.String** | Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. |  [optional] |
| **optionExpirationTime** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the expiration time for options. |  [optional] |
| **contractDeliveryTime** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the delivery time for contracts. |  [optional] |
| **contractUnit** | **kotlin.Double** | Gets or sets the contract unit for contracts. |  [optional] |
| **contractUnitAsset** | **kotlin.String** | Gets or sets the asset used as the unit for contracts. |  [optional] |
| **contractId** | **kotlin.String** | Gets or sets the contract identifier. |  [optional] |
| **contractDisplayName** | **kotlin.String** | Gets or sets the display name of the contract. |  [optional] |
| **contractDisplayDescription** | **kotlin.String** | Gets or sets the display description of the contract. |  [optional] |
| **dataStart** | **kotlin.String** | Gets the start date of the data in string format (\&quot;yyyy-MM-dd\&quot;). |  [optional] [readonly] |
| **dataEnd** | **kotlin.String** | Gets the end date of the data in string format (\&quot;yyyy-MM-dd\&quot;). |  [optional] [readonly] |
| **dataQuoteStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of quote data. |  [optional] |
| **dataQuoteEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of quote data. |  [optional] |
| **dataOrderbookStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of order book data. |  [optional] |
| **dataOrderbookEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of order book data. |  [optional] |
| **dataTradeStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of trade data. |  [optional] |
| **dataTradeEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of trade data. |  [optional] |
| **indexId** | **kotlin.String** | Gets or sets the index identifier. |  [optional] |
| **indexDisplayName** | **kotlin.String** | Gets or sets the display name of the index. |  [optional] |
| **indexDisplayDescription** | **kotlin.String** | Gets or sets the display description of the index. |  [optional] |
| **volume1hrs** | **kotlin.Double** | Gets or sets the volume in the last 1 hour. |  [optional] |
| **volume1hrsUsd** | **kotlin.Double** | Gets or sets the volume in USD in the last 1 hour. |  [optional] |
| **volume1day** | **kotlin.Double** | Gets or sets the volume in the last 1 day. |  [optional] |
| **volume1dayUsd** | **kotlin.Double** | Gets or sets the volume in USD in the last 1 day. |  [optional] |
| **volume1mth** | **kotlin.Double** | Gets or sets the volume in the last 1 month. |  [optional] |
| **volume1mthUsd** | **kotlin.Double** | Gets or sets the volume in USD in the last 1 month. |  [optional] |
| **price** | **kotlin.Double** | Gets or sets the price. |  [optional] |
| **symbolIdExchange** | **kotlin.String** | Gets or sets the symbol identifier in the exchange. |  [optional] |
| **assetIdBaseExchange** | **kotlin.String** | Gets or sets the base asset identifier in the exchange. |  [optional] |
| **assetIdQuoteExchange** | **kotlin.String** | Gets or sets the quote asset identifier in the exchange. |  [optional] |
| **pricePrecision** | **kotlin.Double** | Gets or sets the price precision. |  [optional] |
| **sizePrecision** | **kotlin.Double** | Gets or sets the size precision. |  [optional] |
| **rawKvp** | **kotlin.collections.Map&lt;kotlin.String, kotlin.String?&gt;** | Key Value Pair store with raw data from the data source. |  [optional] |
| **futureIsInverse** | **kotlin.Boolean** | Gets or sets a value indicating whether the futures contract is inverse (coin-margined). |  [optional] |
| **futureIsQuanto** | **kotlin.Boolean** | Gets or sets a value indicating whether the futures contract is quanto. |  [optional] |
| **volumeToUsd** | **kotlin.Double** | Gets or sets the volume in USD. |  [optional] |
| **optionBarrierUpPrice** | **kotlin.Double** | Gets or sets the up barrier price for barrier options. |  [optional] |
| **optionBarrierUpType** | **kotlin.String** | Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. |  [optional] |
| **optionBarrierDownPrice** | **kotlin.Double** | Gets or sets the down barrier price for barrier options. |  [optional] |
| **optionBarrierDownType** | **kotlin.String** | Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. |  [optional] |
| **symbolIdInt** | **kotlin.Int** | Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. |  [optional] [readonly] |



