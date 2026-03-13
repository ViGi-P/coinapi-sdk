goog.provide('API.Client.Models.IndexValue');

/**
 * @record
 */
API.Client.ModelsIndexValue = function() {}

/**
 * @type {!Date}
 * @export
 */
API.Client.ModelsIndexValue.prototype.timestamp;

/**
 * @type {!number}
 * @export
 */
API.Client.ModelsIndexValue.prototype.value;

/**
 * @type {!Array<!API.Client.Models.IndexValueComponent>}
 * @export
 */
API.Client.ModelsIndexValue.prototype.composition;

