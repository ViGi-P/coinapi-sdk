goog.provide('API.Client.v1.OptionExchangeGroup');

/**
 * Represents an option exchange group data model.
 * @record
 */
API.Client.V1OptionExchangeGroup = function() {}

/**
 * Gets or sets the base asset identifier.
 * @type {!string}
 * @export
 */
API.Client.V1OptionExchangeGroup.prototype.assetIdBase;

/**
 * Gets or sets the quote asset identifier.
 * @type {!string}
 * @export
 */
API.Client.V1OptionExchangeGroup.prototype.assetIdQuote;

/**
 * Gets or sets the underlying price of the option.
 * @type {!number}
 * @export
 */
API.Client.V1OptionExchangeGroup.prototype.underlyingPrice;

/**
 * Gets or sets the expiration time of the option.
 * @type {!Date}
 * @export
 */
API.Client.V1OptionExchangeGroup.prototype.timeExpiration;

/**
 * Gets or sets the list of strikes available.
 * @type {!Array<!API.Client.v1.Strike>}
 * @export
 */
API.Client.V1OptionExchangeGroup.prototype.strikes;

