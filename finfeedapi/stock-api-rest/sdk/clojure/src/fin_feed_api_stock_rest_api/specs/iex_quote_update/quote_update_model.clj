(ns fin-feed-api-stock-rest-api.specs.iex-quote-update/quote-update-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def iex-quote-update/quote-update-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :is_symbol_available) boolean?
   (ds/opt :is_pre_post_market_session) boolean?
   (ds/opt :ask_size) int?
   (ds/opt :ask_price) float?
   (ds/opt :bid_price) float?
   (ds/opt :bid_size) int?
   })

(def iex-quote-update/quote-update-model-spec
  (ds/spec
    {:name ::iex-quote-update/quote-update-model
     :spec iex-quote-update/quote-update-model-data}))
