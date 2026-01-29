# MetricsV2Api

All URIs are relative to *https://rest.coinapi.io*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**marketdataListMetricsV2AssetHistory**](MetricsV2Api.md#marketdataListMetricsV2AssetHistory) | **GET** /v2/metrics/asset/history | Historical metrics for the asset |
| [**marketdataListMetricsV2AssetListing**](MetricsV2Api.md#marketdataListMetricsV2AssetListing) | **GET** /v2/metrics/asset/listing | Listing of metrics available for specific asset |
| [**marketdataListMetricsV2ChainHistory**](MetricsV2Api.md#marketdataListMetricsV2ChainHistory) | **GET** /v2/metrics/chain/history | Historical metrics for the chain |
| [**marketdataListMetricsV2ChainListing**](MetricsV2Api.md#marketdataListMetricsV2ChainListing) | **GET** /v2/metrics/chain/listing | Listing of metrics available for specific chain |
| [**marketdataListMetricsV2ExchangeHistory**](MetricsV2Api.md#marketdataListMetricsV2ExchangeHistory) | **GET** /v2/metrics/exchange/history | Historical metrics for the exchange |
| [**marketdataListMetricsV2ExchangeListing**](MetricsV2Api.md#marketdataListMetricsV2ExchangeListing) | **GET** /v2/metrics/exchange/listing | Listing of metrics available for specific exchange |
| [**marketdataListMetricsV2Listing**](MetricsV2Api.md#marketdataListMetricsV2Listing) | **GET** /v2/metrics/listing | Listing of all supported metrics |


<a id="marketdataListMetricsV2AssetHistory"></a>
# **marketdataListMetricsV2AssetHistory**
> List&lt;Object&gt; marketdataListMetricsV2AssetHistory(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the asset

Get asset metrics history.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String metricId = "metricId_example"; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
    String assetId = "assetId_example"; // String | Asset identifier (e.g., `USDC`, `USDT`)
    OffsetDateTime timeStart = OffsetDateTime.now(); // OffsetDateTime | Starting time in ISO 8601
    OffsetDateTime timeEnd = OffsetDateTime.now(); // OffsetDateTime | Ending time in ISO 8601
    String timeFormat = "timeFormat_example"; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
    String periodId = "periodId_example"; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
    Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    try {
      List<Object> result = apiInstance.marketdataListMetricsV2AssetHistory(metricId, assetId, timeStart, timeEnd, timeFormat, periodId, limit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetHistory");
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
| **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | |
| **assetId** | **String**| Asset identifier (e.g., &#x60;USDC&#x60;, &#x60;USDT&#x60;) | |
| **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional] |
| **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional] |
| **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid asset_id. |  -  |
| **500** | Internal server error. |  -  |

<a id="marketdataListMetricsV2AssetListing"></a>
# **marketdataListMetricsV2AssetListing**
> List&lt;V1MetricInfo&gt; marketdataListMetricsV2AssetListing(assetId)

Listing of metrics available for specific asset

Get all metrics that are actually available for the specified asset.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String assetId = "assetId_example"; // String | Asset identifier (e.g., USDC, USDT)
    try {
      List<V1MetricInfo> result = apiInstance.marketdataListMetricsV2AssetListing(assetId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2AssetListing");
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
| **assetId** | **String**| Asset identifier (e.g., USDC, USDT) | |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="marketdataListMetricsV2ChainHistory"></a>
# **marketdataListMetricsV2ChainHistory**
> List&lt;Object&gt; marketdataListMetricsV2ChainHistory(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the chain

Get chain metrics history.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String metricId = "metricId_example"; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
    String chainId = "chainId_example"; // String | Chain identifier (e.g., `Ethereum`, `Arbitrum`)
    OffsetDateTime timeStart = OffsetDateTime.now(); // OffsetDateTime | Starting time in ISO 8601
    OffsetDateTime timeEnd = OffsetDateTime.now(); // OffsetDateTime | Ending time in ISO 8601
    String timeFormat = "timeFormat_example"; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
    String periodId = "periodId_example"; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
    Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    try {
      List<Object> result = apiInstance.marketdataListMetricsV2ChainHistory(metricId, chainId, timeStart, timeEnd, timeFormat, periodId, limit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainHistory");
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
| **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | |
| **chainId** | **String**| Chain identifier (e.g., &#x60;Ethereum&#x60;, &#x60;Arbitrum&#x60;) | |
| **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional] |
| **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional] |
| **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid chain_id. |  -  |
| **500** | Internal server error. |  -  |

<a id="marketdataListMetricsV2ChainListing"></a>
# **marketdataListMetricsV2ChainListing**
> List&lt;V1MetricInfo&gt; marketdataListMetricsV2ChainListing(chainId)

Listing of metrics available for specific chain

Get all metrics that are actually available for the specified blockchain chain.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String chainId = "chainId_example"; // String | Chain identifier (e.g., ETHEREUM, ARBITRUM)
    try {
      List<V1MetricInfo> result = apiInstance.marketdataListMetricsV2ChainListing(chainId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ChainListing");
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
| **chainId** | **String**| Chain identifier (e.g., ETHEREUM, ARBITRUM) | |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="marketdataListMetricsV2ExchangeHistory"></a>
# **marketdataListMetricsV2ExchangeHistory**
> List&lt;Object&gt; marketdataListMetricsV2ExchangeHistory(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit)

Historical metrics for the exchange

Get exchange metrics history.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String metricId = "metricId_example"; // String | Metric identifier (e.g., `TVL`, `STABLES_BRIDGED_USD`)
    String exchangeId = "exchangeId_example"; // String | Exchange identifier (e.g., `BINANCE`, `UNISWAP-V3-ETHEREUM`)
    OffsetDateTime timeStart = OffsetDateTime.now(); // OffsetDateTime | Starting time in ISO 8601
    OffsetDateTime timeEnd = OffsetDateTime.now(); // OffsetDateTime | Ending time in ISO 8601
    String timeFormat = "timeFormat_example"; // String | If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec)
    String periodId = "periodId_example"; // String | Identifier of requested timeseries period (e.g. `1MIN` or `2MTH`), default value is `1MIN`
    Integer limit = 100; // Integer | Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
    try {
      List<Object> result = apiInstance.marketdataListMetricsV2ExchangeHistory(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeHistory");
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
| **metricId** | **String**| Metric identifier (e.g., &#x60;TVL&#x60;, &#x60;STABLES_BRIDGED_USD&#x60;) | |
| **exchangeId** | **String**| Exchange identifier (e.g., &#x60;BINANCE&#x60;, &#x60;UNISWAP-V3-ETHEREUM&#x60;) | |
| **timeStart** | **OffsetDateTime**| Starting time in ISO 8601 | [optional] |
| **timeEnd** | **OffsetDateTime**| Ending time in ISO 8601 | [optional] |
| **timeFormat** | **String**| If set, returned values will be in unix timestamp format (valid values: unix_sec, unix_millisec, unix_microsec, unix_nanosec) | [optional] |
| **periodId** | **String**| Identifier of requested timeseries period (e.g. &#x60;1MIN&#x60; or &#x60;2MTH&#x60;), default value is &#x60;1MIN&#x60; | [optional] |
| **limit** | **Integer**| Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) | [optional] [default to 100] |

### Return type

**List&lt;Object&gt;**

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |
| **400** | Invalid input, e.g., missing required parameters, invalid exchange_id mapping. |  -  |
| **500** | Internal server error. |  -  |

<a id="marketdataListMetricsV2ExchangeListing"></a>
# **marketdataListMetricsV2ExchangeListing**
> List&lt;V1MetricInfo&gt; marketdataListMetricsV2ExchangeListing(exchangeId)

Listing of metrics available for specific exchange

Get all metrics that are actually available for the specified exchange.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    String exchangeId = "exchangeId_example"; // String | Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM)
    try {
      List<V1MetricInfo> result = apiInstance.marketdataListMetricsV2ExchangeListing(exchangeId);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2ExchangeListing");
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
| **exchangeId** | **String**| Exchange identifier (e.g., BINANCE, UNISWAP-V3-ETHEREUM) | |

### Return type

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

<a id="marketdataListMetricsV2Listing"></a>
# **marketdataListMetricsV2Listing**
> List&lt;V1MetricInfo&gt; marketdataListMetricsV2Listing()

Listing of all supported metrics

Get all metrics available in the system.

### Example
```java
// Import classes:
import org.openapitools.client.ApiClient;
import org.openapitools.client.ApiException;
import org.openapitools.client.Configuration;
import org.openapitools.client.auth.*;
import org.openapitools.client.models.*;
import org.openapitools.client.api.MetricsV2Api;

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

    MetricsV2Api apiInstance = new MetricsV2Api(defaultClient);
    try {
      List<V1MetricInfo> result = apiInstance.marketdataListMetricsV2Listing();
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling MetricsV2Api#marketdataListMetricsV2Listing");
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

[**List&lt;V1MetricInfo&gt;**](V1MetricInfo.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

