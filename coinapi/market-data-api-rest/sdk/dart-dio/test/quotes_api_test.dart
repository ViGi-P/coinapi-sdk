import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for QuotesApi
void main() {
  final instance = Openapi().getQuotesApi();

  group(QuotesApi, () {
    // Current data
    //
    // Get current quotes for all symbols or for a specific symbol.              :::info When requesting current data for a specific symbol, output is not encapsulated into JSON array as only one item is returned. :::
    //
    //Future<BuiltList<V1QuoteTrade>> v1QuotesCurrentGet({ String filterSymbolId }) async
    test('test v1QuotesCurrentGet', () async {
      // TODO
    });

    // Latest data
    //
    // Get latest updates of the quotes up to 1 minute ago. Latest data is always returned in time descending order.
    //
    //Future<BuiltList<V1Quote>> v1QuotesLatestGet({ String filterSymbolId, int limit }) async
    test('test v1QuotesLatestGet', () async {
      // TODO
    });

    // Current quotes for a specific symbol
    //
    //Future<V1QuoteTrade> v1QuotesSymbolIdCurrentGet(String symbolId) async
    test('test v1QuotesSymbolIdCurrentGet', () async {
      // TODO
    });

    // Historical data
    //
    // Get historical quote updates within requested time range, returned in time ascending order.              This endpoint supports hourly granularity for APITP data with automatic fallback to daily data for older records. Timestamps are normalized to hour boundaries, and data is fetched per hour with precise filtering to your exact time range.              :::tip For querying a full day of data, use the 'date' parameter. For specific time ranges (including cross-day or multi-hour queries), use 'time_start' and 'time_end'. :::
    //
    //Future<BuiltList<V1Quote>> v1QuotesSymbolIdHistoryGet(String symbolId, { String date, String timeStart, String timeEnd, int limit }) async
    test('test v1QuotesSymbolIdHistoryGet', () async {
      // TODO
    });

    // Latest quote updates for a specific symbol
    //
    //Future<BuiltList<V1Quote>> v1QuotesSymbolIdLatestGet(String symbolId, { int limit }) async
    test('test v1QuotesSymbolIdLatestGet', () async {
      // TODO
    });

  });
}
