(ns coin-api-indexes-rest-api.specs.models/index-timeseries-item
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/index-timeseries-item-data
  {
   (ds/opt :time_period_start) inst?
   (ds/opt :time_period_end) inst?
   (ds/opt :time_open) inst?
   (ds/opt :time_close) inst?
   (ds/opt :value_open) float?
   (ds/opt :value_high) float?
   (ds/opt :value_low) float?
   (ds/opt :value_close) float?
   (ds/opt :value_count) int?
   })

(def models/index-timeseries-item-spec
  (ds/spec
    {:name ::models/index-timeseries-item
     :spec models/index-timeseries-item-data}))
