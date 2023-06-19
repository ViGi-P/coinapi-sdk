/*
 * On Chain Dapps - REST API
 * \nThis section will provide necessary information about the `OnChain API` protocol. \n<br/><br/>\nLorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.        \n                    
 *
 * The version of the OpenAPI document: v1
 * Contact: support@coinapi.io
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASCRYPTOPUNKSCollectionDailySnapsho
 */
public class OASCRYPTOPUNKSCollectionDailySnapsho implements OAS.MappedProperties {
    /**
     * Get entryTime
     * @return entryTime
     */
    public Datetime entryTime { get; set; }

    /**
     * Get recvTime
     * @return recvTime
     */
    public Datetime recvTime { get; set; }

    /**
     * 
     * @return blockNumber
     */
    public String blockNumber { get; set; }

    /**
     * 
     * @return vid
     */
    public Long vid { get; set; }

    /**
     * 
     * @return blockRange
     */
    public String blockRange { get; set; }

    /**
     * 
     * @return id
     */
    public String id { get; set; }

    /**
     * 
     * @return collection
     */
    public String collection { get; set; }

    /**
     * 
     * @return timestamp
     */
    public String timestamp { get; set; }

    /**
     * 
     * @return royaltyFee
     */
    public String royaltyFee { get; set; }

    /**
     * 
     * @return dailyMinSalePrice
     */
    public String dailyMinSalePrice { get; set; }

    /**
     * 
     * @return dailyMaxSalePrice
     */
    public String dailyMaxSalePrice { get; set; }

    /**
     * 
     * @return cumulativeTradeVolumeEth
     */
    public String cumulativeTradeVolumeEth { get; set; }

    /**
     * 
     * @return dailyTradeVolumeEth
     */
    public String dailyTradeVolumeEth { get; set; }

    /**
     * 
     * @return marketplaceRevenueEth
     */
    public String marketplaceRevenueEth { get; set; }

    /**
     * 
     * @return creatorRevenueEth
     */
    public String creatorRevenueEth { get; set; }

    /**
     * 
     * @return totalRevenueEth
     */
    public String totalRevenueEth { get; set; }

    /**
     * 
     * @return tradeCount
     */
    public Integer tradeCount { get; set; }

    /**
     * 
     * @return dailyTradedItemCount
     */
    public Integer dailyTradedItemCount { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'entry_time' => 'entryTime',
        'recv_time' => 'recvTime',
        'block_number' => 'blockNumber',
        'block_range' => 'blockRange',
        'royalty_fee' => 'royaltyFee',
        'daily_min_sale_price' => 'dailyMinSalePrice',
        'daily_max_sale_price' => 'dailyMaxSalePrice',
        'cumulative_trade_volume_eth' => 'cumulativeTradeVolumeEth',
        'daily_trade_volume_eth' => 'dailyTradeVolumeEth',
        'marketplace_revenue_eth' => 'marketplaceRevenueEth',
        'creator_revenue_eth' => 'creatorRevenueEth',
        'total_revenue_eth' => 'totalRevenueEth',
        'trade_count' => 'tradeCount',
        'daily_traded_item_count' => 'dailyTradedItemCount'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASCRYPTOPUNKSCollectionDailySnapsho getExample() {
        OASCRYPTOPUNKSCollectionDailySnapsho crYPTOPUNKSCollectionDailySnapshotDTO = new OASCRYPTOPUNKSCollectionDailySnapsho();
          crYPTOPUNKSCollectionDailySnapshotDTO.entryTime = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          crYPTOPUNKSCollectionDailySnapshotDTO.recvTime = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          crYPTOPUNKSCollectionDailySnapshotDTO.blockNumber = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.vid = 123456789L;
          crYPTOPUNKSCollectionDailySnapshotDTO.blockRange = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.id = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.collection = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.timestamp = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.royaltyFee = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.dailyMinSalePrice = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.dailyMaxSalePrice = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.cumulativeTradeVolumeEth = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.dailyTradeVolumeEth = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.marketplaceRevenueEth = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.creatorRevenueEth = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.totalRevenueEth = '';
          crYPTOPUNKSCollectionDailySnapshotDTO.tradeCount = 0;
          crYPTOPUNKSCollectionDailySnapshotDTO.dailyTradedItemCount = 0;
        return crYPTOPUNKSCollectionDailySnapshotDTO;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASCRYPTOPUNKSCollectionDailySnapsho) {           
            OASCRYPTOPUNKSCollectionDailySnapsho crYPTOPUNKSCollectionDailySnapshotDTO = (OASCRYPTOPUNKSCollectionDailySnapsho) obj;
            return this.entryTime == crYPTOPUNKSCollectionDailySnapshotDTO.entryTime
                && this.recvTime == crYPTOPUNKSCollectionDailySnapshotDTO.recvTime
                && this.blockNumber == crYPTOPUNKSCollectionDailySnapshotDTO.blockNumber
                && this.vid == crYPTOPUNKSCollectionDailySnapshotDTO.vid
                && this.blockRange == crYPTOPUNKSCollectionDailySnapshotDTO.blockRange
                && this.id == crYPTOPUNKSCollectionDailySnapshotDTO.id
                && this.collection == crYPTOPUNKSCollectionDailySnapshotDTO.collection
                && this.timestamp == crYPTOPUNKSCollectionDailySnapshotDTO.timestamp
                && this.royaltyFee == crYPTOPUNKSCollectionDailySnapshotDTO.royaltyFee
                && this.dailyMinSalePrice == crYPTOPUNKSCollectionDailySnapshotDTO.dailyMinSalePrice
                && this.dailyMaxSalePrice == crYPTOPUNKSCollectionDailySnapshotDTO.dailyMaxSalePrice
                && this.cumulativeTradeVolumeEth == crYPTOPUNKSCollectionDailySnapshotDTO.cumulativeTradeVolumeEth
                && this.dailyTradeVolumeEth == crYPTOPUNKSCollectionDailySnapshotDTO.dailyTradeVolumeEth
                && this.marketplaceRevenueEth == crYPTOPUNKSCollectionDailySnapshotDTO.marketplaceRevenueEth
                && this.creatorRevenueEth == crYPTOPUNKSCollectionDailySnapshotDTO.creatorRevenueEth
                && this.totalRevenueEth == crYPTOPUNKSCollectionDailySnapshotDTO.totalRevenueEth
                && this.tradeCount == crYPTOPUNKSCollectionDailySnapshotDTO.tradeCount
                && this.dailyTradedItemCount == crYPTOPUNKSCollectionDailySnapshotDTO.dailyTradedItemCount;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (entryTime == null ? 0 : System.hashCode(entryTime));
        hashCode = (17 * hashCode) + (recvTime == null ? 0 : System.hashCode(recvTime));
        hashCode = (17 * hashCode) + (blockNumber == null ? 0 : System.hashCode(blockNumber));
        hashCode = (17 * hashCode) + (vid == null ? 0 : System.hashCode(vid));
        hashCode = (17 * hashCode) + (blockRange == null ? 0 : System.hashCode(blockRange));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (collection == null ? 0 : System.hashCode(collection));
        hashCode = (17 * hashCode) + (timestamp == null ? 0 : System.hashCode(timestamp));
        hashCode = (17 * hashCode) + (royaltyFee == null ? 0 : System.hashCode(royaltyFee));
        hashCode = (17 * hashCode) + (dailyMinSalePrice == null ? 0 : System.hashCode(dailyMinSalePrice));
        hashCode = (17 * hashCode) + (dailyMaxSalePrice == null ? 0 : System.hashCode(dailyMaxSalePrice));
        hashCode = (17 * hashCode) + (cumulativeTradeVolumeEth == null ? 0 : System.hashCode(cumulativeTradeVolumeEth));
        hashCode = (17 * hashCode) + (dailyTradeVolumeEth == null ? 0 : System.hashCode(dailyTradeVolumeEth));
        hashCode = (17 * hashCode) + (marketplaceRevenueEth == null ? 0 : System.hashCode(marketplaceRevenueEth));
        hashCode = (17 * hashCode) + (creatorRevenueEth == null ? 0 : System.hashCode(creatorRevenueEth));
        hashCode = (17 * hashCode) + (totalRevenueEth == null ? 0 : System.hashCode(totalRevenueEth));
        hashCode = (17 * hashCode) + (tradeCount == null ? 0 : System.hashCode(tradeCount));
        hashCode = (17 * hashCode) + (dailyTradedItemCount == null ? 0 : System.hashCode(dailyTradedItemCount));
        return hashCode;
    }
}
