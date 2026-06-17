(ns coin-api-market-data-rest-api.specs.market-data-metadata/chain
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def market-data-metadata/chain-data
  {
   (ds/opt :chain_id) string?
   (ds/opt :name) string?
   })

(def market-data-metadata/chain-spec
  (ds/spec
    {:name ::market-data-metadata/chain
     :spec market-data-metadata/chain-data}))
