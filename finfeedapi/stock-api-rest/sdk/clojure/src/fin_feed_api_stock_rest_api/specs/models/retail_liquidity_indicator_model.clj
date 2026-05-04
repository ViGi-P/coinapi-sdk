(ns fin-feed-api-stock-rest-api.specs.models/retail-liquidity-indicator-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/retail-liquidity-indicator-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :retail_liquidity_indicator) int?
   (ds/opt :retail_liquidity_indicator_code) string?
   (ds/opt :retail_liquidity_indicator_text) string?
   (ds/opt :is_retail_indicator_not_applicable) boolean?
   (ds/opt :is_retail_indicator_buy_interest) boolean?
   (ds/opt :is_retail_indicator_sell_interest) boolean?
   (ds/opt :is_retail_indicator_buy_and_sell_interest) boolean?
   })

(def models/retail-liquidity-indicator-model-spec
  (ds/spec
    {:name ::models/retail-liquidity-indicator-model
     :spec models/retail-liquidity-indicator-model-data}))
