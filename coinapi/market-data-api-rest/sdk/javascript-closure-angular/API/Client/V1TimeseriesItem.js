goog.provide('API.Client.v1.TimeseriesItem');

/**
 * Represents a timeseries item with price and volume information.
 * @record
 */
API.Client.V1TimeseriesItem = function() {}

/**
 * Gets or sets the start time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.timePeriodStart;

/**
 * Gets or sets the end time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.timePeriodEnd;

/**
 * Gets or sets the time when the price opened.
 * @type {!Date}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.timeOpen;

/**
 * Gets or sets the time when the price closed.
 * @type {!Date}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.timeClose;

/**
 * Gets or sets the opening price.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.priceOpen;

/**
 * Gets or sets the highest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.priceHigh;

/**
 * Gets or sets the lowest price during the time period.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.priceLow;

/**
 * Gets or sets the closing price.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.priceClose;

/**
 * Gets or sets the total volume traded during the time period.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.volumeTraded;

/**
 * Gets or sets the number of trades executed during the time period.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesItem.prototype.tradesCount;

