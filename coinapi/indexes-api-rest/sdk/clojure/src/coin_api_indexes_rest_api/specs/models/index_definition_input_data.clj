(ns coin-api-indexes-rest-api.specs.models/index-definition-input-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-definition-input-data-data
  {
   (ds/opt :exchangeId) string?
   (ds/opt :exchangeSymbolId) string?
   (ds/opt :baseAssetId) string?
   (ds/opt :quoteAssetId) string?
   (ds/opt :beginDate) inst?
   (ds/opt :endDate) inst?
   (ds/opt :status) string?
   (ds/opt :statusInfo) string?
   (ds/opt :lastModificationTime) inst?
   })

(def models/index-definition-input-data-spec
  (ds/spec
    {:name ::models/index-definition-input-data
     :spec models/index-definition-input-data-data}))
