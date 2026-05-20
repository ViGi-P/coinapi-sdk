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

import org.openapitools.client.api.DownloadApi;

public class DownloadApiExample {

    public static void main(String[] args) {
        DownloadApi apiInstance = new DownloadApi();
        String accessionNo = null; // String | SEC filing accession number in format: 0000000000-00-000000
        String fileName = null; // String | Name of the file to download from the filing
        try {
            apiInstance.v1DownloadGet(accessionNo, fileName);
        } catch (ApiException e) {
            System.err.println("Exception when calling DownloadApi#v1DownloadGet");
            e.printStackTrace();
        }
    }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api.sec.finfeedapi.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DownloadApi* | [**v1DownloadGet**](docs/DownloadApi.md#v1DownloadGet) | **GET** /v1/download | Download file from SEC EDGAR archive
*ExtractorApi* | [**v1ExtractorGet**](docs/ExtractorApi.md#v1ExtractorGet) | **GET** /v1/extractor | Extract and classify SEC filing content
*ExtractorApi* | [**v1ExtractorItemGet**](docs/ExtractorApi.md#v1ExtractorItemGet) | **GET** /v1/extractor/item | Extract specific item content from SEC filing
*FilingsApi* | [**v1FilingsGet**](docs/FilingsApi.md#v1FilingsGet) | **GET** /v1/filings | Query SEC filing metadata
*FullTextApi* | [**v1FullTextGet**](docs/FullTextApi.md#v1FullTextGet) | **GET** /v1/full-text | Full-text search of SEC filing documents
*XbrlConverterApi* | [**v1XbrlConverterGet**](docs/XbrlConverterApi.md#v1XbrlConverterGet) | **GET** /v1/xbrl-converter | Convert XBRL data to JSON format


## Documentation for Models

 - [DTOExtractorType](docs/DTOExtractorType.md)
 - [DTOFilingMetadataDto](docs/DTOFilingMetadataDto.md)
 - [DTOFilingSortBy](docs/DTOFilingSortBy.md)
 - [DTOSecFilingResultDto](docs/DTOSecFilingResultDto.md)
 - [MvcProblemDetails](docs/MvcProblemDetails.md)
 - [MvcValidationProblemDetails](docs/MvcValidationProblemDetails.md)


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

