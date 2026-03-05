package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.IndexesIndexDefinitionSnapshotEntry
import org.openapitools.model.IndexesIndexIdentifier
import org.openapitools.model.IndexesIndexMultiAssetWeight
import org.openapitools.model.IndexesIndexTimeseriesItem
import org.openapitools.model.IndexesIndexValue

class IndexesApi {
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
                    IndexesIndexMultiAssetWeight.class )

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
                    IndexesIndexMultiAssetWeight.class )

    }

    def v1IndexesGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    IndexesIndexIdentifier.class )

    }

    def v1IndexesIndexDefinitionIdCurrentSnapshotGet ( String indexDefinitionId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes/${index_definition_id}/currentSnapshot"

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
                    IndexesIndexDefinitionSnapshotEntry.class )

    }

    def v1IndexesIndexDefinitionIdHistorySnapshotGet ( String indexDefinitionId, Date time, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes/${index_definition_id}/historySnapshot"

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




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    IndexesIndexDefinitionSnapshotEntry.class )

    }

    def v1IndexesIndexIdCurrentGet ( String indexId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes/${index_id}/current"

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
                    "GET", "",
                    IndexesIndexValue.class )

    }

    def v1IndexesIndexIdHistoryGet ( String indexId, Date timeStart, Date timeEnd, Integer limit, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes/${index_id}/history"

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

        if (timeStart != null) {
            queryParams.put("time_start", timeStart)
        }
        if (timeEnd != null) {
            queryParams.put("time_end", timeEnd)
        }
        if (limit != null) {
            queryParams.put("limit", limit)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    IndexesIndexValue.class )

    }

    def v1IndexesIndexIdTimeseriesGet ( String indexId, String periodId, String timeStart, String timeEnd, Integer limit, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/v1/indexes/${index_id}/timeseries"

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
        // verify required params are set
        if (periodId == null) {
            throw new RuntimeException("missing required params periodId")
        }
        // verify required params are set
        if (timeStart == null) {
            throw new RuntimeException("missing required params timeStart")
        }
        // verify required params are set
        if (timeEnd == null) {
            throw new RuntimeException("missing required params timeEnd")
        }

        if (periodId != null) {
            queryParams.put("period_id", periodId)
        }
        if (timeStart != null) {
            queryParams.put("time_start", timeStart)
        }
        if (timeEnd != null) {
            queryParams.put("time_end", timeEnd)
        }
        if (limit != null) {
            queryParams.put("limit", limit)
        }




        accept = apiUtils.selectHeaderAccept(["text/plain", "application/json", "text/json", "application/x-msgpack"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    IndexesIndexTimeseriesItem.class )

    }

}
