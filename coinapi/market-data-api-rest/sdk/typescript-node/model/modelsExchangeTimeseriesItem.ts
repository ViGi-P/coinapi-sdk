/**
 * CoinAPI Market Data REST API
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
* Represents a timeseries item with price and volume information.
*/
export class ModelsExchangeTimeseriesItem {
    /**
    * The start time of the time period.
    */
    'timePeriodStart'?: Date;
    /**
    * The end time of the time period.
    */
    'timePeriodEnd'?: Date;
    /**
    * The time when the price opened.
    */
    'timeOpen'?: Date | null;
    /**
    * The time when the price closed.
    */
    'timeClose'?: Date | null;
    /**
    * The opening price.
    */
    'priceOpen'?: number | null;
    /**
    * The highest price during the time period.
    */
    'priceHigh'?: number | null;
    /**
    * The lowest price during the time period.
    */
    'priceLow'?: number | null;
    /**
    * The closing price.
    */
    'priceClose'?: number | null;
    /**
    * The total volume traded during the time period.
    */
    'volumeTraded'?: number;
    /**
    * The number of trades executed during the time period.
    */
    'tradesCount'?: number;
    'symbolIdExchange'?: string | null;
    'symbolIdCoinapi'?: string | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "timePeriodStart",
            "baseName": "time_period_start",
            "type": "Date"
        },
        {
            "name": "timePeriodEnd",
            "baseName": "time_period_end",
            "type": "Date"
        },
        {
            "name": "timeOpen",
            "baseName": "time_open",
            "type": "Date"
        },
        {
            "name": "timeClose",
            "baseName": "time_close",
            "type": "Date"
        },
        {
            "name": "priceOpen",
            "baseName": "price_open",
            "type": "number"
        },
        {
            "name": "priceHigh",
            "baseName": "price_high",
            "type": "number"
        },
        {
            "name": "priceLow",
            "baseName": "price_low",
            "type": "number"
        },
        {
            "name": "priceClose",
            "baseName": "price_close",
            "type": "number"
        },
        {
            "name": "volumeTraded",
            "baseName": "volume_traded",
            "type": "number"
        },
        {
            "name": "tradesCount",
            "baseName": "trades_count",
            "type": "number"
        },
        {
            "name": "symbolIdExchange",
            "baseName": "symbol_id_exchange",
            "type": "string"
        },
        {
            "name": "symbolIdCoinapi",
            "baseName": "symbol_id_coinapi",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return ModelsExchangeTimeseriesItem.attributeTypeMap;
    }
}

