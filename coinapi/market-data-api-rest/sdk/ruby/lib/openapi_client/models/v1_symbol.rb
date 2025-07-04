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
  # Represents a symbol data model.
  class V1Symbol
    # The symbol identifier.
    attr_accessor :symbol_id

    # The exchange identifier.
    attr_accessor :exchange_id

    # The symbol type.
    attr_accessor :symbol_type

    # The base asset identifier.
    attr_accessor :asset_id_base

    # The quote asset identifier.
    attr_accessor :asset_id_quote

    # The unit asset identifier.
    attr_accessor :asset_id_unit

    # The contract unit for futures.
    attr_accessor :future_contract_unit

    # The asset used as the unit for futures contract.
    attr_accessor :future_contract_unit_asset

    # The future delivery time for futures contract.
    attr_accessor :future_delivery_time

    # Indicates whether the option type is a call.
    attr_accessor :option_type_is_call

    # The strike price for options.
    attr_accessor :option_strike_price

    # The contract unit for options.
    attr_accessor :option_contract_unit

    # The exercise style for options.
    attr_accessor :option_exercise_style

    # The expiration time for options.
    attr_accessor :option_expiration_time

    # The delivery time for contracts.
    attr_accessor :contract_delivery_time

    # The contract unit for contracts.
    attr_accessor :contract_unit

    # The asset used as the unit for contracts.
    attr_accessor :contract_unit_asset

    # The contract identifier.
    attr_accessor :contract_id

    # The display name of the contract.
    attr_accessor :contract_display_name

    # The display description of the contract.
    attr_accessor :contract_display_description

    attr_accessor :data_start

    attr_accessor :data_end

    # The start date of quote data.
    attr_accessor :data_quote_start

    # The end date of quote data.
    attr_accessor :data_quote_end

    # The start date of order book data.
    attr_accessor :data_orderbook_start

    # The end date of order book data.
    attr_accessor :data_orderbook_end

    # The start date of trade data.
    attr_accessor :data_trade_start

    # The end date of trade data.
    attr_accessor :data_trade_end

    # The index identifier.
    attr_accessor :index_id

    # The display name of the index.
    attr_accessor :index_display_name

    # The display description of the index.
    attr_accessor :index_display_description

    # The volume in the last 1 hour.
    attr_accessor :volume_1hrs

    # The volume in USD in the last 1 hour.
    attr_accessor :volume_1hrs_usd

    # The volume in the last 1 day.
    attr_accessor :volume_1day

    # The volume in USD in the last 1 day.
    attr_accessor :volume_1day_usd

    # The volume in the last 1 month.
    attr_accessor :volume_1mth

    # The volume in USD in the last 1 month.
    attr_accessor :volume_1mth_usd

    # The price.
    attr_accessor :price

    # The symbol identifier in the exchange.
    attr_accessor :symbol_id_exchange

    # The base asset identifier in the exchange.
    attr_accessor :asset_id_base_exchange

    # The quote asset identifier in the exchange.
    attr_accessor :asset_id_quote_exchange

    # The price precision.
    attr_accessor :price_precision

    # The size precision.
    attr_accessor :size_precision

    # Not normalized raw kvp data.
    attr_accessor :raw_kvp

    # Volume unit in USD.
    attr_accessor :volume_to_usd

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'symbol_id' => :'symbol_id',
        :'exchange_id' => :'exchange_id',
        :'symbol_type' => :'symbol_type',
        :'asset_id_base' => :'asset_id_base',
        :'asset_id_quote' => :'asset_id_quote',
        :'asset_id_unit' => :'asset_id_unit',
        :'future_contract_unit' => :'future_contract_unit',
        :'future_contract_unit_asset' => :'future_contract_unit_asset',
        :'future_delivery_time' => :'future_delivery_time',
        :'option_type_is_call' => :'option_type_is_call',
        :'option_strike_price' => :'option_strike_price',
        :'option_contract_unit' => :'option_contract_unit',
        :'option_exercise_style' => :'option_exercise_style',
        :'option_expiration_time' => :'option_expiration_time',
        :'contract_delivery_time' => :'contract_delivery_time',
        :'contract_unit' => :'contract_unit',
        :'contract_unit_asset' => :'contract_unit_asset',
        :'contract_id' => :'contract_id',
        :'contract_display_name' => :'contract_display_name',
        :'contract_display_description' => :'contract_display_description',
        :'data_start' => :'data_start',
        :'data_end' => :'data_end',
        :'data_quote_start' => :'data_quote_start',
        :'data_quote_end' => :'data_quote_end',
        :'data_orderbook_start' => :'data_orderbook_start',
        :'data_orderbook_end' => :'data_orderbook_end',
        :'data_trade_start' => :'data_trade_start',
        :'data_trade_end' => :'data_trade_end',
        :'index_id' => :'index_id',
        :'index_display_name' => :'index_display_name',
        :'index_display_description' => :'index_display_description',
        :'volume_1hrs' => :'volume_1hrs',
        :'volume_1hrs_usd' => :'volume_1hrs_usd',
        :'volume_1day' => :'volume_1day',
        :'volume_1day_usd' => :'volume_1day_usd',
        :'volume_1mth' => :'volume_1mth',
        :'volume_1mth_usd' => :'volume_1mth_usd',
        :'price' => :'price',
        :'symbol_id_exchange' => :'symbol_id_exchange',
        :'asset_id_base_exchange' => :'asset_id_base_exchange',
        :'asset_id_quote_exchange' => :'asset_id_quote_exchange',
        :'price_precision' => :'price_precision',
        :'size_precision' => :'size_precision',
        :'raw_kvp' => :'raw_kvp',
        :'volume_to_usd' => :'volume_to_usd'
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
        :'symbol_id' => :'String',
        :'exchange_id' => :'String',
        :'symbol_type' => :'String',
        :'asset_id_base' => :'String',
        :'asset_id_quote' => :'String',
        :'asset_id_unit' => :'String',
        :'future_contract_unit' => :'Float',
        :'future_contract_unit_asset' => :'String',
        :'future_delivery_time' => :'Time',
        :'option_type_is_call' => :'Boolean',
        :'option_strike_price' => :'Float',
        :'option_contract_unit' => :'Float',
        :'option_exercise_style' => :'String',
        :'option_expiration_time' => :'Time',
        :'contract_delivery_time' => :'Time',
        :'contract_unit' => :'Float',
        :'contract_unit_asset' => :'String',
        :'contract_id' => :'String',
        :'contract_display_name' => :'String',
        :'contract_display_description' => :'String',
        :'data_start' => :'String',
        :'data_end' => :'String',
        :'data_quote_start' => :'Time',
        :'data_quote_end' => :'Time',
        :'data_orderbook_start' => :'Time',
        :'data_orderbook_end' => :'Time',
        :'data_trade_start' => :'Time',
        :'data_trade_end' => :'Time',
        :'index_id' => :'String',
        :'index_display_name' => :'String',
        :'index_display_description' => :'String',
        :'volume_1hrs' => :'Float',
        :'volume_1hrs_usd' => :'Float',
        :'volume_1day' => :'Float',
        :'volume_1day_usd' => :'Float',
        :'volume_1mth' => :'Float',
        :'volume_1mth_usd' => :'Float',
        :'price' => :'Float',
        :'symbol_id_exchange' => :'String',
        :'asset_id_base_exchange' => :'String',
        :'asset_id_quote_exchange' => :'String',
        :'price_precision' => :'Float',
        :'size_precision' => :'Float',
        :'raw_kvp' => :'Hash<String, String>',
        :'volume_to_usd' => :'Float'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'symbol_id',
        :'exchange_id',
        :'symbol_type',
        :'asset_id_base',
        :'asset_id_quote',
        :'asset_id_unit',
        :'future_contract_unit',
        :'future_contract_unit_asset',
        :'future_delivery_time',
        :'option_type_is_call',
        :'option_strike_price',
        :'option_contract_unit',
        :'option_exercise_style',
        :'option_expiration_time',
        :'contract_delivery_time',
        :'contract_unit',
        :'contract_unit_asset',
        :'contract_id',
        :'contract_display_name',
        :'contract_display_description',
        :'data_start',
        :'data_end',
        :'data_quote_start',
        :'data_quote_end',
        :'data_orderbook_start',
        :'data_orderbook_end',
        :'data_trade_start',
        :'data_trade_end',
        :'index_id',
        :'index_display_name',
        :'index_display_description',
        :'volume_1hrs',
        :'volume_1hrs_usd',
        :'volume_1day',
        :'volume_1day_usd',
        :'volume_1mth',
        :'volume_1mth_usd',
        :'price',
        :'symbol_id_exchange',
        :'asset_id_base_exchange',
        :'asset_id_quote_exchange',
        :'price_precision',
        :'size_precision',
        :'raw_kvp',
        :'volume_to_usd'
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::V1Symbol` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      acceptable_attribute_map = self.class.acceptable_attribute_map
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!acceptable_attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::V1Symbol`. Please check the name to make sure it's valid. List of attributes: " + acceptable_attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'symbol_id')
        self.symbol_id = attributes[:'symbol_id']
      end

      if attributes.key?(:'exchange_id')
        self.exchange_id = attributes[:'exchange_id']
      end

      if attributes.key?(:'symbol_type')
        self.symbol_type = attributes[:'symbol_type']
      end

      if attributes.key?(:'asset_id_base')
        self.asset_id_base = attributes[:'asset_id_base']
      end

      if attributes.key?(:'asset_id_quote')
        self.asset_id_quote = attributes[:'asset_id_quote']
      end

      if attributes.key?(:'asset_id_unit')
        self.asset_id_unit = attributes[:'asset_id_unit']
      end

      if attributes.key?(:'future_contract_unit')
        self.future_contract_unit = attributes[:'future_contract_unit']
      end

      if attributes.key?(:'future_contract_unit_asset')
        self.future_contract_unit_asset = attributes[:'future_contract_unit_asset']
      end

      if attributes.key?(:'future_delivery_time')
        self.future_delivery_time = attributes[:'future_delivery_time']
      end

      if attributes.key?(:'option_type_is_call')
        self.option_type_is_call = attributes[:'option_type_is_call']
      end

      if attributes.key?(:'option_strike_price')
        self.option_strike_price = attributes[:'option_strike_price']
      end

      if attributes.key?(:'option_contract_unit')
        self.option_contract_unit = attributes[:'option_contract_unit']
      end

      if attributes.key?(:'option_exercise_style')
        self.option_exercise_style = attributes[:'option_exercise_style']
      end

      if attributes.key?(:'option_expiration_time')
        self.option_expiration_time = attributes[:'option_expiration_time']
      end

      if attributes.key?(:'contract_delivery_time')
        self.contract_delivery_time = attributes[:'contract_delivery_time']
      end

      if attributes.key?(:'contract_unit')
        self.contract_unit = attributes[:'contract_unit']
      end

      if attributes.key?(:'contract_unit_asset')
        self.contract_unit_asset = attributes[:'contract_unit_asset']
      end

      if attributes.key?(:'contract_id')
        self.contract_id = attributes[:'contract_id']
      end

      if attributes.key?(:'contract_display_name')
        self.contract_display_name = attributes[:'contract_display_name']
      end

      if attributes.key?(:'contract_display_description')
        self.contract_display_description = attributes[:'contract_display_description']
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

      if attributes.key?(:'index_id')
        self.index_id = attributes[:'index_id']
      end

      if attributes.key?(:'index_display_name')
        self.index_display_name = attributes[:'index_display_name']
      end

      if attributes.key?(:'index_display_description')
        self.index_display_description = attributes[:'index_display_description']
      end

      if attributes.key?(:'volume_1hrs')
        self.volume_1hrs = attributes[:'volume_1hrs']
      end

      if attributes.key?(:'volume_1hrs_usd')
        self.volume_1hrs_usd = attributes[:'volume_1hrs_usd']
      end

      if attributes.key?(:'volume_1day')
        self.volume_1day = attributes[:'volume_1day']
      end

      if attributes.key?(:'volume_1day_usd')
        self.volume_1day_usd = attributes[:'volume_1day_usd']
      end

      if attributes.key?(:'volume_1mth')
        self.volume_1mth = attributes[:'volume_1mth']
      end

      if attributes.key?(:'volume_1mth_usd')
        self.volume_1mth_usd = attributes[:'volume_1mth_usd']
      end

      if attributes.key?(:'price')
        self.price = attributes[:'price']
      end

      if attributes.key?(:'symbol_id_exchange')
        self.symbol_id_exchange = attributes[:'symbol_id_exchange']
      end

      if attributes.key?(:'asset_id_base_exchange')
        self.asset_id_base_exchange = attributes[:'asset_id_base_exchange']
      end

      if attributes.key?(:'asset_id_quote_exchange')
        self.asset_id_quote_exchange = attributes[:'asset_id_quote_exchange']
      end

      if attributes.key?(:'price_precision')
        self.price_precision = attributes[:'price_precision']
      end

      if attributes.key?(:'size_precision')
        self.size_precision = attributes[:'size_precision']
      end

      if attributes.key?(:'raw_kvp')
        if (value = attributes[:'raw_kvp']).is_a?(Hash)
          self.raw_kvp = value
        end
      end

      if attributes.key?(:'volume_to_usd')
        self.volume_to_usd = attributes[:'volume_to_usd']
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
          symbol_id == o.symbol_id &&
          exchange_id == o.exchange_id &&
          symbol_type == o.symbol_type &&
          asset_id_base == o.asset_id_base &&
          asset_id_quote == o.asset_id_quote &&
          asset_id_unit == o.asset_id_unit &&
          future_contract_unit == o.future_contract_unit &&
          future_contract_unit_asset == o.future_contract_unit_asset &&
          future_delivery_time == o.future_delivery_time &&
          option_type_is_call == o.option_type_is_call &&
          option_strike_price == o.option_strike_price &&
          option_contract_unit == o.option_contract_unit &&
          option_exercise_style == o.option_exercise_style &&
          option_expiration_time == o.option_expiration_time &&
          contract_delivery_time == o.contract_delivery_time &&
          contract_unit == o.contract_unit &&
          contract_unit_asset == o.contract_unit_asset &&
          contract_id == o.contract_id &&
          contract_display_name == o.contract_display_name &&
          contract_display_description == o.contract_display_description &&
          data_start == o.data_start &&
          data_end == o.data_end &&
          data_quote_start == o.data_quote_start &&
          data_quote_end == o.data_quote_end &&
          data_orderbook_start == o.data_orderbook_start &&
          data_orderbook_end == o.data_orderbook_end &&
          data_trade_start == o.data_trade_start &&
          data_trade_end == o.data_trade_end &&
          index_id == o.index_id &&
          index_display_name == o.index_display_name &&
          index_display_description == o.index_display_description &&
          volume_1hrs == o.volume_1hrs &&
          volume_1hrs_usd == o.volume_1hrs_usd &&
          volume_1day == o.volume_1day &&
          volume_1day_usd == o.volume_1day_usd &&
          volume_1mth == o.volume_1mth &&
          volume_1mth_usd == o.volume_1mth_usd &&
          price == o.price &&
          symbol_id_exchange == o.symbol_id_exchange &&
          asset_id_base_exchange == o.asset_id_base_exchange &&
          asset_id_quote_exchange == o.asset_id_quote_exchange &&
          price_precision == o.price_precision &&
          size_precision == o.size_precision &&
          raw_kvp == o.raw_kvp &&
          volume_to_usd == o.volume_to_usd
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [symbol_id, exchange_id, symbol_type, asset_id_base, asset_id_quote, asset_id_unit, future_contract_unit, future_contract_unit_asset, future_delivery_time, option_type_is_call, option_strike_price, option_contract_unit, option_exercise_style, option_expiration_time, contract_delivery_time, contract_unit, contract_unit_asset, contract_id, contract_display_name, contract_display_description, data_start, data_end, data_quote_start, data_quote_end, data_orderbook_start, data_orderbook_end, data_trade_start, data_trade_end, index_id, index_display_name, index_display_description, volume_1hrs, volume_1hrs_usd, volume_1day, volume_1day_usd, volume_1mth, volume_1mth_usd, price, symbol_id_exchange, asset_id_base_exchange, asset_id_quote_exchange, price_precision, size_precision, raw_kvp, volume_to_usd].hash
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
