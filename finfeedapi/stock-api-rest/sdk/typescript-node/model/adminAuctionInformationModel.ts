/**
 * FinFeedAPI Stock REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

/**
* Represents the response DTO for auction information
*/
export class AdminAuctionInformationModel {
    /**
    * The stock symbol
    */
    'symbol'?: string | null;
    /**
    * Original timestamp in nanoseconds since epoch
    */
    'timestampNanos'?: number;
    /**
    * Time when the auction data was recorded as DateTime
    */
    'timestamp'?: Date;
    /**
    * Type of auction as byte value
    */
    'auctionType'?: number;
    /**
    * Type of auction as character string
    */
    'auctionTypeCode'?: string | null;
    /**
    * Human-readable description of the auction type
    */
    'auctionTypeText'?: string | null;
    /**
    * Indicates if the auction type is \'Opening Auction\' (\'O\'/0x4f).
    */
    'isAuctionTypeOpening'?: boolean;
    /**
    * Indicates if the auction type is \'Closing Auction\' (\'C\'/0x43).
    */
    'isAuctionTypeClosing'?: boolean;
    /**
    * Indicates if the auction type is \'IPO Auction\' (\'I\'/0x49).
    */
    'isAuctionTypeIpo'?: boolean;
    /**
    * Indicates if the auction type is \'Halt Auction\' (\'H\'/0x48).
    */
    'isAuctionTypeHalt'?: boolean;
    /**
    * Indicates if the auction type is \'Volatility Auction\' (\'V\'/0x56).
    */
    'isAuctionTypeVolatility'?: boolean;
    /**
    * Number of shares paired at the Reference Price
    */
    'pairedShares'?: number;
    /**
    * Reference price as decimal
    */
    'referencePrice'?: number;
    /**
    * Indicative clearing price as decimal
    */
    'indicativeClearingPrice'?: number;
    /**
    * Number of unpaired shares at the Reference Price
    */
    'imbalanceShares'?: number;
    /**
    * Side of the imbalance as byte value
    */
    'imbalanceSide'?: number;
    /**
    * Side of the imbalance as character string
    */
    'imbalanceSideCode'?: string | null;
    /**
    * Human-readable description of the imbalance side
    */
    'imbalanceSideText'?: string | null;
    /**
    * Indicates if there is a buy-side imbalance (\'B\'/0x42).
    */
    'isImbalanceSideBuy'?: boolean;
    /**
    * Indicates if there is a sell-side imbalance (\'S\'/0x53).
    */
    'isImbalanceSideSell'?: boolean;
    /**
    * Indicates if there is no imbalance (\'N\'/0x4e).
    */
    'isImbalanceSideNone'?: boolean;
    /**
    * Number of extensions to the auction
    */
    'extensionNumber'?: number;
    /**
    * Scheduled auction time in seconds since epoch
    */
    'scheduledAuctionTimeSeconds'?: number;
    /**
    * Scheduled time for the auction as DateTime
    */
    'scheduledAuctionTime'?: Date;
    /**
    * Auction book clearing price as decimal
    */
    'auctionBookClearingPrice'?: number;
    /**
    * Collar reference price as decimal
    */
    'collarReferencePrice'?: number;
    /**
    * Lower auction collar as decimal
    */
    'lowerAuctionCollar'?: number;
    /**
    * Upper auction collar as decimal
    */
    'upperAuctionCollar'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "symbol",
            "baseName": "symbol",
            "type": "string"
        },
        {
            "name": "timestampNanos",
            "baseName": "timestamp_nanos",
            "type": "number"
        },
        {
            "name": "timestamp",
            "baseName": "timestamp",
            "type": "Date"
        },
        {
            "name": "auctionType",
            "baseName": "auction_type",
            "type": "number"
        },
        {
            "name": "auctionTypeCode",
            "baseName": "auction_type_code",
            "type": "string"
        },
        {
            "name": "auctionTypeText",
            "baseName": "auction_type_text",
            "type": "string"
        },
        {
            "name": "isAuctionTypeOpening",
            "baseName": "is_auction_type_opening",
            "type": "boolean"
        },
        {
            "name": "isAuctionTypeClosing",
            "baseName": "is_auction_type_closing",
            "type": "boolean"
        },
        {
            "name": "isAuctionTypeIpo",
            "baseName": "is_auction_type_ipo",
            "type": "boolean"
        },
        {
            "name": "isAuctionTypeHalt",
            "baseName": "is_auction_type_halt",
            "type": "boolean"
        },
        {
            "name": "isAuctionTypeVolatility",
            "baseName": "is_auction_type_volatility",
            "type": "boolean"
        },
        {
            "name": "pairedShares",
            "baseName": "paired_shares",
            "type": "number"
        },
        {
            "name": "referencePrice",
            "baseName": "reference_price",
            "type": "number"
        },
        {
            "name": "indicativeClearingPrice",
            "baseName": "indicative_clearing_price",
            "type": "number"
        },
        {
            "name": "imbalanceShares",
            "baseName": "imbalance_shares",
            "type": "number"
        },
        {
            "name": "imbalanceSide",
            "baseName": "imbalance_side",
            "type": "number"
        },
        {
            "name": "imbalanceSideCode",
            "baseName": "imbalance_side_code",
            "type": "string"
        },
        {
            "name": "imbalanceSideText",
            "baseName": "imbalance_side_text",
            "type": "string"
        },
        {
            "name": "isImbalanceSideBuy",
            "baseName": "is_imbalance_side_buy",
            "type": "boolean"
        },
        {
            "name": "isImbalanceSideSell",
            "baseName": "is_imbalance_side_sell",
            "type": "boolean"
        },
        {
            "name": "isImbalanceSideNone",
            "baseName": "is_imbalance_side_none",
            "type": "boolean"
        },
        {
            "name": "extensionNumber",
            "baseName": "extension_number",
            "type": "number"
        },
        {
            "name": "scheduledAuctionTimeSeconds",
            "baseName": "scheduled_auction_time_seconds",
            "type": "number"
        },
        {
            "name": "scheduledAuctionTime",
            "baseName": "scheduled_auction_time",
            "type": "Date"
        },
        {
            "name": "auctionBookClearingPrice",
            "baseName": "auction_book_clearing_price",
            "type": "number"
        },
        {
            "name": "collarReferencePrice",
            "baseName": "collar_reference_price",
            "type": "number"
        },
        {
            "name": "lowerAuctionCollar",
            "baseName": "lower_auction_collar",
            "type": "number"
        },
        {
            "name": "upperAuctionCollar",
            "baseName": "upper_auction_collar",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return AdminAuctionInformationModel.attributeTypeMap;
    }
}

