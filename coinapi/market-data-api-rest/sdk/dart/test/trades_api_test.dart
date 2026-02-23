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


/// tests for TradesApi
void main() {
  // final instance = TradesApi();

  group('tests for TradesApi', () {
    // Latest data
    //
    // Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.
    //
    //Future<List<V1Trade>> v1TradesLatestGet({ String filterSymbolId, bool includeId, int limit }) async
    test('test v1TradesLatestGet', () async {
      // TODO
    });

    // Historical data
    //
    // Get history transactions from specific symbol, returned in time ascending order.              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
    //
    //Future<List<V1Trade>> v1TradesSymbolIdHistoryGet(String symbolId, { String date, String timeStart, String timeEnd, int limit, bool includeId }) async
    test('test v1TradesSymbolIdHistoryGet', () async {
      // TODO
    });

    // Latest data by symbol_id
    //
    // Get latest trades executed up to 1 minute ago. Latest data is always returned in time descending order.
    //
    //Future<List<V1Trade>> v1TradesSymbolIdLatestGet(String symbolId, { int limit, bool includeId }) async
    test('test v1TradesSymbolIdLatestGet', () async {
      // TODO
    });

  });
}
