goog.provide('API.Client.v1.OrderBookBase');

/**
 * Represents the base model for order book data.
 * @record
 */
API.Client.V1OrderBookBase = function() {}

/**
 * Gets or sets the symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.V1OrderBookBase.prototype.symbolId;

/**
 * Gets or sets the exchange time of the order book.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBookBase.prototype.timeExchange;

/**
 * Gets or sets the CoinAPI time when the order book was received.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBookBase.prototype.timeCoinapi;

/**
 * Gets or sets the asks made by market makers.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.V1OrderBookBase.prototype.asks;

/**
 * Gets or sets the bids made by market makers.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.V1OrderBookBase.prototype.bids;

