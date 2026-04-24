goog.provide('API.Client.v1.Symbol');

/**
 * Represents a symbol data model.
 * @record
 */
API.Client.V1Symbol = function() {}

/**
 * Gets or sets the symbol identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.symbolId;

/**
 * Gets or sets the exchange identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.exchangeId;

/**
 * Gets or sets the symbol type.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.symbolType;

/**
 * Gets or sets the base asset identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.assetIdBase;

/**
 * Gets or sets the quote asset identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.assetIdQuote;

/**
 * Gets or sets the unit asset identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.assetIdUnit;

/**
 * Gets or sets the contract unit for futures.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.futureContractUnit;

/**
 * Gets or sets the asset used as the unit for futures contract.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.futureContractUnitAsset;

/**
 * Gets or sets the future delivery time for futures contract.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.futureDeliveryTime;

/**
 * Gets or sets a value indicating whether the option type is a call.
 * @type {!boolean}
 * @export
 */
API.Client.V1Symbol.prototype.optionTypeIsCall;

/**
 * Gets or sets the strike price for options.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.optionStrikePrice;

/**
 * Gets or sets the contract unit for options.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.optionContractUnit;

/**
 * Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.optionExerciseStyle;

/**
 * Gets or sets the expiration time for options.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.optionExpirationTime;

/**
 * Gets or sets the delivery time for contracts.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.contractDeliveryTime;

/**
 * Gets or sets the contract unit for contracts.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.contractUnit;

/**
 * Gets or sets the asset used as the unit for contracts.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.contractUnitAsset;

/**
 * Gets or sets the contract identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.contractId;

/**
 * Gets or sets the display name of the contract.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.contractDisplayName;

/**
 * Gets or sets the display description of the contract.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.contractDisplayDescription;

/**
 * Gets the start date of the data in string format (\"yyyy-MM-dd\").
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.dataStart;

/**
 * Gets the end date of the data in string format (\"yyyy-MM-dd\").
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.dataEnd;

/**
 * Gets or sets the start date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataQuoteStart;

/**
 * Gets or sets the end date of quote data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataQuoteEnd;

/**
 * Gets or sets the start date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataOrderbookStart;

/**
 * Gets or sets the end date of order book data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataOrderbookEnd;

/**
 * Gets or sets the start date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataTradeStart;

/**
 * Gets or sets the end date of trade data.
 * @type {!Date}
 * @export
 */
API.Client.V1Symbol.prototype.dataTradeEnd;

/**
 * Gets or sets the index identifier.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.indexId;

/**
 * Gets or sets the display name of the index.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.indexDisplayName;

/**
 * Gets or sets the display description of the index.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.indexDisplayDescription;

/**
 * Gets or sets the volume in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1hrs;

/**
 * Gets or sets the volume in USD in the last 1 hour.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1hrsUsd;

/**
 * Gets or sets the volume in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1day;

/**
 * Gets or sets the volume in USD in the last 1 day.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1dayUsd;

/**
 * Gets or sets the volume in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1mth;

/**
 * Gets or sets the volume in USD in the last 1 month.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volume1mthUsd;

/**
 * Gets or sets the price.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.price;

/**
 * Gets or sets the symbol identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.symbolIdExchange;

/**
 * Gets or sets the base asset identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.assetIdBaseExchange;

/**
 * Gets or sets the quote asset identifier in the exchange.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.assetIdQuoteExchange;

/**
 * Gets or sets the price precision.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.pricePrecision;

/**
 * Gets or sets the size precision.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.sizePrecision;

/**
 * Key Value Pair store with raw data from the data source.
 * @type {!Object<!string, string>}
 * @export
 */
API.Client.V1Symbol.prototype.rawKvp;

/**
 * Gets or sets a value indicating whether the futures contract is inverse (coin-margined).
 * @type {!boolean}
 * @export
 */
API.Client.V1Symbol.prototype.futureIsInverse;

/**
 * Gets or sets a value indicating whether the futures contract is quanto.
 * @type {!boolean}
 * @export
 */
API.Client.V1Symbol.prototype.futureIsQuanto;

/**
 * Gets or sets the volume in USD.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.volumeToUsd;

/**
 * Gets or sets the up barrier price for barrier options.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.optionBarrierUpPrice;

/**
 * Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.optionBarrierUpType;

/**
 * Gets or sets the down barrier price for barrier options.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.optionBarrierDownPrice;

/**
 * Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT.
 * @type {!string}
 * @export
 */
API.Client.V1Symbol.prototype.optionBarrierDownType;

/**
 * Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs.
 * @type {!number}
 * @export
 */
API.Client.V1Symbol.prototype.symbolIdInt;

