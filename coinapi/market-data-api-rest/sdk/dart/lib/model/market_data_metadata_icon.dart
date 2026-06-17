//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class MarketDataMetadataIcon {
  /// Returns a new [MarketDataMetadataIcon] instance.
  MarketDataMetadataIcon({
    this.exchangeId,
    this.assetId,
    this.url,
  });

  /// Gets or sets the exchange ID associated with the icon.
  String? exchangeId;

  /// Gets or sets the asset ID associated with the icon.
  String? assetId;

  /// Gets or sets the URL of the icon.
  String? url;

  @override
  bool operator ==(Object other) => identical(this, other) || other is MarketDataMetadataIcon &&
    other.exchangeId == exchangeId &&
    other.assetId == assetId &&
    other.url == url;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (exchangeId == null ? 0 : exchangeId!.hashCode) +
    (assetId == null ? 0 : assetId!.hashCode) +
    (url == null ? 0 : url!.hashCode);

  @override
  String toString() => 'MarketDataMetadataIcon[exchangeId=$exchangeId, assetId=$assetId, url=$url]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.exchangeId != null) {
      json[r'exchange_id'] = this.exchangeId;
    } else {
      json[r'exchange_id'] = null;
    }
    if (this.assetId != null) {
      json[r'asset_id'] = this.assetId;
    } else {
      json[r'asset_id'] = null;
    }
    if (this.url != null) {
      json[r'url'] = this.url;
    } else {
      json[r'url'] = null;
    }
    return json;
  }

  /// Returns a new [MarketDataMetadataIcon] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static MarketDataMetadataIcon? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        return true;
      }());

      return MarketDataMetadataIcon(
        exchangeId: mapValueOfType<String>(json, r'exchange_id'),
        assetId: mapValueOfType<String>(json, r'asset_id'),
        url: mapValueOfType<String>(json, r'url'),
      );
    }
    return null;
  }

  static List<MarketDataMetadataIcon> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <MarketDataMetadataIcon>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = MarketDataMetadataIcon.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, MarketDataMetadataIcon> mapFromJson(dynamic json) {
    final map = <String, MarketDataMetadataIcon>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = MarketDataMetadataIcon.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of MarketDataMetadataIcon-objects as value to a dart map
  static Map<String, List<MarketDataMetadataIcon>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<MarketDataMetadataIcon>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = MarketDataMetadataIcon.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

