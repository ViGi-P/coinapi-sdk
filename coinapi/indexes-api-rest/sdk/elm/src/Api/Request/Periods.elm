{-
   CoinAPI Indexes REST API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: v1
   Contact: support@apibricks.io

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Periods exposing
    ( v1MetadataPeriodsGet
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode


{-| List all periods

Get full list of supported time periods              ### Available periods              Time unit | Period identifiers --------- | ----------- Second | 1SEC, 2SEC, 3SEC, 4SEC, 5SEC, 6SEC, 10SEC, 15SEC, 20SEC, 30SEC Minute | 1MIN, 2MIN, 3MIN, 4MIN, 5MIN, 6MIN, 10MIN, 15MIN, 20MIN, 30MIN Hour | 1HRS, 2HRS, 3HRS, 4HRS, 6HRS, 8HRS, 12HRS Day | 1DAY, 2DAY, 3DAY, 5DAY, 7DAY, 10DAY Month | 1MTH, 2MTH, 3MTH, 4MTH, 6MTH Year | 1YRS, 2YRS, 3YRS, 4YRS, 5YRS              :::tip You can assume that we will not remove any periods from this response, however, we may add new ones. :::

-}
v1MetadataPeriodsGet : String -> Api.Request (List Api.Data.MetadataTimeseriesPeriod)
v1MetadataPeriodsGet auth_token =
    Api.request
        "GET"
        "/v1/metadata/periods"
        []
        []
        []
        Nothing
        (Json.Decode.list Api.Data.metadataTimeseriesPeriodDecoder)
        |> Api.withBearerToken auth_token
