(ns fin-feed-api-stock-rest-api.specs.models/clear-book-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/clear-book-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   })

(def models/clear-book-model-spec
  (ds/spec
    {:name ::models/clear-book-model
     :spec models/clear-book-model-data}))
