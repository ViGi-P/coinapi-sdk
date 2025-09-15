# APIBricks.CoinAPI.IndexesAPI.REST.V1.Api.PeriodsApi

All URIs are relative to *https://rest-api.indexes.coinapi.io*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**V1MetadataPeriodsGet**](PeriodsApi.md#v1metadataperiodsget) | **GET** /v1/metadata/periods | List all periods |

<a id="v1metadataperiodsget"></a>
# **V1MetadataPeriodsGet**
> List&lt;MetadataTimeseriesPeriod&gt; V1MetadataPeriodsGet ()

List all periods

Get full list of supported time periods              ### Available periods              Time unit | Period identifiers - -- -- -- -- | - -- -- -- -- -- Second | 1SEC, 2SEC, 3SEC, 4SEC, 5SEC, 6SEC, 10SEC, 15SEC, 20SEC, 30SEC Minute | 1MIN, 2MIN, 3MIN, 4MIN, 5MIN, 6MIN, 10MIN, 15MIN, 20MIN, 30MIN Hour | 1HRS, 2HRS, 3HRS, 4HRS, 6HRS, 8HRS, 12HRS Day | 1DAY, 2DAY, 3DAY, 5DAY, 7DAY, 10DAY Month | 1MTH, 2MTH, 3MTH, 4MTH, 6MTH Year | 1YRS, 2YRS, 3YRS, 4YRS, 5YRS              :::tip You can assume that we will not remove any periods from this response, however, we may add new ones. :::


### Parameters
This endpoint does not need any parameter.
### Return type

[**List&lt;MetadataTimeseriesPeriod&gt;**](MetadataTimeseriesPeriod.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain, application/json, text/json, application/x-msgpack


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | successful operation |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

