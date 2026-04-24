goog.provide('API.Client.v1.OrderBookDepth');

/**
 * Represents the depth of an order book.
 * @record
 */
API.Client.V1OrderBookDepth = function() {}

/**
 * Gets or sets the symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.symbolId;

/**
 * Gets or sets the exchange time of the order book.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.timeExchange;

/**
 * Gets or sets the CoinAPI time when the order book was received.
 * @type {!Date}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.timeCoinapi;

/**
 * Gets or sets the number of ask levels in the order book.
 * @type {!number}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.askLevels;

/**
 * Gets or sets the number of bid levels in the order book.
 * @type {!number}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.bidLevels;

/**
 * Gets or sets the depth of the ask side of the order book.
 * @type {!number}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.askDepth;

/**
 * Gets or sets the depth of the bid side of the order book.
 * @type {!number}
 * @export
 */
API.Client.V1OrderBookDepth.prototype.bidDepth;

