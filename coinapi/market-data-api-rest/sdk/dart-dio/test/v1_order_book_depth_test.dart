import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for V1OrderBookDepth
void main() {
  final instance = V1OrderBookDepthBuilder();
  // TODO add properties to the builder and call build()

  group(V1OrderBookDepth, () {
    // Gets or sets the symbol identifier.
    // String symbolId
    test('to test the property `symbolId`', () async {
      // TODO
    });

    // Gets or sets the exchange time of the order book.
    // DateTime timeExchange
    test('to test the property `timeExchange`', () async {
      // TODO
    });

    // Gets or sets the CoinAPI time when the order book was received.
    // DateTime timeCoinapi
    test('to test the property `timeCoinapi`', () async {
      // TODO
    });

    // Gets or sets the number of ask levels in the order book.
    // int askLevels
    test('to test the property `askLevels`', () async {
      // TODO
    });

    // Gets or sets the number of bid levels in the order book.
    // int bidLevels
    test('to test the property `bidLevels`', () async {
      // TODO
    });

    // Gets or sets the depth of the ask side of the order book.
    // double askDepth
    test('to test the property `askDepth`', () async {
      // TODO
    });

    // Gets or sets the depth of the bid side of the order book.
    // double bidDepth
    test('to test the property `bidDepth`', () async {
      // TODO
    });

  });
}
