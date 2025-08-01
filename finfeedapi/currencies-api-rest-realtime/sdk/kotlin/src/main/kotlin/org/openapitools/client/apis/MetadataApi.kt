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

import org.openapitools.client.models.V1Asset
import org.openapitools.client.models.V1Icon

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

class MetadataApi(basePath: kotlin.String = defaultBasePath, client: Call.Factory = ApiClient.defaultClient) : ApiClient(basePath, client) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty(ApiClient.baseUrlKey, "https://api-realtime.fx.finfeedapi.com")
        }
    }

    /**
     * GET /v1/assets/{asset_id}
     * List all assets by asset ID
     * 
     * @param assetId The asset ID.
     * @return kotlin.collections.List<V1Asset>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1AssetsAssetIdGet(assetId: kotlin.String) : kotlin.collections.List<V1Asset> {
        val localVarResponse = v1AssetsAssetIdGetWithHttpInfo(assetId = assetId)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<V1Asset>
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
     * GET /v1/assets/{asset_id}
     * List all assets by asset ID
     * 
     * @param assetId The asset ID.
     * @return ApiResponse<kotlin.collections.List<V1Asset>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1AssetsAssetIdGetWithHttpInfo(assetId: kotlin.String) : ApiResponse<kotlin.collections.List<V1Asset>?> {
        val localVariableConfig = v1AssetsAssetIdGetRequestConfig(assetId = assetId)

        return request<Unit, kotlin.collections.List<V1Asset>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1AssetsAssetIdGet
     *
     * @param assetId The asset ID.
     * @return RequestConfig
     */
    fun v1AssetsAssetIdGetRequestConfig(assetId: kotlin.String) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "text/plain, application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/assets/{asset_id}".replace("{"+"asset_id"+"}", encodeURIComponent(assetId.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/assets
     * List all assets
     * Retrieves all assets.              :::info Our asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency). :::              :::info Properties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::
     * @param filterAssetId Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. &#x60;BTC;ETH&#x60;). (optional)
     * @return kotlin.collections.List<V1Asset>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1AssetsGet(filterAssetId: kotlin.String? = null) : kotlin.collections.List<V1Asset> {
        val localVarResponse = v1AssetsGetWithHttpInfo(filterAssetId = filterAssetId)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<V1Asset>
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
     * GET /v1/assets
     * List all assets
     * Retrieves all assets.              :::info Our asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency). :::              :::info Properties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::
     * @param filterAssetId Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. &#x60;BTC;ETH&#x60;). (optional)
     * @return ApiResponse<kotlin.collections.List<V1Asset>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1AssetsGetWithHttpInfo(filterAssetId: kotlin.String?) : ApiResponse<kotlin.collections.List<V1Asset>?> {
        val localVariableConfig = v1AssetsGetRequestConfig(filterAssetId = filterAssetId)

        return request<Unit, kotlin.collections.List<V1Asset>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1AssetsGet
     *
     * @param filterAssetId Comma or semicolon delimited asset identifiers used to filter response. (optional, eg. &#x60;BTC;ETH&#x60;). (optional)
     * @return RequestConfig
     */
    fun v1AssetsGetRequestConfig(filterAssetId: kotlin.String?) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                if (filterAssetId != null) {
                    put("filter_asset_id", listOf(filterAssetId.toString()))
                }
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "text/plain, application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/assets",
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/assets/icons/{size}
     * List all asset icons
     * Gets the list of icons (of the given size) for all the assets.
     * @param size The size of the icons.
     * @return kotlin.collections.List<V1Icon>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1AssetsIconsSizeGet(size: kotlin.Int) : kotlin.collections.List<V1Icon> {
        val localVarResponse = v1AssetsIconsSizeGetWithHttpInfo(size = size)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<V1Icon>
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
     * GET /v1/assets/icons/{size}
     * List all asset icons
     * Gets the list of icons (of the given size) for all the assets.
     * @param size The size of the icons.
     * @return ApiResponse<kotlin.collections.List<V1Icon>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1AssetsIconsSizeGetWithHttpInfo(size: kotlin.Int) : ApiResponse<kotlin.collections.List<V1Icon>?> {
        val localVariableConfig = v1AssetsIconsSizeGetRequestConfig(size = size)

        return request<Unit, kotlin.collections.List<V1Icon>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1AssetsIconsSizeGet
     *
     * @param size The size of the icons.
     * @return RequestConfig
     */
    fun v1AssetsIconsSizeGetRequestConfig(size: kotlin.Int) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf()
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "text/plain, application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/assets/icons/{size}".replace("{"+"size"+"}", encodeURIComponent(size.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }


    private fun encodeURIComponent(uriComponent: kotlin.String): kotlin.String =
        HttpUrl.Builder().scheme("http").host("localhost").addPathSegment(uriComponent).build().encodedPathSegments[0]
}
