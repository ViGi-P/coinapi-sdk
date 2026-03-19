(ns coin-api-indexes-rest-api.api.indexes
  (:require [coin-api-indexes-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [coin-api-indexes-rest-api.specs.models/index-value-component :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-timeseries-item :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-identifier :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-definition-snapshot-entry :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-value :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-multi-asset-weight :refer :all]
            )
  (:import (java.io File)))


(defn-spec v1-indexdef-multiasset-get-with-http-info any?
  "Get all multi-asset weights"
  []
  (call-api "/v1/indexdef/multiasset" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexdef-multiasset-get (s/coll-of models/index-multi-asset-weight-spec)
  "Get all multi-asset weights"
  []
  (let [res (:data (v1-indexdef-multiasset-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of models/index-multi-asset-weight-spec) res st/string-transformer)
       res)))


(defn-spec v1-indexdef-multiasset-index-id-get-with-http-info any?
  "Get multi-asset weights for specific index"
  [index_id string?]
  (check-required-params index_id)
  (call-api "/v1/indexdef/multiasset/{index_id}" :get
            {:path-params   {"index_id" index_id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexdef-multiasset-index-id-get (s/coll-of models/index-multi-asset-weight-spec)
  "Get multi-asset weights for specific index"
  [index_id string?]
  (let [res (:data (v1-indexdef-multiasset-index-id-get-with-http-info index_id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of models/index-multi-asset-weight-spec) res st/string-transformer)
       res)))


(defn-spec v1-indexes-get-with-http-info any?
  "List indexes"
  []
  (call-api "/v1/indexes" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexes-get (s/coll-of models/index-identifier-spec)
  "List indexes"
  []
  (let [res (:data (v1-indexes-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of models/index-identifier-spec) res st/string-transformer)
       res)))


(defn-spec v1-indexes-index-definition-id-current-snapshot-get-with-http-info any?
  "Current Index Values for index definition"
  [index_definition_id string?]
  (check-required-params index_definition_id)
  (call-api "/v1/indexes/{index_definition_id}/currentSnapshot" :get
            {:path-params   {"index_definition_id" index_definition_id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexes-index-definition-id-current-snapshot-get (s/coll-of models/index-definition-snapshot-entry-spec)
  "Current Index Values for index definition"
  [index_definition_id string?]
  (let [res (:data (v1-indexes-index-definition-id-current-snapshot-get-with-http-info index_definition_id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of models/index-definition-snapshot-entry-spec) res st/string-transformer)
       res)))


(defn-spec v1-indexes-index-definition-id-history-snapshot-get-with-http-info any?
  "Historical Index Values for index definition"
  ([index_definition_id string?, ] (v1-indexes-index-definition-id-history-snapshot-get-with-http-info index_definition_id nil))
  ([index_definition_id string?, {:keys [time]} (s/map-of keyword? any?)]
   (check-required-params index_definition_id)
   (call-api "/v1/indexes/{index_definition_id}/historySnapshot" :get
             {:path-params   {"index_definition_id" index_definition_id }
              :header-params {}
              :query-params  {"time" time }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-indexes-index-definition-id-history-snapshot-get (s/coll-of models/index-definition-snapshot-entry-spec)
  "Historical Index Values for index definition"
  ([index_definition_id string?, ] (v1-indexes-index-definition-id-history-snapshot-get index_definition_id nil))
  ([index_definition_id string?, optional-params any?]
   (let [res (:data (v1-indexes-index-definition-id-history-snapshot-get-with-http-info index_definition_id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/index-definition-snapshot-entry-spec) res st/string-transformer)
        res))))


(defn-spec v1-indexes-index-id-current-get-with-http-info any?
  "Current Index Value"
  [index_id string?]
  (check-required-params index_id)
  (call-api "/v1/indexes/{index_id}/current" :get
            {:path-params   {"index_id" index_id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexes-index-id-current-get models/index-value-spec
  "Current Index Value"
  [index_id string?]
  (let [res (:data (v1-indexes-index-id-current-get-with-http-info index_id))]
    (if (:decode-models *api-context*)
       (st/decode models/index-value-spec res st/string-transformer)
       res)))


(defn-spec v1-indexes-index-id-history-get-with-http-info any?
  "Historical Index Value w/Composition"
  ([index_id string?, ] (v1-indexes-index-id-history-get-with-http-info index_id nil))
  ([index_id string?, {:keys [time_start time_end limit]} (s/map-of keyword? any?)]
   (check-required-params index_id)
   (call-api "/v1/indexes/{index_id}/history" :get
             {:path-params   {"index_id" index_id }
              :header-params {}
              :query-params  {"time_start" time_start "time_end" time_end "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-indexes-index-id-history-get (s/coll-of models/index-value-spec)
  "Historical Index Value w/Composition"
  ([index_id string?, ] (v1-indexes-index-id-history-get index_id nil))
  ([index_id string?, optional-params any?]
   (let [res (:data (v1-indexes-index-id-history-get-with-http-info index_id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/index-value-spec) res st/string-transformer)
        res))))


(defn-spec v1-indexes-index-id-timeseries-get-with-http-info any?
  "Timeseries Index Value"
  ([index_id string?, period_id string?, time_start string?, time_end string?, ] (v1-indexes-index-id-timeseries-get-with-http-info index_id period_id time_start time_end nil))
  ([index_id string?, period_id string?, time_start string?, time_end string?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params index_id period_id time_start time_end)
   (call-api "/v1/indexes/{index_id}/timeseries" :get
             {:path-params   {"index_id" index_id }
              :header-params {}
              :query-params  {"period_id" period_id "time_start" time_start "time_end" time_end "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-indexes-index-id-timeseries-get (s/coll-of models/index-timeseries-item-spec)
  "Timeseries Index Value"
  ([index_id string?, period_id string?, time_start string?, time_end string?, ] (v1-indexes-index-id-timeseries-get index_id period_id time_start time_end nil))
  ([index_id string?, period_id string?, time_start string?, time_end string?, optional-params any?]
   (let [res (:data (v1-indexes-index-id-timeseries-get-with-http-info index_id period_id time_start time_end optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/index-timeseries-item-spec) res st/string-transformer)
        res))))


