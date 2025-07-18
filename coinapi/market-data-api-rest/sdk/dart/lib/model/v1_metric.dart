//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class V1Metric {
  /// Returns a new [V1Metric] instance.
  V1Metric({
    this.metricId,
    this.description,
  });

  /// Gets or sets the metric ID.
  String? metricId;

  /// Gets or sets the metric description.
  String? description;

  @override
  bool operator ==(Object other) => identical(this, other) || other is V1Metric &&
    other.metricId == metricId &&
    other.description == description;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (metricId == null ? 0 : metricId!.hashCode) +
    (description == null ? 0 : description!.hashCode);

  @override
  String toString() => 'V1Metric[metricId=$metricId, description=$description]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.metricId != null) {
      json[r'metric_id'] = this.metricId;
    } else {
      json[r'metric_id'] = null;
    }
    if (this.description != null) {
      json[r'description'] = this.description;
    } else {
      json[r'description'] = null;
    }
    return json;
  }

  /// Returns a new [V1Metric] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static V1Metric? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "V1Metric[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "V1Metric[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return V1Metric(
        metricId: mapValueOfType<String>(json, r'metric_id'),
        description: mapValueOfType<String>(json, r'description'),
      );
    }
    return null;
  }

  static List<V1Metric> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <V1Metric>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = V1Metric.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, V1Metric> mapFromJson(dynamic json) {
    final map = <String, V1Metric>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = V1Metric.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of V1Metric-objects as value to a dart map
  static Map<String, List<V1Metric>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<V1Metric>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = V1Metric.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

