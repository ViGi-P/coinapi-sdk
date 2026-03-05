goog.provide('API.Client.v1.ListingItem');

/**
 * Represents a listing item.
 * @record
 */
API.Client.V1ListingItem = function() {}

/**
 * Gets or sets the metric ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.metricId;

/**
 * The CoinAPI symbol identifier. Null for exchange-level metrics that are not associated with a specific symbol.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.symbolId;

/**
 * The exchange-native symbol identifier. Null for exchange-level metrics.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.symbolIdExternal;

/**
 * Gets or sets the exchange ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.exchangeId;

/**
 * Gets or sets the asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.assetId;

/**
 * Gets or sets the asset ID from the exchange.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.assetIdExternal;

/**
 * Gets or sets the chain id.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.chainId;

/**
 * Gets or sets the network id.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.networkId;

