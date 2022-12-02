/**
 * EMS - REST API
 * This section will provide necessary information about the `CoinAPI EMS REST API` protocol. <br/> This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       <br/><br/> Implemented Standards:    * [HTTP1.0](https://datatracker.ietf.org/doc/html/rfc1945)   * [HTTP1.1](https://datatracker.ietf.org/doc/html/rfc2616)   * [HTTP2.0](https://datatracker.ietf.org/doc/html/rfc7540)     ### Endpoints <table>   <thead>     <tr>       <th>Deployment method</th>       <th>Environment</th>       <th>Url</th>     </tr>   </thead>   <tbody>     <tr>       <td>Managed Cloud</td>       <td>Production</td>       <td>Use <a href=\"#ems-docs-sh\">Managed Cloud REST API /v1/locations</a> to get specific endpoints to each server site where your deployments span</td>     </tr>     <tr>       <td>Managed Cloud</td>       <td>Sandbox</td>       <td><code>https://ems-gateway-aws-eu-central-1-dev.coinapi.io/</code></td>     </tr>     <tr>       <td>Self Hosted</td>       <td>Production</td>       <td>IP Address of the <code>ems-gateway</code> container/excecutable in the closest server site to the caller location</td>     </tr>     <tr>       <td>Self Hosted</td>       <td>Sandbox</td>       <td>IP Address of the <code>ems-gateway</code> container/excecutable in the closest server site to the caller location</td>     </tr>   </tbody> </table>  ### Authentication If the software is deployed as `Self-Hosted` then API do not require authentication as inside your infrastructure, your company is responsible for the security and access controls.  <br/><br/> If the software is deployed in our `Managed Cloud`, there are 2 methods for authenticating with us, you only need to use one:   1. Custom authorization header named `X-CoinAPI-Key` with the API Key  2. Query string parameter named `apikey` with the API Key  3. <a href=\"#certificate\">TLS Client Certificate</a> from the `Managed Cloud REST API` (/v1/certificate/pem endpoint) while establishing a TLS session with us.  #### Custom authorization header You can authorize by providing additional custom header named `X-CoinAPI-Key` and API key as its value. Assuming that your API key is `73034021-THIS-IS-SAMPLE-KEY`, then the authorization header you should send to us will look like: <br/><br/> `X-CoinAPI-Key: 73034021-THIS-IS-SAMPLE-KEY` <aside class=\"success\">This method is recommended by us and you should use it in production environments.</aside> #### Query string authorization parameter You can authorize by providing an additional parameter named `apikey` with a value equal to your API key in the query string of your HTTP request. Assuming that your API key is `73034021-THIS-IS-SAMPLE-KEY` and that you want to request all balances, then your query string should look like this:  <br/><br/> `GET /v1/balances?apikey=73034021-THIS-IS-SAMPLE-KEY` <aside class=\"notice\">Query string method may be more practical for development activities.</aside> 
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

export class OrderHistory {
    /**
    * Apikey
    */
    'apikey'?: string;
    /**
    * Exchange id
    */
    'exchangeId'?: string;
    /**
    * Client order id
    */
    'clientOrderId'?: string;
    /**
    * Symbol id exchange
    */
    'symbolIdExchange'?: string;
    /**
    * Symbol id in coinapi
    */
    'symbolIdCoinapi'?: string;
    /**
    * Amount
    */
    'amountOrder'?: number;
    /**
    * Price
    */
    'price'?: number;
    /**
    * 1-buy, 2-sell
    */
    'side'?: number;
    /**
    * Order type
    */
    'orderType'?: string;
    /**
    * Time in force
    */
    'timeInForce'?: string;
    /**
    * Expire time
    */
    'expireTime'?: string;
    /**
    * Exec inst
    */
    'execInst'?: Array<string>;
    /**
    * Client order id format
    */
    'clientOrderIdFormatExchange'?: string;
    /**
    * Exchange order id
    */
    'exchangeOrderId'?: string;
    /**
    * Amount open
    */
    'amountOpen'?: number;
    /**
    * Amount filled
    */
    'amountFilled'?: number;
    /**
    * Average price
    */
    'avgPx'?: number;
    /**
    * Status
    */
    'status'?: string;
    /**
    * History status
    */
    'statusHistoryStatus'?: Array<string>;
    /**
    * History status time
    */
    'statusHistoryTime'?: Array<string>;
    /**
    * Error message
    */
    'errorMessageResult'?: string;
    /**
    * Error message reason
    */
    'errorMessageReason'?: string;
    /**
    * Error message
    */
    'errorMessageMessage'?: string;
    /**
    * Fills time
    */
    'fillsTime'?: Array<string>;
    /**
    * Fills price
    */
    'fillsPrice'?: Array<number>;
    /**
    * Fills amount
    */
    'fillsAmount'?: Array<number>;
    /**
    * Created time
    */
    'createdTime'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "apikey",
            "baseName": "apikey",
            "type": "string"
        },
        {
            "name": "exchangeId",
            "baseName": "exchangeId",
            "type": "string"
        },
        {
            "name": "clientOrderId",
            "baseName": "clientOrderId",
            "type": "string"
        },
        {
            "name": "symbolIdExchange",
            "baseName": "symbolIdExchange",
            "type": "string"
        },
        {
            "name": "symbolIdCoinapi",
            "baseName": "symbolIdCoinapi",
            "type": "string"
        },
        {
            "name": "amountOrder",
            "baseName": "amountOrder",
            "type": "number"
        },
        {
            "name": "price",
            "baseName": "price",
            "type": "number"
        },
        {
            "name": "side",
            "baseName": "side",
            "type": "number"
        },
        {
            "name": "orderType",
            "baseName": "orderType",
            "type": "string"
        },
        {
            "name": "timeInForce",
            "baseName": "timeInForce",
            "type": "string"
        },
        {
            "name": "expireTime",
            "baseName": "expireTime",
            "type": "string"
        },
        {
            "name": "execInst",
            "baseName": "execInst",
            "type": "Array<string>"
        },
        {
            "name": "clientOrderIdFormatExchange",
            "baseName": "clientOrderIdFormatExchange",
            "type": "string"
        },
        {
            "name": "exchangeOrderId",
            "baseName": "exchangeOrderId",
            "type": "string"
        },
        {
            "name": "amountOpen",
            "baseName": "amountOpen",
            "type": "number"
        },
        {
            "name": "amountFilled",
            "baseName": "amountFilled",
            "type": "number"
        },
        {
            "name": "avgPx",
            "baseName": "avgPx",
            "type": "number"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "string"
        },
        {
            "name": "statusHistoryStatus",
            "baseName": "statusHistoryStatus",
            "type": "Array<string>"
        },
        {
            "name": "statusHistoryTime",
            "baseName": "statusHistoryTime",
            "type": "Array<string>"
        },
        {
            "name": "errorMessageResult",
            "baseName": "errorMessageResult",
            "type": "string"
        },
        {
            "name": "errorMessageReason",
            "baseName": "errorMessageReason",
            "type": "string"
        },
        {
            "name": "errorMessageMessage",
            "baseName": "errorMessageMessage",
            "type": "string"
        },
        {
            "name": "fillsTime",
            "baseName": "fillsTime",
            "type": "Array<string>"
        },
        {
            "name": "fillsPrice",
            "baseName": "fillsPrice",
            "type": "Array<number>"
        },
        {
            "name": "fillsAmount",
            "baseName": "fillsAmount",
            "type": "Array<number>"
        },
        {
            "name": "createdTime",
            "baseName": "createdTime",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return OrderHistory.attributeTypeMap;
    }
}
