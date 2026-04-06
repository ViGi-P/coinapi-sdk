# \IndexInputDataAPI

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataAPI.md#V1IndexdefInputDataIndexDefinitionIdAllGet) | **Get** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**V1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataAPI.md#V1IndexdefInputDataIndexDefinitionIdGet) | **Get** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time



## V1IndexdefInputDataIndexDefinitionIdAllGet

> []ModelsIndexDefinitionInputData V1IndexdefInputDataIndexDefinitionIdAllGet(ctx, indexDefinitionId).Execute()

Returns all data inputs for a specific index definition

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
	indexDefinitionId := "indexDefinitionId_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdAllGet(context.Background(), indexDefinitionId).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdAllGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `V1IndexdefInputDataIndexDefinitionIdAllGet`: []ModelsIndexDefinitionInputData
	fmt.Fprintf(os.Stdout, "Response from `IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdAllGet`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**indexDefinitionId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiV1IndexdefInputDataIndexDefinitionIdAllGetRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**[]ModelsIndexDefinitionInputData**](ModelsIndexDefinitionInputData.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## V1IndexdefInputDataIndexDefinitionIdGet

> []ModelsIndexDefinitionSnapshotEntry V1IndexdefInputDataIndexDefinitionIdGet(ctx, indexDefinitionId).Time(time).EnabledOnly(enabledOnly).PendingOnly(pendingOnly).FilterAssetId(filterAssetId).WithStatusInfo(withStatusInfo).Execute()

Returns data inputs for certain index definition and time

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
	indexDefinitionId := "indexDefinitionId_example" // string | 
	time := time.Now() // time.Time |  (optional)
	enabledOnly := true // bool |  (optional) (default to false)
	pendingOnly := true // bool |  (optional) (default to false)
	filterAssetId := "filterAssetId_example" // string |  (optional)
	withStatusInfo := true // bool |  (optional) (default to false)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdGet(context.Background(), indexDefinitionId).Time(time).EnabledOnly(enabledOnly).PendingOnly(pendingOnly).FilterAssetId(filterAssetId).WithStatusInfo(withStatusInfo).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `V1IndexdefInputDataIndexDefinitionIdGet`: []ModelsIndexDefinitionSnapshotEntry
	fmt.Fprintf(os.Stdout, "Response from `IndexInputDataAPI.V1IndexdefInputDataIndexDefinitionIdGet`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**indexDefinitionId** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiV1IndexdefInputDataIndexDefinitionIdGetRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **time** | **time.Time** |  | 
 **enabledOnly** | **bool** |  | [default to false]
 **pendingOnly** | **bool** |  | [default to false]
 **filterAssetId** | **string** |  | 
 **withStatusInfo** | **bool** |  | [default to false]

### Return type

[**[]ModelsIndexDefinitionSnapshotEntry**](ModelsIndexDefinitionSnapshotEntry.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

