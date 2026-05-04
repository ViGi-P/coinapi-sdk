(ns fin-feed-api-stock-rest-api.specs.models/delete-order-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/delete-order-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :order_id_reference) int?
   })

(def models/delete-order-model-spec
  (ds/spec
    {:name ::models/delete-order-model
     :spec models/delete-order-model-data}))
