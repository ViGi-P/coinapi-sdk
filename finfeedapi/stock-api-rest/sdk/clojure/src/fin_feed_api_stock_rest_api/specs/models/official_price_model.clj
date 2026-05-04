(ns fin-feed-api-stock-rest-api.specs.models/official-price-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/official-price-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :price_type) int?
   (ds/opt :price_type_code) string?
   (ds/opt :price_type_text) string?
   (ds/opt :is_price_type_opening) boolean?
   (ds/opt :is_price_type_closing) boolean?
   (ds/opt :official_price) float?
   })

(def models/official-price-model-spec
  (ds/spec
    {:name ::models/official-price-model
     :spec models/official-price-model-data}))
