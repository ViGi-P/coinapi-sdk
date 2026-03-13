goog.provide('API.Client.Models.IndexTimeseriesItem');

/**
 * Represents a timeseries item with value information.
 * @record
 */
API.Client.ModelsIndexTimeseriesItem = function() {}

/**
 * Gets or sets the start time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.timePeriodStart;

/**
 * Gets or sets the end time of the time period.
 * @type {!Date}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.timePeriodEnd;

/**
 * Gets or sets the time when the value opened.
 * @type {!Date}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.timeOpen;

/**
 * Gets or sets the time when the value closed.
 * @type {!Date}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.timeClose;

/**
 * Gets or sets the opening value.
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.valueOpen;

/**
 * Gets or sets the highest value during the time period.
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.valueHigh;

/**
 * Gets or sets the lowest value during the time period.
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.valueLow;

/**
 * Gets or sets the closing value.
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.valueClose;

/**
 * Gets or sets the number of values during the time period.
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexTimeseriesItem.prototype.valueCount;

