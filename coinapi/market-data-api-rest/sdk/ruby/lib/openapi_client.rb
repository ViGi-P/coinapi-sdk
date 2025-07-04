=begin
#CoinAPI Market Data REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.14.0

=end

# Common files
require 'openapi_client/api_client'
require 'openapi_client/api_error'
require 'openapi_client/version'
require 'openapi_client/configuration'

# Models
require 'openapi_client/models/models_exchange_timeseries_item'
require 'openapi_client/models/options_option_exchange_group'
require 'openapi_client/models/options_strike'
require 'openapi_client/models/v1_asset'
require 'openapi_client/models/v1_chain'
require 'openapi_client/models/v1_chain_network_address'
require 'openapi_client/models/v1_exchange'
require 'openapi_client/models/v1_exchange_rate'
require 'openapi_client/models/v1_exchange_rates'
require 'openapi_client/models/v1_exchange_rates_rate'
require 'openapi_client/models/v1_exchange_rates_timeseries_item'
require 'openapi_client/models/v1_general_data'
require 'openapi_client/models/v1_icon'
require 'openapi_client/models/v1_last_trade'
require 'openapi_client/models/v1_listing_item'
require 'openapi_client/models/v1_metric'
require 'openapi_client/models/v1_metric_data'
require 'openapi_client/models/v1_metric_info'
require 'openapi_client/models/v1_order_book'
require 'openapi_client/models/v1_order_book_base'
require 'openapi_client/models/v1_order_book_depth'
require 'openapi_client/models/v1_quote'
require 'openapi_client/models/v1_quote_trade'
require 'openapi_client/models/v1_symbol'
require 'openapi_client/models/v1_symbol_mapping'
require 'openapi_client/models/v1_timeseries_item'
require 'openapi_client/models/v1_timeseries_period'
require 'openapi_client/models/v1_trade'

# APIs
require 'openapi_client/api/exchange_rates_api'
require 'openapi_client/api/metadata_api'
require 'openapi_client/api/metrics_v1_api'
require 'openapi_client/api/metrics_v2_api'
require 'openapi_client/api/ohlcv_api'
require 'openapi_client/api/options_api'
require 'openapi_client/api/order_book_api'
require 'openapi_client/api/order_book_l3_api'
require 'openapi_client/api/quotes_api'
require 'openapi_client/api/trades_api'

module OpenapiClient
  class << self
    # Customize default settings for the SDK using block.
    #   OpenapiClient.configure do |config|
    #     config.username = "xxx"
    #     config.password = "xxx"
    #   end
    # If no block given, return the default Configuration object.
    def configure
      if block_given?
        yield(Configuration.default)
      else
        Configuration.default
      end
    end
  end
end
