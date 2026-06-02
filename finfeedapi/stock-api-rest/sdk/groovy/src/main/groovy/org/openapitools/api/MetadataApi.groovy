package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.FinFeedAPIExchangeModel
import org.openapitools.model.FinFeedAPISymbolModel

class MetadataApi {
    String basePath = "https://api-historical.stock.finfeedapi.com"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def v1ExchangesGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/exchanges"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    FinFeedAPIExchangeModel.class )

    }

    def v1SymbolsExchangeIdGet ( String exchangeId, String filterSymbolId, Integer limit, Integer page, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/symbols/${exchange_id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (exchangeId == null) {
            throw new RuntimeException("missing required params exchangeId")
        }

        if (filterSymbolId != null) {
            queryParams.put("filter_symbol_id", filterSymbolId)
        }
        if (limit != null) {
            queryParams.put("limit", limit)
        }
        if (page != null) {
            queryParams.put("page", page)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    FinFeedAPISymbolModel.class )

    }

}
