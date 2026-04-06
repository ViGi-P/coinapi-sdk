# PSOpenAPITools.PSOpenAPITools\Api.MultiAssetWeightsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Invoke-V1IndexdefMultiassetGet**](MultiAssetWeightsApi.md#Invoke-V1IndexdefMultiassetGet) | **GET** /v1/indexdef/multiasset | Get all multi-asset weights
[**Invoke-V1IndexdefMultiassetIndexIdGet**](MultiAssetWeightsApi.md#Invoke-V1IndexdefMultiassetIndexIdGet) | **GET** /v1/indexdef/multiasset/{index_id} | Get multi-asset weights for specific index


<a id="Invoke-V1IndexdefMultiassetGet"></a>
# **Invoke-V1IndexdefMultiassetGet**
> ModelsIndexMultiAssetWeight[] Invoke-V1IndexdefMultiassetGet<br>

Get all multi-asset weights

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



# Get all multi-asset weights
try {
    $Result = Invoke-V1IndexdefMultiassetGet
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexdefMultiassetGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ModelsIndexMultiAssetWeight[]**](ModelsIndexMultiAssetWeight.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexdefMultiassetIndexIdGet"></a>
# **Invoke-V1IndexdefMultiassetIndexIdGet**
> ModelsIndexMultiAssetWeight[] Invoke-V1IndexdefMultiassetIndexIdGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexId] <String><br>

Get multi-asset weights for specific index

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexId = "MyIndexId" # String | 

# Get multi-asset weights for specific index
try {
    $Result = Invoke-V1IndexdefMultiassetIndexIdGet -IndexId $IndexId
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexdefMultiassetIndexIdGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexId** | **String**|  | 

### Return type

[**ModelsIndexMultiAssetWeight[]**](ModelsIndexMultiAssetWeight.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

