{-# LANGUAGE CPP #-}
{-# OPTIONS_GHC -fno-warn-unused-imports -fno-warn-unused-matches #-}

module Instances where

import CoinAPIMarketDataREST.Model
import CoinAPIMarketDataREST.Core

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

instance Arbitrary MarketDataMetadataAsset where
  arbitrary = sized genMarketDataMetadataAsset

genMarketDataMetadataAsset :: Int -> Gen MarketDataMetadataAsset
genMarketDataMetadataAsset n =
  MarketDataMetadataAsset
    <$> arbitraryReducedMaybe n -- marketDataMetadataAssetAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetName :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetTypeIsCrypto :: Maybe Int
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataQuoteStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataQuoteEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataOrderbookStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataOrderbookEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataTradeStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataTradeEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataSymbolsCount :: Maybe Integer
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetVolume1hrsUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetVolume1dayUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetVolume1mthUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetPriceUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetIdIcon :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetSupplyCurrent :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetSupplyTotal :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetSupplyMax :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetChainAddresses :: Maybe [V1ChainNetworkAddress]
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataStart :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataAssetDataEnd :: Maybe Text
  
instance Arbitrary MarketDataMetadataChain where
  arbitrary = sized genMarketDataMetadataChain

genMarketDataMetadataChain :: Int -> Gen MarketDataMetadataChain
genMarketDataMetadataChain n =
  MarketDataMetadataChain
    <$> arbitraryReducedMaybe n -- marketDataMetadataChainChainId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataChainName :: Maybe Text
  
instance Arbitrary MarketDataMetadataExchange where
  arbitrary = sized genMarketDataMetadataExchange

genMarketDataMetadataExchange :: Int -> Gen MarketDataMetadataExchange
genMarketDataMetadataExchange n =
  MarketDataMetadataExchange
    <$> arbitraryReducedMaybe n -- marketDataMetadataExchangeExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeWebsite :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeName :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataStart :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataEnd :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataQuoteStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataQuoteEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataOrderbookStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataOrderbookEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataTradeStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataTradeEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataTradeCount :: Maybe Integer
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeDataSymbolsCount :: Maybe Integer
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeVolume1hrsUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeVolume1dayUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeVolume1mthUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeMetricId :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeIcons :: Maybe [MarketDataMetadataIcon]
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeRank :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataExchangeIntegrationStatus :: Maybe Text
  
instance Arbitrary MarketDataMetadataIcon where
  arbitrary = sized genMarketDataMetadataIcon

genMarketDataMetadataIcon :: Int -> Gen MarketDataMetadataIcon
genMarketDataMetadataIcon n =
  MarketDataMetadataIcon
    <$> arbitraryReducedMaybe n -- marketDataMetadataIconExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataIconAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataIconUrl :: Maybe Text
  
instance Arbitrary MarketDataMetadataSymbol where
  arbitrary = sized genMarketDataMetadataSymbol

genMarketDataMetadataSymbol :: Int -> Gen MarketDataMetadataSymbol
genMarketDataMetadataSymbol n =
  MarketDataMetadataSymbol
    <$> arbitraryReducedMaybe n -- marketDataMetadataSymbolSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolSymbolType :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolAssetIdBase :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolAssetIdQuote :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolAssetIdUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolFutureContractUnit :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolFutureContractUnitAsset :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolFutureDeliveryTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionTypeIsCall :: Maybe Bool
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionStrikePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionContractUnit :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionExerciseStyle :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionExpirationTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractDeliveryTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractUnit :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractUnitAsset :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractDisplayName :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolContractDisplayDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataStart :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataEnd :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataQuoteStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataQuoteEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataOrderbookStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataOrderbookEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataTradeStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolDataTradeEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolIndexId :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolIndexDisplayName :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolIndexDisplayDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1hrs :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1hrsUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1day :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1dayUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1mth :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolume1mthUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolSymbolIdExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolAssetIdBaseExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolAssetIdQuoteExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolPricePrecision :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolSizePrecision :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolRawKvp :: Maybe (Map.Map String Text)
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolFutureIsInverse :: Maybe Bool
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolFutureIsQuanto :: Maybe Bool
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolVolumeToUsd :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionBarrierUpPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionBarrierUpType :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionBarrierDownPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolOptionBarrierDownType :: Maybe Text
    <*> arbitraryReducedMaybe n -- marketDataMetadataSymbolSymbolIdInt :: Maybe Int
  
instance Arbitrary OhlcvExchangeTimeseriesItem where
  arbitrary = sized genOhlcvExchangeTimeseriesItem

genOhlcvExchangeTimeseriesItem :: Int -> Gen OhlcvExchangeTimeseriesItem
genOhlcvExchangeTimeseriesItem n =
  OhlcvExchangeTimeseriesItem
    <$> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemPriceOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemPriceHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemPriceLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemPriceClose :: Maybe Double
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemVolumeTraded :: Maybe Double
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemTradesCount :: Maybe Integer
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemSymbolIdExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- ohlcvExchangeTimeseriesItemSymbolIdCoinapi :: Maybe Text
  
instance Arbitrary V1ChainNetworkAddress where
  arbitrary = sized genV1ChainNetworkAddress

genV1ChainNetworkAddress :: Int -> Gen V1ChainNetworkAddress
genV1ChainNetworkAddress n =
  V1ChainNetworkAddress
    <$> arbitraryReducedMaybe n -- v1ChainNetworkAddressChainId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ChainNetworkAddressNetworkId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ChainNetworkAddressAddress :: Maybe Text
  
instance Arbitrary V1ExchangeRate where
  arbitrary = sized genV1ExchangeRate

genV1ExchangeRate :: Int -> Gen V1ExchangeRate
genV1ExchangeRate n =
  V1ExchangeRate
    <$> arbitraryReducedMaybe n -- v1ExchangeRateTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRateAssetIdBase :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ExchangeRateAssetIdQuote :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ExchangeRateRate :: Maybe Double
  
instance Arbitrary V1ExchangeRates where
  arbitrary = sized genV1ExchangeRates

genV1ExchangeRates :: Int -> Gen V1ExchangeRates
genV1ExchangeRates n =
  V1ExchangeRates
    <$> arbitraryReducedMaybe n -- v1ExchangeRatesAssetIdBase :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesRates :: Maybe [V1ExchangeRatesRate]
  
instance Arbitrary V1ExchangeRatesRate where
  arbitrary = sized genV1ExchangeRatesRate

genV1ExchangeRatesRate :: Int -> Gen V1ExchangeRatesRate
genV1ExchangeRatesRate n =
  V1ExchangeRatesRate
    <$> arbitraryReducedMaybe n -- v1ExchangeRatesRateTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesRateAssetIdQuote :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesRateRate :: Maybe Double
  
instance Arbitrary V1ExchangeRatesTimeseriesItem where
  arbitrary = sized genV1ExchangeRatesTimeseriesItem

genV1ExchangeRatesTimeseriesItem :: Int -> Gen V1ExchangeRatesTimeseriesItem
genV1ExchangeRatesTimeseriesItem n =
  V1ExchangeRatesTimeseriesItem
    <$> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemRateOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemRateHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemRateLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1ExchangeRatesTimeseriesItemRateClose :: Maybe Double
  
instance Arbitrary V1GeneralData where
  arbitrary = sized genV1GeneralData

genV1GeneralData :: Int -> Gen V1GeneralData
genV1GeneralData n =
  V1GeneralData
    <$> arbitraryReducedMaybe n -- v1GeneralDataEntryTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1GeneralDataRecvTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1GeneralDataExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1GeneralDataAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1GeneralDataSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1GeneralDataMetricId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1GeneralDataValueDecimal :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1GeneralDataValueText :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1GeneralDataValueTime :: Maybe DateTime
  
instance Arbitrary V1LastTrade where
  arbitrary = sized genV1LastTrade

genV1LastTrade :: Int -> Gen V1LastTrade
genV1LastTrade n =
  V1LastTrade
    <$> arbitraryReducedMaybe n -- v1LastTradeTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1LastTradeTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1LastTradeUuid :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1LastTradePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1LastTradeSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1LastTradeTakerSide :: Maybe Text
  
instance Arbitrary V1ListingItem where
  arbitrary = sized genV1ListingItem

genV1ListingItem :: Int -> Gen V1ListingItem
genV1ListingItem n =
  V1ListingItem
    <$> arbitraryReducedMaybe n -- v1ListingItemMetricId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemSymbolIdExternal :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemAssetIdExternal :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemChainId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1ListingItemNetworkId :: Maybe Text
  
instance Arbitrary V1Metric where
  arbitrary = sized genV1Metric

genV1Metric :: Int -> Gen V1Metric
genV1Metric n =
  V1Metric
    <$> arbitraryReducedMaybe n -- v1MetricMetricId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1MetricDescription :: Maybe Text
  
instance Arbitrary V1MetricData where
  arbitrary = sized genV1MetricData

genV1MetricData :: Int -> Gen V1MetricData
genV1MetricData n =
  V1MetricData
    <$> arbitraryReducedMaybe n -- v1MetricDataSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1MetricDataTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1MetricDataValue :: Maybe Double
  
instance Arbitrary V1MetricInfo where
  arbitrary = sized genV1MetricInfo

genV1MetricInfo :: Int -> Gen V1MetricInfo
genV1MetricInfo n =
  V1MetricInfo
    <$> arbitraryReducedMaybe n -- v1MetricInfoMetricId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1MetricInfoDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1MetricInfoSourceId :: Maybe Text
  
instance Arbitrary V1OptionExchangeGroup where
  arbitrary = sized genV1OptionExchangeGroup

genV1OptionExchangeGroup :: Int -> Gen V1OptionExchangeGroup
genV1OptionExchangeGroup n =
  V1OptionExchangeGroup
    <$> arbitraryReducedMaybe n -- v1OptionExchangeGroupAssetIdBase :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1OptionExchangeGroupAssetIdQuote :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1OptionExchangeGroupUnderlyingPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1OptionExchangeGroupTimeExpiration :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OptionExchangeGroupStrikes :: Maybe [V1Strike]
  
instance Arbitrary V1OrderBook where
  arbitrary = sized genV1OrderBook

genV1OrderBook :: Int -> Gen V1OrderBook
genV1OrderBook n =
  V1OrderBook
    <$> arbitraryReducedMaybe n -- v1OrderBookSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1OrderBookTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookAsks :: Maybe AnyType
    <*> arbitraryReducedMaybe n -- v1OrderBookBids :: Maybe AnyType
  
instance Arbitrary V1OrderBookBase where
  arbitrary = sized genV1OrderBookBase

genV1OrderBookBase :: Int -> Gen V1OrderBookBase
genV1OrderBookBase n =
  V1OrderBookBase
    <$> arbitraryReducedMaybe n -- v1OrderBookBaseSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1OrderBookBaseTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookBaseTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookBaseAsks :: Maybe AnyType
    <*> arbitraryReducedMaybe n -- v1OrderBookBaseBids :: Maybe AnyType
  
instance Arbitrary V1OrderBookDepth where
  arbitrary = sized genV1OrderBookDepth

genV1OrderBookDepth :: Int -> Gen V1OrderBookDepth
genV1OrderBookDepth n =
  V1OrderBookDepth
    <$> arbitraryReducedMaybe n -- v1OrderBookDepthSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthAskLevels :: Maybe Integer
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthBidLevels :: Maybe Integer
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthAskDepth :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1OrderBookDepthBidDepth :: Maybe Double
  
instance Arbitrary V1Quote where
  arbitrary = sized genV1Quote

genV1Quote :: Int -> Gen V1Quote
genV1Quote n =
  V1Quote
    <$> arbitraryReducedMaybe n -- v1QuoteSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1QuoteTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1QuoteTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1QuoteAskPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteAskSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteBidPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteBidSize :: Maybe Double
  
instance Arbitrary V1QuoteTrade where
  arbitrary = sized genV1QuoteTrade

genV1QuoteTrade :: Int -> Gen V1QuoteTrade
genV1QuoteTrade n =
  V1QuoteTrade
    <$> arbitraryReducedMaybe n -- v1QuoteTradeSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1QuoteTradeTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1QuoteTradeTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1QuoteTradeAskPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteTradeAskSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteTradeBidPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteTradeBidSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1QuoteTradeLastTrade :: Maybe V1LastTrade
  
instance Arbitrary V1Strike where
  arbitrary = sized genV1Strike

genV1Strike :: Int -> Gen V1Strike
genV1Strike n =
  V1Strike
    <$> arbitraryReducedMaybe n -- v1StrikeStrikePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1StrikeCall :: Maybe V1QuoteTrade
    <*> arbitraryReducedMaybe n -- v1StrikePut :: Maybe V1QuoteTrade
  
instance Arbitrary V1SymbolMapping where
  arbitrary = sized genV1SymbolMapping

genV1SymbolMapping :: Int -> Gen V1SymbolMapping
genV1SymbolMapping n =
  V1SymbolMapping
    <$> arbitraryReducedMaybe n -- v1SymbolMappingSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingSymbolIdExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingCoinapiDatainfoId :: Maybe Int
    <*> arbitraryReducedMaybe n -- v1SymbolMappingAssetIdBaseExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingAssetIdQuoteExchange :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingAssetIdBase :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingAssetIdQuote :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1SymbolMappingPricePrecision :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1SymbolMappingSizePrecision :: Maybe Double
  
instance Arbitrary V1TimeseriesItem where
  arbitrary = sized genV1TimeseriesItem

genV1TimeseriesItem :: Int -> Gen V1TimeseriesItem
genV1TimeseriesItem n =
  V1TimeseriesItem
    <$> arbitraryReducedMaybe n -- v1TimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemPriceOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemPriceHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemPriceLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemPriceClose :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemVolumeTraded :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TimeseriesItemTradesCount :: Maybe Integer
  
instance Arbitrary V1TimeseriesPeriod where
  arbitrary = sized genV1TimeseriesPeriod

genV1TimeseriesPeriod :: Int -> Gen V1TimeseriesPeriod
genV1TimeseriesPeriod n =
  V1TimeseriesPeriod
    <$> arbitraryReducedMaybe n -- v1TimeseriesPeriodPeriodId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TimeseriesPeriodLengthSeconds :: Maybe Int
    <*> arbitraryReducedMaybe n -- v1TimeseriesPeriodLengthMonths :: Maybe Int
    <*> arbitraryReducedMaybe n -- v1TimeseriesPeriodUnitCount :: Maybe Int
    <*> arbitraryReducedMaybe n -- v1TimeseriesPeriodUnitName :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TimeseriesPeriodDisplayName :: Maybe Text
  
instance Arbitrary V1Trade where
  arbitrary = sized genV1Trade

genV1Trade :: Int -> Gen V1Trade
genV1Trade n =
  V1Trade
    <$> arbitraryReducedMaybe n -- v1TradeSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeTimeExchange :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TradeTimeCoinapi :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- v1TradeUuid :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradePrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TradeSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- v1TradeTakerSide :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeIdTrade :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeIdOrderMaker :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeIdOrderTaker :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeUserTaker :: Maybe Text
    <*> arbitraryReducedMaybe n -- v1TradeUserMaker :: Maybe Text
  



