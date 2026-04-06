package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ModelsIndexDefinitionInputData
import org.openapitools.model.ModelsIndexDefinitionSnapshotEntry

class IndexInputDataApi {
    String basePath = "https://rest-api.indexes.coinapi.io"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def v1IndexdefInputDataIndexDefinitionIdAllGet ( String indexDefinitionId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexdef/input-data/${index_definition_id}/all"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (indexDefinitionId == null) {
            throw new RuntimeException("missing required params indexDefinitionId")
        }





        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ModelsIndexDefinitionInputData.class )

    }

    def v1IndexdefInputDataIndexDefinitionIdGet ( String indexDefinitionId, Date time, Boolean enabledOnly, Boolean pendingOnly, String filterAssetId, Boolean withStatusInfo, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexdef/input-data/${index_definition_id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (indexDefinitionId == null) {
            throw new RuntimeException("missing required params indexDefinitionId")
        }

        if (time != null) {
            queryParams.put("time", time)
        }
        if (enabledOnly != null) {
            queryParams.put("enabled_only", enabledOnly)
        }
        if (pendingOnly != null) {
            queryParams.put("pending_only", pendingOnly)
        }
        if (filterAssetId != null) {
            queryParams.put("filter_asset_id", filterAssetId)
        }
        if (withStatusInfo != null) {
            queryParams.put("with_status_info", withStatusInfo)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    ModelsIndexDefinitionSnapshotEntry.class )

    }

}
