// tslint:disable
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

/**
 * Represents symbol mapping information for exchange symbols.
 * @export
 * @interface V1SymbolMapping
 */
export interface V1SymbolMapping {
    /**
     * The symbol ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    symbol_id?: string | null;
    /**
     * The exchange-specific symbol ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    symbol_id_exchange?: string | null;
    /**
     * The CoinAPI DataInfo ID.
     * @type {number}
     * @memberof V1SymbolMapping
     */
    coinapi_datainfo_id?: number;
    /**
     * The exchange-specific base asset ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    asset_id_base_exchange?: string | null;
    /**
     * The exchange-specific quote asset ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    asset_id_quote_exchange?: string | null;
    /**
     * The base asset ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    asset_id_base?: string | null;
    /**
     * The quote asset ID.
     * @type {string}
     * @memberof V1SymbolMapping
     */
    asset_id_quote?: string | null;
    /**
     * The price precision.
     * @type {number}
     * @memberof V1SymbolMapping
     */
    price_precision?: number | null;
    /**
     * The size precision.
     * @type {number}
     * @memberof V1SymbolMapping
     */
    size_precision?: number | null;
}
