goog.provide('API.Client.v1.Strike');

/**
 * Represents a strike within the option exchange group.
 * @record
 */
API.Client.V1Strike = function() {}

/**
 * Gets or sets the strike price.
 * @type {!number}
 * @export
 */
API.Client.V1Strike.prototype.strikePrice;

/**
 * @type {!API.Client.v1.QuoteTrade}
 * @export
 */
API.Client.V1Strike.prototype.call;

/**
 * @type {!API.Client.v1.QuoteTrade}
 * @export
 */
API.Client.V1Strike.prototype.put;

