goog.provide('API.Client.MarketDataMetadata.Asset');

/**
 * Represents an asset.
 * @record
 */
API.Client.MarketDataMetadataAsset = function() {}

/**
 * Gets or sets the asset ID.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.assetId;

/**
 * Gets or sets the name of the asset.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.name;

/**
 * Gets or sets a value indicating whether the asset is a cryptocurrency.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.typeIsCrypto;

/**
 * Gets or sets the start date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataQuoteStart;

/**
 * Gets or sets the end date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataQuoteEnd;

/**
 * Gets or sets the start date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataOrderbookStart;

/**
 * Gets or sets the end date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataOrderbookEnd;

/**
 * Gets or sets the start date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataTradeStart;

/**
 * Gets or sets the end date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataTradeEnd;

/**
 * Gets or sets the number of symbols.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataSymbolsCount;

/**
 * Gets or sets the USD volume in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.volume1hrsUsd;

/**
 * Gets or sets the USD volume in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.volume1dayUsd;

/**
 * Gets or sets the USD volume in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.volume1mthUsd;

/**
 * Gets or sets the USD price of the asset.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.priceUsd;

/**
 * Gets or sets the ID of the icon for the asset.
 * @type {!API.Client.UUID}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.idIcon;

/**
 * Gets or sets the current supply of the asset.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.supplyCurrent;

/**
 * Gets or sets the total supply of the asset.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.supplyTotal;

/**
 * Gets or sets the maximum supply of the asset.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.supplyMax;

/**
 * 
 * @type {!Array<!API.Client.v1.ChainNetworkAddress>}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.chainAddresses;

/**
 * Asset type classification. Possible values: FIAT, STABLECOIN, CRYPTO, COMMODITY, STOCK.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.assetType;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataStart;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataAsset.prototype.dataEnd;

