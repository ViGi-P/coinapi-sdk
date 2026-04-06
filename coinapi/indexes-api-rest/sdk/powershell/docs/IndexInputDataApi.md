# PSOpenAPITools.PSOpenAPITools\Api.IndexInputDataApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet**](IndexInputDataApi.md#Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet) | **GET** /v1/indexdef/input-data/{index_definition_id}/all | Returns all data inputs for a specific index definition
[**Invoke-V1IndexdefInputDataIndexDefinitionIdGet**](IndexInputDataApi.md#Invoke-V1IndexdefInputDataIndexDefinitionIdGet) | **GET** /v1/indexdef/input-data/{index_definition_id} | Returns data inputs for certain index definition and time


<a id="Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet"></a>
# **Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet**
> ModelsIndexDefinitionInputData[] Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexDefinitionId] <String><br>

Returns all data inputs for a specific index definition

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexDefinitionId = "MyIndexDefinitionId" # String | 

# Returns all data inputs for a specific index definition
try {
    $Result = Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet -IndexDefinitionId $IndexDefinitionId
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexdefInputDataIndexDefinitionIdAllGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexDefinitionId** | **String**|  | 

### Return type

[**ModelsIndexDefinitionInputData[]**](ModelsIndexDefinitionInputData.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexdefInputDataIndexDefinitionIdGet"></a>
# **Invoke-V1IndexdefInputDataIndexDefinitionIdGet**
> ModelsIndexDefinitionSnapshotEntry[] Invoke-V1IndexdefInputDataIndexDefinitionIdGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexDefinitionId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Time] <System.Nullable[System.DateTime]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-EnabledOnly] <System.Nullable[Boolean]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-PendingOnly] <System.Nullable[Boolean]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-FilterAssetId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-WithStatusInfo] <System.Nullable[Boolean]><br>

Returns data inputs for certain index definition and time

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexDefinitionId = "MyIndexDefinitionId" # String | 
$Time = (Get-Date) # System.DateTime |  (optional)
$EnabledOnly = $true # Boolean |  (optional) (default to $false)
$PendingOnly = $true # Boolean |  (optional) (default to $false)
$FilterAssetId = "MyFilterAssetId" # String |  (optional)
$WithStatusInfo = $true # Boolean |  (optional) (default to $false)

# Returns data inputs for certain index definition and time
try {
    $Result = Invoke-V1IndexdefInputDataIndexDefinitionIdGet -IndexDefinitionId $IndexDefinitionId -Time $Time -EnabledOnly $EnabledOnly -PendingOnly $PendingOnly -FilterAssetId $FilterAssetId -WithStatusInfo $WithStatusInfo
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexdefInputDataIndexDefinitionIdGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexDefinitionId** | **String**|  | 
 **Time** | **System.DateTime**|  | [optional] 
 **EnabledOnly** | **Boolean**|  | [optional] [default to $false]
 **PendingOnly** | **Boolean**|  | [optional] [default to $false]
 **FilterAssetId** | **String**|  | [optional] 
 **WithStatusInfo** | **Boolean**|  | [optional] [default to $false]

### Return type

[**ModelsIndexDefinitionSnapshotEntry[]**](ModelsIndexDefinitionSnapshotEntry.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

