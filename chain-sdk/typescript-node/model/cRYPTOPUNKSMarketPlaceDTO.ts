/**
 * On Chain Dapps - REST API
 *  This section will provide necessary information about the `OnChain API` protocol.  <br/><br/> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.                             
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

export class CRYPTOPUNKSMarketPlaceDTO {
    'entryTime'?: Date;
    'recvTime'?: Date;
    /**
    * Number of block in which entity was recorded.
    */
    'blockNumber'?: number;
    /**
    * 
    */
    'vid'?: number;
    /**
    * 
    */
    'blockRange'?: string | null;
    /**
    * 
    */
    'id'?: string | null;
    /**
    * 
    */
    'name'?: string | null;
    /**
    * 
    */
    'slug'?: string | null;
    /**
    * 
    */
    'schemaVersion'?: string | null;
    /**
    * 
    */
    'subgraphVersion'?: string | null;
    /**
    * 
    */
    'methodologyVersion'?: string | null;
    /**
    * 
    */
    'collectionCount'?: number;
    /**
    * 
    */
    'tradeCount'?: number;
    /**
    * 
    */
    'cumulativeTradeVolumeEth'?: string | null;
    /**
    * 
    */
    'marketplaceRevenueEth'?: string | null;
    /**
    * 
    */
    'creatorRevenueEth'?: string | null;
    /**
    * 
    */
    'totalRevenueEth'?: string | null;
    /**
    * 
    */
    'cumulativeUniqueTraders'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "entryTime",
            "baseName": "entry_time",
            "type": "Date"
        },
        {
            "name": "recvTime",
            "baseName": "recv_time",
            "type": "Date"
        },
        {
            "name": "blockNumber",
            "baseName": "block_number",
            "type": "number"
        },
        {
            "name": "vid",
            "baseName": "vid",
            "type": "number"
        },
        {
            "name": "blockRange",
            "baseName": "block_range",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "slug",
            "baseName": "slug",
            "type": "string"
        },
        {
            "name": "schemaVersion",
            "baseName": "schema_version",
            "type": "string"
        },
        {
            "name": "subgraphVersion",
            "baseName": "subgraph_version",
            "type": "string"
        },
        {
            "name": "methodologyVersion",
            "baseName": "methodology_version",
            "type": "string"
        },
        {
            "name": "collectionCount",
            "baseName": "collection_count",
            "type": "number"
        },
        {
            "name": "tradeCount",
            "baseName": "trade_count",
            "type": "number"
        },
        {
            "name": "cumulativeTradeVolumeEth",
            "baseName": "cumulative_trade_volume_eth",
            "type": "string"
        },
        {
            "name": "marketplaceRevenueEth",
            "baseName": "marketplace_revenue_eth",
            "type": "string"
        },
        {
            "name": "creatorRevenueEth",
            "baseName": "creator_revenue_eth",
            "type": "string"
        },
        {
            "name": "totalRevenueEth",
            "baseName": "total_revenue_eth",
            "type": "string"
        },
        {
            "name": "cumulativeUniqueTraders",
            "baseName": "cumulative_unique_traders",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return CRYPTOPUNKSMarketPlaceDTO.attributeTypeMap;
    }
}
