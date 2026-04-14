package org.openapitools.api;

import org.openapitools.api.ApiUtils

class RateLimitApi {
    String basePath = "https://api-realtime.fx.finfeedapi.com"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def internalRatelimitWsconconApikeyGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/internal/ratelimit/wsconcon/apikey"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept([])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def internalRatelimitWshelloIpGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/internal/ratelimit/wshello/ip"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept([])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def internalRatelimitWsreqIpGet ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/internal/ratelimit/wsreq/ip"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept([])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

}
