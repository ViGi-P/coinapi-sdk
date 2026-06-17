goog.provide('API.Client.MarketDataMetadata.Exchange');

/**
 * Represents an exchange.
 * @record
 */
API.Client.MarketDataMetadataExchange = function() {}

/**
 * Gets or sets the exchange ID.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.exchangeId;

/**
 * Gets or sets the website URL of the exchange.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.website;

/**
 * Gets or sets the name of the exchange.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataStart;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataEnd;

/**
 * Gets or sets the start date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataQuoteStart;

/**
 * Gets or sets the end date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataQuoteEnd;

/**
 * Gets or sets the start date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataOrderbookStart;

/**
 * Gets or sets the end date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataOrderbookEnd;

/**
 * Gets or sets the start date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataTradeStart;

/**
 * Gets or sets the end date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataTradeEnd;

/**
 * Gets or sets the number of trades.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataTradeCount;

/**
 * Gets or sets the number of symbols.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.dataSymbolsCount;

/**
 * Gets or sets the USD volume in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.volume1hrsUsd;

/**
 * Gets or sets the USD volume in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.volume1dayUsd;

/**
 * Gets or sets the USD volume in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.volume1mthUsd;

/**
 * Gets or sets the list of metric IDs.
 * @type {!Array<!string>}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.metricId;

/**
 * Gets or sets the list of icons for the exchange.
 * @type {!Array<!API.Client.MarketDataMetadata.Icon>}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.icons;

/**
 * Rank of the exchange.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.rank;

/**
 * Status of the integration
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataExchange.prototype.integrationStatus;

