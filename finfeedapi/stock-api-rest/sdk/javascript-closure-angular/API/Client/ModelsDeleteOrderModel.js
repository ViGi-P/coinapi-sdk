goog.provide('API.Client.Models.DeleteOrderModel');

/**
 * Represents the response DTO for order delete information
 * @record
 */
API.Client.ModelsDeleteOrderModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsDeleteOrderModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsDeleteOrderModel.prototype.timestampNanos;

/**
 * Time when the order was deleted as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsDeleteOrderModel.prototype.timestamp;

/**
 * Order identifier reference
 * @type {!number}
 * @export
 */
API.Client.ModelsDeleteOrderModel.prototype.orderIdReference;

