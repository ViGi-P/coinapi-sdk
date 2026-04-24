goog.provide('API.Client.v1.LastTrade');

/**
 * Represents the last executed transaction.
 * @record
 */
API.Client.V1LastTrade = function() {}

/**
 * Gets or sets the exchange time of the last trade.
 * @type {!Date}
 * @export
 */
API.Client.V1LastTrade.prototype.timeExchange;

/**
 * Gets or sets the CoinAPI time when the last trade was received.
 * @type {!Date}
 * @export
 */
API.Client.V1LastTrade.prototype.timeCoinapi;

/**
 * Gets or sets the UUID of the last trade.
 * @type {!API.Client.UUID}
 * @export
 */
API.Client.V1LastTrade.prototype.uuid;

/**
 * Gets or sets the price of the last trade.
 * @type {!number}
 * @export
 */
API.Client.V1LastTrade.prototype.price;

/**
 * Gets or sets the size of the last trade.
 * @type {!number}
 * @export
 */
API.Client.V1LastTrade.prototype.size;

/**
 * Gets or sets the taker side of the last trade.
 * @type {!string}
 * @export
 */
API.Client.V1LastTrade.prototype.takerSide;

