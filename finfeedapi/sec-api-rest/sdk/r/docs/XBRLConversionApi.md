# XBRLConversionApi

All URIs are relative to *https://api.sec.finfeedapi.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V1XbrlConverterGet**](XBRLConversionApi.md#V1XbrlConverterGet) | **GET** /v1/xbrl-converter | Convert XBRL data to JSON format


# **V1XbrlConverterGet**
> map(AnyType) V1XbrlConverterGet(htm_url = var.htm_url, xbrl_url = var.xbrl_url, accession_no = var.accession_no)

Convert XBRL data to JSON format

Converts XBRL data to JSON format using one of three possible input methods.  ### Input Methods  1. HTML URL (htm-url)    - URL of the filing ending with .htm or .html    - Both filing URLs and index page URLs are accepted    - Example: https://www.sec.gov/Archives/edgar/data/1318605/000156459021004599/tsla-10k_20201231.htm  2. XBRL URL (xbrl-url)    - URL of the XBRL file ending with .xml    - Can be found in the dataFiles array from Query API    - Example: https://www.sec.gov/Archives/edgar/data/1318605/000156459021004599/tsla-10k_20201231_htm.xml  3. Accession Number (accession-no)    - The SEC filing accession number    - Example: 0001564590-21-004599  :::note Only one of the three parameters should be provided. If multiple parameters are provided, the priority order is: 1. htm-url 2. xbrl-url 3. accession-no :::  ### Supported Filing Types  - Annual Reports (10-K) - Quarterly Reports (10-Q) - Current Reports (8-K) - Registration Statements (S-1, S-3) - Foreign Private Issuer Reports (20-F, 40-F)  ### Response Format  The API returns a JSON object containing: - Financial statements (Income Statement, Balance Sheet, Cash Flow Statement) - Accounting policies and footnotes - Company information - Filing metadata  ### Example Response ```json {   \"StatementsOfIncome\": {     \"RevenueFromContractWithCustomerExcludingAssessedTax\": [       {         \"decimals\": \"-6\",         \"unitRef\": \"U_USD\",         \"period\": {           \"startDate\": \"2023-07-01\",           \"endDate\": \"2024-06-30\"         },         \"value\": \"245122000000\"       }     ]   } } ```

### Example
```R
library(openapi)

# Convert XBRL data to JSON format
#
# prepare function argument(s)
var_htm_url <- "htm_url_example" # character | URL of the filing ending with .htm or .html (Optional)
var_xbrl_url <- "xbrl_url_example" # character | URL of the XBRL file ending with .xml (Optional)
var_accession_no <- "accession_no_example" # character | SEC filing accession number (Optional)

api_instance <- XBRLConversionApi$new()
# Configure API key authorization: APIKey
api_instance$api_client$api_keys["Authorization"] <- Sys.getenv("API_KEY")
# Configure HTTP bearer authorization: JWT
# api_instance$api_client$bearer_token <- Sys.getenv("BEARER_TOKEN")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$V1XbrlConverterGet(htm_url = var_htm_url, xbrl_url = var_xbrl_url, accession_no = var_accession_nodata_file = "result.txt")
result <- api_instance$V1XbrlConverterGet(htm_url = var_htm_url, xbrl_url = var_xbrl_url, accession_no = var_accession_no)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **htm_url** | **character**| URL of the filing ending with .htm or .html | [optional] 
 **xbrl_url** | **character**| URL of the XBRL file ending with .xml | [optional] 
 **accession_no** | **character**| SEC filing accession number | [optional] 

### Return type

[**map(AnyType)**](AnyType.md)

### Authorization

[APIKey](../README.md#APIKey), [JWT](../README.md#JWT)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Successful conversion |  -  |
| **400** | Invalid request - check parameter format |  -  |
| **404** | Filing or XBRL data not found |  -  |
| **500** | Server error |  -  |

