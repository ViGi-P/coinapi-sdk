{-# LANGUAGE CPP #-}
{-# OPTIONS_GHC -fno-warn-unused-imports -fno-warn-unused-matches #-}

module Instances where

import FinFeedAPIStockREST.Model
import FinFeedAPIStockREST.Core

import qualified Data.Aeson as A
import qualified Data.ByteString.Lazy as BL
import qualified Data.HashMap.Strict as HM
import qualified Data.Set as Set
import qualified Data.Text as T
import qualified Data.Time as TI
import qualified Data.Vector as V
import Data.String (fromString)

import Control.Monad
import Data.Char (isSpace)
import Data.List (sort)
import Test.QuickCheck

import ApproxEq

instance Arbitrary T.Text where
  arbitrary = T.pack <$> arbitrary

instance Arbitrary TI.Day where
  arbitrary = TI.ModifiedJulianDay . (2000 +) <$> arbitrary
  shrink = (TI.ModifiedJulianDay <$>) . shrink . TI.toModifiedJulianDay

instance Arbitrary TI.UTCTime where
  arbitrary =
    TI.UTCTime <$> arbitrary <*> (TI.secondsToDiffTime <$> choose (0, 86401))

instance Arbitrary BL.ByteString where
    arbitrary = BL.pack <$> arbitrary
    shrink xs = BL.pack <$> shrink (BL.unpack xs)

instance Arbitrary ByteArray where
    arbitrary = ByteArray <$> arbitrary
    shrink (ByteArray xs) = ByteArray <$> shrink xs

instance Arbitrary Binary where
    arbitrary = Binary <$> arbitrary
    shrink (Binary xs) = Binary <$> shrink xs

instance Arbitrary DateTime where
    arbitrary = DateTime <$> arbitrary
    shrink (DateTime xs) = DateTime <$> shrink xs

instance Arbitrary Date where
    arbitrary = Date <$> arbitrary
    shrink (Date xs) = Date <$> shrink xs

#if MIN_VERSION_aeson(2,0,0)
#else
-- | A naive Arbitrary instance for A.Value:
instance Arbitrary A.Value where
  arbitrary = arbitraryValue
#endif

arbitraryValue :: Gen A.Value
arbitraryValue =
  frequency [(3, simpleTypes), (1, arrayTypes), (1, objectTypes)]
    where
      simpleTypes :: Gen A.Value
      simpleTypes =
        frequency
          [ (1, return A.Null)
          , (2, liftM A.Bool (arbitrary :: Gen Bool))
          , (2, liftM (A.Number . fromIntegral) (arbitrary :: Gen Int))
          , (2, liftM (A.String . T.pack) (arbitrary :: Gen String))
          ]
      mapF (k, v) = (fromString k, v)
      simpleAndArrays = frequency [(1, sized sizedArray), (4, simpleTypes)]
      arrayTypes = sized sizedArray
      objectTypes = sized sizedObject
      sizedArray n = liftM (A.Array . V.fromList) $ replicateM n simpleTypes
      sizedObject n =
        liftM (A.object . map mapF) $
        replicateM n $ (,) <$> (arbitrary :: Gen String) <*> simpleAndArrays

-- | Checks if a given list has no duplicates in _O(n log n)_.
hasNoDups
  :: (Ord a)
  => [a] -> Bool
hasNoDups = go Set.empty
  where
    go _ [] = True
    go s (x:xs)
      | s' <- Set.insert x s
      , Set.size s' > Set.size s = go s' xs
      | otherwise = False

instance ApproxEq TI.Day where
  (=~) = (==)

arbitraryReduced :: Arbitrary a => Int -> Gen a
arbitraryReduced n = resize (n `div` 2) arbitrary

arbitraryReducedMaybe :: Arbitrary a => Int -> Gen (Maybe a)
arbitraryReducedMaybe 0 = elements [Nothing]
arbitraryReducedMaybe n = arbitraryReduced n

arbitraryReducedMaybeValue :: Int -> Gen (Maybe A.Value)
arbitraryReducedMaybeValue 0 = elements [Nothing]
arbitraryReducedMaybeValue n = do
  generated <- arbitraryReduced n
  if generated == Just A.Null
    then return Nothing
    else return generated

-- * Models

instance Arbitrary FinFeedAPIExchangeModel where
  arbitrary = sized genFinFeedAPIExchangeModel

genFinFeedAPIExchangeModel :: Int -> Gen FinFeedAPIExchangeModel
genFinFeedAPIExchangeModel n =
  FinFeedAPIExchangeModel
    <$> arbitraryReducedMaybe n -- finFeedAPIExchangeModelExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelLastDatapointDate :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelMic :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelOperatingMic :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelOprtSgmt :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelMarketNameInstitutionDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelLegalEntityName :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelLei :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelMarketCategoryCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelAcronym :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelIsoCountryCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelCity :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelWebsite :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelStatus :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelCreationDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelLastUpdateDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelLastValidationDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelExpiryDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- finFeedAPIExchangeModelComments :: Maybe Text
  
instance Arbitrary FinFeedAPISymbolModel where
  arbitrary = sized genFinFeedAPISymbolModel

genFinFeedAPISymbolModel :: Int -> Gen FinFeedAPISymbolModel
genFinFeedAPISymbolModel n =
  FinFeedAPISymbolModel
    <$> arbitraryReducedMaybe n -- finFeedAPISymbolModelSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelSecurityCategory :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelName :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelDate :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelAssetClass :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiCategory :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiGroup :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute1 :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute2 :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute3 :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute4 :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiCategoryDesc :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiGroupDesc :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute1Desc :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute2Desc :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute3Desc :: Maybe Text
    <*> arbitraryReducedMaybe n -- finFeedAPISymbolModelCfiAttribute4Desc :: Maybe Text
  
instance Arbitrary IEXPriceLevelUpdatePriceLevelUpdateModel where
  arbitrary = sized genIEXPriceLevelUpdatePriceLevelUpdateModel

genIEXPriceLevelUpdatePriceLevelUpdateModel :: Int -> Gen IEXPriceLevelUpdatePriceLevelUpdateModel
genIEXPriceLevelUpdatePriceLevelUpdateModel n =
  IEXPriceLevelUpdatePriceLevelUpdateModel
    <$> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelIsSideBuy :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelIsEventProcessingComplete :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- iEXPriceLevelUpdatePriceLevelUpdateModelPrice :: Maybe Double
  
instance Arbitrary IEXQuoteUpdateQuoteUpdateModel where
  arbitrary = sized genIEXQuoteUpdateQuoteUpdateModel

genIEXQuoteUpdateQuoteUpdateModel :: Int -> Gen IEXQuoteUpdateQuoteUpdateModel
genIEXQuoteUpdateQuoteUpdateModel n =
  IEXQuoteUpdateQuoteUpdateModel
    <$> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelIsSymbolAvailable :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelIsPrePostMarketSession :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelAskSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelAskPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelBidPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- iEXQuoteUpdateQuoteUpdateModelBidSize :: Maybe Int
  
instance Arbitrary IEXSystemEventSystemEventModel where
  arbitrary = sized genIEXSystemEventSystemEventModel

genIEXSystemEventSystemEventModel :: Int -> Gen IEXSystemEventSystemEventModel
genIEXSystemEventSystemEventModel n =
  IEXSystemEventSystemEventModel
    <$> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelSystemEvent :: Maybe Int
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelSystemEventCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelSystemEventText :: Maybe Text
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventStartOfMessages :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventStartOfSystemHours :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventStartOfRegularMarketHours :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventEndOfRegularMarketHours :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventEndOfSystemHours :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXSystemEventSystemEventModelIsSystemEventEndOfMessages :: Maybe Bool
  
instance Arbitrary IEXTradeTradeModel where
  arbitrary = sized genIEXTradeTradeModel

genIEXTradeTradeModel :: Int -> Gen IEXTradeTradeModel
genIEXTradeTradeModel n =
  IEXTradeTradeModel
    <$> arbitraryReducedMaybe n -- iEXTradeTradeModelIsTradeBreak :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelTradeId :: Maybe Integer
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelIsIntermarketSweep :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelIsExtendedHoursTrade :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelIsOddLotTrade :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelIsTradeThroughExempt :: Maybe Bool
    <*> arbitraryReducedMaybe n -- iEXTradeTradeModelIsSinglePriceCrossTrade :: Maybe Bool
  
instance Arbitrary ModelsAddOrderModel where
  arbitrary = sized genModelsAddOrderModel

genModelsAddOrderModel :: Int -> Gen ModelsAddOrderModel
genModelsAddOrderModel n =
  ModelsAddOrderModel
    <$> arbitraryReducedMaybe n -- modelsAddOrderModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelIsSideBuy :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAddOrderModelOrderId :: Maybe Integer
  
instance Arbitrary ModelsAdminMessageModel where
  arbitrary = sized genModelsAdminMessageModel

genModelsAdminMessageModel :: Int -> Gen ModelsAdminMessageModel
genModelsAdminMessageModel n =
  ModelsAdminMessageModel
    <$> arbitraryReducedMaybe n -- modelsAdminMessageModelTradingStatus :: Maybe ModelsTradingStatusModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelOfficialPrice :: Maybe ModelsOfficialPriceModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelSecurityEvent :: Maybe ModelsSecurityEventModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelAuctionInformation :: Maybe ModelsAuctionInformationModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelShortSalePriceTest :: Maybe ModelsShortSalePriceTestStatusModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelOperationalHaltStatus :: Maybe ModelsOperationalHaltStatusModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelRetailLiquidityIndicator :: Maybe ModelsRetailLiquidityIndicatorModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelSystemEvent :: Maybe IEXSystemEventSystemEventModel
    <*> arbitraryReducedMaybe n -- modelsAdminMessageModelSecurityDirectory :: Maybe ModelsSecurityDirectoryModel
  
instance Arbitrary ModelsAuctionInformationModel where
  arbitrary = sized genModelsAuctionInformationModel

genModelsAuctionInformationModel :: Int -> Gen ModelsAuctionInformationModel
genModelsAuctionInformationModel n =
  ModelsAuctionInformationModel
    <$> arbitraryReducedMaybe n -- modelsAuctionInformationModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelAuctionType :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelAuctionTypeCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelAuctionTypeText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsAuctionTypeOpening :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsAuctionTypeClosing :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsAuctionTypeIpo :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsAuctionTypeHalt :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsAuctionTypeVolatility :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelPairedShares :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelReferencePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIndicativeClearingPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelImbalanceShares :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelImbalanceSide :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelImbalanceSideCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelImbalanceSideText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsImbalanceSideBuy :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsImbalanceSideSell :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelIsImbalanceSideNone :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelExtensionNumber :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelScheduledAuctionTimeSeconds :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelScheduledAuctionTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelAuctionBookClearingPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelCollarReferencePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelLowerAuctionCollar :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsAuctionInformationModelUpperAuctionCollar :: Maybe Double
  
instance Arbitrary ModelsClearBookModel where
  arbitrary = sized genModelsClearBookModel

genModelsClearBookModel :: Int -> Gen ModelsClearBookModel
genModelsClearBookModel n =
  ModelsClearBookModel
    <$> arbitraryReducedMaybe n -- modelsClearBookModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsClearBookModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsClearBookModelTimestamp :: Maybe DateTime
  
instance Arbitrary ModelsDeleteOrderModel where
  arbitrary = sized genModelsDeleteOrderModel

genModelsDeleteOrderModel :: Int -> Gen ModelsDeleteOrderModel
genModelsDeleteOrderModel n =
  ModelsDeleteOrderModel
    <$> arbitraryReducedMaybe n -- modelsDeleteOrderModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsDeleteOrderModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsDeleteOrderModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsDeleteOrderModelOrderIdReference :: Maybe Integer
  
instance Arbitrary ModelsExecutedOrderModel where
  arbitrary = sized genModelsExecutedOrderModel

genModelsExecutedOrderModel :: Int -> Gen ModelsExecutedOrderModel
genModelsExecutedOrderModel n =
  ModelsExecutedOrderModel
    <$> arbitraryReducedMaybe n -- modelsExecutedOrderModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelOrderIdReference :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelSaleConditionFlags :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelIsIntermarketSweep :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelIsExtendedHoursTrade :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelIsOddLotTrade :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelIsTradeThroughExempt :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelIsSinglePriceCrossTrade :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsExecutedOrderModelTradeId :: Maybe Integer
  
instance Arbitrary ModelsModifyOrderModel where
  arbitrary = sized genModelsModifyOrderModel

genModelsModifyOrderModel :: Int -> Gen ModelsModifyOrderModel
genModelsModifyOrderModel n =
  ModelsModifyOrderModel
    <$> arbitraryReducedMaybe n -- modelsModifyOrderModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelOrderIdReference :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelIsPriorityReset :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsModifyOrderModelPrice :: Maybe Double
  
instance Arbitrary ModelsOfficialPriceModel where
  arbitrary = sized genModelsOfficialPriceModel

genModelsOfficialPriceModel :: Int -> Gen ModelsOfficialPriceModel
genModelsOfficialPriceModel n =
  ModelsOfficialPriceModel
    <$> arbitraryReducedMaybe n -- modelsOfficialPriceModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelPriceType :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelPriceTypeCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelPriceTypeText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelIsPriceTypeOpening :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelIsPriceTypeClosing :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsOfficialPriceModelOfficialPrice :: Maybe Double
  
instance Arbitrary ModelsOperationalHaltStatusModel where
  arbitrary = sized genModelsOperationalHaltStatusModel

genModelsOperationalHaltStatusModel :: Int -> Gen ModelsOperationalHaltStatusModel
genModelsOperationalHaltStatusModel n =
  ModelsOperationalHaltStatusModel
    <$> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelOperationalHaltStatus :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelOperationalHaltStatusCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelOperationalHaltStatusText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelIsOperationallyHalted :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsOperationalHaltStatusModelIsNotOperationallyHalted :: Maybe Bool
  
instance Arbitrary ModelsOrderBookModel where
  arbitrary = sized genModelsOrderBookModel

genModelsOrderBookModel :: Int -> Gen ModelsOrderBookModel
genModelsOrderBookModel n =
  ModelsOrderBookModel
    <$> arbitraryReducedMaybe n -- modelsOrderBookModelAddOrder :: Maybe ModelsAddOrderModel
    <*> arbitraryReducedMaybe n -- modelsOrderBookModelDeleteOrder :: Maybe ModelsDeleteOrderModel
    <*> arbitraryReducedMaybe n -- modelsOrderBookModelModifyOrder :: Maybe ModelsModifyOrderModel
    <*> arbitraryReducedMaybe n -- modelsOrderBookModelExecutedOrder :: Maybe ModelsExecutedOrderModel
    <*> arbitraryReducedMaybe n -- modelsOrderBookModelClearBook :: Maybe ModelsClearBookModel
  
instance Arbitrary ModelsRetailLiquidityIndicatorModel where
  arbitrary = sized genModelsRetailLiquidityIndicatorModel

genModelsRetailLiquidityIndicatorModel :: Int -> Gen ModelsRetailLiquidityIndicatorModel
genModelsRetailLiquidityIndicatorModel n =
  ModelsRetailLiquidityIndicatorModel
    <$> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelRetailLiquidityIndicator :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelRetailLiquidityIndicatorCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelRetailLiquidityIndicatorText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelIsRetailIndicatorNotApplicable :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelIsRetailIndicatorBuyInterest :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelIsRetailIndicatorSellInterest :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsRetailLiquidityIndicatorModelIsRetailIndicatorBuyAndSellInterest :: Maybe Bool
  
instance Arbitrary ModelsSecurityDirectoryModel where
  arbitrary = sized genModelsSecurityDirectoryModel

genModelsSecurityDirectoryModel :: Int -> Gen ModelsSecurityDirectoryModel
genModelsSecurityDirectoryModel n =
  ModelsSecurityDirectoryModel
    <$> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelFlags :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelRoundLotSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelAdjustedPocPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelLuldTier :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelLuldTierCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelLuldTierText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelIsLuldTierNotApplicable :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelIsLuldTier1 :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsSecurityDirectoryModelIsLuldTier2 :: Maybe Bool
  
instance Arbitrary ModelsSecurityEventModel where
  arbitrary = sized genModelsSecurityEventModel

genModelsSecurityEventModel :: Int -> Gen ModelsSecurityEventModel
genModelsSecurityEventModel n =
  ModelsSecurityEventModel
    <$> arbitraryReducedMaybe n -- modelsSecurityEventModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelSecurityEvent :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelSecurityEventCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelSecurityEventText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelIsOpeningProcessComplete :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsSecurityEventModelIsClosingProcessComplete :: Maybe Bool
  
instance Arbitrary ModelsShortSalePriceTestStatusModel where
  arbitrary = sized genModelsShortSalePriceTestStatusModel

genModelsShortSalePriceTestStatusModel :: Int -> Gen ModelsShortSalePriceTestStatusModel
genModelsShortSalePriceTestStatusModel n =
  ModelsShortSalePriceTestStatusModel
    <$> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelShortSalePriceTestStatus :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelShortSalePriceTestStatusCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelShortSalePriceTestStatusText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsShortSalePriceTestNotInEffect :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsShortSalePriceTestInEffect :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelDetail :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelDetailCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelDetailText :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsDetailNoPriceTest :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsDetailActivated :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsDetailContinued :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsDetailDeactivated :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsShortSalePriceTestStatusModelIsDetailNotAvailable :: Maybe Bool
  
instance Arbitrary ModelsTradingStatusModel where
  arbitrary = sized genModelsTradingStatusModel

genModelsTradingStatusModel :: Int -> Gen ModelsTradingStatusModel
genModelsTradingStatusModel n =
  ModelsTradingStatusModel
    <$> arbitraryReducedMaybe n -- modelsTradingStatusModelSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelTimestampNanos :: Maybe Integer
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsTradingLive :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsTradingHalted :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsTradingInOrderAcceptancePeriod :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsTradingPaused :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonHaltNewsPending :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonIpoNotYetTrading :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonIpoDeferred :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonHaltNewsDissemination :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonIpoOrderAcceptancePeriod :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonIpoPreLaunchPeriod :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonMarketWideCircuitBreakerLevel1 :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonMarketWideCircuitBreakerLevel2 :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonMarketWideCircuitBreakerLevel3 :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonNotApplicable :: Maybe Bool
    <*> arbitraryReducedMaybe n -- modelsTradingStatusModelIsReasonNotAvailable :: Maybe Bool
  
instance Arbitrary OHLCVTimeSeriesExchangeTimeseriesItem where
  arbitrary = sized genOHLCVTimeSeriesExchangeTimeseriesItem

genOHLCVTimeSeriesExchangeTimeseriesItem :: Int -> Gen OHLCVTimeSeriesExchangeTimeseriesItem
genOHLCVTimeSeriesExchangeTimeseriesItem n =
  OHLCVTimeSeriesExchangeTimeseriesItem
    <$> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemPriceOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemPriceHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemPriceLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemPriceClose :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemVolumeTraded :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemTradesCount :: Maybe Integer
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesExchangeTimeseriesItemSymbolIdExchange :: Maybe Text
  
instance Arbitrary OHLCVTimeSeriesTimeseriesItem where
  arbitrary = sized genOHLCVTimeSeriesTimeseriesItem

genOHLCVTimeSeriesTimeseriesItem :: Int -> Gen OHLCVTimeSeriesTimeseriesItem
genOHLCVTimeSeriesTimeseriesItem n =
  OHLCVTimeSeriesTimeseriesItem
    <$> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemPriceOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemPriceHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemPriceLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemPriceClose :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemVolumeTraded :: Maybe Double
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesItemTradesCount :: Maybe Integer
  
instance Arbitrary OHLCVTimeSeriesTimeseriesPeriod where
  arbitrary = sized genOHLCVTimeSeriesTimeseriesPeriod

genOHLCVTimeSeriesTimeseriesPeriod :: Int -> Gen OHLCVTimeSeriesTimeseriesPeriod
genOHLCVTimeSeriesTimeseriesPeriod n =
  OHLCVTimeSeriesTimeseriesPeriod
    <$> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodPeriodId :: Maybe Text
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodLengthSeconds :: Maybe Int
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodLengthMonths :: Maybe Int
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodUnitCount :: Maybe Int
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodUnitName :: Maybe Text
    <*> arbitraryReducedMaybe n -- oHLCVTimeSeriesTimeseriesPeriodDisplayName :: Maybe Text
  



