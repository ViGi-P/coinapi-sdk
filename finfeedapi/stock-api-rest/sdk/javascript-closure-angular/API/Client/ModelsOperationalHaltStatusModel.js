goog.provide('API.Client.Models.OperationalHaltStatusModel');

/**
 * Represents the response DTO for operational halt status information
 * @record
 */
API.Client.ModelsOperationalHaltStatusModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.timestampNanos;

/**
 * Time when the operational halt status was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.timestamp;

/**
 * Operational halt status as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.operationalHaltStatus;

/**
 * Operational halt status as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.operationalHaltStatusCode;

/**
 * Human-readable description of the operational halt status
 * @type {!string}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.operationalHaltStatusText;

/**
 * Indicates if the status is 'IEX specific operational trading halt' ('O'/0x4f).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.isOperationallyHalted;

/**
 * Indicates if the status is 'Not operationally halted on IEX' ('N'/0x4e).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsOperationalHaltStatusModel.prototype.isNotOperationallyHalted;

