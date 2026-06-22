//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class V1ExchangeRatesChainNetworkAddress {
  /// Returns a new [V1ExchangeRatesChainNetworkAddress] instance.
  V1ExchangeRatesChainNetworkAddress({
    this.chainId,
    this.networkId,
    this.address,
  });

  /// Gets or sets chain id
  String? chainId;

  /// Gets or sets network id
  String? networkId;

  /// Gets or sets chain address
  String? address;

  @override
  bool operator ==(Object other) => identical(this, other) || other is V1ExchangeRatesChainNetworkAddress &&
    other.chainId == chainId &&
    other.networkId == networkId &&
    other.address == address;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (chainId == null ? 0 : chainId!.hashCode) +
    (networkId == null ? 0 : networkId!.hashCode) +
    (address == null ? 0 : address!.hashCode);

  @override
  String toString() => 'V1ExchangeRatesChainNetworkAddress[chainId=$chainId, networkId=$networkId, address=$address]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.chainId != null) {
      json[r'chain_id'] = this.chainId;
    } else {
      json[r'chain_id'] = null;
    }
    if (this.networkId != null) {
      json[r'network_id'] = this.networkId;
    } else {
      json[r'network_id'] = null;
    }
    if (this.address != null) {
      json[r'address'] = this.address;
    } else {
      json[r'address'] = null;
    }
    return json;
  }

  /// Returns a new [V1ExchangeRatesChainNetworkAddress] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static V1ExchangeRatesChainNetworkAddress? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        return true;
      }());

      return V1ExchangeRatesChainNetworkAddress(
        chainId: mapValueOfType<String>(json, r'chain_id'),
        networkId: mapValueOfType<String>(json, r'network_id'),
        address: mapValueOfType<String>(json, r'address'),
      );
    }
    return null;
  }

  static List<V1ExchangeRatesChainNetworkAddress> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <V1ExchangeRatesChainNetworkAddress>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = V1ExchangeRatesChainNetworkAddress.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, V1ExchangeRatesChainNetworkAddress> mapFromJson(dynamic json) {
    final map = <String, V1ExchangeRatesChainNetworkAddress>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = V1ExchangeRatesChainNetworkAddress.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of V1ExchangeRatesChainNetworkAddress-objects as value to a dart map
  static Map<String, List<V1ExchangeRatesChainNetworkAddress>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<V1ExchangeRatesChainNetworkAddress>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = V1ExchangeRatesChainNetworkAddress.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

