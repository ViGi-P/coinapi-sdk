# \MetricsV2API

All URIs are relative to *https://rest.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketdataListMetricsV2AssetHistory**](MetricsV2API.md#MarketdataListMetricsV2AssetHistory) | **Get** /v2/metrics/asset/history | Historical metrics for the asset
[**MarketdataListMetricsV2AssetListing**](MetricsV2API.md#MarketdataListMetricsV2AssetListing) | **Get** /v2/metrics/asset/listing | Listing of metrics available for specific asset
[**MarketdataListMetricsV2ChainHistory**](MetricsV2API.md#MarketdataListMetricsV2ChainHistory) | **Get** /v2/metrics/chain/history | Historical metrics for the chain
[**MarketdataListMetricsV2ChainListing**](MetricsV2API.md#MarketdataListMetricsV2ChainListing) | **Get** /v2/metrics/chain/listing | Listing of metrics available for specific chain
[**MarketdataListMetricsV2ExchangeHistory**](MetricsV2API.md#MarketdataListMetricsV2ExchangeHistory) | **Get** /v2/metrics/exchange/history | Historical metrics for the exchange
[**MarketdataListMetricsV2ExchangeListing**](MetricsV2API.md#MarketdataListMetricsV2ExchangeListing) | **Get** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange
[**MarketdataListMetricsV2Listing**](MetricsV2API.md#MarketdataListMetricsV2Listing) | **Get** /v2/metrics/listing | Listing of all supported metrics



## MarketdataListMetricsV2AssetHistory

> []map[string]interface{} MarketdataListMetricsV2AssetHistory(ctx).MetricId(metricId).AssetId(assetId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()

Historical metrics for the asset



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	metricId := "metricId_example" // string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
	assetId := "assetId_example" // string | Asset identifier (e.g., `USDC`, `USDT`)
	timeStart := time.Now() // time.Time | Starting time in ISO 8601 (optional)
	timeEnd := time.Now() // time.Time | Ending time in ISO 8601 (optional)
	timeFormat := "timeFormat_example" // string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (optional)
	periodId := "periodId_example" // string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (optional)
	limit := int32(56) // int32 | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (optional) (default to 100)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2AssetHistory(context.Background()).MetricId(metricId).AssetId(assetId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2AssetHistory``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2AssetHistory`: []map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2AssetHistory`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2AssetHistoryRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **assetId** | **string** | Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) | 
 **timeStart** | **time.Time** | Starting time in ISO 8601 | 
 **timeEnd** | **time.Time** | Ending time in ISO 8601 | 
 **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | 
 **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | 
 **limit** | **int32** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [default to 100]

### Return type

**[]map[string]interface{}**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2AssetListing

> []V1MetricInfo MarketdataListMetricsV2AssetListing(ctx).AssetId(assetId).Execute()

Listing of metrics available for specific asset



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	assetId := "assetId_example" // string | Asset identifier (e.g., USDC, USDT)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2AssetListing(context.Background()).AssetId(assetId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2AssetListing``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2AssetListing`: []V1MetricInfo
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2AssetListing`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2AssetListingRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **assetId** | **string** | Asset identifier (e.g., USDC, USDT) | 

### Return type

[**[]V1MetricInfo**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2ChainHistory

> []map[string]interface{} MarketdataListMetricsV2ChainHistory(ctx).MetricId(metricId).ChainId(chainId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()

Historical metrics for the chain



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	metricId := "metricId_example" // string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
	chainId := "chainId_example" // string | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
	timeStart := time.Now() // time.Time | Starting time in ISO 8601 (optional)
	timeEnd := time.Now() // time.Time | Ending time in ISO 8601 (optional)
	timeFormat := "timeFormat_example" // string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (optional)
	periodId := "periodId_example" // string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (optional)
	limit := int32(56) // int32 | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (optional) (default to 100)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2ChainHistory(context.Background()).MetricId(metricId).ChainId(chainId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2ChainHistory``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2ChainHistory`: []map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2ChainHistory`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2ChainHistoryRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **chainId** | **string** | Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) | 
 **timeStart** | **time.Time** | Starting time in ISO 8601 | 
 **timeEnd** | **time.Time** | Ending time in ISO 8601 | 
 **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | 
 **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | 
 **limit** | **int32** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [default to 100]

### Return type

**[]map[string]interface{}**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2ChainListing

> []V1MetricInfo MarketdataListMetricsV2ChainListing(ctx).ChainId(chainId).Execute()

Listing of metrics available for specific chain



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	chainId := "chainId_example" // string | Chain identifier (e.g., ETHEREUM, ARBITRUM)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2ChainListing(context.Background()).ChainId(chainId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2ChainListing``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2ChainListing`: []V1MetricInfo
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2ChainListing`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2ChainListingRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **chainId** | **string** | Chain identifier (e.g., ETHEREUM, ARBITRUM) | 

### Return type

[**[]V1MetricInfo**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2ExchangeHistory

> []map[string]interface{} MarketdataListMetricsV2ExchangeHistory(ctx).MetricId(metricId).ExchangeId(exchangeId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()

Historical metrics for the exchange



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	metricId := "metricId_example" // string | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
	exchangeId := "exchangeId_example" // string | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
	timeStart := time.Now() // time.Time | Starting time in ISO 8601 (optional)
	timeEnd := time.Now() // time.Time | Ending time in ISO 8601 (optional)
	timeFormat := "timeFormat_example" // string | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) (optional)
	periodId := "periodId_example" // string | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN` (optional)
	limit := int32(56) // int32 | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (optional) (default to 100)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2ExchangeHistory(context.Background()).MetricId(metricId).ExchangeId(exchangeId).TimeStart(timeStart).TimeEnd(timeEnd).TimeFormat(timeFormat).PeriodId(periodId).Limit(limit).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2ExchangeHistory``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2ExchangeHistory`: []map[string]interface{}
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2ExchangeHistory`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2ExchangeHistoryRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **metricId** | **string** | Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | 
 **exchangeId** | **string** | Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) | 
 **timeStart** | **time.Time** | Starting time in ISO 8601 | 
 **timeEnd** | **time.Time** | Ending time in ISO 8601 | 
 **timeFormat** | **string** | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | 
 **periodId** | **string** | Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | 
 **limit** | **int32** | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [default to 100]

### Return type

**[]map[string]interface{}**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2ExchangeListing

> []V1MetricInfo MarketdataListMetricsV2ExchangeListing(ctx).ExchangeId(exchangeId).Execute()

Listing of metrics available for specific exchange



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	exchangeId := "exchangeId_example" // string | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2ExchangeListing(context.Background()).ExchangeId(exchangeId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2ExchangeListing``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2ExchangeListing`: []V1MetricInfo
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2ExchangeListing`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2ExchangeListingRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **exchangeId** | **string** | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) | 

### Return type

[**[]V1MetricInfo**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MarketdataListMetricsV2Listing

> []V1MetricInfo MarketdataListMetricsV2Listing(ctx).Execute()

Listing of all supported metrics



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MetricsV2API.MarketdataListMetricsV2Listing(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MetricsV2API.MarketdataListMetricsV2Listing``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `MarketdataListMetricsV2Listing`: []V1MetricInfo
	fmt.Fprintf(os.Stdout, "Response from `MetricsV2API.MarketdataListMetricsV2Listing`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiMarketdataListMetricsV2ListingRequest struct via the builder pattern


### Return type

[**[]V1MetricInfo**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

