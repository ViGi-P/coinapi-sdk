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
 *
 */

import ApiClient from '../ApiClient';

/**
 * The V1OrderBookDepth model module.
 * @module model/V1OrderBookDepth
 * @version v1
 */
class V1OrderBookDepth {
    /**
     * Constructs a new <code>V1OrderBookDepth</code>.
     * Represents the depth of an order book.
     * @alias module:model/V1OrderBookDepth
     */
    constructor() { 
        
        V1OrderBookDepth.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>V1OrderBookDepth</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/V1OrderBookDepth} obj Optional instance to populate.
     * @return {module:model/V1OrderBookDepth} The populated <code>V1OrderBookDepth</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new V1OrderBookDepth();

            if (data.hasOwnProperty('symbol_id')) {
                obj['symbol_id'] = ApiClient.convertToType(data['symbol_id'], 'String');
            }
            if (data.hasOwnProperty('time_exchange')) {
                obj['time_exchange'] = ApiClient.convertToType(data['time_exchange'], 'Date');
            }
            if (data.hasOwnProperty('time_coinapi')) {
                obj['time_coinapi'] = ApiClient.convertToType(data['time_coinapi'], 'Date');
            }
            if (data.hasOwnProperty('ask_levels')) {
                obj['ask_levels'] = ApiClient.convertToType(data['ask_levels'], 'Number');
            }
            if (data.hasOwnProperty('bid_levels')) {
                obj['bid_levels'] = ApiClient.convertToType(data['bid_levels'], 'Number');
            }
            if (data.hasOwnProperty('ask_depth')) {
                obj['ask_depth'] = ApiClient.convertToType(data['ask_depth'], 'Number');
            }
            if (data.hasOwnProperty('bid_depth')) {
                obj['bid_depth'] = ApiClient.convertToType(data['bid_depth'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>V1OrderBookDepth</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>V1OrderBookDepth</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['symbol_id'] && !(typeof data['symbol_id'] === 'string' || data['symbol_id'] instanceof String)) {
            throw new Error("Expected the field `symbol_id` to be a primitive type in the JSON string but got " + data['symbol_id']);
        }

        return true;
    }


}



/**
 * The symbol identifier.
 * @member {String} symbol_id
 */
V1OrderBookDepth.prototype['symbol_id'] = undefined;

/**
 * The exchange time of the order book.
 * @member {Date} time_exchange
 */
V1OrderBookDepth.prototype['time_exchange'] = undefined;

/**
 * The CoinAPI time when the order book was received.
 * @member {Date} time_coinapi
 */
V1OrderBookDepth.prototype['time_coinapi'] = undefined;

/**
 * The number of ask levels in the order book.
 * @member {Number} ask_levels
 */
V1OrderBookDepth.prototype['ask_levels'] = undefined;

/**
 * The number of bid levels in the order book.
 * @member {Number} bid_levels
 */
V1OrderBookDepth.prototype['bid_levels'] = undefined;

/**
 * The depth of the ask side of the order book.
 * @member {Number} ask_depth
 */
V1OrderBookDepth.prototype['ask_depth'] = undefined;

/**
 * The depth of the bid side of the order book.
 * @member {Number} bid_depth
 */
V1OrderBookDepth.prototype['bid_depth'] = undefined;






export default V1OrderBookDepth;

