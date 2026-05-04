goog.provide('API.Client.Models.SecurityDirectoryModel');

/**
 * Represents the response DTO for security directory information
 * @record
 */
API.Client.ModelsSecurityDirectoryModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.timestampNanos;

/**
 * Time when the security directory information was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.timestamp;

/**
 * Flags for the security
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.flags;

/**
 * Number of shares that represent a round lot
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.roundLotSize;

/**
 * Adjusted previous official closing price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.adjustedPocPrice;

/**
 * LULD tier as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.luldTier;

/**
 * LULD tier as numeric string
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.luldTierCode;

/**
 * Human-readable description of the LULD tier
 * @type {!string}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.luldTierText;

/**
 * Indicates if LULD Tier is 'Not applicable' (0x0).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.isLuldTierNotApplicable;

/**
 * Indicates if LULD Tier is 'Tier 1 NMS Stock' (0x1).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.isLuldTier1;

/**
 * Indicates if LULD Tier is 'Tier 2 NMS Stock' (0x2).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsSecurityDirectoryModel.prototype.isLuldTier2;

