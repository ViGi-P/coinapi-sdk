=begin
#FinFeedAPI Stock REST API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: v1
Contact: support@apibricks.io
Generated by: https://openapi-generator.tech
Generator version: 7.14.0

=end

require 'date'
require 'time'

module OpenapiClient
  # Represents the response DTO for short sale price test status information
  class AdminShortSalePriceTestStatusModel
    # The stock symbol
    attr_accessor :symbol

    # Original timestamp in nanoseconds since epoch
    attr_accessor :timestamp_nanos

    # Time when the short sale price test status was recorded as DateTime
    attr_accessor :timestamp

    # Short sale price test status as byte value
    attr_accessor :short_sale_price_test_status

    # Short sale price test status as hex string
    attr_accessor :short_sale_price_test_status_code

    # Human-readable description of the short sale price test status
    attr_accessor :short_sale_price_test_status_text

    # Indicates if the short sale price test is not in effect
    attr_accessor :is_short_sale_price_test_not_in_effect

    # Indicates if the short sale price test is in effect
    attr_accessor :is_short_sale_price_test_in_effect

    # Detail of the short sale price test as byte value
    attr_accessor :detail

    # Detail of the short sale price test as character string
    attr_accessor :detail_code

    # Human-readable description of the short sale price test detail
    attr_accessor :detail_text

    # Indicates if there is no price test in place
    attr_accessor :is_detail_no_price_test

    # Indicates if the short sale price test restriction is in effect due to an intraday price drop
    attr_accessor :is_detail_activated

    # Indicates if the short sale price test restriction remains in effect from prior day
    attr_accessor :is_detail_continued

    # Indicates if the short sale price test restriction is deactivated
    attr_accessor :is_detail_deactivated

    # Indicates if the detail is not available
    attr_accessor :is_detail_not_available

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'symbol' => :'symbol',
        :'timestamp_nanos' => :'timestamp_nanos',
        :'timestamp' => :'timestamp',
        :'short_sale_price_test_status' => :'short_sale_price_test_status',
        :'short_sale_price_test_status_code' => :'short_sale_price_test_status_code',
        :'short_sale_price_test_status_text' => :'short_sale_price_test_status_text',
        :'is_short_sale_price_test_not_in_effect' => :'is_short_sale_price_test_not_in_effect',
        :'is_short_sale_price_test_in_effect' => :'is_short_sale_price_test_in_effect',
        :'detail' => :'detail',
        :'detail_code' => :'detail_code',
        :'detail_text' => :'detail_text',
        :'is_detail_no_price_test' => :'is_detail_no_price_test',
        :'is_detail_activated' => :'is_detail_activated',
        :'is_detail_continued' => :'is_detail_continued',
        :'is_detail_deactivated' => :'is_detail_deactivated',
        :'is_detail_not_available' => :'is_detail_not_available'
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
        :'symbol' => :'String',
        :'timestamp_nanos' => :'Integer',
        :'timestamp' => :'Time',
        :'short_sale_price_test_status' => :'Integer',
        :'short_sale_price_test_status_code' => :'String',
        :'short_sale_price_test_status_text' => :'String',
        :'is_short_sale_price_test_not_in_effect' => :'Boolean',
        :'is_short_sale_price_test_in_effect' => :'Boolean',
        :'detail' => :'Integer',
        :'detail_code' => :'String',
        :'detail_text' => :'String',
        :'is_detail_no_price_test' => :'Boolean',
        :'is_detail_activated' => :'Boolean',
        :'is_detail_continued' => :'Boolean',
        :'is_detail_deactivated' => :'Boolean',
        :'is_detail_not_available' => :'Boolean'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
        :'symbol',
        :'short_sale_price_test_status_code',
        :'short_sale_price_test_status_text',
        :'detail_code',
        :'detail_text',
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::AdminShortSalePriceTestStatusModel` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      acceptable_attribute_map = self.class.acceptable_attribute_map
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!acceptable_attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::AdminShortSalePriceTestStatusModel`. Please check the name to make sure it's valid. List of attributes: " + acceptable_attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'symbol')
        self.symbol = attributes[:'symbol']
      end

      if attributes.key?(:'timestamp_nanos')
        self.timestamp_nanos = attributes[:'timestamp_nanos']
      end

      if attributes.key?(:'timestamp')
        self.timestamp = attributes[:'timestamp']
      end

      if attributes.key?(:'short_sale_price_test_status')
        self.short_sale_price_test_status = attributes[:'short_sale_price_test_status']
      end

      if attributes.key?(:'short_sale_price_test_status_code')
        self.short_sale_price_test_status_code = attributes[:'short_sale_price_test_status_code']
      end

      if attributes.key?(:'short_sale_price_test_status_text')
        self.short_sale_price_test_status_text = attributes[:'short_sale_price_test_status_text']
      end

      if attributes.key?(:'is_short_sale_price_test_not_in_effect')
        self.is_short_sale_price_test_not_in_effect = attributes[:'is_short_sale_price_test_not_in_effect']
      end

      if attributes.key?(:'is_short_sale_price_test_in_effect')
        self.is_short_sale_price_test_in_effect = attributes[:'is_short_sale_price_test_in_effect']
      end

      if attributes.key?(:'detail')
        self.detail = attributes[:'detail']
      end

      if attributes.key?(:'detail_code')
        self.detail_code = attributes[:'detail_code']
      end

      if attributes.key?(:'detail_text')
        self.detail_text = attributes[:'detail_text']
      end

      if attributes.key?(:'is_detail_no_price_test')
        self.is_detail_no_price_test = attributes[:'is_detail_no_price_test']
      end

      if attributes.key?(:'is_detail_activated')
        self.is_detail_activated = attributes[:'is_detail_activated']
      end

      if attributes.key?(:'is_detail_continued')
        self.is_detail_continued = attributes[:'is_detail_continued']
      end

      if attributes.key?(:'is_detail_deactivated')
        self.is_detail_deactivated = attributes[:'is_detail_deactivated']
      end

      if attributes.key?(:'is_detail_not_available')
        self.is_detail_not_available = attributes[:'is_detail_not_available']
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
          symbol == o.symbol &&
          timestamp_nanos == o.timestamp_nanos &&
          timestamp == o.timestamp &&
          short_sale_price_test_status == o.short_sale_price_test_status &&
          short_sale_price_test_status_code == o.short_sale_price_test_status_code &&
          short_sale_price_test_status_text == o.short_sale_price_test_status_text &&
          is_short_sale_price_test_not_in_effect == o.is_short_sale_price_test_not_in_effect &&
          is_short_sale_price_test_in_effect == o.is_short_sale_price_test_in_effect &&
          detail == o.detail &&
          detail_code == o.detail_code &&
          detail_text == o.detail_text &&
          is_detail_no_price_test == o.is_detail_no_price_test &&
          is_detail_activated == o.is_detail_activated &&
          is_detail_continued == o.is_detail_continued &&
          is_detail_deactivated == o.is_detail_deactivated &&
          is_detail_not_available == o.is_detail_not_available
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [symbol, timestamp_nanos, timestamp, short_sale_price_test_status, short_sale_price_test_status_code, short_sale_price_test_status_text, is_short_sale_price_test_not_in_effect, is_short_sale_price_test_in_effect, detail, detail_code, detail_text, is_detail_no_price_test, is_detail_activated, is_detail_continued, is_detail_deactivated, is_detail_not_available].hash
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
