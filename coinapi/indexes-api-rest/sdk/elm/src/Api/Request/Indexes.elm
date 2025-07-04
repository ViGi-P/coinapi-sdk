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


module Api.Request.Indexes exposing
    ( v1IndexdefInputDataIndexDefinitionIdAllGet
    , v1IndexdefInputDataIndexDefinitionIdGet
    , v1IndexdefMultiassetGet
    , v1IndexdefMultiassetIndexIdGet
    , v1IndexesGet
    , v1IndexesIndexDefinitionIdCurrentSnapshotGet
    , v1IndexesIndexDefinitionIdHistorySnapshotGet
    , v1IndexesIndexIdCurrentGet
    , v1IndexesIndexIdHistoryGet
    , v1IndexesIndexIdTimeseriesGet
    )

import Api
import Api.Data exposing (..)
import Api.Time exposing (Posix)
import Dict
import Http
import Json.Decode
import Json.Encode


{-| Returns all data inputs for a specific index definition
-}
v1IndexdefInputDataIndexDefinitionIdAllGet : String -> String -> Api.Request (List Api.Data.IndexesIndexDefinitionInputData)
v1IndexdefInputDataIndexDefinitionIdAllGet indexDefinitionId_path auth_token =
    Api.request
        "GET"
        "/v1/indexdef/input-data/{index_definition_id}/all"
        [ ( "index_definition_id", identity indexDefinitionId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexDefinitionInputDataDecoder)
        |> Api.withBearerToken auth_token

{-| Returns data inputs for certain index definition and time
-}
v1IndexdefInputDataIndexDefinitionIdGet : String -> Maybe Posix -> Maybe Bool -> Maybe Bool -> Maybe String -> Maybe Bool -> String -> Api.Request (List Api.Data.IndexesIndexDefinitionSnapshotEntry)
v1IndexdefInputDataIndexDefinitionIdGet indexDefinitionId_path time_query enabledOnly_query pendingOnly_query filterAssetId_query withStatusInfo_query auth_token =
    Api.request
        "GET"
        "/v1/indexdef/input-data/{index_definition_id}"
        [ ( "index_definition_id", identity indexDefinitionId_path ) ]
        [ ( "time", Maybe.map Api.Time.dateTimeToString time_query ), ( "enabled_only", Maybe.map (\val -> if val then "true" else "false") enabledOnly_query ), ( "pending_only", Maybe.map (\val -> if val then "true" else "false") pendingOnly_query ), ( "filter_asset_id", Maybe.map identity filterAssetId_query ), ( "with_status_info", Maybe.map (\val -> if val then "true" else "false") withStatusInfo_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexDefinitionSnapshotEntryDecoder)
        |> Api.withBearerToken auth_token

{-| Get all multi-asset weights
-}
v1IndexdefMultiassetGet : String -> Api.Request (List Api.Data.IndexesIndexMultiAssetWeight)
v1IndexdefMultiassetGet auth_token =
    Api.request
        "GET"
        "/v1/indexdef/multiasset"
        []
        []
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexMultiAssetWeightDecoder)
        |> Api.withBearerToken auth_token

{-| Get multi-asset weights for specific index
-}
v1IndexdefMultiassetIndexIdGet : String -> String -> Api.Request (List Api.Data.IndexesIndexMultiAssetWeight)
v1IndexdefMultiassetIndexIdGet indexId_path auth_token =
    Api.request
        "GET"
        "/v1/indexdef/multiasset/{index_id}"
        [ ( "index_id", identity indexId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexMultiAssetWeightDecoder)
        |> Api.withBearerToken auth_token

{-| List indexes
-}
v1IndexesGet : String -> Api.Request (List Api.Data.IndexesIndexIdentifier)
v1IndexesGet auth_token =
    Api.request
        "GET"
        "/v1/indexes"
        []
        []
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexIdentifierDecoder)
        |> Api.withBearerToken auth_token

{-| Current Index Values for index definition
-}
v1IndexesIndexDefinitionIdCurrentSnapshotGet : String -> String -> Api.Request (List Api.Data.IndexesIndexDefinitionSnapshotEntry)
v1IndexesIndexDefinitionIdCurrentSnapshotGet indexDefinitionId_path auth_token =
    Api.request
        "GET"
        "/v1/indexes/{index_definition_id}/currentSnapshot"
        [ ( "index_definition_id", identity indexDefinitionId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexDefinitionSnapshotEntryDecoder)
        |> Api.withBearerToken auth_token

{-| Historical Index Values for index definition
-}
v1IndexesIndexDefinitionIdHistorySnapshotGet : String -> Maybe Posix -> String -> Api.Request (List Api.Data.IndexesIndexDefinitionSnapshotEntry)
v1IndexesIndexDefinitionIdHistorySnapshotGet indexDefinitionId_path time_query auth_token =
    Api.request
        "GET"
        "/v1/indexes/{index_definition_id}/historySnapshot"
        [ ( "index_definition_id", identity indexDefinitionId_path ) ]
        [ ( "time", Maybe.map Api.Time.dateTimeToString time_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexDefinitionSnapshotEntryDecoder)
        |> Api.withBearerToken auth_token

{-| Current Index Value
-}
v1IndexesIndexIdCurrentGet : String -> String -> Api.Request Api.Data.IndexesIndexValue
v1IndexesIndexIdCurrentGet indexId_path auth_token =
    Api.request
        "GET"
        "/v1/indexes/{index_id}/current"
        [ ( "index_id", identity indexId_path ) ]
        []
        []
        Nothing
        Api.Data.indexesIndexValueDecoder
        |> Api.withBearerToken auth_token

{-| Historical Index Value w/Composition
-}
v1IndexesIndexIdHistoryGet : String -> Maybe Posix -> Maybe Posix -> Maybe Int -> String -> Api.Request (List Api.Data.IndexesIndexValue)
v1IndexesIndexIdHistoryGet indexId_path timeStart_query timeEnd_query limit_query auth_token =
    Api.request
        "GET"
        "/v1/indexes/{index_id}/history"
        [ ( "index_id", identity indexId_path ) ]
        [ ( "time_start", Maybe.map Api.Time.dateTimeToString timeStart_query ), ( "time_end", Maybe.map Api.Time.dateTimeToString timeEnd_query ), ( "limit", Maybe.map String.fromInt limit_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexValueDecoder)
        |> Api.withBearerToken auth_token

{-| Timeseries Index Value
-}
v1IndexesIndexIdTimeseriesGet : String -> String -> String -> String -> Maybe Int -> String -> Api.Request (List Api.Data.IndexesIndexTimeseriesItem)
v1IndexesIndexIdTimeseriesGet indexId_path periodId_query timeStart_query timeEnd_query limit_query auth_token =
    Api.request
        "GET"
        "/v1/indexes/{index_id}/timeseries"
        [ ( "index_id", identity indexId_path ) ]
        [ ( "period_id", Just <| identity periodId_query ), ( "time_start", Just <| identity timeStart_query ), ( "time_end", Just <| identity timeEnd_query ), ( "limit", Maybe.map String.fromInt limit_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.indexesIndexTimeseriesItemDecoder)
        |> Api.withBearerToken auth_token
