goog.provide('API.Client.MarketDataMetadata.Symbol');

/**
 * Represents a symbol data model.
 * @record
 */
API.Client.MarketDataMetadataSymbol = function() {}

/**
 * The symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.symbolId;

/**
 * The exchange identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.exchangeId;

/**
 * The symbol type.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.symbolType;

/**
 * The base asset identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.assetIdBase;

/**
 * The quote asset identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.assetIdQuote;

/**
 * The unit asset identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.assetIdUnit;

/**
 * The contract unit for futures.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.futureContractUnit;

/**
 * The asset used as the unit for futures contract.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.futureContractUnitAsset;

/**
 * The future delivery time for futures contract.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.futureDeliveryTime;

/**
 * Indicates whether the option type is a call.
 * @type {!boolean}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionTypeIsCall;

/**
 * The strike price for options.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionStrikePrice;

/**
 * The contract unit for options.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionContractUnit;

/**
 * The exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionExerciseStyle;

/**
 * The expiration time for options.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionExpirationTime;

/**
 * The delivery time for contracts.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractDeliveryTime;

/**
 * The contract unit for contracts.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractUnit;

/**
 * The asset used as the unit for contracts.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractUnitAsset;

/**
 * The contract identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractId;

/**
 * The display name of the contract.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractDisplayName;

/**
 * The display description of the contract.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.contractDisplayDescription;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataStart;

/**
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataEnd;

/**
 * The start date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataQuoteStart;

/**
 * The end date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataQuoteEnd;

/**
 * The start date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataOrderbookStart;

/**
 * The end date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataOrderbookEnd;

/**
 * The start date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataTradeStart;

/**
 * The end date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.dataTradeEnd;

/**
 * The index identifier.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.indexId;

/**
 * The display name of the index.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.indexDisplayName;

/**
 * The display description of the index.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.indexDisplayDescription;

/**
 * The volume in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1hrs;

/**
 * The volume in USD in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1hrsUsd;

/**
 * The volume in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1day;

/**
 * The volume in USD in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1dayUsd;

/**
 * The volume in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1mth;

/**
 * The volume in USD in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volume1mthUsd;

/**
 * The price.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.price;

/**
 * The symbol identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.symbolIdExchange;

/**
 * The base asset identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.assetIdBaseExchange;

/**
 * The quote asset identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.assetIdQuoteExchange;

/**
 * The price precision.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.pricePrecision;

/**
 * The size precision.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.sizePrecision;

/**
 * Key Value Pair store with raw data from the data source.
 * @type {!Object<!string, string>}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.rawKvp;

/**
 * Indicates whether the futures contract is inverse (coin-margined).
 * @type {!boolean}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.futureIsInverse;

/**
 * Indicates whether the futures contract is quanto.
 * @type {!boolean}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.futureIsQuanto;

/**
 * Volume unit in USD.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.volumeToUsd;

/**
 * The up barrier price for barrier options.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionBarrierUpPrice;

/**
 * The up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionBarrierUpType;

/**
 * The down barrier price for barrier options.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionBarrierDownPrice;

/**
 * The down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
 * @type {!string}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.optionBarrierDownType;

/**
 * The symbol identifier in integer immutable format, used to correlate data across different APIs.
 * @type {!number}
 * @export
 */
API.Client.MarketDataMetadataSymbol.prototype.symbolIdInt;

