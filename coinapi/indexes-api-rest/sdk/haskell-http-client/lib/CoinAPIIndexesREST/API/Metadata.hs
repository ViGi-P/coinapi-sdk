{-
   CoinAPI Indexes REST API

   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   OpenAPI Version: 3.0.4
   CoinAPI Indexes REST API API version: v1
   Contact: support@apibricks.io
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : CoinAPIIndexesREST.API.Metadata
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module CoinAPIIndexesREST.API.Metadata where

import CoinAPIIndexesREST.Core
import CoinAPIIndexesREST.MimeTypes
import CoinAPIIndexesREST.Model as M

import qualified Data.Aeson as A
import qualified Data.ByteString as B
import qualified Data.ByteString.Lazy as BL
import qualified Data.Data as P (Typeable, TypeRep, typeOf, typeRep)
import qualified Data.Foldable as P
import qualified Data.Map as Map
import qualified Data.Maybe as P
import qualified Data.Proxy as P (Proxy(..))
import qualified Data.Set as Set
import qualified Data.String as P
import qualified Data.Text as T
import qualified Data.Text.Encoding as T
import qualified Data.Text.Lazy as TL
import qualified Data.Text.Lazy.Encoding as TL
import qualified Data.Time as TI
import qualified Network.HTTP.Client.MultipartFormData as NH
import qualified Network.HTTP.Media as ME
import qualified Network.HTTP.Types as NH
import qualified Web.FormUrlEncoded as WH
import qualified Web.HttpApiData as WH

import Data.Text (Text)
import GHC.Base ((<|>))

import Prelude ((==),(/=),($), (.),(<$>),(<*>),(>>=),Maybe(..),Bool(..),Char,Double,FilePath,Float,Int,Integer,String,fmap,undefined,mempty,maybe,pure,Monad,Applicative,Functor)
import qualified Prelude as P

-- * Operations


-- ** Metadata

-- *** apiMetadataExchangesExchangeIdGet

-- | @GET \/api\/metadata\/exchanges\/{exchange_id}@
-- 
-- List all exchanges by exchange_id
-- 
-- AuthMethod: 'AuthApiKeyAPIKey', 'AuthBasicJWT'
-- 
apiMetadataExchangesExchangeIdGet
  :: Accept accept -- ^ request accept ('MimeType')
  -> ExchangeId -- ^ "exchangeId" -  The ID of the exchange.
  -> CoinAPIIndexesRESTRequest ApiMetadataExchangesExchangeIdGet MimeNoContent [MetadataExchange] accept
apiMetadataExchangesExchangeIdGet  _ (ExchangeId exchangeId) =
  _mkRequest "GET" ["/api/metadata/exchanges/",toPath exchangeId]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthApiKeyAPIKey)
    `_hasAuthType` (P.Proxy :: P.Proxy AuthBasicJWT)

data ApiMetadataExchangesExchangeIdGet  
-- | @application/json@
instance Produces ApiMetadataExchangesExchangeIdGet MimeJSON
-- | @application/x-msgpack@
instance Produces ApiMetadataExchangesExchangeIdGet MimeXMsgpack
-- | @text/json@
instance Produces ApiMetadataExchangesExchangeIdGet MimeTextJson
-- | @text/plain@
instance Produces ApiMetadataExchangesExchangeIdGet MimePlainText


-- *** apiMetadataExchangesGet

-- | @GET \/api\/metadata\/exchanges@
-- 
-- List all exchanges
-- 
-- Get a detailed list of exchanges provided by the system.              :::info Properties of the output are providing aggregated information from across all symbols related to the specific exchange. If you need to calculate your aggregation (e.g., limiting only the particular type of symbols), you should use /v1/symbols endpoint as a data source. :::
-- 
-- AuthMethod: 'AuthApiKeyAPIKey', 'AuthBasicJWT'
-- 
apiMetadataExchangesGet
  :: Accept accept -- ^ request accept ('MimeType')
  -> CoinAPIIndexesRESTRequest ApiMetadataExchangesGet MimeNoContent [MetadataExchange] accept
apiMetadataExchangesGet  _ =
  _mkRequest "GET" ["/api/metadata/exchanges"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthApiKeyAPIKey)
    `_hasAuthType` (P.Proxy :: P.Proxy AuthBasicJWT)

data ApiMetadataExchangesGet  

-- | /Optional Param/ "filter_exchange_id" - Comma or semicolon delimited exchange identifiers used to filter response. (optional, eg. `BITSTAMP;GEMINI`)
instance HasOptionalParam ApiMetadataExchangesGet FilterExchangeId where
  applyOptionalParam req (FilterExchangeId xs) =
    req `addQuery` toQuery ("filter_exchange_id", Just xs)
-- | @application/json@
instance Produces ApiMetadataExchangesGet MimeJSON
-- | @application/x-msgpack@
instance Produces ApiMetadataExchangesGet MimeXMsgpack
-- | @text/json@
instance Produces ApiMetadataExchangesGet MimeTextJson
-- | @text/plain@
instance Produces ApiMetadataExchangesGet MimePlainText

