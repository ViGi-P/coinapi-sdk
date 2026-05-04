goog.provide('API.Client.Models.AddOrderModel');

/**
 * Represents the response DTO for add order information
 * @record
 */
API.Client.ModelsAddOrderModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.timestampNanos;

/**
 * Time when the order was added as DateTime (UTC)
 * @type {!Date}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.timestamp;

/**
 * Indicates if this is a Buy order ('8'/0x38).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.isSideBuy;

/**
 * Quoted size in number of shares
 * @type {!number}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.size;

/**
 * Price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.price;

/**
 * Order identifier
 * @type {!number}
 * @export
 */
API.Client.ModelsAddOrderModel.prototype.orderId;

