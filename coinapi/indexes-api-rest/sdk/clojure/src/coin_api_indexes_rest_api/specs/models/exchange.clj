(ns coin-api-indexes-rest-api.specs.models/exchange
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/exchange-data
  {
   (ds/opt :exchange_id) string?
   (ds/opt :website) string?
   (ds/opt :name) string?
   })

(def models/exchange-spec
  (ds/spec
    {:name ::models/exchange
     :spec models/exchange-data}))
