(ns coin-api-indexes-rest-api.specs.models/index-value
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [coin-api-indexes-rest-api.specs.models/index-value-component :refer :all]
            )
  (:import (java.io File)))


(def models/index-value-data
  {
   (ds/opt :timestamp) inst?
   (ds/opt :value) float?
   (ds/opt :composition) (s/coll-of models/index-value-component-spec)
   })

(def models/index-value-spec
  (ds/spec
    {:name ::models/index-value
     :spec models/index-value-data}))
