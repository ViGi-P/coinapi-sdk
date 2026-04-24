(ns coin-api-market-data-rest-api.specs.v1/strike
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [coin-api-market-data-rest-api.specs.v1/quote-trade :refer :all]
            [coin-api-market-data-rest-api.specs.v1/quote-trade :refer :all]
            )
  (:import (java.io File)))


(def v1/strike-data
  {
   (ds/opt :strike_price) float?
   (ds/opt :call) v1/quote-trade-spec
   (ds/opt :put) v1/quote-trade-spec
   })

(def v1/strike-spec
  (ds/spec
    {:name ::v1/strike
     :spec v1/strike-data}))
