goog.provide('API.Client.Models.RetailLiquidityIndicatorModel');

/**
 * Represents the response DTO for retail liquidity indicator information
 * @record
 */
API.Client.ModelsRetailLiquidityIndicatorModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.timestampNanos;

/**
 * Time when the retail liquidity indicator was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.timestamp;

/**
 * Retail liquidity indicator as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.retailLiquidityIndicator;

/**
 * Retail liquidity indicator as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.retailLiquidityIndicatorCode;

/**
 * Human-readable description of the retail liquidity indicator
 * @type {!string}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.retailLiquidityIndicatorText;

/**
 * Indicates if the indicator is 'Not Applicable' (' '/0x20).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.isRetailIndicatorNotApplicable;

/**
 * Indicates if there is 'Buy interest for Retail' ('A'/0x41).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.isRetailIndicatorBuyInterest;

/**
 * Indicates if there is 'Sell interest for Retail' ('B'/0x42).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.isRetailIndicatorSellInterest;

/**
 * Indicates if there is 'Buy and sell interest for Retail' ('C'/0x43).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsRetailLiquidityIndicatorModel.prototype.isRetailIndicatorBuyAndSellInterest;

