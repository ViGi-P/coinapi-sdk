(ns coin-api-indexes-rest-api.specs.models/index-definition-snapshot-entry
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-definition-snapshot-entry-data
  {
   (ds/opt :index_id) string?
   (ds/opt :timestamp) inst?
   (ds/opt :value) float?
   })

(def models/index-definition-snapshot-entry-spec
  (ds/spec
    {:name ::models/index-definition-snapshot-entry
     :spec models/index-definition-snapshot-entry-data}))
