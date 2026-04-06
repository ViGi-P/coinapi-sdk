//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_import

import 'package:one_of_serializer/any_of_serializer.dart';
import 'package:one_of_serializer/one_of_serializer.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/serializer.dart';
import 'package:built_value/standard_json_plugin.dart';
import 'package:built_value/iso_8601_date_time_serializer.dart';
import 'package:openapi/src/date_serializer.dart';
import 'package:openapi/src/model/date.dart';

import 'package:openapi/src/model/models_exchange.dart';
import 'package:openapi/src/model/models_index_definition_input_data.dart';
import 'package:openapi/src/model/models_index_definition_snapshot_entry.dart';
import 'package:openapi/src/model/models_index_identifier.dart';
import 'package:openapi/src/model/models_index_multi_asset_weight.dart';
import 'package:openapi/src/model/models_index_timeseries_item.dart';
import 'package:openapi/src/model/models_index_value.dart';
import 'package:openapi/src/model/models_index_value_component.dart';
import 'package:openapi/src/model/models_timeseries_period.dart';

part 'serializers.g.dart';

@SerializersFor([
  ModelsExchange,
  ModelsIndexDefinitionInputData,
  ModelsIndexDefinitionSnapshotEntry,
  ModelsIndexIdentifier,
  ModelsIndexMultiAssetWeight,
  ModelsIndexTimeseriesItem,
  ModelsIndexValue,
  ModelsIndexValueComponent,
  ModelsTimeseriesPeriod,
])
Serializers serializers = (_$serializers.toBuilder()
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsTimeseriesPeriod)]),
        () => ListBuilder<ModelsTimeseriesPeriod>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexTimeseriesItem)]),
        () => ListBuilder<ModelsIndexTimeseriesItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexIdentifier)]),
        () => ListBuilder<ModelsIndexIdentifier>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexDefinitionInputData)]),
        () => ListBuilder<ModelsIndexDefinitionInputData>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexValue)]),
        () => ListBuilder<ModelsIndexValue>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsExchange)]),
        () => ListBuilder<ModelsExchange>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexMultiAssetWeight)]),
        () => ListBuilder<ModelsIndexMultiAssetWeight>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsIndexDefinitionSnapshotEntry)]),
        () => ListBuilder<ModelsIndexDefinitionSnapshotEntry>(),
      )
      ..add(const OneOfSerializer())
      ..add(const AnyOfSerializer())
      ..add(const DateSerializer())
      ..add(Iso8601DateTimeSerializer())
    ).build();

Serializers standardSerializers =
    (serializers.toBuilder()..addPlugin(StandardJsonPlugin())).build();
