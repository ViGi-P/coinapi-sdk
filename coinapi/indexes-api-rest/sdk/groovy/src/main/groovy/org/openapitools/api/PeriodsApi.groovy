package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ModelsTimeseriesPeriod

class PeriodsApi {
    String basePath = "https://rest-api.indexes.coinapi.io"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def v1MetadataPeriodsGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/metadata/periods"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ModelsTimeseriesPeriod.class )

    }

}
