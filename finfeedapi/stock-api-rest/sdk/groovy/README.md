# 

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

This Groovy package, using the [http-builder-ng library](https://http-builder-ng.github.io/http-builder-ng/), is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: v1
- Package version: v1
- Build date: 2025-08-01T06:10:16.122255490Z[Etc/UTC]
- Generator version: 7.14.0
- Build package: org.openapitools.codegen.languages.GroovyClientCodegen
For more information, please visit [https://www.finfeedapi.com](https://www.finfeedapi.com)

## Requirements

* Groovy 2.5.7
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

## Getting Started


```groovy
def apiInstance = new MetadataApi()

apiInstance.v1ExchangesGet()
    {
    // on success
    def result = (List&lt;FinFeedAPIExchangeModel&gt;)it
    println result
    
}
    {
    // on failure
    statusCode, message ->
        println "${statusCode} ${message}"
};
```

