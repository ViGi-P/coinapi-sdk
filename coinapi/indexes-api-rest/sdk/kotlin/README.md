# org.openapitools.client - Kotlin client library for CoinAPI Indexes REST API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [openapi-spec](https://github.com/OAI/OpenAPI-Specification) from a remote server, you can easily generate an API client.

- API version: v1
- Package version: 
- Generator version: 7.13.0
- Build package: org.openapitools.codegen.languages.KotlinClientCodegen
For more information, please visit [https://www.coinapi.io](https://www.coinapi.io)

## Requires

* Kotlin 1.7.21
* Gradle 7.5

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a id="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Class | Method | HTTP request | Description |
| ------------ | ------------- | ------------- | ------------- |
| *IndexesApi* | [**v1IndexdefInputDataIndexDefinitionIdAllGet**](docs/IndexesApi.md#v1indexdefinputdataindexdefinitionidallget) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition |
| *IndexesApi* | [**v1IndexdefInputDataIndexDefinitionIdGet**](docs/IndexesApi.md#v1indexdefinputdataindexdefinitionidget) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time |
| *IndexesApi* | [**v1IndexdefMultiassetGet**](docs/IndexesApi.md#v1indexdefmultiassetget) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights |
| *IndexesApi* | [**v1IndexdefMultiassetIndexIdGet**](docs/IndexesApi.md#v1indexdefmultiassetindexidget) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index |
| *IndexesApi* | [**v1IndexesGet**](docs/IndexesApi.md#v1indexesget) | **GET** /v1/indexes | List indexes |
| *IndexesApi* | [**v1IndexesIndexDefinitionIdCurrentSnapshotGet**](docs/IndexesApi.md#v1indexesindexdefinitionidcurrentsnapshotget) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition |
| *IndexesApi* | [**v1IndexesIndexDefinitionIdHistorySnapshotGet**](docs/IndexesApi.md#v1indexesindexdefinitionidhistorysnapshotget) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition |
| *IndexesApi* | [**v1IndexesIndexIdCurrentGet**](docs/IndexesApi.md#v1indexesindexidcurrentget) | **GET** /v1/indexes/{index_id}/current | Current Index Value |
| *IndexesApi* | [**v1IndexesIndexIdHistoryGet**](docs/IndexesApi.md#v1indexesindexidhistoryget) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition |
| *IndexesApi* | [**v1IndexesIndexIdTimeseriesGet**](docs/IndexesApi.md#v1indexesindexidtimeseriesget) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value |
| *MetadataApi* | [**apiMetadataExchangesExchangeIdGet**](docs/MetadataApi.md#apimetadataexchangesexchangeidget) | **GET** /api/metadata/exchanges/{exchange_id} | List all exchanges by exchange_id |
| *MetadataApi* | [**apiMetadataExchangesGet**](docs/MetadataApi.md#apimetadataexchangesget) | **GET** /api/metadata/exchanges | List all exchanges |
| *PeriodsApi* | [**v1MetadataPeriodsGet**](docs/PeriodsApi.md#v1metadataperiodsget) | **GET** /v1/metadata/periods | List all periods |


<a id="documentation-for-models"></a>
## Documentation for Models

 - [org.openapitools.client.models.IndexesIndexDefinitionInputData](docs/IndexesIndexDefinitionInputData.md)
 - [org.openapitools.client.models.IndexesIndexDefinitionSnapshotEntry](docs/IndexesIndexDefinitionSnapshotEntry.md)
 - [org.openapitools.client.models.IndexesIndexIdentifier](docs/IndexesIndexIdentifier.md)
 - [org.openapitools.client.models.IndexesIndexMultiAssetWeight](docs/IndexesIndexMultiAssetWeight.md)
 - [org.openapitools.client.models.IndexesIndexTimeseriesItem](docs/IndexesIndexTimeseriesItem.md)
 - [org.openapitools.client.models.IndexesIndexValue](docs/IndexesIndexValue.md)
 - [org.openapitools.client.models.IndexesIndexValueComponent](docs/IndexesIndexValueComponent.md)
 - [org.openapitools.client.models.MetadataExchange](docs/MetadataExchange.md)
 - [org.openapitools.client.models.MetadataTimeseriesPeriod](docs/MetadataTimeseriesPeriod.md)


<a id="documentation-for-authorization"></a>
## Documentation for Authorization


Authentication schemes defined for the API:
<a id="APIKey"></a>
### APIKey

- **Type**: API key
- **API key parameter name**: Authorization
- **Location**: HTTP header

<a id="JWT"></a>
### JWT

- **Type**: HTTP Bearer Token authentication (JWT)



## Author

support@apibricks.io
