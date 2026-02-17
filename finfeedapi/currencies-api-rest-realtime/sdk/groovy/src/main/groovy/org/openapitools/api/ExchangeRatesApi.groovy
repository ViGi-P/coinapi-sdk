package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.V1ExchangeRate
import org.openapitools.model.V1ExchangeRates

class ExchangeRatesApi {
    String basePath = "https://api-realtime.fx.finfeedapi.com"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def getSpecificRate ( String assetIdBase, String assetIdQuote, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/exchangerate/${asset_id_base}/${asset_id_quote}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (assetIdBase == null) {
            throw new RuntimeException("missing required params assetIdBase")
        }
        // verify required params are set
        if (assetIdQuote == null) {
            throw new RuntimeException("missing required params assetIdQuote")
        }





        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    V1ExchangeRate.class )

    }

    def v1ExchangerateAssetIdBaseGet ( String assetIdBase, String filterAssetId, Boolean invert, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/exchangerate/${asset_id_base}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (assetIdBase == null) {
            throw new RuntimeException("missing required params assetIdBase")
        }

        if (filterAssetId != null) {
            queryParams.put("filter_asset_id", filterAssetId)
        }
        if (invert != null) {
            queryParams.put("invert", invert)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    V1ExchangeRates.class )

    }

}
