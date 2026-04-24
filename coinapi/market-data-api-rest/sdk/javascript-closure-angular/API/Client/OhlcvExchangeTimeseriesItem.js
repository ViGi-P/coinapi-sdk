goog.provide('API.Client.Ohlcv.ExchangeTimeseriesItem');

/**
 * Represents a timeseries item with price and volume information.
 * @record
 */
API.Client.OhlcvExchangeTimeseriesItem = function() {}

/**
 * Gets or sets the start time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.timePeriodStart;

/**
 * Gets or sets the end time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.timePeriodEnd;

/**
 * Gets or sets the time when the price opened.
 * @type {!Date}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.timeOpen;

/**
 * Gets or sets the time when the price closed.
 * @type {!Date}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.timeClose;

/**
 * Gets or sets the opening price.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.priceOpen;

/**
 * Gets or sets the highest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.priceHigh;

/**
 * Gets or sets the lowest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.priceLow;

/**
 * Gets or sets the closing price.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.priceClose;

/**
 * Gets or sets the total volume traded during the time period.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.volumeTraded;

/**
 * Gets or sets the number of trades executed during the time period.
 * @type {!number}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.tradesCount;

/**
 * @type {!string}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.symbolIdExchange;

/**
 * @type {!string}
 * @export
 */
API.Client.OhlcvExchangeTimeseriesItem.prototype.symbolIdCoinapi;

