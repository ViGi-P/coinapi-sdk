# TradesApi

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**v1TradesLatestGet**](TradesApi.md#v1TradesLatestGet) | **GET** /v1/trades/latest | Latest data |
| [**v1TradesSymbolIdHistoryGet**](TradesApi.md#v1TradesSymbolIdHistoryGet) | **GET** /v1/trades/{symbol_id}/history | Historical data |
| [**v1TradesSymbolIdLatestGet**](TradesApi.md#v1TradesSymbolIdLatestGet) | **GET** /v1/trades/{symbol_id}/latest | Latest data by symbol_id |


<a id="v1TradesLatestGet"></a>
# **v1TradesLatestGet**
> List&lt;V1Trade&gt; v1TradesLatestGet(filterSymbolId, includeId, limit)

Latest data

Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TradesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://rest.coinapi.io");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    TradesApi apiInstance = new TradesApi(defaultClient);
    String filterSymbolId = "filterSymbolId_example"; // String | Comma or semicolon delimited parts of symbol identifier used to filter response. (optional)
    Boolean includeId = false; // Boolean | Information that additional exchange trade identifier should be included in the `id_trade` parameter of the trade if exchange providing identifiers.
    Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    try {
      List<V1Trade> result = apiInstance.v1TradesLatestGet(filterSymbolId, includeId, limit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TradesApi#v1TradesLatestGet");
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
| **filterSymbolId** | **String**| Comma or semicolon delimited parts of symbol identifier used to filter response. (optional) | [optional] |
| **includeId** | **Boolean**| Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |
| **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="v1TradesSymbolIdHistoryGet"></a>
# **v1TradesSymbolIdHistoryGet**
> List&lt;V1Trade&gt; v1TradesSymbolIdHistoryGet(symbolId, date, timeStart, timeEnd, limit, includeId)

Historical data

Get history transactions from specific symbol, returned in time ascending order.  :::warning The &#39;time_start&#39; and &#39;time_end&#39; parameters must be from the same day as this endpoint provides intraday data only for specific day. Please use the &#39;date&#39; parameter instead for querying data for a specific day without filter. :::

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TradesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://rest.coinapi.io");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    TradesApi apiInstance = new TradesApi(defaultClient);
    String symbolId = "symbolId_example"; // String | Symbol identifier for requested timeseries (from the Metadata -> Symbols)
    String date = "date_example"; // String | Date in ISO 8601, returned data is for the whole given day (required if 'time_start' is not provided)
    String timeStart = "timeStart_example"; // String | Starting time in ISO 8601
    String timeEnd = "timeEnd_example"; // String | Timeseries ending time in ISO 8601
    Integer limit = 100; // Integer | Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    Boolean includeId = false; // Boolean | Information that additional exchange trade identifier should be included in the `id_trade` parameter of the trade if exchange providing identifiers.
    try {
      List<V1Trade> result = apiInstance.v1TradesSymbolIdHistoryGet(symbolId, date, timeStart, timeEnd, limit, includeId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TradesApi#v1TradesSymbolIdHistoryGet");
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
| **symbolId** | **String**| Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols) | |
| **date** | **String**| Date in ISO 8601, returned data is for the whole given day (required if &#39;time_start&#39; is not provided) | [optional] |
| **timeStart** | **String**| Starting time in ISO 8601 | [optional] |
| **timeEnd** | **String**| Timeseries ending time in ISO 8601 | [optional] |
| **limit** | **Integer**| Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |
| **includeId** | **Boolean**| Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="v1TradesSymbolIdLatestGet"></a>
# **v1TradesSymbolIdLatestGet**
> List&lt;V1Trade&gt; v1TradesSymbolIdLatestGet(symbolId, limit, includeId)

Latest data by symbol_id

Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.TradesApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://rest.coinapi.io");
    
    // Configure API key authorization: APIKey
    ApiKeyAuth APIKey = (ApiKeyAuth) defaultClient.getAuthentication("APIKey");
    APIKey.setApiKey("YOUR API KEY");
    // Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
    //APIKey.setApiKeyPrefix("Token");

    // Configure HTTP bearer authorization: JWT
    HttpBearerAuth JWT = (HttpBearerAuth) defaultClient.getAuthentication("JWT");
    JWT.setBearerToken("BEARER TOKEN");

    TradesApi apiInstance = new TradesApi(defaultClient);
    String symbolId = "symbolId_example"; // String | Symbol identifier for requested timeseries (from the Metadata -> Symbols)
    Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    Boolean includeId = false; // Boolean | Information that additional exchange trade identifier should be included in the `id_trade` parameter of the trade if exchange providing identifiers.
    try {
      List<V1Trade> result = apiInstance.v1TradesSymbolIdLatestGet(symbolId, limit, includeId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling TradesApi#v1TradesSymbolIdLatestGet");
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
| **symbolId** | **String**| Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols) | |
| **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |
| **includeId** | **Boolean**| Information that additional exchange trade identifier should be included in the &#x60;id_trade&#x60; parameter of the trade if exchange providing identifiers. | [optional] [default to false] |

### Return type

[**List&lt;V1Trade&gt;**](V1Trade.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

