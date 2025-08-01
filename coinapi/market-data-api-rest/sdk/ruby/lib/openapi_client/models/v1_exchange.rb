=begin
#CoinAPI Market Data REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.14.0

=end

require 'date'
require 'time'

module OpenapiClient
  # Represents an exchange.
  class V1Exchange
    # Gets or sets the exchange ID.
    attr_accessor :exchange_id

    # Gets or sets the website URL of the exchange.
    attr_accessor :website

    # Gets or sets the name of the exchange.
    attr_accessor :name

    attr_accessor :data_start

    attr_accessor :data_end

    # Gets or sets the start date of quote data.
    attr_accessor :data_quote_start

    # Gets or sets the end date of quote data.
    attr_accessor :data_quote_end

    # Gets or sets the start date of order book data.
    attr_accessor :data_orderbook_start

    # Gets or sets the end date of order book data.
    attr_accessor :data_orderbook_end

    # Gets or sets the start date of trade data.
    attr_accessor :data_trade_start

    # Gets or sets the end date of trade data.
    attr_accessor :data_trade_end

    # Gets or sets the number of trades.
    attr_accessor :data_trade_count

    # Gets or sets the number of symbols.
    attr_accessor :data_symbols_count

    # Gets or sets the USD volume in the last 1 hour.
    attr_accessor :volume_1hrs_usd

    # Gets or sets the USD volume in the last 1 day.
    attr_accessor :volume_1day_usd

    # Gets or sets the USD volume in the last 1 month.
    attr_accessor :volume_1mth_usd

    # Gets or sets the list of metric IDs.
    attr_accessor :metric_id

    # Gets or sets the list of icons for the exchange.
    attr_accessor :icons

    # Rank of the exchange.
    attr_accessor :rank

    # Status of the integration
    attr_accessor :integration_status

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'exchange_id' => :'exchange_id',
        :'website' => :'website',
        :'name' => :'name',
        :'data_start' => :'data_start',
        :'data_end' => :'data_end',
        :'data_quote_start' => :'data_quote_start',
        :'data_quote_end' => :'data_quote_end',
        :'data_orderbook_start' => :'data_orderbook_start',
        :'data_orderbook_end' => :'data_orderbook_end',
        :'data_trade_start' => :'data_trade_start',
        :'data_trade_end' => :'data_trade_end',
        :'data_trade_count' => :'data_trade_count',
        :'data_symbols_count' => :'data_symbols_count',
        :'volume_1hrs_usd' => :'volume_1hrs_usd',
        :'volume_1day_usd' => :'volume_1day_usd',
        :'volume_1mth_usd' => :'volume_1mth_usd',
        :'metric_id' => :'metric_id',
        :'icons' => :'icons',
        :'rank' => :'rank',
        :'integration_status' => :'integration_status'
      }
    end

    # Returns attribute mapping this model knows about
    def self.acceptable_attribute_map
      attribute_map
    end

    # Returns all the JSON keys this model knows about
    def self.acceptable_attributes
      acceptable_attribute_map.values
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'exchange_id' => :'String',
        :'website' => :'String',
        :'name' => :'String',
        :'data_start' => :'String',
        :'data_end' => :'String',
        :'data_quote_start' => :'Time',
        :'data_quote_end' => :'Time',
        :'data_orderbook_start' => :'Time',
        :'data_orderbook_end' => :'Time',
        :'data_trade_start' => :'Time',
        :'data_trade_end' => :'Time',
        :'data_trade_count' => :'Integer',
        :'data_symbols_count' => :'Integer',
        :'volume_1hrs_usd' => :'Float',
        :'volume_1day_usd' => :'Float',
        :'volume_1mth_usd' => :'Float',
        :'metric_id' => :'Array<String>',
        :'icons' => :'Array<V1Icon>',
        :'rank' => :'Float',
        :'integration_status' => :'String'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'exchange_id',
        :'website',
        :'name',
        :'data_start',
        :'data_end',
        :'data_quote_start',
        :'data_quote_end',
        :'data_orderbook_start',
        :'data_orderbook_end',
        :'data_trade_start',
        :'data_trade_end',
        :'data_trade_count',
        :'data_symbols_count',
        :'volume_1hrs_usd',
        :'volume_1day_usd',
        :'volume_1mth_usd',
        :'metric_id',
        :'icons',
        :'integration_status'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::V1Exchange` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      acceptable_attribute_map = self.class.acceptable_attribute_map
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!acceptable_attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::V1Exchange`. Please check the name to make sure it's valid. List of attributes: " + acceptable_attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'exchange_id')
        self.exchange_id = attributes[:'exchange_id']
      end

      if attributes.key?(:'website')
        self.website = attributes[:'website']
      end

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'data_start')
        self.data_start = attributes[:'data_start']
      end

      if attributes.key?(:'data_end')
        self.data_end = attributes[:'data_end']
      end

      if attributes.key?(:'data_quote_start')
        self.data_quote_start = attributes[:'data_quote_start']
      end

      if attributes.key?(:'data_quote_end')
        self.data_quote_end = attributes[:'data_quote_end']
      end

      if attributes.key?(:'data_orderbook_start')
        self.data_orderbook_start = attributes[:'data_orderbook_start']
      end

      if attributes.key?(:'data_orderbook_end')
        self.data_orderbook_end = attributes[:'data_orderbook_end']
      end

      if attributes.key?(:'data_trade_start')
        self.data_trade_start = attributes[:'data_trade_start']
      end

      if attributes.key?(:'data_trade_end')
        self.data_trade_end = attributes[:'data_trade_end']
      end

      if attributes.key?(:'data_trade_count')
        self.data_trade_count = attributes[:'data_trade_count']
      end

      if attributes.key?(:'data_symbols_count')
        self.data_symbols_count = attributes[:'data_symbols_count']
      end

      if attributes.key?(:'volume_1hrs_usd')
        self.volume_1hrs_usd = attributes[:'volume_1hrs_usd']
      end

      if attributes.key?(:'volume_1day_usd')
        self.volume_1day_usd = attributes[:'volume_1day_usd']
      end

      if attributes.key?(:'volume_1mth_usd')
        self.volume_1mth_usd = attributes[:'volume_1mth_usd']
      end

      if attributes.key?(:'metric_id')
        if (value = attributes[:'metric_id']).is_a?(Array)
          self.metric_id = value
        end
      end

      if attributes.key?(:'icons')
        if (value = attributes[:'icons']).is_a?(Array)
          self.icons = value
        end
      end

      if attributes.key?(:'rank')
        self.rank = attributes[:'rank']
      end

      if attributes.key?(:'integration_status')
        self.integration_status = attributes[:'integration_status']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      warn '[DEPRECATED] the `list_invalid_properties` method is obsolete'
      invalid_properties = Array.new
      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      warn '[DEPRECATED] the `valid?` method is obsolete'
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          exchange_id == o.exchange_id &&
          website == o.website &&
          name == o.name &&
          data_start == o.data_start &&
          data_end == o.data_end &&
          data_quote_start == o.data_quote_start &&
          data_quote_end == o.data_quote_end &&
          data_orderbook_start == o.data_orderbook_start &&
          data_orderbook_end == o.data_orderbook_end &&
          data_trade_start == o.data_trade_start &&
          data_trade_end == o.data_trade_end &&
          data_trade_count == o.data_trade_count &&
          data_symbols_count == o.data_symbols_count &&
          volume_1hrs_usd == o.volume_1hrs_usd &&
          volume_1day_usd == o.volume_1day_usd &&
          volume_1mth_usd == o.volume_1mth_usd &&
          metric_id == o.metric_id &&
          icons == o.icons &&
          rank == o.rank &&
          integration_status == o.integration_status
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [exchange_id, website, name, data_start, data_end, data_quote_start, data_quote_end, data_orderbook_start, data_orderbook_end, data_trade_start, data_trade_end, data_trade_count, data_symbols_count, volume_1hrs_usd, volume_1day_usd, volume_1mth_usd, metric_id, icons, rank, integration_status].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      attributes = attributes.transform_keys(&:to_sym)
      transformed_hash = {}
      openapi_types.each_pair do |key, type|
        if attributes.key?(attribute_map[key]) && attributes[attribute_map[key]].nil?
          transformed_hash["#{key}"] = nil
        elsif type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[attribute_map[key]].is_a?(Array)
            transformed_hash["#{key}"] = attributes[attribute_map[key]].map { |v| _deserialize($1, v) }
          end
        elsif !attributes[attribute_map[key]].nil?
          transformed_hash["#{key}"] = _deserialize(type, attributes[attribute_map[key]])
        end
      end
      new(transformed_hash)
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def self._deserialize(type, value)
      case type.to_sym
      when :Time
        Time.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        # models (e.g. Pet) or oneOf
        klass = OpenapiClient.const_get(type)
        klass.respond_to?(:openapi_any_of) || klass.respond_to?(:openapi_one_of) ? klass.build(value) : klass.build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end

        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end

  end

end
