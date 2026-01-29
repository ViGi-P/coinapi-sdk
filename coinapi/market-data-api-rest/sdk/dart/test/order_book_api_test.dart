//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

import 'package:openapi/api.dart';
import 'package:test/test.dart';


/// tests for OrderBookApi
void main() {
  // final instance = OrderBookApi();

  group('tests for OrderBookApi', () {
    // Get current order book
    //
    // Retrieves the current order book for the specified symbol.
    //
    //Future<V1OrderBookBase> v1OrderbooksSymbolIdCurrentGet(String symbolId, { int limitLevels }) async
    test('test v1OrderbooksSymbolIdCurrentGet', () async {
      // TODO
    });

    // Current depth of the order book
    //
    // Retrieves the current depth of the order book for the specified symbol.
    //
    //Future<V1OrderBookDepth> v1OrderbooksSymbolIdDepthCurrentGet(String symbolId, { int limitLevels }) async
    test('test v1OrderbooksSymbolIdDepthCurrentGet', () async {
      // TODO
    });

    // Historical data
    //
    // Get historical order book snapshots for a specific symbol within time range, returned in time ascending order.              :::info The historical order book data via the REST API is currently limited by a number of updates and to the maximum number of 20 levels. :::              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
    //
    //Future<List<V1OrderBook>> v1OrderbooksSymbolIdHistoryGet(String symbolId, { String date, String timeStart, String timeEnd, int limit, int limitLevels }) async
    test('test v1OrderbooksSymbolIdHistoryGet', () async {
      // TODO
    });

  });
}
