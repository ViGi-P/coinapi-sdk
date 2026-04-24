
# V1Exchange

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **exchangeId** | **kotlin.String** | Gets or sets the exchange ID. |  [optional] |
| **website** | **kotlin.String** | Gets or sets the website URL of the exchange. |  [optional] |
| **name** | **kotlin.String** | Gets or sets the name of the exchange. |  [optional] |
| **dataStart** | **kotlin.String** | Gets the start date of the exchange&#39;s data. |  [optional] [readonly] |
| **dataEnd** | **kotlin.String** | Gets the end date of the exchange&#39;s data. |  [optional] [readonly] |
| **dataQuoteStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of quote data. |  [optional] |
| **dataQuoteEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of quote data. |  [optional] |
| **dataOrderbookStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of order book data. |  [optional] |
| **dataOrderbookEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of order book data. |  [optional] |
| **dataTradeStart** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the start date of trade data. |  [optional] |
| **dataTradeEnd** | [**java.time.OffsetDateTime**](java.time.OffsetDateTime.md) | Gets or sets the end date of trade data. |  [optional] |
| **dataTradeCount** | **kotlin.Long** | Gets or sets the number of trades. |  [optional] |
| **dataSymbolsCount** | **kotlin.Long** | Gets or sets the number of symbols. |  [optional] |
| **volume1hrsUsd** | **kotlin.Double** | Gets or sets the USD volume in the last 1 hour. |  [optional] |
| **volume1dayUsd** | **kotlin.Double** | Gets or sets the USD volume in the last 1 day. |  [optional] |
| **volume1mthUsd** | **kotlin.Double** | Gets or sets the USD volume in the last 1 month. |  [optional] |
| **metricId** | **kotlin.collections.List&lt;kotlin.String&gt;** | Gets or sets the list of metric IDs. |  [optional] |
| **icons** | [**kotlin.collections.List&lt;V1Icon&gt;**](V1Icon.md) | Gets or sets the list of icons for the exchange. |  [optional] [readonly] |
| **rank** | **kotlin.Double** | Rank of the exchange - higher rank means exchange is more reliable |  [optional] |
| **integrationStatus** | **kotlin.String** | Status of the integration |  [optional] |



