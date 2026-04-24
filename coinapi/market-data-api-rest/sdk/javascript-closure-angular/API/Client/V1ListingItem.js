goog.provide('API.Client.v1.ListingItem');

/**
 * Represents a listing data item.
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
 * Gets or sets the CoinAPI symbol ID. Null for exchange-level metrics.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.symbolId;

/**
 * Gets or sets the exchange-native symbol ID. Null for exchange-level metrics.
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
 * Gets or sets the asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.assetIdExternal;

/**
 * Gets or sets the chain ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.chainId;

/**
 * Gets or sets the network ID.
 * @type {!string}
 * @export
 */
API.Client.V1ListingItem.prototype.networkId;

