goog.provide('API.Client.Models.AuctionInformationModel');

/**
 * Represents the response DTO for auction information
 * @record
 */
API.Client.ModelsAuctionInformationModel = function() {}

/**
 * The stock symbol
 * @type {!string}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.symbol;

/**
 * Original timestamp in nanoseconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.timestampNanos;

/**
 * Time when the auction data was recorded as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.timestamp;

/**
 * Type of auction as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.auctionType;

/**
 * Type of auction as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.auctionTypeCode;

/**
 * Human-readable description of the auction type
 * @type {!string}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.auctionTypeText;

/**
 * Indicates if the auction type is 'Opening Auction' ('O'/0x4f).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isAuctionTypeOpening;

/**
 * Indicates if the auction type is 'Closing Auction' ('C'/0x43).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isAuctionTypeClosing;

/**
 * Indicates if the auction type is 'IPO Auction' ('I'/0x49).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isAuctionTypeIpo;

/**
 * Indicates if the auction type is 'Halt Auction' ('H'/0x48).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isAuctionTypeHalt;

/**
 * Indicates if the auction type is 'Volatility Auction' ('V'/0x56).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isAuctionTypeVolatility;

/**
 * Number of shares paired at the Reference Price
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.pairedShares;

/**
 * Reference price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.referencePrice;

/**
 * Indicative clearing price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.indicativeClearingPrice;

/**
 * Number of unpaired shares at the Reference Price
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.imbalanceShares;

/**
 * Side of the imbalance as byte value
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.imbalanceSide;

/**
 * Side of the imbalance as character string
 * @type {!string}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.imbalanceSideCode;

/**
 * Human-readable description of the imbalance side
 * @type {!string}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.imbalanceSideText;

/**
 * Indicates if there is a buy-side imbalance ('B'/0x42).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isImbalanceSideBuy;

/**
 * Indicates if there is a sell-side imbalance ('S'/0x53).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isImbalanceSideSell;

/**
 * Indicates if there is no imbalance ('N'/0x4e).
 * @type {!boolean}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.isImbalanceSideNone;

/**
 * Number of extensions to the auction
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.extensionNumber;

/**
 * Scheduled auction time in seconds since epoch
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.scheduledAuctionTimeSeconds;

/**
 * Scheduled time for the auction as DateTime
 * @type {!Date}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.scheduledAuctionTime;

/**
 * Auction book clearing price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.auctionBookClearingPrice;

/**
 * Collar reference price as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.collarReferencePrice;

/**
 * Lower auction collar as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.lowerAuctionCollar;

/**
 * Upper auction collar as decimal
 * @type {!number}
 * @export
 */
API.Client.ModelsAuctionInformationModel.prototype.upperAuctionCollar;

