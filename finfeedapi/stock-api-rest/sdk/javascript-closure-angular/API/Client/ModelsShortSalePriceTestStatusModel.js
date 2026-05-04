goog.provide('API.Client.Models.ShortSalePriceTestStatusModel');

/**
 * Represents the response DTO for short sale price test status information
 * @record
 */
API.Client.ModelsShortSalePriceTestStatusModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.timestampNanos;

/**
 * Time when the short sale price test status was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.timestamp;

/**
 * Short sale price test status as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.shortSalePriceTestStatus;

/**
 * Short sale price test status as hex string
 * @type {!string}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.shortSalePriceTestStatusCode;

/**
 * Human-readable description of the short sale price test status
 * @type {!string}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.shortSalePriceTestStatusText;

/**
 * Indicates if the short sale price test is not in effect
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isShortSalePriceTestNotInEffect;

/**
 * Indicates if the short sale price test is in effect
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isShortSalePriceTestInEffect;

/**
 * Detail of the short sale price test as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.detail;

/**
 * Detail of the short sale price test as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.detailCode;

/**
 * Human-readable description of the short sale price test detail
 * @type {!string}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.detailText;

/**
 * Indicates if there is no price test in place
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isDetailNoPriceTest;

/**
 * Indicates if the short sale price test restriction is in effect due to an intraday price drop
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isDetailActivated;

/**
 * Indicates if the short sale price test restriction remains in effect from prior day
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isDetailContinued;

/**
 * Indicates if the short sale price test restriction is deactivated
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isDetailDeactivated;

/**
 * Indicates if the detail is not available
 * @type {!boolean}
 * @export
 */
API.Client.ModelsShortSalePriceTestStatusModel.prototype.isDetailNotAvailable;

