goog.provide('API.Client.IEXQuoteUpdate.QuoteUpdateModel');

/**
 * Represents the response DTO for quote update information
 * @record
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.timestampNanos;

/**
 * Time when the quote update was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.timestamp;

/**
 * Gets whether the symbol is available for trading True if active, False if halted, paused, or otherwise not available
 * @type {!boolean}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.isSymbolAvailable;

/**
 * Gets whether the market session is regular or pre/post-market True if pre/post-market session, False if regular market session
 * @type {!boolean}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.isPrePostMarketSession;

/**
 * Ask size in number of shares
 * @type {!number}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.askSize;

/**
 * Ask price as decimal
 * @type {!number}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.askPrice;

/**
 * Bid price as decimal
 * @type {!number}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.bidPrice;

/**
 * Bid size in number of shares
 * @type {!number}
 * @export
 */
API.Client.IEXQuoteUpdateQuoteUpdateModel.prototype.bidSize;

