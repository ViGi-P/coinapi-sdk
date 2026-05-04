(ns fin-feed-api-stock-rest-api.specs.iex-price-level-update/price-level-update-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def iex-price-level-update/price-level-update-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :is_side_buy) boolean?
   (ds/opt :is_event_processing_complete) boolean?
   (ds/opt :size) int?
   (ds/opt :price) float?
   })

(def iex-price-level-update/price-level-update-model-spec
  (ds/spec
    {:name ::iex-price-level-update/price-level-update-model
     :spec iex-price-level-update/price-level-update-model-data}))
