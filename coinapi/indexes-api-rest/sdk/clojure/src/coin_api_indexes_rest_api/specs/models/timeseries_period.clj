(ns coin-api-indexes-rest-api.specs.models/timeseries-period
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/timeseries-period-data
  {
   (ds/opt :period_id) string?
   (ds/opt :length_seconds) int?
   (ds/opt :length_months) int?
   (ds/opt :unit_count) int?
   (ds/opt :unit_name) string?
   (ds/opt :display_name) string?
   })

(def models/timeseries-period-spec
  (ds/spec
    {:name ::models/timeseries-period
     :spec models/timeseries-period-data}))
