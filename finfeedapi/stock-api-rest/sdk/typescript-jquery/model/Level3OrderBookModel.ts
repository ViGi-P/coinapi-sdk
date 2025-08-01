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
 * Represents the response DTO for Level-3 order book information
 */
export interface Level3OrderBookModel {
    add_order?: models.Level3AddOrderModel;

    delete_order?: models.Level3DeleteOrderModel;

    modify_order?: models.Level3ModifyOrderModel;

    executed_order?: models.Level3ExecutedOrderModel;

    clear_book?: models.Level3ClearBookModel;

}
