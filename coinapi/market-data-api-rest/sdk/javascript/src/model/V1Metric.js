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
 * The V1Metric model module.
 * @module model/V1Metric
 * @version v1
 */
class V1Metric {
    /**
     * Constructs a new <code>V1Metric</code>.
     * Represents a metric.
     * @alias module:model/V1Metric
     */
    constructor() { 
        
        V1Metric.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>V1Metric</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/V1Metric} obj Optional instance to populate.
     * @return {module:model/V1Metric} The populated <code>V1Metric</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new V1Metric();

            if (data.hasOwnProperty('metric_id')) {
                obj['metric_id'] = ApiClient.convertToType(data['metric_id'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>V1Metric</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>V1Metric</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['metric_id'] && !(typeof data['metric_id'] === 'string' || data['metric_id'] instanceof String)) {
            throw new Error("Expected the field `metric_id` to be a primitive type in the JSON string but got " + data['metric_id']);
        }
        // ensure the json data is a string
        if (data['description'] && !(typeof data['description'] === 'string' || data['description'] instanceof String)) {
            throw new Error("Expected the field `description` to be a primitive type in the JSON string but got " + data['description']);
        }

        return true;
    }


}



/**
 * Gets or sets the metric ID.
 * @member {String} metric_id
 */
V1Metric.prototype['metric_id'] = undefined;

/**
 * Gets or sets the metric description.
 * @member {String} description
 */
V1Metric.prototype['description'] = undefined;






export default V1Metric;

