(ns coin-api-indexes-rest-api.specs.models/index-multi-asset-weight
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-multi-asset-weight-data
  {
   (ds/opt :indexId) string?
   (ds/opt :assetId) string?
   (ds/opt :weight) float?
   })

(def models/index-multi-asset-weight-spec
  (ds/spec
    {:name ::models/index-multi-asset-weight
     :spec models/index-multi-asset-weight-data}))
