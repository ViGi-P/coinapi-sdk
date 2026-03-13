(ns coin-api-indexes-rest-api.specs.models/index-identifier
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-identifier-data
  {
   (ds/opt :id) string?
   })

(def models/index-identifier-spec
  (ds/spec
    {:name ::models/index-identifier
     :spec models/index-identifier-data}))
