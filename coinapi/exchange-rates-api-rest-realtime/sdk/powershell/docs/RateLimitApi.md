# PSOpenAPITools.PSOpenAPITools\Api.RateLimitApi

All URIs are relative to *https://api-realtime.exrates.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ConvertTo-ternalRatelimitWsconconApikeyGet**](RateLimitApi.md#ConvertTo-ternalRatelimitWsconconApikeyGet) | **GET** /internal/ratelimit/wsconcon/apikey | 
[**ConvertTo-ternalRatelimitWshelloIpGet**](RateLimitApi.md#ConvertTo-ternalRatelimitWshelloIpGet) | **GET** /internal/ratelimit/wshello/ip | 
[**ConvertTo-ternalRatelimitWsreqIpGet**](RateLimitApi.md#ConvertTo-ternalRatelimitWsreqIpGet) | **GET** /internal/ratelimit/wsreq/ip | 


<a id="ConvertTo-ternalRatelimitWsconconApikeyGet"></a>
# **ConvertTo-ternalRatelimitWsconconApikeyGet**
> void ConvertTo-ternalRatelimitWsconconApikeyGet<br>



### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



try {
    $Result = ConvertTo-ternalRatelimitWsconconApikeyGet
} catch {
    Write-Host ("Exception occurred when calling ConvertTo-ternalRatelimitWsconconApikeyGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="ConvertTo-ternalRatelimitWshelloIpGet"></a>
# **ConvertTo-ternalRatelimitWshelloIpGet**
> void ConvertTo-ternalRatelimitWshelloIpGet<br>



### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



try {
    $Result = ConvertTo-ternalRatelimitWshelloIpGet
} catch {
    Write-Host ("Exception occurred when calling ConvertTo-ternalRatelimitWshelloIpGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="ConvertTo-ternalRatelimitWsreqIpGet"></a>
# **ConvertTo-ternalRatelimitWsreqIpGet**
> void ConvertTo-ternalRatelimitWsreqIpGet<br>



### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



try {
    $Result = ConvertTo-ternalRatelimitWsreqIpGet
} catch {
    Write-Host ("Exception occurred when calling ConvertTo-ternalRatelimitWsreqIpGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

