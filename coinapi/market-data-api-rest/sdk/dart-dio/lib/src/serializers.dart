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

import 'package:openapi/src/model/market_data_metadata_asset.dart';
import 'package:openapi/src/model/market_data_metadata_chain.dart';
import 'package:openapi/src/model/market_data_metadata_exchange.dart';
import 'package:openapi/src/model/market_data_metadata_icon.dart';
import 'package:openapi/src/model/market_data_metadata_symbol.dart';
import 'package:openapi/src/model/ohlcv_exchange_timeseries_item.dart';
import 'package:openapi/src/model/v1_chain_network_address.dart';
import 'package:openapi/src/model/v1_exchange_rate.dart';
import 'package:openapi/src/model/v1_exchange_rates.dart';
import 'package:openapi/src/model/v1_exchange_rates_rate.dart';
import 'package:openapi/src/model/v1_exchange_rates_timeseries_item.dart';
import 'package:openapi/src/model/v1_general_data.dart';
import 'package:openapi/src/model/v1_last_trade.dart';
import 'package:openapi/src/model/v1_listing_item.dart';
import 'package:openapi/src/model/v1_metric.dart';
import 'package:openapi/src/model/v1_metric_data.dart';
import 'package:openapi/src/model/v1_metric_info.dart';
import 'package:openapi/src/model/v1_option_exchange_group.dart';
import 'package:openapi/src/model/v1_order_book.dart';
import 'package:openapi/src/model/v1_order_book_base.dart';
import 'package:openapi/src/model/v1_order_book_depth.dart';
import 'package:openapi/src/model/v1_quote.dart';
import 'package:openapi/src/model/v1_quote_trade.dart';
import 'package:openapi/src/model/v1_strike.dart';
import 'package:openapi/src/model/v1_symbol_mapping.dart';
import 'package:openapi/src/model/v1_timeseries_item.dart';
import 'package:openapi/src/model/v1_timeseries_period.dart';
import 'package:openapi/src/model/v1_trade.dart';

part 'serializers.g.dart';

@SerializersFor([
  MarketDataMetadataAsset,
  MarketDataMetadataChain,
  MarketDataMetadataExchange,
  MarketDataMetadataIcon,
  MarketDataMetadataSymbol,
  OhlcvExchangeTimeseriesItem,
  V1ChainNetworkAddress,
  V1ExchangeRate,
  V1ExchangeRates,
  V1ExchangeRatesRate,
  V1ExchangeRatesTimeseriesItem,
  V1GeneralData,
  V1LastTrade,
  V1ListingItem,
  V1Metric,
  V1MetricData,
  V1MetricInfo,
  V1OptionExchangeGroup,
  V1OrderBook,
  V1OrderBookBase,
  V1OrderBookDepth,
  V1Quote,
  V1QuoteTrade,
  V1Strike,
  V1SymbolMapping,
  V1TimeseriesItem,
  V1TimeseriesPeriod,
  V1Trade,
])
Serializers serializers = (_$serializers.toBuilder()
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(OhlcvExchangeTimeseriesItem)]),
        () => ListBuilder<OhlcvExchangeTimeseriesItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(MarketDataMetadataExchange)]),
        () => ListBuilder<MarketDataMetadataExchange>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1Quote)]),
        () => ListBuilder<V1Quote>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1Trade)]),
        () => ListBuilder<V1Trade>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1OptionExchangeGroup)]),
        () => ListBuilder<V1OptionExchangeGroup>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1OrderBook)]),
        () => ListBuilder<V1OrderBook>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(JsonObject)]),
        () => ListBuilder<JsonObject>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1MetricInfo)]),
        () => ListBuilder<V1MetricInfo>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1TimeseriesItem)]),
        () => ListBuilder<V1TimeseriesItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1ListingItem)]),
        () => ListBuilder<V1ListingItem>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1QuoteTrade)]),
        () => ListBuilder<V1QuoteTrade>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1TimeseriesPeriod)]),
        () => ListBuilder<V1TimeseriesPeriod>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1OrderBookBase)]),
        () => ListBuilder<V1OrderBookBase>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1SymbolMapping)]),
        () => ListBuilder<V1SymbolMapping>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(MarketDataMetadataAsset)]),
        () => ListBuilder<MarketDataMetadataAsset>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1GeneralData)]),
        () => ListBuilder<V1GeneralData>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(MarketDataMetadataSymbol)]),
        () => ListBuilder<MarketDataMetadataSymbol>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(MarketDataMetadataChain)]),
        () => ListBuilder<MarketDataMetadataChain>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1MetricData)]),
        () => ListBuilder<V1MetricData>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(MarketDataMetadataIcon)]),
        () => ListBuilder<MarketDataMetadataIcon>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1Metric)]),
        () => ListBuilder<V1Metric>(),
      )
      ..addBuilderFactory(
        const FullType(BuiltList, [FullType(V1ExchangeRatesTimeseriesItem)]),
        () => ListBuilder<V1ExchangeRatesTimeseriesItem>(),
      )
      ..add(const OneOfSerializer())
      ..add(const AnyOfSerializer())
      ..add(const DateSerializer())
      ..add(Iso8601DateTimeSerializer())
    ).build();

Serializers standardSerializers =
    (serializers.toBuilder()..addPlugin(StandardJsonPlugin())).build();
