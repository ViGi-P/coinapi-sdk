# FinFeedApiStockRestApi.AdminOfficialPriceModel

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**symbol** | **String** | The stock symbol | [optional] 
**timestampNanos** | **Number** | Original timestamp in nanoseconds since epoch | [optional] 
**timestamp** | **Date** | Time when the official price was recorded as DateTime | [optional] 
**priceType** | **Number** | Type of price as byte value | [optional] 
**priceTypeCode** | **String** | Type of price as character string | [optional] 
**priceTypeText** | **String** | Human-readable description of the price type | [optional] 
**isPriceTypeOpening** | **Boolean** | Indicates if the price type is &#39;IEX Official Opening Price&#39; (&#39;Q&#39;/0x51). | [optional] 
**isPriceTypeClosing** | **Boolean** | Indicates if the price type is &#39;IEX Official Closing Price&#39; (&#39;M&#39;/0x4d). | [optional] 
**officialPrice** | **Number** | Official price as decimal | [optional] 


