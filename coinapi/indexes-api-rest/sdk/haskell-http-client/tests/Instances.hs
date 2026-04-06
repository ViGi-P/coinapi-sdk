{-# LANGUAGE CPP #-}
{-# OPTIONS_GHC -fno-warn-unused-imports -fno-warn-unused-matches #-}

module Instances where

import CoinAPIIndexesREST.Model
import CoinAPIIndexesREST.Core

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

instance Arbitrary ModelsExchange where
  arbitrary = sized genModelsExchange

genModelsExchange :: Int -> Gen ModelsExchange
genModelsExchange n =
  ModelsExchange
    <$> arbitraryReducedMaybe n -- modelsExchangeExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsExchangeWebsite :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsExchangeName :: Maybe Text
  
instance Arbitrary ModelsIndexDefinitionInputData where
  arbitrary = sized genModelsIndexDefinitionInputData

genModelsIndexDefinitionInputData :: Int -> Gen ModelsIndexDefinitionInputData
genModelsIndexDefinitionInputData n =
  ModelsIndexDefinitionInputData
    <$> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataExchangeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataExchangeSymbolId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataBaseAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataQuoteAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataBeginDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataEndDate :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataStatus :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataStatusInfo :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionInputDataLastModificationTime :: Maybe DateTime
  
instance Arbitrary ModelsIndexDefinitionSnapshotEntry where
  arbitrary = sized genModelsIndexDefinitionSnapshotEntry

genModelsIndexDefinitionSnapshotEntry :: Int -> Gen ModelsIndexDefinitionSnapshotEntry
genModelsIndexDefinitionSnapshotEntry n =
  ModelsIndexDefinitionSnapshotEntry
    <$> arbitraryReducedMaybe n -- modelsIndexDefinitionSnapshotEntryIndexId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionSnapshotEntryTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexDefinitionSnapshotEntryValue :: Maybe Double
  
instance Arbitrary ModelsIndexIdentifier where
  arbitrary = sized genModelsIndexIdentifier

genModelsIndexIdentifier :: Int -> Gen ModelsIndexIdentifier
genModelsIndexIdentifier n =
  ModelsIndexIdentifier
    <$> arbitraryReducedMaybe n -- modelsIndexIdentifierId :: Maybe Text
  
instance Arbitrary ModelsIndexMultiAssetWeight where
  arbitrary = sized genModelsIndexMultiAssetWeight

genModelsIndexMultiAssetWeight :: Int -> Gen ModelsIndexMultiAssetWeight
genModelsIndexMultiAssetWeight n =
  ModelsIndexMultiAssetWeight
    <$> arbitraryReducedMaybe n -- modelsIndexMultiAssetWeightIndexId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexMultiAssetWeightAssetId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexMultiAssetWeightWeight :: Maybe Double
  
instance Arbitrary ModelsIndexTimeseriesItem where
  arbitrary = sized genModelsIndexTimeseriesItem

genModelsIndexTimeseriesItem :: Int -> Gen ModelsIndexTimeseriesItem
genModelsIndexTimeseriesItem n =
  ModelsIndexTimeseriesItem
    <$> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemTimePeriodStart :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemTimePeriodEnd :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemTimeOpen :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemTimeClose :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemValueOpen :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemValueHigh :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemValueLow :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemValueClose :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsIndexTimeseriesItemValueCount :: Maybe Integer
  
instance Arbitrary ModelsIndexValue where
  arbitrary = sized genModelsIndexValue

genModelsIndexValue :: Int -> Gen ModelsIndexValue
genModelsIndexValue n =
  ModelsIndexValue
    <$> arbitraryReducedMaybe n -- modelsIndexValueTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- modelsIndexValueValue :: Maybe Double
    <*> arbitraryReducedMaybe n -- modelsIndexValueComposition :: Maybe [ModelsIndexValueComponent]
  
instance Arbitrary ModelsIndexValueComponent where
  arbitrary = sized genModelsIndexValueComponent

genModelsIndexValueComponent :: Int -> Gen ModelsIndexValueComponent
genModelsIndexValueComponent n =
  ModelsIndexValueComponent
    <$> arbitraryReducedMaybe n -- modelsIndexValueComponentComponentId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsIndexValueComponentComponentValue :: Maybe Double
  
instance Arbitrary ModelsTimeseriesPeriod where
  arbitrary = sized genModelsTimeseriesPeriod

genModelsTimeseriesPeriod :: Int -> Gen ModelsTimeseriesPeriod
genModelsTimeseriesPeriod n =
  ModelsTimeseriesPeriod
    <$> arbitraryReducedMaybe n -- modelsTimeseriesPeriodPeriodId :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsTimeseriesPeriodLengthSeconds :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsTimeseriesPeriodLengthMonths :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsTimeseriesPeriodUnitCount :: Maybe Int
    <*> arbitraryReducedMaybe n -- modelsTimeseriesPeriodUnitName :: Maybe Text
    <*> arbitraryReducedMaybe n -- modelsTimeseriesPeriodDisplayName :: Maybe Text
  



