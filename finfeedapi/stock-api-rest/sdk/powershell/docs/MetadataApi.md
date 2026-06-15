# PSOpenAPITools.PSOpenAPITools\Api.MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Invoke-V1ExchangesGet**](MetadataApi.md#Invoke-V1ExchangesGet) | **GET** /v1/exchanges | List of exchanges
[**Invoke-V1SymbolsExchangeIdGet**](MetadataApi.md#Invoke-V1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange


<a id="Invoke-V1ExchangesGet"></a>
# **Invoke-V1ExchangesGet**
> FinFeedAPIExchangeModel[] Invoke-V1ExchangesGet<br>

List of exchanges

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"



# List of exchanges
try {
    $Result = Invoke-V1ExchangesGet
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1ExchangesGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**FinFeedAPIExchangeModel[]**](FinFeedAPIExchangeModel.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="Invoke-V1SymbolsExchangeIdGet"></a>
# **Invoke-V1SymbolsExchangeIdGet**
> FinFeedAPISymbolModel[] Invoke-V1SymbolsExchangeIdGet<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-ExchangeId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-FilterSymbolId] <String><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Limit] <System.Nullable[Int32]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Page] <System.Nullable[Int32]><br>

List of symbols for the exchange

Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).

### Example
```powershell
# general setting of the PowerShell module, e.g. base URL, authentication, etc
$Configuration = Get-Configuration
# Configure API key authorization: APIKey
$Configuration.ApiKey.Authorization = "YOUR_API_KEY"
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
#$Configuration.ApiKeyPrefix.Authorization = "Bearer"


$ExchangeId = "MyExchangeId" # String | The ID of the exchange (from the Metadata -> Exchanges)
$FilterSymbolId = "MyFilterSymbolId" # String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`) (optional)
$Limit = 56 # Int32 | Maximum number of symbols to return (1-10000, default 100) (optional) (default to 100)
$Page = 56 # Int32 | Page number (1-based, default 1) (optional) (default to 1)

# List of symbols for the exchange
try {
    $Result = Invoke-V1SymbolsExchangeIdGet -ExchangeId $ExchangeId -FilterSymbolId $FilterSymbolId -Limit $Limit -Page $Page
} catch {
    Write-Host ("Exception occurred when calling Invoke-V1SymbolsExchangeIdGet: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **ExchangeId** | **String**| The ID of the exchange (from the Metadata -&gt; Exchanges) | 
 **FilterSymbolId** | **String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] 
 **Limit** | **Int32**| Maximum number of symbols to return (1-10000, default 100) | [optional] [default to 100]
 **Page** | **Int32**| Page number (1-based, default 1) | [optional] [default to 1]

### Return type

[**FinFeedAPISymbolModel[]**](FinFeedAPISymbolModel.md) (PSCustomObject)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

