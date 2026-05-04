goog.provide('API.Client.Models.ModifyOrderModel');

/**
 * Represents the response DTO for order modify information
 * @record
 */
API.Client.ModelsModifyOrderModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.timestampNanos;

/**
 * Time when the order was modified as DateTime (UTC)
 * @type {!Date}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.timestamp;

/**
 * Order identifier reference
 * @type {!number}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.orderIdReference;

/**
 * Indicates if priority is reseted
 * @type {!boolean}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.isPriorityReset;

/**
 * New total quoted size in number of shares
 * @type {!number}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.size;

/**
 * Price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsModifyOrderModel.prototype.price;

