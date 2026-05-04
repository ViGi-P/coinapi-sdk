# openapi-android-client

## Requirements

Building the API client library requires [Maven](https://maven.apache.org/) to be installed.

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn deploy
```

Refer to the [official documentation](https://maven.apache.org/plugins/maven-deploy-plugin/usage.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
    <groupId>org.openapitools</groupId>
    <artifactId>openapi-android-client</artifactId>
    <version>1.0.0</version>
    <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
compile "org.openapitools:openapi-android-client:1.0.0"
```

### Others

At first generate the JAR by executing:

    mvn package

Then manually install the following JARs:

- target/openapi-android-client-1.0.0.jar
- target/lib/*.jar

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

```java

import org.openapitools.client.api.MetadataApi;

public class MetadataApiExample {

    public static void main(String[] args) {
        MetadataApi apiInstance = new MetadataApi();
        try {
            List<FinFeedAPIExchangeModel> result = apiInstance.v1ExchangesGet();
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling MetadataApi#v1ExchangesGet");
            e.printStackTrace();
        }
    }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*MetadataApi* | [**v1ExchangesGet**](docs/MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
*MetadataApi* | [**v1SymbolsExchangeIdGet**](docs/MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange
*NativeIEXApi* | [**v1NativeIexAdminMessagesSymbolGet**](docs/NativeIEXApi.md#v1NativeIexAdminMessagesSymbolGet) | **GET** /v1/native/iex/admin/messages/{symbol} | Get Admin Messages
*NativeIEXApi* | [**v1NativeIexAdminSystemEventGet**](docs/NativeIEXApi.md#v1NativeIexAdminSystemEventGet) | **GET** /v1/native/iex/admin/system-event | Get System Events
*NativeIEXApi* | [**v1NativeIexLevel1QuoteSymbolGet**](docs/NativeIEXApi.md#v1NativeIexLevel1QuoteSymbolGet) | **GET** /v1/native/iex/level1-quote/{symbol} | Get Level-1 Quotes
*NativeIEXApi* | [**v1NativeIexLevel2PriceLevelUpdateSymbolGet**](docs/NativeIEXApi.md#v1NativeIexLevel2PriceLevelUpdateSymbolGet) | **GET** /v1/native/iex/level2-price-level-update/{symbol} | Get Level-2 Price Level Book
*NativeIEXApi* | [**v1NativeIexLevel3OrderBookSymbolGet**](docs/NativeIEXApi.md#v1NativeIexLevel3OrderBookSymbolGet) | **GET** /v1/native/iex/level3-order-book/{symbol} | Get Level-3 Order Book
*NativeIEXApi* | [**v1NativeIexTradeSymbolGet**](docs/NativeIEXApi.md#v1NativeIexTradeSymbolGet) | **GET** /v1/native/iex/trade/{symbol} | Get Trades
*OhlcvApi* | [**v1OhlcvExchangeExchangeIdHistoryGet**](docs/OhlcvApi.md#v1OhlcvExchangeExchangeIdHistoryGet) | **GET** /v1/ohlcv/exchange/{exchange_id}/history | Historical data by exchange
*OhlcvApi* | [**v1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet**](docs/OhlcvApi.md#v1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet) | **GET** /v1/ohlcv/exchange-symbol/{exchange_id}/{symbol_id}/history | Historical data
*OhlcvApi* | [**v1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet**](docs/OhlcvApi.md#v1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet) | **GET** /v1/ohlcv/exchange-symbol/{exchange_id}/{symbol_id}/latest | Latest data
*OhlcvApi* | [**v1OhlcvPeriodsGet**](docs/OhlcvApi.md#v1OhlcvPeriodsGet) | **GET** /v1/ohlcv/periods | List all periods


## Documentation for Models

 - [FinFeedAPIExchangeModel](docs/FinFeedAPIExchangeModel.md)
 - [FinFeedAPISymbolModel](docs/FinFeedAPISymbolModel.md)
 - [IEXPriceLevelUpdatePriceLevelUpdateModel](docs/IEXPriceLevelUpdatePriceLevelUpdateModel.md)
 - [IEXQuoteUpdateQuoteUpdateModel](docs/IEXQuoteUpdateQuoteUpdateModel.md)
 - [IEXSystemEventSystemEventModel](docs/IEXSystemEventSystemEventModel.md)
 - [IEXTradeTradeModel](docs/IEXTradeTradeModel.md)
 - [ModelsAddOrderModel](docs/ModelsAddOrderModel.md)
 - [ModelsAdminMessageModel](docs/ModelsAdminMessageModel.md)
 - [ModelsAuctionInformationModel](docs/ModelsAuctionInformationModel.md)
 - [ModelsClearBookModel](docs/ModelsClearBookModel.md)
 - [ModelsDeleteOrderModel](docs/ModelsDeleteOrderModel.md)
 - [ModelsExecutedOrderModel](docs/ModelsExecutedOrderModel.md)
 - [ModelsModifyOrderModel](docs/ModelsModifyOrderModel.md)
 - [ModelsOfficialPriceModel](docs/ModelsOfficialPriceModel.md)
 - [ModelsOperationalHaltStatusModel](docs/ModelsOperationalHaltStatusModel.md)
 - [ModelsOrderBookModel](docs/ModelsOrderBookModel.md)
 - [ModelsRetailLiquidityIndicatorModel](docs/ModelsRetailLiquidityIndicatorModel.md)
 - [ModelsSecurityDirectoryModel](docs/ModelsSecurityDirectoryModel.md)
 - [ModelsSecurityEventModel](docs/ModelsSecurityEventModel.md)
 - [ModelsShortSalePriceTestStatusModel](docs/ModelsShortSalePriceTestStatusModel.md)
 - [ModelsTradingStatusModel](docs/ModelsTradingStatusModel.md)
 - [OHLCVTimeSeriesExchangeTimeseriesItem](docs/OHLCVTimeSeriesExchangeTimeseriesItem.md)
 - [OHLCVTimeSeriesTimeseriesItem](docs/OHLCVTimeSeriesTimeseriesItem.md)
 - [OHLCVTimeSeriesTimeseriesPeriod](docs/OHLCVTimeSeriesTimeseriesPeriod.md)


## Documentation for Authorization

Authentication schemes defined for the API:
### APIKey

- **Type**: API key

- **API key parameter name**: Authorization
- **Location**: HTTP header

### JWT

- **Type**: HTTP Bearer Token authentication (JWT)


## Recommendation

It's recommended to create an instance of `ApiClient` per thread in a multithreaded environment to avoid any potential issues.

## Author

support@apibricks.io

