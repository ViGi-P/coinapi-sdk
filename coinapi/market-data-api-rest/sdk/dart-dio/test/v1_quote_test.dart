import 'package:test/test.dart';
import 'package:openapi/openapi.dart';

// tests for V1Quote
void main() {
  final instance = V1QuoteBuilder();
  // TODO add properties to the builder and call build()

  group(V1Quote, () {
    // Gets or sets the symbol identifier.
    // String symbolId
    test('to test the property `symbolId`', () async {
      // TODO
    });

    // Gets or sets the exchange time of the quote.
    // DateTime timeExchange
    test('to test the property `timeExchange`', () async {
      // TODO
    });

    // Gets or sets the CoinAPI time when the quote was received.
    // DateTime timeCoinapi
    test('to test the property `timeCoinapi`', () async {
      // TODO
    });

    // Gets or sets the best asking price.
    // double askPrice
    test('to test the property `askPrice`', () async {
      // TODO
    });

    // Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown.
    // double askSize
    test('to test the property `askSize`', () async {
      // TODO
    });

    // Gets or sets the best bidding price.
    // double bidPrice
    test('to test the property `bidPrice`', () async {
      // TODO
    });

    // Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown.
    // double bidSize
    test('to test the property `bidSize`', () async {
      // TODO
    });

  });
}
