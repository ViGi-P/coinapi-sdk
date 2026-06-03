import 'package:test/test.dart';
import 'package:openapi/openapi.dart';


/// tests for NativeIEXApi
void main() {
  final instance = Openapi().getNativeIEXApi();

  group(NativeIEXApi, () {
    // Get Admin Messages
    //
    //Future<BuiltList<ModelsAdminMessageModel>> v1NativeIexAdminMessagesSymbolGet(String symbol, DateTime date) async
    test('test v1NativeIexAdminMessagesSymbolGet', () async {
      // TODO
    });

    // Get System Events
    //
    //Future<BuiltList<IEXSystemEventSystemEventModel>> v1NativeIexAdminSystemEventGet(DateTime date) async
    test('test v1NativeIexAdminSystemEventGet', () async {
      // TODO
    });

    // Get Level-1 Quotes
    //
    //Future<BuiltList<IEXQuoteUpdateQuoteUpdateModel>> v1NativeIexLevel1QuoteSymbolGet(String symbol, DateTime date) async
    test('test v1NativeIexLevel1QuoteSymbolGet', () async {
      // TODO
    });

    // Get Level-2 Price Level Book
    //
    //Future<BuiltList<IEXPriceLevelUpdatePriceLevelUpdateModel>> v1NativeIexLevel2PriceLevelUpdateSymbolGet(String symbol, DateTime date) async
    test('test v1NativeIexLevel2PriceLevelUpdateSymbolGet', () async {
      // TODO
    });

    // Get Level-3 Order Book
    //
    //Future<BuiltList<ModelsOrderBookModel>> v1NativeIexLevel3OrderBookSymbolGet(String symbol, DateTime date) async
    test('test v1NativeIexLevel3OrderBookSymbolGet', () async {
      // TODO
    });

    // Get Trades
    //
    //Future<BuiltList<IEXTradeTradeModel>> v1NativeIexTradeSymbolGet(String symbol, DateTime date) async
    test('test v1NativeIexTradeSymbolGet', () async {
      // TODO
    });

  });
}
