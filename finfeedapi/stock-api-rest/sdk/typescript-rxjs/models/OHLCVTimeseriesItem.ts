// tslint:disable
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

/**
 * Represents a timeseries item with price and volume information.
 * @export
 * @interface OHLCVTimeseriesItem
 */
export interface OHLCVTimeseriesItem {
    /**
     * Gets or sets the start time of the time period.
     * @type {string}
     * @memberof OHLCVTimeseriesItem
     */
    time_period_start?: string;
    /**
     * Gets or sets the end time of the time period.
     * @type {string}
     * @memberof OHLCVTimeseriesItem
     */
    time_period_end?: string;
    /**
     * Gets or sets the time when the price opened.
     * @type {string}
     * @memberof OHLCVTimeseriesItem
     */
    time_open?: string | null;
    /**
     * Gets or sets the time when the price closed.
     * @type {string}
     * @memberof OHLCVTimeseriesItem
     */
    time_close?: string | null;
    /**
     * Gets or sets the opening price.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    price_open?: number | null;
    /**
     * Gets or sets the highest price during the time period.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    price_high?: number | null;
    /**
     * Gets or sets the lowest price during the time period.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    price_low?: number | null;
    /**
     * Gets or sets the closing price.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    price_close?: number | null;
    /**
     * Gets or sets the total volume traded during the time period.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    volume_traded?: number;
    /**
     * Gets or sets the number of trades executed during the time period.
     * @type {number}
     * @memberof OHLCVTimeseriesItem
     */
    trades_count?: number;
}
