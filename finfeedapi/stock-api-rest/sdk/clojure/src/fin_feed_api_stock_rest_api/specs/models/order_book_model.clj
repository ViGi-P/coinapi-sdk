(ns fin-feed-api-stock-rest-api.specs.models/order-book-model
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [fin-feed-api-stock-rest-api.specs.models/add-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/delete-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/modify-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/executed-order-model :refer :all]
            [fin-feed-api-stock-rest-api.specs.models/clear-book-model :refer :all]
            )
  (:import (java.io File)))


(def models/order-book-model-data
  {
   (ds/opt :add_order) models/add-order-model-spec
   (ds/opt :delete_order) models/delete-order-model-spec
   (ds/opt :modify_order) models/modify-order-model-spec
   (ds/opt :executed_order) models/executed-order-model-spec
   (ds/opt :clear_book) models/clear-book-model-spec
   })

(def models/order-book-model-spec
  (ds/spec
    {:name ::models/order-book-model
     :spec models/order-book-model-data}))
