{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE OverloadedStrings #-}
{-# LANGUAGE RecordWildCards #-}
{-# LANGUAGE PartialTypeSignatures #-}

module Main where

import Data.Typeable (Proxy(..))
import Test.Hspec
import Test.Hspec.QuickCheck

import PropMime
import Instances ()

import CoinAPIIndexesREST.Model
import CoinAPIIndexesREST.MimeTypes

main :: IO ()
main =
  hspec $ modifyMaxSize (const 10) $ do
    describe "JSON instances" $ do
      pure ()
      propMimeEq MimeJSON (Proxy :: Proxy MetadataExchange)
      propMimeEq MimeJSON (Proxy :: Proxy MetadataTimeseriesPeriod)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexDefinitionSnapshotEntry)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexIdentifier)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexMultiAssetWeight)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexTimeseriesItem)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexValue)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsIndexValueComponent)
      
