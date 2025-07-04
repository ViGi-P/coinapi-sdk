=begin
#CoinAPI Market Data REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.14.0

=end

require 'cgi'

module OpenapiClient
  class QuotesApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Current data
    # Get current quotes for all symbols or for a specific symbol.              :::info When requesting current data for a specific symbol, output is not encapsulated into JSON array as only one item is returned. :::
    # @param [Hash] opts the optional parameters
    # @option opts [String] :filter_symbol_id Comma or semicolon delimited parts of symbol identifier used to filter response. (optional)
    # @return [Array<V1QuoteTrade>]
    def v1_quotes_current_get(opts = {})
      data, _status_code, _headers = v1_quotes_current_get_with_http_info(opts)
      data
    end

    # Current data
    # Get current quotes for all symbols or for a specific symbol.              :::info When requesting current data for a specific symbol, output is not encapsulated into JSON array as only one item is returned. :::
    # @param [Hash] opts the optional parameters
    # @option opts [String] :filter_symbol_id Comma or semicolon delimited parts of symbol identifier used to filter response. (optional)
    # @return [Array<(Array<V1QuoteTrade>, Integer, Hash)>] Array<V1QuoteTrade> data, response status code and response headers
    def v1_quotes_current_get_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: QuotesApi.v1_quotes_current_get ...'
      end
      # resource path
      local_var_path = '/v1/quotes/current'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'filter_symbol_id'] = opts[:'filter_symbol_id'] if !opts[:'filter_symbol_id'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/plain', 'application/json', 'text/json', 'application/x-msgpack']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<V1QuoteTrade>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"QuotesApi.v1_quotes_current_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: QuotesApi#v1_quotes_current_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Latest data
    # Get latest updates of the quotes up to 1 minute ago. Latest data is always returned in time descending order.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :filter_symbol_id Comma or semicolon delimited parts of symbol identifier used to filter response. (optional)
    # @option opts [Integer] :limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<V1Quote>]
    def v1_quotes_latest_get(opts = {})
      data, _status_code, _headers = v1_quotes_latest_get_with_http_info(opts)
      data
    end

    # Latest data
    # Get latest updates of the quotes up to 1 minute ago. Latest data is always returned in time descending order.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :filter_symbol_id Comma or semicolon delimited parts of symbol identifier used to filter response. (optional)
    # @option opts [Integer] :limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<(Array<V1Quote>, Integer, Hash)>] Array<V1Quote> data, response status code and response headers
    def v1_quotes_latest_get_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: QuotesApi.v1_quotes_latest_get ...'
      end
      # resource path
      local_var_path = '/v1/quotes/latest'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'filter_symbol_id'] = opts[:'filter_symbol_id'] if !opts[:'filter_symbol_id'].nil?
      query_params[:'limit'] = opts[:'limit'] if !opts[:'limit'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/plain', 'application/json', 'text/json', 'application/x-msgpack']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<V1Quote>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"QuotesApi.v1_quotes_latest_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: QuotesApi#v1_quotes_latest_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Current quotes for a specific symbol
    # @param symbol_id [String] The symbol identifier (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @return [V1QuoteTrade]
    def v1_quotes_symbol_id_current_get(symbol_id, opts = {})
      data, _status_code, _headers = v1_quotes_symbol_id_current_get_with_http_info(symbol_id, opts)
      data
    end

    # Current quotes for a specific symbol
    # @param symbol_id [String] The symbol identifier (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @return [Array<(V1QuoteTrade, Integer, Hash)>] V1QuoteTrade data, response status code and response headers
    def v1_quotes_symbol_id_current_get_with_http_info(symbol_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: QuotesApi.v1_quotes_symbol_id_current_get ...'
      end
      # verify the required parameter 'symbol_id' is set
      if @api_client.config.client_side_validation && symbol_id.nil?
        fail ArgumentError, "Missing the required parameter 'symbol_id' when calling QuotesApi.v1_quotes_symbol_id_current_get"
      end
      # resource path
      local_var_path = '/v1/quotes/{symbol_id}/current'.sub('{' + 'symbol_id' + '}', CGI.escape(symbol_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/plain', 'application/json', 'text/json', 'application/x-msgpack']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'V1QuoteTrade'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"QuotesApi.v1_quotes_symbol_id_current_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: QuotesApi#v1_quotes_symbol_id_current_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Historical data
    # Get historical quote updates within requested time range, returned in time ascending order.  :::warning The 'time_start' and 'time_end' parameters must be from the same day as this endpoint provides intraday data only for specific day. Please use the 'date' parameter instead for querying data for a specific day without filter. :::
    # @param symbol_id [String] Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @option opts [String] :date Date in ISO 8601, returned data is for the whole given day (preferred method, required if &#39;time_start&#39; is not provided)
    # @option opts [String] :time_start Starting time in ISO 8601
    # @option opts [String] :time_end Timeseries ending time in ISO 8601
    # @option opts [Integer] :limit Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<V1Quote>]
    def v1_quotes_symbol_id_history_get(symbol_id, opts = {})
      data, _status_code, _headers = v1_quotes_symbol_id_history_get_with_http_info(symbol_id, opts)
      data
    end

    # Historical data
    # Get historical quote updates within requested time range, returned in time ascending order.  :::warning The &#39;time_start&#39; and &#39;time_end&#39; parameters must be from the same day as this endpoint provides intraday data only for specific day. Please use the &#39;date&#39; parameter instead for querying data for a specific day without filter. :::
    # @param symbol_id [String] Symbol identifier for requested timeseries (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @option opts [String] :date Date in ISO 8601, returned data is for the whole given day (preferred method, required if &#39;time_start&#39; is not provided)
    # @option opts [String] :time_start Starting time in ISO 8601
    # @option opts [String] :time_end Timeseries ending time in ISO 8601
    # @option opts [Integer] :limit Amount of items to return (optional, minimum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<(Array<V1Quote>, Integer, Hash)>] Array<V1Quote> data, response status code and response headers
    def v1_quotes_symbol_id_history_get_with_http_info(symbol_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: QuotesApi.v1_quotes_symbol_id_history_get ...'
      end
      # verify the required parameter 'symbol_id' is set
      if @api_client.config.client_side_validation && symbol_id.nil?
        fail ArgumentError, "Missing the required parameter 'symbol_id' when calling QuotesApi.v1_quotes_symbol_id_history_get"
      end
      # resource path
      local_var_path = '/v1/quotes/{symbol_id}/history'.sub('{' + 'symbol_id' + '}', CGI.escape(symbol_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'date'] = opts[:'date'] if !opts[:'date'].nil?
      query_params[:'time_start'] = opts[:'time_start'] if !opts[:'time_start'].nil?
      query_params[:'time_end'] = opts[:'time_end'] if !opts[:'time_end'].nil?
      query_params[:'limit'] = opts[:'limit'] if !opts[:'limit'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/plain', 'application/json', 'text/json', 'application/x-msgpack']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<V1Quote>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"QuotesApi.v1_quotes_symbol_id_history_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: QuotesApi#v1_quotes_symbol_id_history_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Latest quote updates for a specific symbol
    # @param symbol_id [String] Symbol identifier of requested timeseries (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<V1Quote>]
    def v1_quotes_symbol_id_latest_get(symbol_id, opts = {})
      data, _status_code, _headers = v1_quotes_symbol_id_latest_get_with_http_info(symbol_id, opts)
      data
    end

    # Latest quote updates for a specific symbol
    # @param symbol_id [String] Symbol identifier of requested timeseries (from the Metadata -&gt; Symbols)
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :limit Amount of items to return (optional, mininum is 1, maximum is 100000, default value is 100, if the parameter is used then every 100 output items are counted as one request) (default to 100)
    # @return [Array<(Array<V1Quote>, Integer, Hash)>] Array<V1Quote> data, response status code and response headers
    def v1_quotes_symbol_id_latest_get_with_http_info(symbol_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: QuotesApi.v1_quotes_symbol_id_latest_get ...'
      end
      # verify the required parameter 'symbol_id' is set
      if @api_client.config.client_side_validation && symbol_id.nil?
        fail ArgumentError, "Missing the required parameter 'symbol_id' when calling QuotesApi.v1_quotes_symbol_id_latest_get"
      end
      # resource path
      local_var_path = '/v1/quotes/{symbol_id}/latest'.sub('{' + 'symbol_id' + '}', CGI.escape(symbol_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'limit'] = opts[:'limit'] if !opts[:'limit'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['text/plain', 'application/json', 'text/json', 'application/x-msgpack']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<V1Quote>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"QuotesApi.v1_quotes_symbol_id_latest_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: QuotesApi#v1_quotes_symbol_id_latest_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
