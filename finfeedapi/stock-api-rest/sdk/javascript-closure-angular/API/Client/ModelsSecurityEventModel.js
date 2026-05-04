goog.provide('API.Client.Models.SecurityEventModel');

/**
 * Represents the response DTO for security event information
 * @record
 */
API.Client.ModelsSecurityEventModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.timestampNanos;

/**
 * Time when the security event was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.timestamp;

/**
 * Security event as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.securityEvent;

/**
 * Security event as character string ('O' or 'C')
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.securityEventCode;

/**
 * Human-readable description of the security event
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.securityEventText;

/**
 * Indicates if the security event is 'Opening Process Complete' ('O'/0x4f).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.isOpeningProcessComplete;

/**
 * Indicates if the security event is 'Closing Process Complete' ('C'/0x43).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsSecurityEventModel.prototype.isClosingProcessComplete;

