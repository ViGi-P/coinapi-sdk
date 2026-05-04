(ns fin-feed-api-stock-rest-api.specs.models/add-order-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/add-order-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :is_side_buy) boolean?
   (ds/opt :size) int?
   (ds/opt :price) float?
   (ds/opt :order_id) int?
   })

(def models/add-order-model-spec
  (ds/spec
    {:name ::models/add-order-model
     :spec models/add-order-model-data}))
