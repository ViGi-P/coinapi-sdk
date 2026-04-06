(ns coin-api-indexes-rest-api.api.index-input-data
  (:require [coin-api-indexes-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [coin-api-indexes-rest-api.specs.models/index-value-component :refer :all]
            [coin-api-indexes-rest-api.specs.models/exchange :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-timeseries-item :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-identifier :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-definition-snapshot-entry :refer :all]
            [coin-api-indexes-rest-api.specs.models/timeseries-period :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-value :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-definition-input-data :refer :all]
            [coin-api-indexes-rest-api.specs.models/index-multi-asset-weight :refer :all]
            )
  (:import (java.io File)))


(defn-spec v1-indexdef-input-data-index-definition-id-all-get-with-http-info any?
  "Returns all data inputs for a specific index definition"
  [index_definition_id string?]
  (check-required-params index_definition_id)
  (call-api "/v1/indexdef/input-data/{index_definition_id}/all" :get
            {:path-params   {"index_definition_id" index_definition_id }
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-indexdef-input-data-index-definition-id-all-get (s/coll-of models/index-definition-input-data-spec)
  "Returns all data inputs for a specific index definition"
  [index_definition_id string?]
  (let [res (:data (v1-indexdef-input-data-index-definition-id-all-get-with-http-info index_definition_id))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of models/index-definition-input-data-spec) res st/string-transformer)
       res)))


(defn-spec v1-indexdef-input-data-index-definition-id-get-with-http-info any?
  "Returns data inputs for certain index definition and time"
  ([index_definition_id string?, ] (v1-indexdef-input-data-index-definition-id-get-with-http-info index_definition_id nil))
  ([index_definition_id string?, {:keys [time enabled_only pending_only filter_asset_id with_status_info]} (s/map-of keyword? any?)]
   (check-required-params index_definition_id)
   (call-api "/v1/indexdef/input-data/{index_definition_id}" :get
             {:path-params   {"index_definition_id" index_definition_id }
              :header-params {}
              :query-params  {"time" time "enabled_only" enabled_only "pending_only" pending_only "filter_asset_id" filter_asset_id "with_status_info" with_status_info }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain" "application/json" "text/json" "application/x-msgpack"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-indexdef-input-data-index-definition-id-get (s/coll-of models/index-definition-snapshot-entry-spec)
  "Returns data inputs for certain index definition and time"
  ([index_definition_id string?, ] (v1-indexdef-input-data-index-definition-id-get index_definition_id nil))
  ([index_definition_id string?, optional-params any?]
   (let [res (:data (v1-indexdef-input-data-index-definition-id-get-with-http-info index_definition_id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/index-definition-snapshot-entry-spec) res st/string-transformer)
        res))))


