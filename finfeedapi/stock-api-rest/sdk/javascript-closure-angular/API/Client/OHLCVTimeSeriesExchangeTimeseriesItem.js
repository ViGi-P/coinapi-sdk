goog.provide('API.Client.OHLCVTimeSeries.ExchangeTimeseriesItem');

/**
 * Represents a timeseries item with price and volume information.
 * @record
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem = function() {}

/**
 * Gets or sets the start time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.timePeriodStart;

/**
 * Gets or sets the end time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.timePeriodEnd;

/**
 * Gets or sets the time when the price opened.
 * @type {!Date}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.timeOpen;

/**
 * Gets or sets the time when the price closed.
 * @type {!Date}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.timeClose;

/**
 * Gets or sets the opening price.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.priceOpen;

/**
 * Gets or sets the highest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.priceHigh;

/**
 * Gets or sets the lowest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.priceLow;

/**
 * Gets or sets the closing price.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.priceClose;

/**
 * Gets or sets the total volume traded during the time period.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.volumeTraded;

/**
 * Gets or sets the number of trades executed during the time period.
 * @type {!number}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.tradesCount;

/**
 * @type {!string}
 * @export
 */
API.Client.OHLCVTimeSeriesExchangeTimeseriesItem.prototype.symbolIdExchange;

