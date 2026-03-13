//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/models_index_value_component.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'models_index_value.g.dart';

/// ModelsIndexValue
///
/// Properties:
/// * [timestamp] 
/// * [value] 
/// * [composition] 
@BuiltValue()
abstract class ModelsIndexValue implements Built<ModelsIndexValue, ModelsIndexValueBuilder> {
  @BuiltValueField(wireName: r'timestamp')
  DateTime? get timestamp;

  @BuiltValueField(wireName: r'value')
  double? get value;

  @BuiltValueField(wireName: r'composition')
  BuiltList<ModelsIndexValueComponent>? get composition;

  ModelsIndexValue._();

  factory ModelsIndexValue([void updates(ModelsIndexValueBuilder b)]) = _$ModelsIndexValue;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ModelsIndexValueBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ModelsIndexValue> get serializer => _$ModelsIndexValueSerializer();
}

class _$ModelsIndexValueSerializer implements PrimitiveSerializer<ModelsIndexValue> {
  @override
  final Iterable<Type> types = const [ModelsIndexValue, _$ModelsIndexValue];

  @override
  final String wireName = r'ModelsIndexValue';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ModelsIndexValue object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.timestamp != null) {
      yield r'timestamp';
      yield serializers.serialize(
        object.timestamp,
        specifiedType: const FullType(DateTime),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(double),
      );
    }
    if (object.composition != null) {
      yield r'composition';
      yield serializers.serialize(
        object.composition,
        specifiedType: const FullType.nullable(BuiltList, [FullType(ModelsIndexValueComponent)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ModelsIndexValue object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ModelsIndexValueBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'timestamp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DateTime),
          ) as DateTime;
          result.timestamp = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(double),
          ) as double;
          result.value = valueDes;
          break;
        case r'composition':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(BuiltList, [FullType(ModelsIndexValueComponent)]),
          ) as BuiltList<ModelsIndexValueComponent>?;
          if (valueDes == null) continue;
          result.composition.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ModelsIndexValue deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ModelsIndexValueBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

