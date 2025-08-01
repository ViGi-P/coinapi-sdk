# Go API client for openapi

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [OpenAPI-spec](https://www.openapis.org/) from a remote server, you can easily generate an API client.

- API version: v1
- Package version: 1.0.0
- Generator version: 7.14.0
- Build package: org.openapitools.codegen.languages.GoClientCodegen
For more information, please visit [https://www.finfeedapi.com](https://www.finfeedapi.com)

## Installation

Install the following dependencies:

```sh
go get github.com/stretchr/testify/assert
go get golang.org/x/net/context
```

Put the package under your project folder and add the following in import:

```go
import openapi "github.com/GIT_USER_ID/GIT_REPO_ID"
```

To use a proxy, set the environment variable `HTTP_PROXY`:

```go
os.Setenv("HTTP_PROXY", "http://proxy_name:proxy_port")
```

## Configuration of Server URL

Default configuration comes with `Servers` field that contains server objects as defined in the OpenAPI specification.

### Select Server Configuration

For using other server than the one defined on index 0 set context value `openapi.ContextServerIndex` of type `int`.

```go
ctx := context.WithValue(context.Background(), openapi.ContextServerIndex, 1)
```

### Templated Server URL

Templated server URL is formatted using default variables from configuration or from context value `openapi.ContextServerVariables` of type `map[string]string`.

```go
ctx := context.WithValue(context.Background(), openapi.ContextServerVariables, map[string]string{
	"basePath": "v2",
})
```

Note, enum values are always validated and all unused variables are silently ignored.

### URLs Configuration per Operation

Each operation can use different server URL defined using `OperationServers` map in the `Configuration`.
An operation is uniquely identified by `"{classname}Service.{nickname}"` string.
Similar rules for overriding default operation server index and variables applies by using `openapi.ContextOperationServerIndices` and `openapi.ContextOperationServerVariables` context maps.

```go
ctx := context.WithValue(context.Background(), openapi.ContextOperationServerIndices, map[string]int{
	"{classname}Service.{nickname}": 2,
})
ctx = context.WithValue(context.Background(), openapi.ContextOperationServerVariables, map[string]map[string]string{
	"{classname}Service.{nickname}": {
		"port": "8443",
	},
})
```

## Documentation for API Endpoints

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*ExchangeRatesAPI* | [**GetSpecificRate**](docs/ExchangeRatesAPI.md#getspecificrate) | **Get** /v1/exchangerate/{asset_id_base}/{asset_id_quote} | Get specific rate
*ExchangeRatesAPI* | [**V1ExchangerateAssetIdBaseGet**](docs/ExchangeRatesAPI.md#v1exchangerateassetidbaseget) | **Get** /v1/exchangerate/{asset_id_base} | Get all current rates
*MetadataAPI* | [**V1AssetsAssetIdGet**](docs/MetadataAPI.md#v1assetsassetidget) | **Get** /v1/assets/{asset_id} | List all assets by asset ID
*MetadataAPI* | [**V1AssetsGet**](docs/MetadataAPI.md#v1assetsget) | **Get** /v1/assets | List all assets
*MetadataAPI* | [**V1AssetsIconsSizeGet**](docs/MetadataAPI.md#v1assetsiconssizeget) | **Get** /v1/assets/icons/{size} | List all asset icons


## Documentation For Models

 - [V1Asset](docs/V1Asset.md)
 - [V1ChainNetworkAddress](docs/V1ChainNetworkAddress.md)
 - [V1ExchangeRate](docs/V1ExchangeRate.md)
 - [V1ExchangeRates](docs/V1ExchangeRates.md)
 - [V1ExchangeRatesRate](docs/V1ExchangeRatesRate.md)
 - [V1Icon](docs/V1Icon.md)


## Documentation For Authorization


Authentication schemes defined for the API:
### APIKey

- **Type**: API key
- **API key parameter name**: Authorization
- **Location**: HTTP header

Note, each API key must be added to a map of `map[string]APIKey` where the key is: APIKey and passed in as the auth context for each request.

Example

```go
auth := context.WithValue(
		context.Background(),
		openapi.ContextAPIKeys,
		map[string]openapi.APIKey{
			"APIKey": {Key: "API_KEY_STRING"},
		},
	)
r, err := client.Service.Operation(auth, args)
```

### JWT

- **Type**: HTTP Bearer token authentication

Example

```go
auth := context.WithValue(context.Background(), openapi.ContextAccessToken, "BEARER_TOKEN_STRING")
r, err := client.Service.Operation(auth, args)
```


## Documentation for Utility Methods

Due to the fact that model structure members are all pointers, this package contains
a number of utility functions to easily obtain pointers to values of basic types.
Each of these functions takes a value of the given basic type and returns a pointer to it:

* `PtrBool`
* `PtrInt`
* `PtrInt32`
* `PtrInt64`
* `PtrFloat`
* `PtrFloat32`
* `PtrFloat64`
* `PtrString`
* `PtrTime`

## Author

support@apibricks.io

