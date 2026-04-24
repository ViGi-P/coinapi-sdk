goog.provide('API.Client.v1.TimeseriesPeriod');

/**
 * Represents a timeseries period used in exchange rate data.
 * @record
 */
API.Client.V1TimeseriesPeriod = function() {}

/**
 * Gets or sets the period ID.
 * @type {!string}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.periodId;

/**
 * Gets or sets the length of the period in seconds.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.lengthSeconds;

/**
 * Gets or sets the length of the period in months.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.lengthMonths;

/**
 * Gets or sets the unit count.
 * @type {!number}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.unitCount;

/**
 * Gets or sets the unit name.
 * @type {!string}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.unitName;

/**
 * Gets or sets the display name of the timeseries period.
 * @type {!string}
 * @export
 */
API.Client.V1TimeseriesPeriod.prototype.displayName;

