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

import FinFeedAPIStockREST.Model
import FinFeedAPIStockREST.MimeTypes

main :: IO ()
main =
  hspec $ modifyMaxSize (const 10) $ do
    describe "JSON instances" $ do
      pure ()
      propMimeEq MimeJSON (Proxy :: Proxy FinFeedAPIExchangeModel)
      propMimeEq MimeJSON (Proxy :: Proxy FinFeedAPISymbolModel)
      propMimeEq MimeJSON (Proxy :: Proxy IEXPriceLevelUpdatePriceLevelUpdateModel)
      propMimeEq MimeJSON (Proxy :: Proxy IEXQuoteUpdateQuoteUpdateModel)
      propMimeEq MimeJSON (Proxy :: Proxy IEXSystemEventSystemEventModel)
      propMimeEq MimeJSON (Proxy :: Proxy IEXTradeTradeModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsAddOrderModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsAdminMessageModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsAuctionInformationModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsClearBookModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsDeleteOrderModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsExecutedOrderModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsModifyOrderModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsOfficialPriceModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsOperationalHaltStatusModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsOrderBookModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsRetailLiquidityIndicatorModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsSecurityDirectoryModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsSecurityEventModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsShortSalePriceTestStatusModel)
      propMimeEq MimeJSON (Proxy :: Proxy ModelsTradingStatusModel)
      propMimeEq MimeJSON (Proxy :: Proxy OHLCVTimeSeriesExchangeTimeseriesItem)
      propMimeEq MimeJSON (Proxy :: Proxy OHLCVTimeSeriesTimeseriesItem)
      propMimeEq MimeJSON (Proxy :: Proxy OHLCVTimeSeriesTimeseriesPeriod)
      
