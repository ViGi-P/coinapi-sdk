# \MultiAssetWeightsAPI

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1IndexdefMultiassetGet**](MultiAssetWeightsAPI.md#V1IndexdefMultiassetGet) | **Get** /v1/indexdef/multiasset | Get all multi-asset weights
[**V1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsAPI.md#V1IndexdefMultiassetIndexIdGet) | **Get** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index



## V1IndexdefMultiassetGet

> []ModelsIndexMultiAssetWeight V1IndexdefMultiassetGet(ctx).Execute()

Get all multi-asset weights

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
	resp, r, err := apiClient.MultiAssetWeightsAPI.V1IndexdefMultiassetGet(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MultiAssetWeightsAPI.V1IndexdefMultiassetGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `V1IndexdefMultiassetGet`: []ModelsIndexMultiAssetWeight
	fmt.Fprintf(os.Stdout, "Response from `MultiAssetWeightsAPI.V1IndexdefMultiassetGet`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiV1IndexdefMultiassetGetRequest struct via the builder pattern


### Return type

[**[]ModelsIndexMultiAssetWeight**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1IndexdefMultiassetIndexIdGet

> []ModelsIndexMultiAssetWeight V1IndexdefMultiassetIndexIdGet(ctx, indexId).Execute()

Get multi-asset weights for specific index

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
	indexId := "indexId_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.MultiAssetWeightsAPI.V1IndexdefMultiassetIndexIdGet(context.Background(), indexId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `MultiAssetWeightsAPI.V1IndexdefMultiassetIndexIdGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `V1IndexdefMultiassetIndexIdGet`: []ModelsIndexMultiAssetWeight
	fmt.Fprintf(os.Stdout, "Response from `MultiAssetWeightsAPI.V1IndexdefMultiassetIndexIdGet`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**indexId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiV1IndexdefMultiassetIndexIdGetRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**[]ModelsIndexMultiAssetWeight**](ModelsIndexMultiAssetWeight.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

