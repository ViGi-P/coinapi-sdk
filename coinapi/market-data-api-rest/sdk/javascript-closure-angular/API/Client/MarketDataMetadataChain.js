goog.provide('API.Client.MarketDataMetadata.Chain');

/**
 * Represents a blockchain chain.
 * @record
 */
API.Client.MarketDataMetadataChain = function() {}

/**
 * Gets or sets the chain identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataChain.prototype.chainId;

/**
 * Gets or sets the name of the chain.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataChain.prototype.name;

