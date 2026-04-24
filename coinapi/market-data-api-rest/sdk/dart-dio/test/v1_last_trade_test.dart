import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for V1LastTrade
void main() {
  final instance = V1LastTradeBuilder();
  // TODO add properties to the builder and call build()

  group(V1LastTrade, () {
    // Gets or sets the exchange time of the last trade.
    // DateTime timeExchange
    test('to test the property `timeExchange`', () async {
      // TODO
    });

    // Gets or sets the CoinAPI time when the last trade was received.
    // DateTime timeCoinapi
    test('to test the property `timeCoinapi`', () async {
      // TODO
    });

    // Gets or sets the UUID of the last trade.
    // String uuid
    test('to test the property `uuid`', () async {
      // TODO
    });

    // Gets or sets the price of the last trade.
    // double price
    test('to test the property `price`', () async {
      // TODO
    });

    // Gets or sets the size of the last trade.
    // double size
    test('to test the property `size`', () async {
      // TODO
    });

    // Gets or sets the taker side of the last trade.
    // String takerSide
    test('to test the property `takerSide`', () async {
      // TODO
    });

  });
}
