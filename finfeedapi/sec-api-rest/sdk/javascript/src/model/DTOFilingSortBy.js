/**
 * FinFeedAPI SEC REST API
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
* Enum class DTOFilingSortBy.
* @enum {}
* @readonly
*/
export default class DTOFilingSortBy {
    
        /**
         * value: "AccessionNumber"
         * @const
         */
        "AccessionNumber" = "AccessionNumber";

    
        /**
         * value: "FilingDate"
         * @const
         */
        "FilingDate" = "FilingDate";

    
        /**
         * value: "ReportDate"
         * @const
         */
        "ReportDate" = "ReportDate";

    
        /**
         * value: "AcceptanceDateTime"
         * @const
         */
        "AcceptanceDateTime" = "AcceptanceDateTime";

    
        /**
         * value: "Size"
         * @const
         */
        "Size" = "Size";

    

    /**
    * Returns a <code>DTOFilingSortBy</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/DTOFilingSortBy} The enum <code>DTOFilingSortBy</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

