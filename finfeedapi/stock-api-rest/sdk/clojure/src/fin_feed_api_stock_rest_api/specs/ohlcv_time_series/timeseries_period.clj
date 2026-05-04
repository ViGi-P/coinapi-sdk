(ns fin-feed-api-stock-rest-api.specs.ohlcv-time-series/timeseries-period
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ohlcv-time-series/timeseries-period-data
  {
   (ds/opt :period_id) string?
   (ds/opt :length_seconds) int?
   (ds/opt :length_months) int?
   (ds/opt :unit_count) int?
   (ds/opt :unit_name) string?
   (ds/opt :display_name) string?
   })

(def ohlcv-time-series/timeseries-period-spec
  (ds/spec
    {:name ::ohlcv-time-series/timeseries-period
     :spec ohlcv-time-series/timeseries-period-data}))
