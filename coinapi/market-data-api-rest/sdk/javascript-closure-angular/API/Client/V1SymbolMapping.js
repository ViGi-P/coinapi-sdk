goog.provide('API.Client.v1.SymbolMapping');

/**
 * Represents symbol mapping information for exchange symbols.
 * @record
 */
API.Client.V1SymbolMapping = function() {}

/**
 * Gets or sets the symbol ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.symbolId;

/**
 * Gets or sets the exchange-specific symbol ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.symbolIdExchange;

/**
 * Gets or sets the DataInfo ID.
 * @type {!number}
 * @export
 */
API.Client.V1SymbolMapping.prototype.coinapiDatainfoId;

/**
 * Gets or sets the exchange-specific base asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.assetIdBaseExchange;

/**
 * Gets or sets the exchange-specific quote asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.assetIdQuoteExchange;

/**
 * Gets or sets the base asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.assetIdBase;

/**
 * Gets or sets the quote asset ID.
 * @type {!string}
 * @export
 */
API.Client.V1SymbolMapping.prototype.assetIdQuote;

/**
 * Gets or sets the price precision.
 * @type {!number}
 * @export
 */
API.Client.V1SymbolMapping.prototype.pricePrecision;

/**
 * Gets or sets the size precision.
 * @type {!number}
 * @export
 */
API.Client.V1SymbolMapping.prototype.sizePrecision;

