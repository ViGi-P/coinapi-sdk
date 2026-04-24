goog.provide('API.Client.v1.Quote');

/**
 * Represents a quote data model.
 * @record
 */
API.Client.V1Quote = function() {}

/**
 * Gets or sets the symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Quote.prototype.symbolId;

/**
 * Gets or sets the exchange time of the quote.
 * @type {!Date}
 * @export
 */
API.Client.V1Quote.prototype.timeExchange;

/**
 * Gets or sets the CoinAPI time when the quote was received.
 * @type {!Date}
 * @export
 */
API.Client.V1Quote.prototype.timeCoinapi;

/**
 * Gets or sets the best asking price.
 * @type {!number}
 * @export
 */
API.Client.V1Quote.prototype.askPrice;

/**
 * Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown.
 * @type {!number}
 * @export
 */
API.Client.V1Quote.prototype.askSize;

/**
 * Gets or sets the best bidding price.
 * @type {!number}
 * @export
 */
API.Client.V1Quote.prototype.bidPrice;

/**
 * Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown.
 * @type {!number}
 * @export
 */
API.Client.V1Quote.prototype.bidSize;

