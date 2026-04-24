(ns coin-api-market-data-rest-api.specs.v1/option-exchange-group
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [coin-api-market-data-rest-api.specs.v1/strike :refer :all]
            )
  (:import (java.io File)))


(def v1/option-exchange-group-data
  {
   (ds/opt :asset_id_base) string?
   (ds/opt :asset_id_quote) string?
   (ds/opt :underlying_price) float?
   (ds/opt :time_expiration) inst?
   (ds/opt :strikes) (s/coll-of v1/strike-spec)
   })

(def v1/option-exchange-group-spec
  (ds/spec
    {:name ::v1/option-exchange-group
     :spec v1/option-exchange-group-data}))
