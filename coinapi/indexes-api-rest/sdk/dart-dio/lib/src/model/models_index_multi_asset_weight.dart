//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'models_index_multi_asset_weight.g.dart';

/// ModelsIndexMultiAssetWeight
///
/// Properties:
/// * [indexId] 
/// * [assetId] 
/// * [weight] 
@BuiltValue()
abstract class ModelsIndexMultiAssetWeight implements Built<ModelsIndexMultiAssetWeight, ModelsIndexMultiAssetWeightBuilder> {
  @BuiltValueField(wireName: r'indexId')
  String? get indexId;

  @BuiltValueField(wireName: r'assetId')
  String? get assetId;

  @BuiltValueField(wireName: r'weight')
  double? get weight;

  ModelsIndexMultiAssetWeight._();

  factory ModelsIndexMultiAssetWeight([void updates(ModelsIndexMultiAssetWeightBuilder b)]) = _$ModelsIndexMultiAssetWeight;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ModelsIndexMultiAssetWeightBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ModelsIndexMultiAssetWeight> get serializer => _$ModelsIndexMultiAssetWeightSerializer();
}

class _$ModelsIndexMultiAssetWeightSerializer implements PrimitiveSerializer<ModelsIndexMultiAssetWeight> {
  @override
  final Iterable<Type> types = const [ModelsIndexMultiAssetWeight, _$ModelsIndexMultiAssetWeight];

  @override
  final String wireName = r'ModelsIndexMultiAssetWeight';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ModelsIndexMultiAssetWeight object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.indexId != null) {
      yield r'indexId';
      yield serializers.serialize(
        object.indexId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetId != null) {
      yield r'assetId';
      yield serializers.serialize(
        object.assetId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.weight != null) {
      yield r'weight';
      yield serializers.serialize(
        object.weight,
        specifiedType: const FullType(double),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ModelsIndexMultiAssetWeight object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ModelsIndexMultiAssetWeightBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'indexId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.indexId = valueDes;
          break;
        case r'assetId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetId = valueDes;
          break;
        case r'weight':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(double),
          ) as double;
          result.weight = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ModelsIndexMultiAssetWeight deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ModelsIndexMultiAssetWeightBuilder();
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

