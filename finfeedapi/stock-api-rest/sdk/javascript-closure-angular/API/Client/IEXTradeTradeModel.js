goog.provide('API.Client.IEXTrade.TradeModel');

/**
 * Represents the response DTO for a single trade event (report or break).
 * @record
 */
API.Client.IEXTradeTradeModel = function() {}

/**
 * Indicates if this record represents a trade break (true) or a trade report (false).
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isTradeBreak;

/**
 * The stock symbol.
 * @type {!string}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch.
 * @type {!number}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.timestampNanos;

/**
 * Time when the event was recorded as DateTime (UTC).
 * @type {!Date}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.timestamp;

/**
 * Trade volume (or break volume) in number of shares.
 * @type {!number}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.size;

/**
 * Trade price (or break price) as decimal.
 * @type {!number}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.price;

/**
 * IEX trade identifier (same for report and its corresponding break).
 * @type {!number}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.tradeId;

/**
 * Bit 7 (Mask 0x80): Intermarket Sweep Flag. True: Intermarket Sweep Order (\"ISO\"). False: Non-Intermarket Sweep Order.
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isIntermarketSweep;

/**
 * Bit 6 (Mask 0x40): Extended Hours Flag. True: Extended Hours Trade (i.e., Form T sale condition). False: Regular Market Session Trade.
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isExtendedHoursTrade;

/**
 * Bit 5 (Mask 0x20): Odd Lot Flag. True: Odd Lot Trade. False: Round or Mixed Lot Trade.
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isOddLotTrade;

/**
 * Bit 4 (Mask 0x10): Trade Through Exempt Flag. True: Trade is not subject to Rule 611 (Trade Through) of SEC Reg. NMS. False: Trade is subject to Rule 611 (Trade Through) of SEC Reg. NMS. Applied when the taking order was an ISO that traded through a protected quotation, OR the NBBO was crossed at the time of the trade, OR the trade occurred through a self-helped venue's quotation, OR the trade was a single-price cross.
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isTradeThroughExempt;

/**
 * Bit 3 (Mask 0x08): Single-price Cross Trade Flag. True: Trade resulting from a single-price cross. False: Execution during continuous trading.
 * @type {!boolean}
 * @export
 */
API.Client.IEXTradeTradeModel.prototype.isSinglePriceCrossTrade;

