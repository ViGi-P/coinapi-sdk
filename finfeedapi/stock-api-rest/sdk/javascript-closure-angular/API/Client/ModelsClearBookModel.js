goog.provide('API.Client.Models.ClearBookModel');

/**
 * Represents the response DTO for clear book information
 * @record
 */
API.Client.ModelsClearBookModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsClearBookModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsClearBookModel.prototype.timestampNanos;

/**
 * Time when the book was cleared as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsClearBookModel.prototype.timestamp;

