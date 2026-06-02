(ns fin-feed-api-stock-rest-api.api.native-iex
  (:require [fin-feed-api-stock-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [fin-feed-api-stock-rest-api.specs.models/order-book-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/add-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.fin-feed-api/exchange-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/trading-status-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.iex-system-event/system-event-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.iex-trade/trade-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/auction-information-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/short-sale-price-test-status-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.ohlcv-time-series/exchange-timeseries-item :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/modify-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/security-event-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.iex-quote-update/quote-update-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/executed-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/admin-message-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/clear-book-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.fin-feed-api/symbol-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.ohlcv-time-series/timeseries-period :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/delete-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/security-directory-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.iex-price-level-update/price-level-update-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/retail-liquidity-indicator-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.ohlcv-time-series/timeseries-item :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/official-price-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/operational-halt-status-model :refer :all]
            )
  (:import (java.io File)))


(defn-spec v1-native-iex-admin-messages-symbol-get-with-http-info any?
  "Get Admin Messages
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-admin-messages-symbol-get-with-http-info symbol date nil))
  ([symbol string?, date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params symbol date)
   (call-api "/v1/native/iex/admin/messages/{symbol}" :get
             {:path-params   {"symbol" symbol }
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-admin-messages-symbol-get (s/coll-of models/admin-message-model-spec)
  "Get Admin Messages
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-admin-messages-symbol-get symbol date nil))
  ([symbol string?, date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-admin-messages-symbol-get-with-http-info symbol date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/admin-message-model-spec) res st/string-transformer)
        res))))


(defn-spec v1-native-iex-admin-system-event-get-with-http-info any?
  "Get System Events
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([date inst?, ] (v1-native-iex-admin-system-event-get-with-http-info date nil))
  ([date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params date)
   (call-api "/v1/native/iex/admin/system-event" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-admin-system-event-get (s/coll-of iex-system-event/system-event-model-spec)
  "Get System Events
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([date inst?, ] (v1-native-iex-admin-system-event-get date nil))
  ([date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-admin-system-event-get-with-http-info date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of iex-system-event/system-event-model-spec) res st/string-transformer)
        res))))


(defn-spec v1-native-iex-level1-quote-symbol-get-with-http-info any?
  "Get Level-1 Quotes
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level1-quote-symbol-get-with-http-info symbol date nil))
  ([symbol string?, date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params symbol date)
   (call-api "/v1/native/iex/level1-quote/{symbol}" :get
             {:path-params   {"symbol" symbol }
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-level1-quote-symbol-get (s/coll-of iex-quote-update/quote-update-model-spec)
  "Get Level-1 Quotes
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level1-quote-symbol-get symbol date nil))
  ([symbol string?, date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-level1-quote-symbol-get-with-http-info symbol date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of iex-quote-update/quote-update-model-spec) res st/string-transformer)
        res))))


(defn-spec v1-native-iex-level2-price-level-update-symbol-get-with-http-info any?
  "Get Level-2 Price Level Book
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level2-price-level-update-symbol-get-with-http-info symbol date nil))
  ([symbol string?, date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params symbol date)
   (call-api "/v1/native/iex/level2-price-level-update/{symbol}" :get
             {:path-params   {"symbol" symbol }
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-level2-price-level-update-symbol-get (s/coll-of iex-price-level-update/price-level-update-model-spec)
  "Get Level-2 Price Level Book
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level2-price-level-update-symbol-get symbol date nil))
  ([symbol string?, date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-level2-price-level-update-symbol-get-with-http-info symbol date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of iex-price-level-update/price-level-update-model-spec) res st/string-transformer)
        res))))


(defn-spec v1-native-iex-level3-order-book-symbol-get-with-http-info any?
  "Get Level-3 Order Book
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level3-order-book-symbol-get-with-http-info symbol date nil))
  ([symbol string?, date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params symbol date)
   (call-api "/v1/native/iex/level3-order-book/{symbol}" :get
             {:path-params   {"symbol" symbol }
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-level3-order-book-symbol-get (s/coll-of models/order-book-model-spec)
  "Get Level-3 Order Book
  Streaming endpoint. Use `limit` to cap the number of records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-level3-order-book-symbol-get symbol date nil))
  ([symbol string?, date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-level3-order-book-symbol-get-with-http-info symbol date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of models/order-book-model-spec) res st/string-transformer)
        res))))


(defn-spec v1-native-iex-trade-symbol-get-with-http-info any?
  "Get Trades
  Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-trade-symbol-get-with-http-info symbol date nil))
  ([symbol string?, date inst?, {:keys [limit]} (s/map-of keyword? any?)]
   (check-required-params symbol date)
   (call-api "/v1/native/iex/trade/{symbol}" :get
             {:path-params   {"symbol" symbol }
              :header-params {}
              :query-params  {"date" date "limit" limit }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-native-iex-trade-symbol-get (s/coll-of iex-trade/trade-model-spec)
  "Get Trades
  Streaming endpoint. Use `limit` to cap the number of trade records returned (default 100, max 10000)."
  ([symbol string?, date inst?, ] (v1-native-iex-trade-symbol-get symbol date nil))
  ([symbol string?, date inst?, optional-params any?]
   (let [res (:data (v1-native-iex-trade-symbol-get-with-http-info symbol date optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of iex-trade/trade-model-spec) res st/string-transformer)
        res))))


