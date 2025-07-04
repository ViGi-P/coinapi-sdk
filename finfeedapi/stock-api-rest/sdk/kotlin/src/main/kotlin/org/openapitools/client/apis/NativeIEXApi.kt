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

import org.openapitools.client.models.AdminAdminMessageModel
import org.openapitools.client.models.AdminSystemEventModel
import org.openapitools.client.models.Level1QuoteUpdateModel
import org.openapitools.client.models.Level2PriceLevelUpdateModel
import org.openapitools.client.models.Level3OrderBookModel
import org.openapitools.client.models.TradeTradeModel

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

class NativeIEXApi(basePath: kotlin.String = defaultBasePath, client: Call.Factory = ApiClient.defaultClient) : ApiClient(basePath, client) {
    companion object {
        @JvmStatic
        val defaultBasePath: String by lazy {
            System.getProperties().getProperty(ApiClient.baseUrlKey, "https://api-historical.stock.finfeedapi.com")
        }
    }

    /**
     * GET /v1/native/iex/admin/messages/{symbol}
     * Get Admin Messages
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return kotlin.collections.List<AdminAdminMessageModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexAdminMessagesSymbolGet(symbol: kotlin.String, date: java.time.OffsetDateTime) : kotlin.collections.List<AdminAdminMessageModel> {
        val localVarResponse = v1NativeIexAdminMessagesSymbolGetWithHttpInfo(symbol = symbol, date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<AdminAdminMessageModel>
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
     * GET /v1/native/iex/admin/messages/{symbol}
     * Get Admin Messages
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return ApiResponse<kotlin.collections.List<AdminAdminMessageModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexAdminMessagesSymbolGetWithHttpInfo(symbol: kotlin.String, date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<AdminAdminMessageModel>?> {
        val localVariableConfig = v1NativeIexAdminMessagesSymbolGetRequestConfig(symbol = symbol, date = date)

        return request<Unit, kotlin.collections.List<AdminAdminMessageModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexAdminMessagesSymbolGet
     *
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return RequestConfig
     */
    fun v1NativeIexAdminMessagesSymbolGetRequestConfig(symbol: kotlin.String, date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/admin/messages/{symbol}".replace("{"+"symbol"+"}", encodeURIComponent(symbol.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/native/iex/admin/system-event
     * Get System Events
     * 
     * @param date Date in format YYYY-MM-DD
     * @return kotlin.collections.List<AdminSystemEventModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexAdminSystemEventGet(date: java.time.OffsetDateTime) : kotlin.collections.List<AdminSystemEventModel> {
        val localVarResponse = v1NativeIexAdminSystemEventGetWithHttpInfo(date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<AdminSystemEventModel>
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
     * GET /v1/native/iex/admin/system-event
     * Get System Events
     * 
     * @param date Date in format YYYY-MM-DD
     * @return ApiResponse<kotlin.collections.List<AdminSystemEventModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexAdminSystemEventGetWithHttpInfo(date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<AdminSystemEventModel>?> {
        val localVariableConfig = v1NativeIexAdminSystemEventGetRequestConfig(date = date)

        return request<Unit, kotlin.collections.List<AdminSystemEventModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexAdminSystemEventGet
     *
     * @param date Date in format YYYY-MM-DD
     * @return RequestConfig
     */
    fun v1NativeIexAdminSystemEventGetRequestConfig(date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/admin/system-event",
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/native/iex/level1-quote/{symbol}
     * Get Level-1 Quotes
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return kotlin.collections.List<Level1QuoteUpdateModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexLevel1QuoteSymbolGet(symbol: kotlin.String, date: java.time.OffsetDateTime) : kotlin.collections.List<Level1QuoteUpdateModel> {
        val localVarResponse = v1NativeIexLevel1QuoteSymbolGetWithHttpInfo(symbol = symbol, date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<Level1QuoteUpdateModel>
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
     * GET /v1/native/iex/level1-quote/{symbol}
     * Get Level-1 Quotes
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return ApiResponse<kotlin.collections.List<Level1QuoteUpdateModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexLevel1QuoteSymbolGetWithHttpInfo(symbol: kotlin.String, date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<Level1QuoteUpdateModel>?> {
        val localVariableConfig = v1NativeIexLevel1QuoteSymbolGetRequestConfig(symbol = symbol, date = date)

        return request<Unit, kotlin.collections.List<Level1QuoteUpdateModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexLevel1QuoteSymbolGet
     *
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return RequestConfig
     */
    fun v1NativeIexLevel1QuoteSymbolGetRequestConfig(symbol: kotlin.String, date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/level1-quote/{symbol}".replace("{"+"symbol"+"}", encodeURIComponent(symbol.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/native/iex/level2-price-level-update/{symbol}
     * Get Level-2 Price Level Book
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return kotlin.collections.List<Level2PriceLevelUpdateModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexLevel2PriceLevelUpdateSymbolGet(symbol: kotlin.String, date: java.time.OffsetDateTime) : kotlin.collections.List<Level2PriceLevelUpdateModel> {
        val localVarResponse = v1NativeIexLevel2PriceLevelUpdateSymbolGetWithHttpInfo(symbol = symbol, date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<Level2PriceLevelUpdateModel>
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
     * GET /v1/native/iex/level2-price-level-update/{symbol}
     * Get Level-2 Price Level Book
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return ApiResponse<kotlin.collections.List<Level2PriceLevelUpdateModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexLevel2PriceLevelUpdateSymbolGetWithHttpInfo(symbol: kotlin.String, date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<Level2PriceLevelUpdateModel>?> {
        val localVariableConfig = v1NativeIexLevel2PriceLevelUpdateSymbolGetRequestConfig(symbol = symbol, date = date)

        return request<Unit, kotlin.collections.List<Level2PriceLevelUpdateModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexLevel2PriceLevelUpdateSymbolGet
     *
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return RequestConfig
     */
    fun v1NativeIexLevel2PriceLevelUpdateSymbolGetRequestConfig(symbol: kotlin.String, date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/level2-price-level-update/{symbol}".replace("{"+"symbol"+"}", encodeURIComponent(symbol.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/native/iex/level3-order-book/{symbol}
     * Get Level-3 Order Book
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return kotlin.collections.List<Level3OrderBookModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexLevel3OrderBookSymbolGet(symbol: kotlin.String, date: java.time.OffsetDateTime) : kotlin.collections.List<Level3OrderBookModel> {
        val localVarResponse = v1NativeIexLevel3OrderBookSymbolGetWithHttpInfo(symbol = symbol, date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<Level3OrderBookModel>
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
     * GET /v1/native/iex/level3-order-book/{symbol}
     * Get Level-3 Order Book
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return ApiResponse<kotlin.collections.List<Level3OrderBookModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexLevel3OrderBookSymbolGetWithHttpInfo(symbol: kotlin.String, date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<Level3OrderBookModel>?> {
        val localVariableConfig = v1NativeIexLevel3OrderBookSymbolGetRequestConfig(symbol = symbol, date = date)

        return request<Unit, kotlin.collections.List<Level3OrderBookModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexLevel3OrderBookSymbolGet
     *
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return RequestConfig
     */
    fun v1NativeIexLevel3OrderBookSymbolGetRequestConfig(symbol: kotlin.String, date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/level3-order-book/{symbol}".replace("{"+"symbol"+"}", encodeURIComponent(symbol.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }

    /**
     * GET /v1/native/iex/trade/{symbol}
     * Get Trades
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return kotlin.collections.List<TradeTradeModel>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     * @throws UnsupportedOperationException If the API returns an informational or redirection response
     * @throws ClientException If the API returns a client error response
     * @throws ServerException If the API returns a server error response
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class, UnsupportedOperationException::class, ClientException::class, ServerException::class)
    fun v1NativeIexTradeSymbolGet(symbol: kotlin.String, date: java.time.OffsetDateTime) : kotlin.collections.List<TradeTradeModel> {
        val localVarResponse = v1NativeIexTradeSymbolGetWithHttpInfo(symbol = symbol, date = date)

        return when (localVarResponse.responseType) {
            ResponseType.Success -> (localVarResponse as Success<*>).data as kotlin.collections.List<TradeTradeModel>
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
     * GET /v1/native/iex/trade/{symbol}
     * Get Trades
     * 
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return ApiResponse<kotlin.collections.List<TradeTradeModel>?>
     * @throws IllegalStateException If the request is not correctly configured
     * @throws IOException Rethrows the OkHttp execute method exception
     */
    @Suppress("UNCHECKED_CAST")
    @Throws(IllegalStateException::class, IOException::class)
    fun v1NativeIexTradeSymbolGetWithHttpInfo(symbol: kotlin.String, date: java.time.OffsetDateTime) : ApiResponse<kotlin.collections.List<TradeTradeModel>?> {
        val localVariableConfig = v1NativeIexTradeSymbolGetRequestConfig(symbol = symbol, date = date)

        return request<Unit, kotlin.collections.List<TradeTradeModel>>(
            localVariableConfig
        )
    }

    /**
     * To obtain the request config of the operation v1NativeIexTradeSymbolGet
     *
     * @param symbol The symbol identifier
     * @param date Optional date in format YYYY-MM-DD (defaults to latest available data)
     * @return RequestConfig
     */
    fun v1NativeIexTradeSymbolGetRequestConfig(symbol: kotlin.String, date: java.time.OffsetDateTime) : RequestConfig<Unit> {
        val localVariableBody = null
        val localVariableQuery: MultiValueMap = mutableMapOf<kotlin.String, kotlin.collections.List<kotlin.String>>()
            .apply {
                put("date", listOf(parseDateToQueryString(date)))
            }
        val localVariableHeaders: MutableMap<String, String> = mutableMapOf()
        localVariableHeaders["Accept"] = "application/json"

        return RequestConfig(
            method = RequestMethod.GET,
            path = "/v1/native/iex/trade/{symbol}".replace("{"+"symbol"+"}", encodeURIComponent(symbol.toString())),
            query = localVariableQuery,
            headers = localVariableHeaders,
            requiresAuthentication = true,
            body = localVariableBody
        )
    }


    private fun encodeURIComponent(uriComponent: kotlin.String): kotlin.String =
        HttpUrl.Builder().scheme("http").host("localhost").addPathSegment(uriComponent).build().encodedPathSegments[0]
}
