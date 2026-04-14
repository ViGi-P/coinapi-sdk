(ns fx-realtime-rest-api.api.rate-limit
  (:require [fx-realtime-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [fx-realtime-rest-api.specs.v1/asset :refer :all]
            [fx-realtime-rest-api.specs.v1/exchange-rates :refer :all]
            [fx-realtime-rest-api.specs.v1/icon :refer :all]
            [fx-realtime-rest-api.specs.v1/chain-network-address :refer :all]
            [fx-realtime-rest-api.specs.v1/exchange-rates-rate :refer :all]
            [fx-realtime-rest-api.specs.v1/exchange-rate :refer :all]
            )
  (:import (java.io File)))


(defn-spec internal-ratelimit-wsconcon-apikey-get-with-http-info any?
  ""
  []
  (call-api "/internal/ratelimit/wsconcon/apikey" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec internal-ratelimit-wsconcon-apikey-get any?
  ""
  []
  (let [res (:data (internal-ratelimit-wsconcon-apikey-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec internal-ratelimit-wshello-ip-get-with-http-info any?
  ""
  []
  (call-api "/internal/ratelimit/wshello/ip" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec internal-ratelimit-wshello-ip-get any?
  ""
  []
  (let [res (:data (internal-ratelimit-wshello-ip-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


(defn-spec internal-ratelimit-wsreq-ip-get-with-http-info any?
  ""
  []
  (call-api "/internal/ratelimit/wsreq/ip" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       []
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec internal-ratelimit-wsreq-ip-get any?
  ""
  []
  (let [res (:data (internal-ratelimit-wsreq-ip-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode any? res st/string-transformer)
       res)))


