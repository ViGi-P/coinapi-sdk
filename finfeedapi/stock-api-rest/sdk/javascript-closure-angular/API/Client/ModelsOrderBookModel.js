goog.provide('API.Client.Models.OrderBookModel');

/**
 * Represents the response DTO for Level-3 order book information
 * @record
 */
API.Client.ModelsOrderBookModel = function() {}

/**
 * @type {!API.Client.Models.AddOrderModel}
 * @export
 */
API.Client.ModelsOrderBookModel.prototype.addOrder;

/**
 * @type {!API.Client.Models.DeleteOrderModel}
 * @export
 */
API.Client.ModelsOrderBookModel.prototype.deleteOrder;

/**
 * @type {!API.Client.Models.ModifyOrderModel}
 * @export
 */
API.Client.ModelsOrderBookModel.prototype.modifyOrder;

/**
 * @type {!API.Client.Models.ExecutedOrderModel}
 * @export
 */
API.Client.ModelsOrderBookModel.prototype.executedOrder;

/**
 * @type {!API.Client.Models.ClearBookModel}
 * @export
 */
API.Client.ModelsOrderBookModel.prototype.clearBook;

