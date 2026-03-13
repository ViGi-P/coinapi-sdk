//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'models_index_value_component.g.dart';

/// ModelsIndexValueComponent
///
/// Properties:
/// * [componentId] 
/// * [componentValue] 
@BuiltValue()
abstract class ModelsIndexValueComponent implements Built<ModelsIndexValueComponent, ModelsIndexValueComponentBuilder> {
  @BuiltValueField(wireName: r'component_id')
  String? get componentId;

  @BuiltValueField(wireName: r'component_value')
  double? get componentValue;

  ModelsIndexValueComponent._();

  factory ModelsIndexValueComponent([void updates(ModelsIndexValueComponentBuilder b)]) = _$ModelsIndexValueComponent;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ModelsIndexValueComponentBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ModelsIndexValueComponent> get serializer => _$ModelsIndexValueComponentSerializer();
}

class _$ModelsIndexValueComponentSerializer implements PrimitiveSerializer<ModelsIndexValueComponent> {
  @override
  final Iterable<Type> types = const [ModelsIndexValueComponent, _$ModelsIndexValueComponent];

  @override
  final String wireName = r'ModelsIndexValueComponent';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ModelsIndexValueComponent object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.componentId != null) {
      yield r'component_id';
      yield serializers.serialize(
        object.componentId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.componentValue != null) {
      yield r'component_value';
      yield serializers.serialize(
        object.componentValue,
        specifiedType: const FullType(double),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ModelsIndexValueComponent object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ModelsIndexValueComponentBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'component_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.componentId = valueDes;
          break;
        case r'component_value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(double),
          ) as double;
          result.componentValue = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ModelsIndexValueComponent deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ModelsIndexValueComponentBuilder();
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

