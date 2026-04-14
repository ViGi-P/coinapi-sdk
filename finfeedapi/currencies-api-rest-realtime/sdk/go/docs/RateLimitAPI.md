# \RateLimitAPI

All URIs are relative to *https://api-realtime.fx.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InternalRatelimitWsconconApikeyGet**](RateLimitAPI.md#InternalRatelimitWsconconApikeyGet) | **Get** /internal/ratelimit/wsconcon/apikey | 
[**InternalRatelimitWshelloIpGet**](RateLimitAPI.md#InternalRatelimitWshelloIpGet) | **Get** /internal/ratelimit/wshello/ip | 
[**InternalRatelimitWsreqIpGet**](RateLimitAPI.md#InternalRatelimitWsreqIpGet) | **Get** /internal/ratelimit/wsreq/ip | 



## InternalRatelimitWsconconApikeyGet

> InternalRatelimitWsconconApikeyGet(ctx).Execute()



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
	r, err := apiClient.RateLimitAPI.InternalRatelimitWsconconApikeyGet(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `RateLimitAPI.InternalRatelimitWsconconApikeyGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiInternalRatelimitWsconconApikeyGetRequest struct via the builder pattern


### Return type

 (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## InternalRatelimitWshelloIpGet

> InternalRatelimitWshelloIpGet(ctx).Execute()



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
	r, err := apiClient.RateLimitAPI.InternalRatelimitWshelloIpGet(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `RateLimitAPI.InternalRatelimitWshelloIpGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiInternalRatelimitWshelloIpGetRequest struct via the builder pattern


### Return type

 (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## InternalRatelimitWsreqIpGet

> InternalRatelimitWsreqIpGet(ctx).Execute()



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
	r, err := apiClient.RateLimitAPI.InternalRatelimitWsreqIpGet(context.Background()).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `RateLimitAPI.InternalRatelimitWsreqIpGet``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiInternalRatelimitWsreqIpGetRequest struct via the builder pattern


### Return type

 (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

