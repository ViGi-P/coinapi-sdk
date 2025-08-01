{-
   CoinAPI Market Data REST API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: v1
   Contact: support@apibricks.io

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Metadata exposing
    ( v1AssetsAssetIdGet
    , v1AssetsGet
    , v1AssetsIconsSizeGet
    , v1ChainsChainIdGet
    , v1ChainsGet
    , v1ExchangesExchangeIdGet
    , v1ExchangesGet
    , v1ExchangesIconsSizeGet
    , v1SymbolsExchangeIdGet
    , v1SymbolsExchangeIdHistoryGet
    , v1SymbolsGet
    , v1SymbolsMapExchangeIdGet
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode


{-| List all assets by asset ID
-}
v1AssetsAssetIdGet : String -> String -> Api.Request (List Api.Data.V1Asset)
v1AssetsAssetIdGet assetId_path auth_token =
    Api.request
        "GET"
        "/v1/assets/{asset_id}"
        [ ( "asset_id", identity assetId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1AssetDecoder)
        |> Api.withBearerToken auth_token

{-| List all assets

Retrieves all assets.              :::info Our asset identifiers are aligned with the ISO 4217 currency codes standard only for fiat money (government or law regulated currency). :::              :::info Properties of the output are providing aggregated information from across all symbols related to the specific asset. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::

-}
v1AssetsGet : Maybe String -> String -> Api.Request (List Api.Data.V1Asset)
v1AssetsGet filterAssetId_query auth_token =
    Api.request
        "GET"
        "/v1/assets"
        []
        [ ( "filter_asset_id", Maybe.map identity filterAssetId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1AssetDecoder)
        |> Api.withBearerToken auth_token

{-| List all asset icons

Gets the list of icons (of the given size) for all the assets.

-}
v1AssetsIconsSizeGet : Int -> String -> Api.Request (List Api.Data.V1Icon)
v1AssetsIconsSizeGet size_path auth_token =
    Api.request
        "GET"
        "/v1/assets/icons/{size}"
        [ ( "size", String.fromInt size_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1IconDecoder)
        |> Api.withBearerToken auth_token

{-| List all chains by chain ID
-}
v1ChainsChainIdGet : String -> String -> Api.Request (List Api.Data.V1Chain)
v1ChainsChainIdGet chainId_path auth_token =
    Api.request
        "GET"
        "/v1/chains/{chain_id}"
        [ ( "chain_id", identity chainId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1ChainDecoder)
        |> Api.withBearerToken auth_token

{-| List all blockchain chains

Retrieves all blockchain chains supported by the system.              :::info Properties of the output are providing aggregated information from across all symbols related to the specific chain. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::

-}
v1ChainsGet : Maybe String -> String -> Api.Request (List Api.Data.V1Chain)
v1ChainsGet filterChainId_query auth_token =
    Api.request
        "GET"
        "/v1/chains"
        []
        [ ( "filter_chain_id", Maybe.map identity filterChainId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1ChainDecoder)
        |> Api.withBearerToken auth_token

{-| List all exchanges by exchange_id
-}
v1ExchangesExchangeIdGet : String -> String -> Api.Request (List Api.Data.V1Exchange)
v1ExchangesExchangeIdGet exchangeId_path auth_token =
    Api.request
        "GET"
        "/v1/exchanges/{exchange_id}"
        [ ( "exchange_id", identity exchangeId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1ExchangeDecoder)
        |> Api.withBearerToken auth_token

{-| List all exchanges

Get a detailed list of exchanges provided by the system.              :::info Properties of the output are providing aggregated information from across all symbols related to the specific exchange. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::

-}
v1ExchangesGet : Maybe String -> String -> Api.Request (List Api.Data.V1Exchange)
v1ExchangesGet filterExchangeId_query auth_token =
    Api.request
        "GET"
        "/v1/exchanges"
        []
        [ ( "filter_exchange_id", Maybe.map identity filterExchangeId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1ExchangeDecoder)
        |> Api.withBearerToken auth_token

{-| List of icons for the exchanges
-}
v1ExchangesIconsSizeGet : Int -> String -> Api.Request (List Api.Data.V1Icon)
v1ExchangesIconsSizeGet size_path auth_token =
    Api.request
        "GET"
        "/v1/exchanges/icons/{size}"
        [ ( "size", String.fromInt size_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1IconDecoder)
        |> Api.withBearerToken auth_token

{-| List of active symbols for the exchange
-}
v1SymbolsExchangeIdGet : String -> Maybe String -> Maybe String -> String -> Api.Request (List Api.Data.V1Symbol)
v1SymbolsExchangeIdGet exchangeId_path filterSymbolId_query filterAssetId_query auth_token =
    Api.request
        "GET"
        "/v1/symbols/{exchange_id}"
        [ ( "exchange_id", identity exchangeId_path ) ]
        [ ( "filter_symbol_id", Maybe.map identity filterSymbolId_query ), ( "filter_asset_id", Maybe.map identity filterAssetId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1SymbolDecoder)
        |> Api.withBearerToken auth_token

{-| List all historical symbols for an exchange.

This endpoint provides access to symbols that are no longer actively traded or listed on a given exchange. The data is provided with pagination support.

-}
v1SymbolsExchangeIdHistoryGet : String -> Maybe Int -> Maybe Int -> String -> Api.Request (List Api.Data.V1Symbol)
v1SymbolsExchangeIdHistoryGet exchangeId_path page_query limit_query auth_token =
    Api.request
        "GET"
        "/v1/symbols/{exchange_id}/history"
        [ ( "exchange_id", identity exchangeId_path ) ]
        [ ( "page", Maybe.map String.fromInt page_query ), ( "limit", Maybe.map String.fromInt limit_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1SymbolDecoder)
        |> Api.withBearerToken auth_token

{-| List all active symbols

Retrieves all currently active (listed) symbols, with optional filtering.              :::info \"price_precision\" and \"size_precision\" are data precisions and are not always the same precisions used for trading eg. for the \"BINANCE\" exchanges. :::              :::info You should not assume that the market data will be always within the resolution provided by the \"price_precision\" and \"size_precision\". The fact that the precision values can be derived from a posterior implies the fact that this data could be delayed, also it can be changed by the data source without notice and we will immediately deliver data with the new precision while could not update the precision values in this endpoint immediately. :::              ### Symbol identifier              Our symbol identifier is created using a pattern that depends on symbol type.              Type | `symbol_id` pattern --------- | --------- SPOT | `{exchange_id}_SPOT_{asset_id_base}_{asset_id_quote}` FUTURES | `{exchange_id}_FTS_{asset_id_base}_{asset_id_quote}_{YYMMDD of future_delivery_time}` OPTION | `{exchange_id}_OPT_{asset_id_base}_{asset_id_quote}_{YYMMDD of option_expiration_time}_{option_strike_price}_{option_type_is_call as C/P}` PERPETUAL | `{exchange_id}_PERP_{asset_id_base}_{asset_id_quote}` INDEX | `{exchange_id}_IDX_{index_id}` CREDIT | `{exchange_id}_CRE_{asset_id_base}` CONTACT  | `{exchange_id}_COT_{contract_id}`              :::info In the unlikely event when the \"symbol_id\" for more than one market is the same. We will append the additional term (prefixed with the \"_\") at the end of the duplicated identifiers to differentiate them. :::info              ### Symbol types list (enumeration of `symbol_type` output variable)              Type | Name | Description -------- | - | ----------- SPOT | FX Spot | Agreement to exchange one asset for another one *(e.g. Buy BTC for USD)* FUTURES | Futures contract | FX Spot derivative contract where traders agree to trade fx spot at predetermined future time OPTION | Option contract | FX Spot derivative contract where traders agree to trade right to require buy or sell of fx spot at agreed price on exercise date PERPETUAL | Perpetual contract | FX Spot derivative contract where traders agree to trade fx spot continously without predetermined future delivery time INDEX | Index | Statistical composite that measures changes in the economy or markets. CREDIT | Credit/Funding | Margin funding contract. Order book displays lending offers and borrow bids. Price represents the daily rate. CONTRACT | Contract | Represents other types of financial instruments *(e.g. spreads, interest rate swap)*              ### Additional output variables for `symbol_type = INDEX`              Variable | Description --------- | ----------- index_id | Index identifier index_display_name | Human readable name of the index *(optional)* index_display_description | Description of the index *(optional)*              ### Additional output variables for `symbol_type = FUTURES`              Variable | Description --------- | ----------- future_delivery_time | Predetermined time of futures contract delivery date in ISO 8601 future_contract_unit | Contact size *(eg. 10 BTC if `future_contract_unit` = `10` and `future_contract_unit_asset` = `BTC`)* future_contract_unit_asset | Identifier of the asset used to denominate the contract unit              ### Additional output variables for `symbol_type = PERPETUAL`              Variable | Description --------- | ----------- future_contract_unit | Contact size *(eg. 10 BTC if `future_contract_unit` = `10` and `future_contract_unit_asset` = `BTC`)* future_contract_unit_asset | Identifier of the asset used to denominate the contract unit              ### Additional output variables for `symbol_type = OPTION`              Variable | Description --------- | ----------- option_type_is_call | Boolean value representing option type. `true` for Call options, `false` for Put options option_strike_price | Price at which option contract can be exercised option_contract_unit | Base asset amount of underlying spot which single option represents option_exercise_style | Option exercise style. Can be `EUROPEAN` or `AMERICAN` option_expiration_time | Option contract expiration time in ISO 8601              ### Additional output variables for `symbol_type = CONTRACT`              Variable | Description --------- | ----------- contract_delivery_time | Predetermined time of contract delivery date in ISO 8601 contract_unit | Contact size *(eg. 10 BTC if `contract_unit` = `10` and `contract_unit_asset` = `BTC`)* contract_unit_asset | Identifier of the asset used to denominate the contract unit contract_id | Identifier of contract by the exchange

-}
v1SymbolsGet : Maybe String -> Maybe String -> Maybe String -> String -> Api.Request (List Api.Data.V1Symbol)
v1SymbolsGet filterSymbolId_query filterExchangeId_query filterAssetId_query auth_token =
    Api.request
        "GET"
        "/v1/symbols"
        []
        [ ( "filter_symbol_id", Maybe.map identity filterSymbolId_query ), ( "filter_exchange_id", Maybe.map identity filterExchangeId_query ), ( "filter_asset_id", Maybe.map identity filterAssetId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.v1SymbolDecoder)
        |> Api.withBearerToken auth_token

{-| List active symbol mapping for the exchange
-}
v1SymbolsMapExchangeIdGet : String -> String -> Api.Request (List Api.Data.V1SymbolMapping)
v1SymbolsMapExchangeIdGet exchangeId_path auth_token =
    Api.request
        "GET"
        "/v1/symbols/map/{exchange_id}"
        [ ( "exchange_id", identity exchangeId_path ) ]
        []
        []
        Nothing
        (Json.Decode.list Api.Data.v1SymbolMappingDecoder)
        |> Api.withBearerToken auth_token
