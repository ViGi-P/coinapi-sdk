(ns fin-feed-api-stock-rest-api.api.metadata
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


(defn-spec v1-exchanges-get-with-http-info any?
  "List of exchanges"
  []
  (call-api "/v1/exchanges" :get
            {:path-params   {}
             :header-params {}
             :query-params  {}
             :form-params   {}
             :content-types []
             :accepts       ["text/plain" "application/json" "text/json"]
             :auth-names    ["APIKey" "JWT"]}))

(defn-spec v1-exchanges-get (s/coll-of fin-feed-api/exchange-model-spec)
  "List of exchanges"
  []
  (let [res (:data (v1-exchanges-get-with-http-info))]
    (if (:decode-models *api-context*)
       (st/decode (s/coll-of fin-feed-api/exchange-model-spec) res st/string-transformer)
       res)))


(defn-spec v1-symbols-exchange-id-get-with-http-info any?
  "List of symbols for the exchange
  Results are paginated. Use `limit` and `page` to control page size and offset
(default limit: 100, max: 10000, default page: 1)."
  ([exchange_id string?, ] (v1-symbols-exchange-id-get-with-http-info exchange_id nil))
  ([exchange_id string?, {:keys [filter_symbol_id limit page]} (s/map-of keyword? any?)]
   (check-required-params exchange_id)
   (call-api "/v1/symbols/{exchange_id}" :get
             {:path-params   {"exchange_id" exchange_id }
              :header-params {}
              :query-params  {"filter_symbol_id" filter_symbol_id "limit" limit "page" page }
              :form-params   {}
              :content-types []
              :accepts       ["text/plain" "application/json" "text/json"]
              :auth-names    ["APIKey" "JWT"]})))

(defn-spec v1-symbols-exchange-id-get (s/coll-of fin-feed-api/symbol-model-spec)
  "List of symbols for the exchange
  Results are paginated. Use `limit` and `page` to control page size and offset
(default limit: 100, max: 10000, default page: 1)."
  ([exchange_id string?, ] (v1-symbols-exchange-id-get exchange_id nil))
  ([exchange_id string?, optional-params any?]
   (let [res (:data (v1-symbols-exchange-id-get-with-http-info exchange_id optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of fin-feed-api/symbol-model-spec) res st/string-transformer)
        res))))


