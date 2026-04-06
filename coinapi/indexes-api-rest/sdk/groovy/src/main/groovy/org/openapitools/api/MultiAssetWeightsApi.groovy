package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ModelsIndexMultiAssetWeight

class MultiAssetWeightsApi {
    String basePath = "https://rest-api.indexes.coinapi.io"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def v1IndexdefMultiassetGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexdef/multiasset"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ModelsIndexMultiAssetWeight.class )

    }

    def v1IndexdefMultiassetIndexIdGet ( String indexId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexdef/multiasset/${index_id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (indexId == null) {
            throw new RuntimeException("missing required params indexId")
        }





        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ModelsIndexMultiAssetWeight.class )

    }

}
