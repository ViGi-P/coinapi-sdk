/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.apis

import java.io.IOException
import okhttp3.Call
import okhttp3.HttpUrl

import org.openapitools.client.models.DTOExtractorType
import org.openapitools.client.models.MvcProblemDetails
import org.openapitools.client.models.MvcValidationProblemDetails

import com.squareup.moshi.Json

import org.openapitools.client.infrastructure.ApiClient
import org.openapitools.client.infrastructure.ApiResponse
import org.openapitools.client.infrastructure.ClientException
import org.openapitools.client.infrastructure.ClientError
import org.openapitools.client.infrastructure.ServerException
import org.openapitools.client.infrastructure.ServerError
import org.openapitools.client.infrastructure.MultiValueMap
import org.openapitools.client.infrastructure.PartConfig
import org.openapitools.client.infrastructure.RequestConfig
import org.openapitools.client.infrastructure.RequestMethod
import org.openapitools.client.infrastructure.ResponseType
import org.openapitools.client.infrastructure.Success
import org.openapitools.client.infrastructure.toMultiValue

class ContentExtractionApi(basePath: kotlin.String = defaultBasePath, client: Call.Factory = ApiClient.defaultClient) : ApiClient(basePath, client) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty(ApiClient.baseUrlKey, "https://api.sec.finfeedapi.com")
        }
    }

    /**
     * GET /v1/extractor
     * Extract and classify SEC filing content
     * Retrieves filing content from the EDGAR database and intelligently classifies it according to form type and item categories.  ### Supported Form Types  Form Type | Description ----------|------------ 8-K      | Current report filing 10-K     | Annual report filing 10-Q     | Quarterly report filing  ### Content Classification - 8-K forms: Content classified by item numbers (e.g., 1.01, 2.01) - 10-K/10-Q forms: Items categorized by their respective part and item structure  :::note Both HTML and plain text documents are supported for content extraction. :::
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param type Result type (text or html, default: text) (optional)
     * @return kotlin.collections.Map<kotlin.String, kotlin.Any>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1ExtractorGet(accessionNumber: kotlin.String, type: DTOExtractorType? = null) : kotlin.collections.Map<kotlin.String, kotlin.Any> {
        val localVarResponse = v1ExtractorGetWithHttpInfo(accessionNumber = accessionNumber, type = type)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.Map<kotlin.String, kotlin.Any>
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * GET /v1/extractor
     * Extract and classify SEC filing content
     * Retrieves filing content from the EDGAR database and intelligently classifies it according to form type and item categories.  ### Supported Form Types  Form Type | Description ----------|------------ 8-K      | Current report filing 10-K     | Annual report filing 10-Q     | Quarterly report filing  ### Content Classification - 8-K forms: Content classified by item numbers (e.g., 1.01, 2.01) - 10-K/10-Q forms: Items categorized by their respective part and item structure  :::note Both HTML and plain text documents are supported for content extraction. :::
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param type Result type (text or html, default: text) (optional)
     * @return ApiResponse<kotlin.collections.Map<kotlin.String, kotlin.Any>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1ExtractorGetWithHttpInfo(accessionNumber: kotlin.String, type: DTOExtractorType?) : ApiResponse<kotlin.collections.Map<kotlin.String, kotlin.Any>?> {
        val localVariableConfig = v1ExtractorGetRequestConfig(accessionNumber = accessionNumber, type = type)

        return request<Unit, kotlin.collections.Map<kotlin.String, kotlin.Any>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1ExtractorGet
     *
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param type Result type (text or html, default: text) (optional)
     * @return RequestConfig
     */
    fun v1ExtractorGetRequestConfig(accessionNumber: kotlin.String, type: DTOExtractorType?) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("accession_number", listOf(accessionNumber.toString()))
                if (type != null) {
                    put("type", listOf(type.toString()))
                }
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/extractor",
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/extractor/item
     * Extract specific item content from SEC filing
     * Retrieves filing content from the EDGAR database and returns only the text content of the specified item number.  ### Item Number Format  Form Type | Item Format Examples -----------|------------------- 8-K       | 1.01, 2.01, 7.01 10-K      | 1, 2, 3 10-K/10-Q | PartI 1, PartII 2  :::tip For best results, ensure the item number matches exactly with the filing&#39;s structure. :::
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param itemNumber The specific item number to extract (e.g., \&quot;1.01\&quot;, \&quot;2.01\&quot;, \&quot;7.01\&quot;).
     * @param type Result type (text or html, default: text) (optional)
     * @return kotlin.String
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1ExtractorItemGet(accessionNumber: kotlin.String, itemNumber: kotlin.String, type: DTOExtractorType? = null) : kotlin.String {
        val localVarResponse = v1ExtractorItemGetWithHttpInfo(accessionNumber = accessionNumber, itemNumber = itemNumber, type = type)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.String
            ResponseType.Informational -> throw UnsupportedOperationException("Client does not support Informational responses.")
            ResponseType.Redirection -> throw UnsupportedOperationException("Client does not support Redirection responses.")
            ResponseType.ClientError -> {
                val localVarError = localVarResponse as ClientError<*>
                throw ClientException("Client error : ${localVarError.statusCode} ${localVarError.message.orEmpty()}", localVarError.statusCode, localVarResponse)
            }
            ResponseType.ServerError -> {
                val localVarError = localVarResponse as ServerError<*>
                throw ServerException("Server error : ${localVarError.statusCode} ${localVarError.message.orEmpty()} ${localVarError.body}", localVarError.statusCode, localVarResponse)
            }
        }
    }

    /**
     * GET /v1/extractor/item
     * Extract specific item content from SEC filing
     * Retrieves filing content from the EDGAR database and returns only the text content of the specified item number.  ### Item Number Format  Form Type | Item Format Examples -----------|------------------- 8-K       | 1.01, 2.01, 7.01 10-K      | 1, 2, 3 10-K/10-Q | PartI 1, PartII 2  :::tip For best results, ensure the item number matches exactly with the filing&#39;s structure. :::
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param itemNumber The specific item number to extract (e.g., \&quot;1.01\&quot;, \&quot;2.01\&quot;, \&quot;7.01\&quot;).
     * @param type Result type (text or html, default: text) (optional)
     * @return ApiResponse<kotlin.String?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1ExtractorItemGetWithHttpInfo(accessionNumber: kotlin.String, itemNumber: kotlin.String, type: DTOExtractorType?) : ApiResponse<kotlin.String?> {
        val localVariableConfig = v1ExtractorItemGetRequestConfig(accessionNumber = accessionNumber, itemNumber = itemNumber, type = type)

        return request<Unit, kotlin.String>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1ExtractorItemGet
     *
     * @param accessionNumber The SEC filing accession number used to retrieve the filing from EDGAR database.
     * @param itemNumber The specific item number to extract (e.g., \&quot;1.01\&quot;, \&quot;2.01\&quot;, \&quot;7.01\&quot;).
     * @param type Result type (text or html, default: text) (optional)
     * @return RequestConfig
     */
    fun v1ExtractorItemGetRequestConfig(accessionNumber: kotlin.String, itemNumber: kotlin.String, type: DTOExtractorType?) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("accession_number", listOf(accessionNumber.toString()))
                put("item_number", listOf(itemNumber.toString()))
                if (type != null) {
                    put("type", listOf(type.toString()))
                }
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/extractor/item",
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }


    private fun encodeURIComponent(uriComponent: kotlin.String): kotlin.String =
        HttpUrl.Builder().scheme("http").host("localhost").addPathSegment(uriComponent).build().encodedPathSegments[0]
}
