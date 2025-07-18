=begin
#FinFeedAPI SEC REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.13.0

=end

require 'cgi'

module OpenapiClient
  class FullTextSearchApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Full-text search of SEC filing documents
    # Search across SEC filing documents with advanced filtering and sorting capabilities.  ### Available Sort Fields  Field Name | Description -----------|------------- AccessionNumber | SEC filing accession number FormType | Type of the filing document FilingDate | Date when filing was submitted CompanyName | Name of the company CIK | Central Index Key DocumentFilename | Name of the filing document DocumentDescription | Description of the document  ### Search Options  Option | Description --------|------------- text_contains | Keywords that must appear in the document text_not_contain | Keywords that must not appear in the document  ### Date Format All dates must be provided in YYYY-MM-DD format  :::tip Use text_contains and text_not_contain with multiple keywords separated by commas for more precise searches :::  :::note The search is case-insensitive and supports partial word matches :::
    # @param [Hash] opts the optional parameters
    # @option opts [String] :form_type Filter by form type (e.g., \&quot;10-K\&quot;, \&quot;8-K\&quot;). Multiple values can be comma-separated
    # @option opts [String] :filling_date_start Filter by filling date start (inclusive), format YYYY-MM-DD
    # @option opts [String] :filling_date_end Filter by filling date end (inclusive), format YYYY-MM-DD
    # @option opts [String] :text_contains Keywords that the text must contain. Multiple values can be comma-separated
    # @option opts [String] :text_not_contain Keywords that the text must not contain. Multiple values can be comma-separated
    # @option opts [Integer] :page_size Number of results per page (default: 100)
    # @option opts [Integer] :page_number Page number to retrieve (default: 1)
    # @option opts [String] :sort_by Field to sort by (default: AccessionNumber) (default to 'AccessionNumber')
    # @option opts [String] :sort_order Sort order (asc or desc). Defaults to asc (default to 'asc')
    # @return [Array<DTOSecFilingResultDto>]
    def v1_full_text_get(opts = {})
      data, _status_code, _headers = v1_full_text_get_with_http_info(opts)
      data
    end

    # Full-text search of SEC filing documents
    # Search across SEC filing documents with advanced filtering and sorting capabilities.  ### Available Sort Fields  Field Name | Description -----------|------------- AccessionNumber | SEC filing accession number FormType | Type of the filing document FilingDate | Date when filing was submitted CompanyName | Name of the company CIK | Central Index Key DocumentFilename | Name of the filing document DocumentDescription | Description of the document  ### Search Options  Option | Description --------|------------- text_contains | Keywords that must appear in the document text_not_contain | Keywords that must not appear in the document  ### Date Format All dates must be provided in YYYY-MM-DD format  :::tip Use text_contains and text_not_contain with multiple keywords separated by commas for more precise searches :::  :::note The search is case-insensitive and supports partial word matches :::
    # @param [Hash] opts the optional parameters
    # @option opts [String] :form_type Filter by form type (e.g., \&quot;10-K\&quot;, \&quot;8-K\&quot;). Multiple values can be comma-separated
    # @option opts [String] :filling_date_start Filter by filling date start (inclusive), format YYYY-MM-DD
    # @option opts [String] :filling_date_end Filter by filling date end (inclusive), format YYYY-MM-DD
    # @option opts [String] :text_contains Keywords that the text must contain. Multiple values can be comma-separated
    # @option opts [String] :text_not_contain Keywords that the text must not contain. Multiple values can be comma-separated
    # @option opts [Integer] :page_size Number of results per page (default: 100)
    # @option opts [Integer] :page_number Page number to retrieve (default: 1)
    # @option opts [String] :sort_by Field to sort by (default: AccessionNumber) (default to 'AccessionNumber')
    # @option opts [String] :sort_order Sort order (asc or desc). Defaults to asc (default to 'asc')
    # @return [Array<(Array<DTOSecFilingResultDto>, Integer, Hash)>] Array<DTOSecFilingResultDto> data, response status code and response headers
    def v1_full_text_get_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: FullTextSearchApi.v1_full_text_get ...'
      end
      pattern = Regexp.new(/^\d{4}-\d{2}-\d{2}$/)
      if @api_client.config.client_side_validation && !opts[:'filling_date_start'].nil? && opts[:'filling_date_start'] !~ pattern
        fail ArgumentError, "invalid value for 'opts[:\"filling_date_start\"]' when calling FullTextSearchApi.v1_full_text_get, must conform to the pattern #{pattern}."
      end

      pattern = Regexp.new(/^\d{4}-\d{2}-\d{2}$/)
      if @api_client.config.client_side_validation && !opts[:'filling_date_end'].nil? && opts[:'filling_date_end'] !~ pattern
        fail ArgumentError, "invalid value for 'opts[:\"filling_date_end\"]' when calling FullTextSearchApi.v1_full_text_get, must conform to the pattern #{pattern}."
      end

      pattern = Regexp.new(/^(AccessionNumber|FormType|FilingDate|CompanyName|CIK|DocumentFilename|DocumentDescription)$/)
      if @api_client.config.client_side_validation && !opts[:'sort_by'].nil? && opts[:'sort_by'] !~ pattern
        fail ArgumentError, "invalid value for 'opts[:\"sort_by\"]' when calling FullTextSearchApi.v1_full_text_get, must conform to the pattern #{pattern}."
      end

      pattern = Regexp.new(/^(asc|desc)$/)
      if @api_client.config.client_side_validation && !opts[:'sort_order'].nil? && opts[:'sort_order'] !~ pattern
        fail ArgumentError, "invalid value for 'opts[:\"sort_order\"]' when calling FullTextSearchApi.v1_full_text_get, must conform to the pattern #{pattern}."
      end

      # resource path
      local_var_path = '/v1/full-text'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'form_type'] = opts[:'form_type'] if !opts[:'form_type'].nil?
      query_params[:'filling_date_start'] = opts[:'filling_date_start'] if !opts[:'filling_date_start'].nil?
      query_params[:'filling_date_end'] = opts[:'filling_date_end'] if !opts[:'filling_date_end'].nil?
      query_params[:'text_contains'] = opts[:'text_contains'] if !opts[:'text_contains'].nil?
      query_params[:'text_not_contain'] = opts[:'text_not_contain'] if !opts[:'text_not_contain'].nil?
      query_params[:'page_size'] = opts[:'page_size'] if !opts[:'page_size'].nil?
      query_params[:'page_number'] = opts[:'page_number'] if !opts[:'page_number'].nil?
      query_params[:'sort_by'] = opts[:'sort_by'] if !opts[:'sort_by'].nil?
      query_params[:'sort_order'] = opts[:'sort_order'] if !opts[:'sort_order'].nil?

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json']) unless header_params['Accept']

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<DTOSecFilingResultDto>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['APIKey', 'JWT']

      new_options = opts.merge(
        :operation => :"FullTextSearchApi.v1_full_text_get",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: FullTextSearchApi#v1_full_text_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
