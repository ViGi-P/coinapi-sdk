//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'v1_symbol.g.dart';

/// Represents a symbol data model.
///
/// Properties:
/// * [symbolId] - Gets or sets the symbol identifier.
/// * [exchangeId] - Gets or sets the exchange identifier.
/// * [symbolType] - Gets or sets the symbol type.
/// * [assetIdBase] - Gets or sets the base asset identifier.
/// * [assetIdQuote] - Gets or sets the quote asset identifier.
/// * [assetIdUnit] - Gets or sets the unit asset identifier.
/// * [futureContractUnit] - Gets or sets the contract unit for futures.
/// * [futureContractUnitAsset] - Gets or sets the asset used as the unit for futures contract.
/// * [futureDeliveryTime] - Gets or sets the future delivery time for futures contract.
/// * [optionTypeIsCall] - Gets or sets a value indicating whether the option type is a call.
/// * [optionStrikePrice] - Gets or sets the strike price for options.
/// * [optionContractUnit] - Gets or sets the contract unit for options.
/// * [optionExerciseStyle] - Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
/// * [optionExpirationTime] - Gets or sets the expiration time for options.
/// * [contractDeliveryTime] - Gets or sets the delivery time for contracts.
/// * [contractUnit] - Gets or sets the contract unit for contracts.
/// * [contractUnitAsset] - Gets or sets the asset used as the unit for contracts.
/// * [contractId] - Gets or sets the contract identifier.
/// * [contractDisplayName] - Gets or sets the display name of the contract.
/// * [contractDisplayDescription] - Gets or sets the display description of the contract.
/// * [dataStart] - Gets the start date of the data in string format (\"yyyy-MM-dd\").
/// * [dataEnd] - Gets the end date of the data in string format (\"yyyy-MM-dd\").
/// * [dataQuoteStart] - Gets or sets the start date of quote data.
/// * [dataQuoteEnd] - Gets or sets the end date of quote data.
/// * [dataOrderbookStart] - Gets or sets the start date of order book data.
/// * [dataOrderbookEnd] - Gets or sets the end date of order book data.
/// * [dataTradeStart] - Gets or sets the start date of trade data.
/// * [dataTradeEnd] - Gets or sets the end date of trade data.
/// * [indexId] - Gets or sets the index identifier.
/// * [indexDisplayName] - Gets or sets the display name of the index.
/// * [indexDisplayDescription] - Gets or sets the display description of the index.
/// * [volume1hrs] - Gets or sets the volume in the last 1 hour.
/// * [volume1hrsUsd] - Gets or sets the volume in USD in the last 1 hour.
/// * [volume1day] - Gets or sets the volume in the last 1 day.
/// * [volume1dayUsd] - Gets or sets the volume in USD in the last 1 day.
/// * [volume1mth] - Gets or sets the volume in the last 1 month.
/// * [volume1mthUsd] - Gets or sets the volume in USD in the last 1 month.
/// * [price] - Gets or sets the price.
/// * [symbolIdExchange] - Gets or sets the symbol identifier in the exchange.
/// * [assetIdBaseExchange] - Gets or sets the base asset identifier in the exchange.
/// * [assetIdQuoteExchange] - Gets or sets the quote asset identifier in the exchange.
/// * [pricePrecision] - Gets or sets the price precision.
/// * [sizePrecision] - Gets or sets the size precision.
/// * [rawKvp] - Key Value Pair store with raw data from the data source.
/// * [futureIsInverse] - Gets or sets a value indicating whether the futures contract is inverse (coin-margined).
/// * [futureIsQuanto] - Gets or sets a value indicating whether the futures contract is quanto.
/// * [volumeToUsd] - Gets or sets the volume in USD.
/// * [optionBarrierUpPrice] - Gets or sets the up barrier price for barrier options.
/// * [optionBarrierUpType] - Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
/// * [optionBarrierDownPrice] - Gets or sets the down barrier price for barrier options.
/// * [optionBarrierDownType] - Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
/// * [symbolIdInt] - Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs.
@BuiltValue()
abstract class V1Symbol implements Built<V1Symbol, V1SymbolBuilder> {
  /// Gets or sets the symbol identifier.
  @BuiltValueField(wireName: r'symbol_id')
  String? get symbolId;

  /// Gets or sets the exchange identifier.
  @BuiltValueField(wireName: r'exchange_id')
  String? get exchangeId;

  /// Gets or sets the symbol type.
  @BuiltValueField(wireName: r'symbol_type')
  String? get symbolType;

  /// Gets or sets the base asset identifier.
  @BuiltValueField(wireName: r'asset_id_base')
  String? get assetIdBase;

  /// Gets or sets the quote asset identifier.
  @BuiltValueField(wireName: r'asset_id_quote')
  String? get assetIdQuote;

  /// Gets or sets the unit asset identifier.
  @BuiltValueField(wireName: r'asset_id_unit')
  String? get assetIdUnit;

  /// Gets or sets the contract unit for futures.
  @BuiltValueField(wireName: r'future_contract_unit')
  double? get futureContractUnit;

  /// Gets or sets the asset used as the unit for futures contract.
  @BuiltValueField(wireName: r'future_contract_unit_asset')
  String? get futureContractUnitAsset;

  /// Gets or sets the future delivery time for futures contract.
  @BuiltValueField(wireName: r'future_delivery_time')
  DateTime? get futureDeliveryTime;

  /// Gets or sets a value indicating whether the option type is a call.
  @BuiltValueField(wireName: r'option_type_is_call')
  bool? get optionTypeIsCall;

  /// Gets or sets the strike price for options.
  @BuiltValueField(wireName: r'option_strike_price')
  double? get optionStrikePrice;

  /// Gets or sets the contract unit for options.
  @BuiltValueField(wireName: r'option_contract_unit')
  double? get optionContractUnit;

  /// Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
  @BuiltValueField(wireName: r'option_exercise_style')
  String? get optionExerciseStyle;

  /// Gets or sets the expiration time for options.
  @BuiltValueField(wireName: r'option_expiration_time')
  DateTime? get optionExpirationTime;

  /// Gets or sets the delivery time for contracts.
  @BuiltValueField(wireName: r'contract_delivery_time')
  DateTime? get contractDeliveryTime;

  /// Gets or sets the contract unit for contracts.
  @BuiltValueField(wireName: r'contract_unit')
  double? get contractUnit;

  /// Gets or sets the asset used as the unit for contracts.
  @BuiltValueField(wireName: r'contract_unit_asset')
  String? get contractUnitAsset;

  /// Gets or sets the contract identifier.
  @BuiltValueField(wireName: r'contract_id')
  String? get contractId;

  /// Gets or sets the display name of the contract.
  @BuiltValueField(wireName: r'contract_display_name')
  String? get contractDisplayName;

  /// Gets or sets the display description of the contract.
  @BuiltValueField(wireName: r'contract_display_description')
  String? get contractDisplayDescription;

  /// Gets the start date of the data in string format (\"yyyy-MM-dd\").
  @BuiltValueField(wireName: r'data_start')
  String? get dataStart;

  /// Gets the end date of the data in string format (\"yyyy-MM-dd\").
  @BuiltValueField(wireName: r'data_end')
  String? get dataEnd;

  /// Gets or sets the start date of quote data.
  @BuiltValueField(wireName: r'data_quote_start')
  DateTime? get dataQuoteStart;

  /// Gets or sets the end date of quote data.
  @BuiltValueField(wireName: r'data_quote_end')
  DateTime? get dataQuoteEnd;

  /// Gets or sets the start date of order book data.
  @BuiltValueField(wireName: r'data_orderbook_start')
  DateTime? get dataOrderbookStart;

  /// Gets or sets the end date of order book data.
  @BuiltValueField(wireName: r'data_orderbook_end')
  DateTime? get dataOrderbookEnd;

  /// Gets or sets the start date of trade data.
  @BuiltValueField(wireName: r'data_trade_start')
  DateTime? get dataTradeStart;

  /// Gets or sets the end date of trade data.
  @BuiltValueField(wireName: r'data_trade_end')
  DateTime? get dataTradeEnd;

  /// Gets or sets the index identifier.
  @BuiltValueField(wireName: r'index_id')
  String? get indexId;

  /// Gets or sets the display name of the index.
  @BuiltValueField(wireName: r'index_display_name')
  String? get indexDisplayName;

  /// Gets or sets the display description of the index.
  @BuiltValueField(wireName: r'index_display_description')
  String? get indexDisplayDescription;

  /// Gets or sets the volume in the last 1 hour.
  @BuiltValueField(wireName: r'volume_1hrs')
  double? get volume1hrs;

  /// Gets or sets the volume in USD in the last 1 hour.
  @BuiltValueField(wireName: r'volume_1hrs_usd')
  double? get volume1hrsUsd;

  /// Gets or sets the volume in the last 1 day.
  @BuiltValueField(wireName: r'volume_1day')
  double? get volume1day;

  /// Gets or sets the volume in USD in the last 1 day.
  @BuiltValueField(wireName: r'volume_1day_usd')
  double? get volume1dayUsd;

  /// Gets or sets the volume in the last 1 month.
  @BuiltValueField(wireName: r'volume_1mth')
  double? get volume1mth;

  /// Gets or sets the volume in USD in the last 1 month.
  @BuiltValueField(wireName: r'volume_1mth_usd')
  double? get volume1mthUsd;

  /// Gets or sets the price.
  @BuiltValueField(wireName: r'price')
  double? get price;

  /// Gets or sets the symbol identifier in the exchange.
  @BuiltValueField(wireName: r'symbol_id_exchange')
  String? get symbolIdExchange;

  /// Gets or sets the base asset identifier in the exchange.
  @BuiltValueField(wireName: r'asset_id_base_exchange')
  String? get assetIdBaseExchange;

  /// Gets or sets the quote asset identifier in the exchange.
  @BuiltValueField(wireName: r'asset_id_quote_exchange')
  String? get assetIdQuoteExchange;

  /// Gets or sets the price precision.
  @BuiltValueField(wireName: r'price_precision')
  double? get pricePrecision;

  /// Gets or sets the size precision.
  @BuiltValueField(wireName: r'size_precision')
  double? get sizePrecision;

  /// Key Value Pair store with raw data from the data source.
  @BuiltValueField(wireName: r'raw_kvp')
  BuiltMap<String, String?>? get rawKvp;

  /// Gets or sets a value indicating whether the futures contract is inverse (coin-margined).
  @BuiltValueField(wireName: r'future_is_inverse')
  bool? get futureIsInverse;

  /// Gets or sets a value indicating whether the futures contract is quanto.
  @BuiltValueField(wireName: r'future_is_quanto')
  bool? get futureIsQuanto;

  /// Gets or sets the volume in USD.
  @BuiltValueField(wireName: r'volume_to_usd')
  double? get volumeToUsd;

  /// Gets or sets the up barrier price for barrier options.
  @BuiltValueField(wireName: r'option_barrier_up_price')
  double? get optionBarrierUpPrice;

  /// Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
  @BuiltValueField(wireName: r'option_barrier_up_type')
  String? get optionBarrierUpType;

  /// Gets or sets the down barrier price for barrier options.
  @BuiltValueField(wireName: r'option_barrier_down_price')
  double? get optionBarrierDownPrice;

  /// Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
  @BuiltValueField(wireName: r'option_barrier_down_type')
  String? get optionBarrierDownType;

  /// Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs.
  @BuiltValueField(wireName: r'symbol_id_int')
  int? get symbolIdInt;

  V1Symbol._();

  factory V1Symbol([void updates(V1SymbolBuilder b)]) = _$V1Symbol;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(V1SymbolBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<V1Symbol> get serializer => _$V1SymbolSerializer();
}

class _$V1SymbolSerializer implements PrimitiveSerializer<V1Symbol> {
  @override
  final Iterable<Type> types = const [V1Symbol, _$V1Symbol];

  @override
  final String wireName = r'V1Symbol';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    V1Symbol object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.symbolId != null) {
      yield r'symbol_id';
      yield serializers.serialize(
        object.symbolId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.exchangeId != null) {
      yield r'exchange_id';
      yield serializers.serialize(
        object.exchangeId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.symbolType != null) {
      yield r'symbol_type';
      yield serializers.serialize(
        object.symbolType,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetIdBase != null) {
      yield r'asset_id_base';
      yield serializers.serialize(
        object.assetIdBase,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetIdQuote != null) {
      yield r'asset_id_quote';
      yield serializers.serialize(
        object.assetIdQuote,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetIdUnit != null) {
      yield r'asset_id_unit';
      yield serializers.serialize(
        object.assetIdUnit,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.futureContractUnit != null) {
      yield r'future_contract_unit';
      yield serializers.serialize(
        object.futureContractUnit,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.futureContractUnitAsset != null) {
      yield r'future_contract_unit_asset';
      yield serializers.serialize(
        object.futureContractUnitAsset,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.futureDeliveryTime != null) {
      yield r'future_delivery_time';
      yield serializers.serialize(
        object.futureDeliveryTime,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.optionTypeIsCall != null) {
      yield r'option_type_is_call';
      yield serializers.serialize(
        object.optionTypeIsCall,
        specifiedType: const FullType.nullable(bool),
      );
    }
    if (object.optionStrikePrice != null) {
      yield r'option_strike_price';
      yield serializers.serialize(
        object.optionStrikePrice,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.optionContractUnit != null) {
      yield r'option_contract_unit';
      yield serializers.serialize(
        object.optionContractUnit,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.optionExerciseStyle != null) {
      yield r'option_exercise_style';
      yield serializers.serialize(
        object.optionExerciseStyle,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.optionExpirationTime != null) {
      yield r'option_expiration_time';
      yield serializers.serialize(
        object.optionExpirationTime,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.contractDeliveryTime != null) {
      yield r'contract_delivery_time';
      yield serializers.serialize(
        object.contractDeliveryTime,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.contractUnit != null) {
      yield r'contract_unit';
      yield serializers.serialize(
        object.contractUnit,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.contractUnitAsset != null) {
      yield r'contract_unit_asset';
      yield serializers.serialize(
        object.contractUnitAsset,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.contractId != null) {
      yield r'contract_id';
      yield serializers.serialize(
        object.contractId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.contractDisplayName != null) {
      yield r'contract_display_name';
      yield serializers.serialize(
        object.contractDisplayName,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.contractDisplayDescription != null) {
      yield r'contract_display_description';
      yield serializers.serialize(
        object.contractDisplayDescription,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.dataStart != null) {
      yield r'data_start';
      yield serializers.serialize(
        object.dataStart,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.dataEnd != null) {
      yield r'data_end';
      yield serializers.serialize(
        object.dataEnd,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.dataQuoteStart != null) {
      yield r'data_quote_start';
      yield serializers.serialize(
        object.dataQuoteStart,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.dataQuoteEnd != null) {
      yield r'data_quote_end';
      yield serializers.serialize(
        object.dataQuoteEnd,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.dataOrderbookStart != null) {
      yield r'data_orderbook_start';
      yield serializers.serialize(
        object.dataOrderbookStart,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.dataOrderbookEnd != null) {
      yield r'data_orderbook_end';
      yield serializers.serialize(
        object.dataOrderbookEnd,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.dataTradeStart != null) {
      yield r'data_trade_start';
      yield serializers.serialize(
        object.dataTradeStart,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.dataTradeEnd != null) {
      yield r'data_trade_end';
      yield serializers.serialize(
        object.dataTradeEnd,
        specifiedType: const FullType.nullable(DateTime),
      );
    }
    if (object.indexId != null) {
      yield r'index_id';
      yield serializers.serialize(
        object.indexId,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.indexDisplayName != null) {
      yield r'index_display_name';
      yield serializers.serialize(
        object.indexDisplayName,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.indexDisplayDescription != null) {
      yield r'index_display_description';
      yield serializers.serialize(
        object.indexDisplayDescription,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.volume1hrs != null) {
      yield r'volume_1hrs';
      yield serializers.serialize(
        object.volume1hrs,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.volume1hrsUsd != null) {
      yield r'volume_1hrs_usd';
      yield serializers.serialize(
        object.volume1hrsUsd,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.volume1day != null) {
      yield r'volume_1day';
      yield serializers.serialize(
        object.volume1day,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.volume1dayUsd != null) {
      yield r'volume_1day_usd';
      yield serializers.serialize(
        object.volume1dayUsd,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.volume1mth != null) {
      yield r'volume_1mth';
      yield serializers.serialize(
        object.volume1mth,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.volume1mthUsd != null) {
      yield r'volume_1mth_usd';
      yield serializers.serialize(
        object.volume1mthUsd,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.price != null) {
      yield r'price';
      yield serializers.serialize(
        object.price,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.symbolIdExchange != null) {
      yield r'symbol_id_exchange';
      yield serializers.serialize(
        object.symbolIdExchange,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetIdBaseExchange != null) {
      yield r'asset_id_base_exchange';
      yield serializers.serialize(
        object.assetIdBaseExchange,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.assetIdQuoteExchange != null) {
      yield r'asset_id_quote_exchange';
      yield serializers.serialize(
        object.assetIdQuoteExchange,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.pricePrecision != null) {
      yield r'price_precision';
      yield serializers.serialize(
        object.pricePrecision,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.sizePrecision != null) {
      yield r'size_precision';
      yield serializers.serialize(
        object.sizePrecision,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.rawKvp != null) {
      yield r'raw_kvp';
      yield serializers.serialize(
        object.rawKvp,
        specifiedType: const FullType.nullable(BuiltMap, [FullType(String), FullType.nullable(String)]),
      );
    }
    if (object.futureIsInverse != null) {
      yield r'future_is_inverse';
      yield serializers.serialize(
        object.futureIsInverse,
        specifiedType: const FullType.nullable(bool),
      );
    }
    if (object.futureIsQuanto != null) {
      yield r'future_is_quanto';
      yield serializers.serialize(
        object.futureIsQuanto,
        specifiedType: const FullType.nullable(bool),
      );
    }
    if (object.volumeToUsd != null) {
      yield r'volume_to_usd';
      yield serializers.serialize(
        object.volumeToUsd,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.optionBarrierUpPrice != null) {
      yield r'option_barrier_up_price';
      yield serializers.serialize(
        object.optionBarrierUpPrice,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.optionBarrierUpType != null) {
      yield r'option_barrier_up_type';
      yield serializers.serialize(
        object.optionBarrierUpType,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.optionBarrierDownPrice != null) {
      yield r'option_barrier_down_price';
      yield serializers.serialize(
        object.optionBarrierDownPrice,
        specifiedType: const FullType.nullable(double),
      );
    }
    if (object.optionBarrierDownType != null) {
      yield r'option_barrier_down_type';
      yield serializers.serialize(
        object.optionBarrierDownType,
        specifiedType: const FullType.nullable(String),
      );
    }
    if (object.symbolIdInt != null) {
      yield r'symbol_id_int';
      yield serializers.serialize(
        object.symbolIdInt,
        specifiedType: const FullType.nullable(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    V1Symbol object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required V1SymbolBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'symbol_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.symbolId = valueDes;
          break;
        case r'exchange_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.exchangeId = valueDes;
          break;
        case r'symbol_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.symbolType = valueDes;
          break;
        case r'asset_id_base':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetIdBase = valueDes;
          break;
        case r'asset_id_quote':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetIdQuote = valueDes;
          break;
        case r'asset_id_unit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetIdUnit = valueDes;
          break;
        case r'future_contract_unit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.futureContractUnit = valueDes;
          break;
        case r'future_contract_unit_asset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.futureContractUnitAsset = valueDes;
          break;
        case r'future_delivery_time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.futureDeliveryTime = valueDes;
          break;
        case r'option_type_is_call':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(bool),
          ) as bool?;
          if (valueDes == null) continue;
          result.optionTypeIsCall = valueDes;
          break;
        case r'option_strike_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.optionStrikePrice = valueDes;
          break;
        case r'option_contract_unit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.optionContractUnit = valueDes;
          break;
        case r'option_exercise_style':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.optionExerciseStyle = valueDes;
          break;
        case r'option_expiration_time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.optionExpirationTime = valueDes;
          break;
        case r'contract_delivery_time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.contractDeliveryTime = valueDes;
          break;
        case r'contract_unit':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.contractUnit = valueDes;
          break;
        case r'contract_unit_asset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.contractUnitAsset = valueDes;
          break;
        case r'contract_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.contractId = valueDes;
          break;
        case r'contract_display_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.contractDisplayName = valueDes;
          break;
        case r'contract_display_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.contractDisplayDescription = valueDes;
          break;
        case r'data_start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.dataStart = valueDes;
          break;
        case r'data_end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.dataEnd = valueDes;
          break;
        case r'data_quote_start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataQuoteStart = valueDes;
          break;
        case r'data_quote_end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataQuoteEnd = valueDes;
          break;
        case r'data_orderbook_start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataOrderbookStart = valueDes;
          break;
        case r'data_orderbook_end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataOrderbookEnd = valueDes;
          break;
        case r'data_trade_start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataTradeStart = valueDes;
          break;
        case r'data_trade_end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(DateTime),
          ) as DateTime?;
          if (valueDes == null) continue;
          result.dataTradeEnd = valueDes;
          break;
        case r'index_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.indexId = valueDes;
          break;
        case r'index_display_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.indexDisplayName = valueDes;
          break;
        case r'index_display_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.indexDisplayDescription = valueDes;
          break;
        case r'volume_1hrs':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1hrs = valueDes;
          break;
        case r'volume_1hrs_usd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1hrsUsd = valueDes;
          break;
        case r'volume_1day':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1day = valueDes;
          break;
        case r'volume_1day_usd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1dayUsd = valueDes;
          break;
        case r'volume_1mth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1mth = valueDes;
          break;
        case r'volume_1mth_usd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volume1mthUsd = valueDes;
          break;
        case r'price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.price = valueDes;
          break;
        case r'symbol_id_exchange':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.symbolIdExchange = valueDes;
          break;
        case r'asset_id_base_exchange':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetIdBaseExchange = valueDes;
          break;
        case r'asset_id_quote_exchange':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.assetIdQuoteExchange = valueDes;
          break;
        case r'price_precision':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.pricePrecision = valueDes;
          break;
        case r'size_precision':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.sizePrecision = valueDes;
          break;
        case r'raw_kvp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(BuiltMap, [FullType(String), FullType.nullable(String)]),
          ) as BuiltMap<String, String?>?;
          if (valueDes == null) continue;
          result.rawKvp.replace(valueDes);
          break;
        case r'future_is_inverse':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(bool),
          ) as bool?;
          if (valueDes == null) continue;
          result.futureIsInverse = valueDes;
          break;
        case r'future_is_quanto':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(bool),
          ) as bool?;
          if (valueDes == null) continue;
          result.futureIsQuanto = valueDes;
          break;
        case r'volume_to_usd':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.volumeToUsd = valueDes;
          break;
        case r'option_barrier_up_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.optionBarrierUpPrice = valueDes;
          break;
        case r'option_barrier_up_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.optionBarrierUpType = valueDes;
          break;
        case r'option_barrier_down_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(double),
          ) as double?;
          if (valueDes == null) continue;
          result.optionBarrierDownPrice = valueDes;
          break;
        case r'option_barrier_down_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(String),
          ) as String?;
          if (valueDes == null) continue;
          result.optionBarrierDownType = valueDes;
          break;
        case r'symbol_id_int':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(int),
          ) as int?;
          if (valueDes == null) continue;
          result.symbolIdInt = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  V1Symbol deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = V1SymbolBuilder();
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

