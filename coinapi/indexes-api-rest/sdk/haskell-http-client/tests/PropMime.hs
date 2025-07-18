{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE ConstraintKinds #-}
{-# OPTIONS_GHC -fno-warn-unused-imports #-}

module PropMime where

import Data.Aeson
import Data.Aeson.Types (parseEither)
import Data.Monoid ((<>))
import Data.Typeable (Proxy(..), typeOf, Typeable)
import qualified Data.ByteString.Lazy.Char8 as BL8
import Test.Hspec
import Test.QuickCheck
import Test.QuickCheck.Property
import Test.Hspec.QuickCheck (prop)

import CoinAPIIndexesREST.MimeTypes

import ApproxEq

-- * Type Aliases

type ArbitraryMime mime a = ArbitraryRoundtrip (MimeUnrender mime) (MimeRender mime) a

type ArbitraryRoundtrip from to a = (from a, to a, Arbitrary' a)

type Arbitrary' a = (Arbitrary a, Show a, Typeable a)

-- * Mime

propMime
  :: forall a b mime.
     (ArbitraryMime mime a, Testable b)
  => String -> (a -> a -> b) -> mime -> Proxy a -> Spec
propMime eqDescr eq m _ =
  prop
    (show (typeOf (undefined :: a)) <> " " <> show (typeOf (undefined :: mime)) <> " roundtrip " <> eqDescr) $
  \(x :: a) ->
     let rendered = mimeRender' m x
         actual = mimeUnrender' m rendered
         expected = Right x
         failMsg =
           "ACTUAL: " <> show actual <> "\nRENDERED: " <> BL8.unpack rendered
     in counterexample failMsg $
        either reject property (eq <$> actual <*> expected)
  where
    reject = property . const rejected

propMimeEq :: (ArbitraryMime mime a, Eq a) => mime -> Proxy a -> Spec
propMimeEq = propMime "(EQ)" (==)
