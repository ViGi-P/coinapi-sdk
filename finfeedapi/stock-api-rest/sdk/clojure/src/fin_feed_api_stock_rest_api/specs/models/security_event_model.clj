(ns fin-feed-api-stock-rest-api.specs.models/security-event-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def models/security-event-model-data
  {
   (ds/opt :symbol) string?
   (ds/opt :timestamp_nanos) int?
   (ds/opt :timestamp) inst?
   (ds/opt :security_event) int?
   (ds/opt :security_event_code) string?
   (ds/opt :security_event_text) string?
   (ds/opt :is_opening_process_complete) boolean?
   (ds/opt :is_closing_process_complete) boolean?
   })

(def models/security-event-model-spec
  (ds/spec
    {:name ::models/security-event-model
     :spec models/security-event-model-data}))
