import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for MetricsV2Api
void main() {
  final instance = Openapi().getMetricsV2Api();

  group(MetricsV2Api, () {
    // Historical metrics for the asset
    //
    // Get asset metrics history.
    //
    //Future<BuiltList<JsonObject>> marketdataListMetricsV2AssetHistory(String metricId, String assetId, { DateTime timeStart, DateTime timeEnd, String timeFormat, String periodId, int limit }) async
    test('test marketdataListMetricsV2AssetHistory', () async {
      // TODO
    });

    // Listing of metrics available for specific asset
    //
    // Get all metrics that are actually available for the specified asset.
    //
    //Future<BuiltList<V1MetricInfo>> marketdataListMetricsV2AssetListing(String assetId) async
    test('test marketdataListMetricsV2AssetListing', () async {
      // TODO
    });

    // Historical metrics for the chain
    //
    // Get chain metrics history.
    //
    //Future<BuiltList<JsonObject>> marketdataListMetricsV2ChainHistory(String metricId, String chainId, { DateTime timeStart, DateTime timeEnd, String timeFormat, String periodId, int limit }) async
    test('test marketdataListMetricsV2ChainHistory', () async {
      // TODO
    });

    // Listing of metrics available for specific chain
    //
    // Get all metrics that are actually available for the specified blockchain chain.
    //
    //Future<BuiltList<V1MetricInfo>> marketdataListMetricsV2ChainListing(String chainId) async
    test('test marketdataListMetricsV2ChainListing', () async {
      // TODO
    });

    // Historical metrics for the exchange
    //
    // Get exchange metrics history.
    //
    //Future<BuiltList<JsonObject>> marketdataListMetricsV2ExchangeHistory(String metricId, String exchangeId, { DateTime timeStart, DateTime timeEnd, String timeFormat, String periodId, int limit }) async
    test('test marketdataListMetricsV2ExchangeHistory', () async {
      // TODO
    });

    // Listing of metrics available for specific exchange
    //
    // Get all metrics that are actually available for the specified exchange.
    //
    //Future<BuiltList<V1MetricInfo>> marketdataListMetricsV2ExchangeListing(String exchangeId) async
    test('test marketdataListMetricsV2ExchangeListing', () async {
      // TODO
    });

    // Listing of all supported metrics
    //
    // Get all metrics available in the system.
    //
    //Future<BuiltList<V1MetricInfo>> marketdataListMetricsV2Listing() async
    test('test marketdataListMetricsV2Listing', () async {
      // TODO
    });

  });
}
