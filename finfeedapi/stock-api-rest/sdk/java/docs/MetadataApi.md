# MetadataApi

All URIs are relative to *https://api-historical.stock.finfeedapi.com*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**v1ExchangesGet**](MetadataApi.md#v1ExchangesGet) | **GET** /v1/exchanges | List of exchanges |
| [**v1SymbolsExchangeIdGet**](MetadataApi.md#v1SymbolsExchangeIdGet) | **GET** /v1/symbols/{exchange_id} | List of symbols for the exchange |


<a id="v1ExchangesGet"></a>
# **v1ExchangesGet**
> List&lt;FinFeedAPIExchangeModel&gt; v1ExchangesGet()

List of exchanges

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetadataApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api-historical.stock.finfeedapi.com");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    MetadataApi apiInstance = new MetadataApi(defaultClient);
    try {
      List<FinFeedAPIExchangeModel> result = apiInstance.v1ExchangesGet();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetadataApi#v1ExchangesGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**List&lt;FinFeedAPIExchangeModel&gt;**](FinFeedAPIExchangeModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="v1SymbolsExchangeIdGet"></a>
# **v1SymbolsExchangeIdGet**
> List&lt;FinFeedAPISymbolModel&gt; v1SymbolsExchangeIdGet(exchangeId, filterSymbolId)

List of symbols for the exchange

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetadataApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://api-historical.stock.finfeedapi.com");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    MetadataApi apiInstance = new MetadataApi(defaultClient);
    String exchangeId = "exchangeId_example"; // String | The ID of the exchange (from the Metadata -> Exchanges)
    String filterSymbolId = "filterSymbolId_example"; // String | Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. `TSLA` or `TSLA,NVDA`)
    try {
      List<FinFeedAPISymbolModel> result = apiInstance.v1SymbolsExchangeIdGet(exchangeId, filterSymbolId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetadataApi#v1SymbolsExchangeIdGet");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **exchangeId** | **String**| The ID of the exchange (from the Metadata -&gt; Exchanges) | |
| **filterSymbolId** | **String**| Comma or semicolon delimited symbol identifiers used to filter response (optional, eg. &#x60;TSLA&#x60; or &#x60;TSLA,NVDA&#x60;) | [optional] |

### Return type

[**List&lt;FinFeedAPISymbolModel&gt;**](FinFeedAPISymbolModel.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

