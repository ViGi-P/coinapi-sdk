{-
   OEML - REST API
   This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

   The version of the OpenAPI document: v1
   Contact: support@coinapi.io

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Balances exposing
    ( v1BalancesGet
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



{-| Get current currency balance from all or single exchange.
-}
v1BalancesGet : Maybe String -> Api.Request (List Api.Data.Balance)
v1BalancesGet exchangeId_query =
    Api.request
        "GET"
        "/v1/balances"
        []
        [ ( "exchange_id", Maybe.map identity exchangeId_query ) ]
        []
        Nothing
        (Json.Decode.list Api.Data.balanceDecoder)
