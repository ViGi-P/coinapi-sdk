(ns fin-feed-api-stock-rest-api.specs.models/admin-message-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [fin-feed-api-stock-rest-api.specs.models/trading-status-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/official-price-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/security-event-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/auction-information-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/short-sale-price-test-status-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/operational-halt-status-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/retail-liquidity-indicator-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.iex-system-event/system-event-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/security-directory-model :refer :all]
            )
  (:import (java.io File)))


(def models/admin-message-model-data
  {
   (ds/opt :trading_status) models/trading-status-model-spec
   (ds/opt :official_price) models/official-price-model-spec
   (ds/opt :security_event) models/security-event-model-spec
   (ds/opt :auction_information) models/auction-information-model-spec
   (ds/opt :short_sale_price_test) models/short-sale-price-test-status-model-spec
   (ds/opt :operational_halt_status) models/operational-halt-status-model-spec
   (ds/opt :retail_liquidity_indicator) models/retail-liquidity-indicator-model-spec
   (ds/opt :system_event) iex-system-event/system-event-model-spec
   (ds/opt :security_directory) models/security-directory-model-spec
   })

(def models/admin-message-model-spec
  (ds/spec
    {:name ::models/admin-message-model
     :spec models/admin-message-model-data}))
