import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for MetadataApi
void main() {
  final instance = Openapi().getMetadataApi();

  group(MetadataApi, () {
    // List of exchanges
    //
    //Future<BuiltList<FinFeedAPIExchangeModel>> v1ExchangesGet() async
    test('test v1ExchangesGet', () async {
      // TODO
    });

    // List of symbols for the exchange
    //
    // Results are paginated. Use `limit` and `page` to control page size and offset (default limit: 100, max: 10000, default page: 1).
    //
    //Future<BuiltList<FinFeedAPISymbolModel>> v1SymbolsExchangeIdGet(String exchangeId, { String filterSymbolId, int limit, int page }) async
    test('test v1SymbolsExchangeIdGet', () async {
      // TODO
    });

  });
}
