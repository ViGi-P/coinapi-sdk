(ns coin-api-market-data-rest-api.specs.market-data-metadata/icon
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def market-data-metadata/icon-data
  {
   (ds/opt :exchange_id) string?
   (ds/opt :asset_id) string?
   (ds/opt :url) string?
   })

(def market-data-metadata/icon-spec
  (ds/spec
    {:name ::market-data-metadata/icon
     :spec market-data-metadata/icon-data}))
