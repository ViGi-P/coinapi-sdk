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

import * as models from './models';

/**
 * Represents the response DTO for quote update information
 */
export interface Level1QuoteUpdateModel {
    /**
     * The stock symbol
     */
    symbol?: string;

    /**
     * Original timestamp in nanoseconds since epoch
     */
    timestamp_nanos?: number;

    /**
     * Time when the quote update was recorded as DateTime
     */
    timestamp?: string;

    /**
     * Gets whether the symbol is available for trading True if active, False if halted, paused, or otherwise not available
     */
    is_symbol_available?: boolean;

    /**
     * Gets whether the market session is regular or pre/post-market True if pre/post-market session, False if regular market session
     */
    is_pre_post_market_session?: boolean;

    /**
     * Ask size in number of shares
     */
    ask_size?: number;

    /**
     * Ask price as decimal
     */
    ask_price?: number;

    /**
     * Bid price as decimal
     */
    bid_price?: number;

    /**
     * Bid size in number of shares
     */
    bid_size?: number;

}
