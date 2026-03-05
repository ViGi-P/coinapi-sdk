package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.MetadataExchange

class MetadataApi {
    String basePath = "https://rest-api.indexes.coinapi.io"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def apiMetadataExchangesExchangeIdGet ( String exchangeId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/api/metadata/exchanges/${exchange_id}"

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





        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    MetadataExchange.class )

    }

    def apiMetadataExchangesGet ( String filterExchangeId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/api/metadata/exchanges"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType


        if (filterExchangeId != null) {
            queryParams.put("filter_exchange_id", filterExchangeId)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    MetadataExchange.class )

    }

}
