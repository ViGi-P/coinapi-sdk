goog.provide('API.Client.Models.OfficialPriceModel');

/**
 * Represents the response DTO for official price information
 * @record
 */
API.Client.ModelsOfficialPriceModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.timestampNanos;

/**
 * Time when the official price was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.timestamp;

/**
 * Type of price as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.priceType;

/**
 * Type of price as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.priceTypeCode;

/**
 * Human-readable description of the price type
 * @type {!string}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.priceTypeText;

/**
 * Indicates if the price type is 'IEX Official Opening Price' ('Q'/0x51).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.isPriceTypeOpening;

/**
 * Indicates if the price type is 'IEX Official Closing Price' ('M'/0x4d).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.isPriceTypeClosing;

/**
 * Official price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsOfficialPriceModel.prototype.officialPrice;

