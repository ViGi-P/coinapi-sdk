goog.provide('API.Client.Models.AdminMessageModel');

/**
 * Represents the response DTO for IEX admin information, combining all symbol-based admin message types
 * @record
 */
API.Client.ModelsAdminMessageModel = function() {}

/**
 * @type {!API.Client.Models.TradingStatusModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.tradingStatus;

/**
 * @type {!API.Client.Models.OfficialPriceModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.officialPrice;

/**
 * @type {!API.Client.Models.SecurityEventModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.securityEvent;

/**
 * @type {!API.Client.Models.AuctionInformationModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.auctionInformation;

/**
 * @type {!API.Client.Models.ShortSalePriceTestStatusModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.shortSalePriceTest;

/**
 * @type {!API.Client.Models.OperationalHaltStatusModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.operationalHaltStatus;

/**
 * @type {!API.Client.Models.RetailLiquidityIndicatorModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.retailLiquidityIndicator;

/**
 * @type {!API.Client.IEXSystemEvent.SystemEventModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.systemEvent;

/**
 * @type {!API.Client.Models.SecurityDirectoryModel}
 * @export
 */
API.Client.ModelsAdminMessageModel.prototype.securityDirectory;

