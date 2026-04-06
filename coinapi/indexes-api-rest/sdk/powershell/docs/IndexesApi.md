# PSOpenAPITools.PSOpenAPITools\Api.IndexesApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Invoke-V1IndexesGet**](IndexesApi.md#Invoke-V1IndexesGet) | **GET** /v1/indexes | List indexes
[**Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet**](IndexesApi.md#Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet) | **GET** /v1/indexes/{index_definition_id}/currentSnapshot | Current Index Values for index definition
[**Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet**](IndexesApi.md#Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet) | **GET** /v1/indexes/{index_definition_id}/historySnapshot | Historical Index Values for index definition
[**Invoke-V1IndexesIndexIdCurrentGet**](IndexesApi.md#Invoke-V1IndexesIndexIdCurrentGet) | **GET** /v1/indexes/{index_id}/current | Current Index Value
[**Invoke-V1IndexesIndexIdHistoryGet**](IndexesApi.md#Invoke-V1IndexesIndexIdHistoryGet) | **GET** /v1/indexes/{index_id}/history | Historical Index Value w/Composition
[**Invoke-V1IndexesIndexIdTimeseriesGet**](IndexesApi.md#Invoke-V1IndexesIndexIdTimeseriesGet) | **GET** /v1/indexes/{index_id}/timeseries | Timeseries Index Value


<a id="Invoke-V1IndexesGet"></a>
# **Invoke-V1IndexesGet**
> ModelsIndexIdentifier[] Invoke-V1IndexesGet<br>

List indexes

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



# List indexes
try {
    $Result = Invoke-V1IndexesGet
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**ModelsIndexIdentifier[]**](ModelsIndexIdentifier.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet"></a>
# **Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet**
> ModelsIndexDefinitionSnapshotEntry[] Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexDefinitionId] <String><br>

Current Index Values for index definition

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexDefinitionId = "MyIndexDefinitionId" # String | 

# Current Index Values for index definition
try {
    $Result = Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet -IndexDefinitionId $IndexDefinitionId
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesIndexDefinitionIdCurrentSnapshotGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexDefinitionId** | **String**|  | 

### Return type

[**ModelsIndexDefinitionSnapshotEntry[]**](ModelsIndexDefinitionSnapshotEntry.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet"></a>
# **Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet**
> ModelsIndexDefinitionSnapshotEntry[] Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexDefinitionId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Time] <System.Nullable[System.DateTime]><br>

Historical Index Values for index definition

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

# Historical Index Values for index definition
try {
    $Result = Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet -IndexDefinitionId $IndexDefinitionId -Time $Time
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesIndexDefinitionIdHistorySnapshotGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexDefinitionId** | **String**|  | 
 **Time** | **System.DateTime**|  | [optional] 

### Return type

[**ModelsIndexDefinitionSnapshotEntry[]**](ModelsIndexDefinitionSnapshotEntry.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexesIndexIdCurrentGet"></a>
# **Invoke-V1IndexesIndexIdCurrentGet**
> ModelsIndexValue Invoke-V1IndexesIndexIdCurrentGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexId] <String><br>

Current Index Value

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexId = "MyIndexId" # String | 

# Current Index Value
try {
    $Result = Invoke-V1IndexesIndexIdCurrentGet -IndexId $IndexId
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesIndexIdCurrentGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexId** | **String**|  | 

### Return type

[**ModelsIndexValue**](ModelsIndexValue.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexesIndexIdHistoryGet"></a>
# **Invoke-V1IndexesIndexIdHistoryGet**
> ModelsIndexValue[] Invoke-V1IndexesIndexIdHistoryGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-TimeStart] <System.Nullable[System.DateTime]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-TimeEnd] <System.Nullable[System.DateTime]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Limit] <System.Nullable[Int32]><br>

Historical Index Value w/Composition

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexId = "MyIndexId" # String | 
$TimeStart = (Get-Date) # System.DateTime |  (optional)
$TimeEnd = (Get-Date) # System.DateTime |  (optional)
$Limit = 56 # Int32 |  (optional) (default to 100)

# Historical Index Value w/Composition
try {
    $Result = Invoke-V1IndexesIndexIdHistoryGet -IndexId $IndexId -TimeStart $TimeStart -TimeEnd $TimeEnd -Limit $Limit
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesIndexIdHistoryGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexId** | **String**|  | 
 **TimeStart** | **System.DateTime**|  | [optional] 
 **TimeEnd** | **System.DateTime**|  | [optional] 
 **Limit** | **Int32**|  | [optional] [default to 100]

### Return type

[**ModelsIndexValue[]**](ModelsIndexValue.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1IndexesIndexIdTimeseriesGet"></a>
# **Invoke-V1IndexesIndexIdTimeseriesGet**
> ModelsIndexTimeseriesItem[] Invoke-V1IndexesIndexIdTimeseriesGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-IndexId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-PeriodId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-TimeStart] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-TimeEnd] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Limit] <System.Nullable[Int32]><br>

Timeseries Index Value

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$IndexId = "MyIndexId" # String | 
$PeriodId = "MyPeriodId" # String | Identifier of requested timeseries period (e.g. `5SEC` or `1DAY`)
$TimeStart = "MyTimeStart" # String | Timeseries starting time in ISO 8601
$TimeEnd = "MyTimeEnd" # String | Timeseries ending time in ISO 8601
$Limit = 56 # Int32 | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (optional) (default to 100)

# Timeseries Index Value
try {
    $Result = Invoke-V1IndexesIndexIdTimeseriesGet -IndexId $IndexId -PeriodId $PeriodId -TimeStart $TimeStart -TimeEnd $TimeEnd -Limit $Limit
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1IndexesIndexIdTimeseriesGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **IndexId** | **String**|  | 
 **PeriodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;5SEC&#x60; or &#x60;1DAY&#x60;) | 
 **TimeStart** | **String**| Timeseries starting time in ISO 8601 | 
 **TimeEnd** | **String**| Timeseries ending time in ISO 8601 | 
 **Limit** | **Int32**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100]

### Return type

[**ModelsIndexTimeseriesItem[]**](ModelsIndexTimeseriesItem.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

