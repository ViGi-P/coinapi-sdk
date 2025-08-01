=begin
#FX Historical REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.14.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::ExchangeRatesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ExchangeRatesApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::ExchangeRatesApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ExchangeRatesApi' do
    it 'should create an instance of ExchangeRatesApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::ExchangeRatesApi)
    end
  end

  # unit tests for get_specific_rate
  # Get specific rate
  # Retrieves the exchange rate for a specific base and quote asset at a given time or the current rate.              :::info If you are using an exchange rate for mission-critical operations, then for best reliability, you should measure the difference between current time and the time returned from the response to ensure that value of the difference between those meets your internal requirements. :::
  # @param asset_id_base Requested exchange rate base asset identifier (from the Metadata -&gt; Assets)
  # @param asset_id_quote Requested exchange rate quote asset identifier (from the Metadata -&gt; Assets)
  # @param [Hash] opts the optional parameters
  # @option opts [String] :time Time at which exchange rate is calculated (optional, if not supplied then current rate is returned)
  # @return [V1ExchangeRate]
  describe 'get_specific_rate test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for v1_exchangerate_asset_id_base_asset_id_quote_history_get
  # Timeseries data
  # Get the historical exchange rates between two assets in the form of the timeseries.
  # @param asset_id_base Requested exchange rates base asset identifier (from the Metadata -&gt; Assets)
  # @param asset_id_quote Requested exchange rates base asset identifier (from the Metadata -&gt; Assets)
  # @param [Hash] opts the optional parameters
  # @option opts [String] :period_id Identifier of requested timeseries period (required, e.g. &#x60;5SEC&#x60; or &#x60;1HRS&#x60;)
  # @option opts [String] :time_start Timeseries starting time in ISO 8601 (required)
  # @option opts [String] :time_end Timeseries ending time in ISO 8601 (required)
  # @option opts [Integer] :limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request)
  # @return [Array<V1ExchangeRatesTimeseriesItem>]
  describe 'v1_exchangerate_asset_id_base_asset_id_quote_history_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for v1_exchangerate_asset_id_base_get
  # Get all current rates
  # Get the current exchange rate between requested asset and all other assets.              :::info If you are using an exchange rate for mission-critical operations, then for best reliability, you should measure the difference between current time and the time returned from the response to ensure that value of the difference between those meets your internal requirements. :::              :::info You can invert the rates by using Y &#x3D; 1 / X equation, for example BTC/USD &#x3D; 1 / (USD/BTC); :::
  # @param asset_id_base Requested exchange rates base asset identifier (from the Metadata -&gt; Assets)
  # @param [Hash] opts the optional parameters
  # @option opts [String] :filter_asset_id Comma or semicolon delimited asset identifiers used to filter response (optional)
  # @option opts [Boolean] :invert True will invert all the rates (optional, if true then rates will be calculated as &#x60;rate &#x3D; 1 / actual_rate&#x60; eg. &#x60;USD/BTC&#x60; as &#x60;BTC/USD&#x60;)
  # @option opts [String] :time Time for historical rates (optional)
  # @return [V1ExchangeRates]
  describe 'v1_exchangerate_asset_id_base_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for v1_exchangerate_history_periods_get
  # Timeseries periods
  # You can also obtain historical exchange rates of any asset pair, grouped into time periods. Get full list of supported time periods available for requesting exchange rates historical timeseries data.              ## Timeseries periods Time unit | Period identifiers --- | --- Second | 1SEC, 2SEC, 3SEC, 4SEC, 5SEC, 6SEC, 10SEC, 15SEC, 20SEC, 30SEC Minute | 1MIN, 2MIN, 3MIN, 4MIN, 5MIN, 6MIN, 10MIN, 15MIN, 20MIN, 30MIN Hour | 1HRS, 2HRS, 3HRS, 4HRS, 6HRS, 8HRS, 12HRS Day | 1DAY, 2DAY, 3DAY, 5DAY, 7DAY, 10DAY
  # @param [Hash] opts the optional parameters
  # @return [Array<V1TimeseriesPeriod>]
  describe 'v1_exchangerate_history_periods_get test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
