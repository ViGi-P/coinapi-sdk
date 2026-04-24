goog.provide('API.Client.v1.OrderBook');

/**
 * Represents an order book with additional information and functionality.
 * @record
 */
API.Client.V1OrderBook = function() {}

/**
 * Gets or sets the symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.V1OrderBook.prototype.symbolId;

/**
 * Gets or sets the exchange time of the order book.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBook.prototype.timeExchange;

/**
 * Gets or sets the CoinAPI time when the order book was received.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBook.prototype.timeCoinapi;

/**
 * Gets or sets the asks made by market makers.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.V1OrderBook.prototype.asks;

/**
 * Gets or sets the bids made by market makers.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.V1OrderBook.prototype.bids;

