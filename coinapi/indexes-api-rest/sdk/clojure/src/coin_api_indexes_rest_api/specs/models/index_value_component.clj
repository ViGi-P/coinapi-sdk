(ns coin-api-indexes-rest-api.specs.models/index-value-component
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-value-component-data
  {
   (ds/opt :component_id) string?
   (ds/opt :component_value) float?
   })

(def models/index-value-component-spec
  (ds/spec
    {:name ::models/index-value-component
     :spec models/index-value-component-data}))
