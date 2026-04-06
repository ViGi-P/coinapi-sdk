(ns coin-api-indexes-rest-api.api.multi-asset-weights
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


