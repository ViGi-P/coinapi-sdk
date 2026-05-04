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

import 'package:openapi/src/model/fin_feed_api_exchange_model.dart';
import 'package:openapi/src/model/fin_feed_api_symbol_model.dart';
import 'package:openapi/src/model/iex_price_level_update_price_level_update_model.dart';
import 'package:openapi/src/model/iex_quote_update_quote_update_model.dart';
import 'package:openapi/src/model/iex_system_event_system_event_model.dart';
import 'package:openapi/src/model/iex_trade_trade_model.dart';
import 'package:openapi/src/model/models_add_order_model.dart';
import 'package:openapi/src/model/models_admin_message_model.dart';
import 'package:openapi/src/model/models_auction_information_model.dart';
import 'package:openapi/src/model/models_clear_book_model.dart';
import 'package:openapi/src/model/models_delete_order_model.dart';
import 'package:openapi/src/model/models_executed_order_model.dart';
import 'package:openapi/src/model/models_modify_order_model.dart';
import 'package:openapi/src/model/models_official_price_model.dart';
import 'package:openapi/src/model/models_operational_halt_status_model.dart';
import 'package:openapi/src/model/models_order_book_model.dart';
import 'package:openapi/src/model/models_retail_liquidity_indicator_model.dart';
import 'package:openapi/src/model/models_security_directory_model.dart';
import 'package:openapi/src/model/models_security_event_model.dart';
import 'package:openapi/src/model/models_short_sale_price_test_status_model.dart';
import 'package:openapi/src/model/models_trading_status_model.dart';
import 'package:openapi/src/model/ohlcv_time_series_exchange_timeseries_item.dart';
import 'package:openapi/src/model/ohlcv_time_series_timeseries_item.dart';
import 'package:openapi/src/model/ohlcv_time_series_timeseries_period.dart';

part 'serializers.g.dart';

@SerializersFor([
  FinFeedAPIExchangeModel,
  FinFeedAPISymbolModel,
  IEXPriceLevelUpdatePriceLevelUpdateModel,
  IEXQuoteUpdateQuoteUpdateModel,
  IEXSystemEventSystemEventModel,
  IEXTradeTradeModel,
  ModelsAddOrderModel,
  ModelsAdminMessageModel,
  ModelsAuctionInformationModel,
  ModelsClearBookModel,
  ModelsDeleteOrderModel,
  ModelsExecutedOrderModel,
  ModelsModifyOrderModel,
  ModelsOfficialPriceModel,
  ModelsOperationalHaltStatusModel,
  ModelsOrderBookModel,
  ModelsRetailLiquidityIndicatorModel,
  ModelsSecurityDirectoryModel,
  ModelsSecurityEventModel,
  ModelsShortSalePriceTestStatusModel,
  ModelsTradingStatusModel,
  OHLCVTimeSeriesExchangeTimeseriesItem,
  OHLCVTimeSeriesTimeseriesItem,
  OHLCVTimeSeriesTimeseriesPeriod,
])
Serializers serializers = (_$serializers.toBuilder()
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsOrderBookModel)]),
        () => ListBuilder<ModelsOrderBookModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(OHLCVTimeSeriesExchangeTimeseriesItem)]),
        () => ListBuilder<OHLCVTimeSeriesExchangeTimeseriesItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(FinFeedAPISymbolModel)]),
        () => ListBuilder<FinFeedAPISymbolModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(ModelsAdminMessageModel)]),
        () => ListBuilder<ModelsAdminMessageModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(OHLCVTimeSeriesTimeseriesPeriod)]),
        () => ListBuilder<OHLCVTimeSeriesTimeseriesPeriod>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(IEXSystemEventSystemEventModel)]),
        () => ListBuilder<IEXSystemEventSystemEventModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(IEXQuoteUpdateQuoteUpdateModel)]),
        () => ListBuilder<IEXQuoteUpdateQuoteUpdateModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(OHLCVTimeSeriesTimeseriesItem)]),
        () => ListBuilder<OHLCVTimeSeriesTimeseriesItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(FinFeedAPIExchangeModel)]),
        () => ListBuilder<FinFeedAPIExchangeModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(IEXPriceLevelUpdatePriceLevelUpdateModel)]),
        () => ListBuilder<IEXPriceLevelUpdatePriceLevelUpdateModel>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(IEXTradeTradeModel)]),
        () => ListBuilder<IEXTradeTradeModel>(),
      )
      ..add(const OneOfSerializer())
      ..add(const AnyOfSerializer())
      ..add(const DateSerializer())
      ..add(Iso8601DateTimeSerializer())
    ).build();

Serializers standardSerializers =
    (serializers.toBuilder()..addPlugin(StandardJsonPlugin())).build();
