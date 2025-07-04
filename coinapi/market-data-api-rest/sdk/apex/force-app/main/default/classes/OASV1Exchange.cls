/*
 * CoinAPI Market Data REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * Represents an exchange.
 */
public class OASV1Exchange implements OAS.MappedProperties {
    /**
     * Gets or sets the exchange ID.
     * @return exchangeId
     */
    public String exchangeId { get; set; }

    /**
     * Gets or sets the website URL of the exchange.
     * @return website
     */
    public String website { get; set; }

    /**
     * Gets or sets the name of the exchange.
     * @return name
     */
    public String name { get; set; }

    /**
     * Get dataStart
     * @return dataStart
     */
    public String dataStart { get; private set; }

    /**
     * Get dataEnd
     * @return dataEnd
     */
    public String dataEnd { get; private set; }

    /**
     * Gets or sets the start date of quote data.
     * @return dataQuoteStart
     */
    public Datetime dataQuoteStart { get; set; }

    /**
     * Gets or sets the end date of quote data.
     * @return dataQuoteEnd
     */
    public Datetime dataQuoteEnd { get; set; }

    /**
     * Gets or sets the start date of order book data.
     * @return dataOrderbookStart
     */
    public Datetime dataOrderbookStart { get; set; }

    /**
     * Gets or sets the end date of order book data.
     * @return dataOrderbookEnd
     */
    public Datetime dataOrderbookEnd { get; set; }

    /**
     * Gets or sets the start date of trade data.
     * @return dataTradeStart
     */
    public Datetime dataTradeStart { get; set; }

    /**
     * Gets or sets the end date of trade data.
     * @return dataTradeEnd
     */
    public Datetime dataTradeEnd { get; set; }

    /**
     * Gets or sets the number of trades.
     * @return dataTradeCount
     */
    public Long dataTradeCount { get; set; }

    /**
     * Gets or sets the number of symbols.
     * @return dataSymbolsCount
     */
    public Long dataSymbolsCount { get; set; }

    /**
     * Gets or sets the USD volume in the last 1 hour.
     * @return volume1hrsUsd
     */
    public Double volume1hrsUsd { get; set; }

    /**
     * Gets or sets the USD volume in the last 1 day.
     * @return volume1dayUsd
     */
    public Double volume1dayUsd { get; set; }

    /**
     * Gets or sets the USD volume in the last 1 month.
     * @return volume1mthUsd
     */
    public Double volume1mthUsd { get; set; }

    /**
     * Gets or sets the list of metric IDs.
     * @return metricId
     */
    public List<String> metricId { get; set; }

    /**
     * Gets or sets the list of icons for the exchange.
     * @return icons
     */
    public List<OASV1Icon> icons { get; private set; }

    /**
     * Rank of the exchange.
     * @return rank
     */
    public Double rank { get; set; }

    /**
     * Status of the integration
     * @return integrationStatus
     */
    public String integrationStatus { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'exchange_id' => 'exchangeId',
        'data_start' => 'dataStart',
        'data_end' => 'dataEnd',
        'data_quote_start' => 'dataQuoteStart',
        'data_quote_end' => 'dataQuoteEnd',
        'data_orderbook_start' => 'dataOrderbookStart',
        'data_orderbook_end' => 'dataOrderbookEnd',
        'data_trade_start' => 'dataTradeStart',
        'data_trade_end' => 'dataTradeEnd',
        'data_trade_count' => 'dataTradeCount',
        'data_symbols_count' => 'dataSymbolsCount',
        'volume_1hrs_usd' => 'volume1hrsUsd',
        'volume_1day_usd' => 'volume1dayUsd',
        'volume_1mth_usd' => 'volume1mthUsd',
        'metric_id' => 'metricId',
        'integration_status' => 'integrationStatus'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASV1Exchange() {
        metricId = new List<String>();
        icons = new List<OASV1Icon>();
    }

    public static OASV1Exchange getExample() {
        OASV1Exchange v1Exchange = new OASV1Exchange();
          v1Exchange.exchangeId = '';
          v1Exchange.website = '';
          v1Exchange.name = '';
          v1Exchange.dataStart = '';
          v1Exchange.dataEnd = '';
          v1Exchange.dataQuoteStart = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataQuoteEnd = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataOrderbookStart = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataOrderbookEnd = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataTradeStart = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataTradeEnd = Datetime.newInstanceGmt(2000, 1, 23, 4, 56, 7);
          v1Exchange.dataTradeCount = 123456789L;
          v1Exchange.dataSymbolsCount = 123456789L;
          v1Exchange.volume1hrsUsd = 1.3579;
          v1Exchange.volume1dayUsd = 1.3579;
          v1Exchange.volume1mthUsd = 1.3579;
          v1Exchange.metricId = new List<String>{''};
          v1Exchange.icons = new List<OASV1Icon>{OASV1Icon.getExample()};
          v1Exchange.rank = 1.3579;
          v1Exchange.integrationStatus = '';
        return v1Exchange;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASV1Exchange) {           
            OASV1Exchange v1Exchange = (OASV1Exchange) obj;
            return this.exchangeId == v1Exchange.exchangeId
                && this.website == v1Exchange.website
                && this.name == v1Exchange.name
                && this.dataStart == v1Exchange.dataStart
                && this.dataEnd == v1Exchange.dataEnd
                && this.dataQuoteStart == v1Exchange.dataQuoteStart
                && this.dataQuoteEnd == v1Exchange.dataQuoteEnd
                && this.dataOrderbookStart == v1Exchange.dataOrderbookStart
                && this.dataOrderbookEnd == v1Exchange.dataOrderbookEnd
                && this.dataTradeStart == v1Exchange.dataTradeStart
                && this.dataTradeEnd == v1Exchange.dataTradeEnd
                && this.dataTradeCount == v1Exchange.dataTradeCount
                && this.dataSymbolsCount == v1Exchange.dataSymbolsCount
                && this.volume1hrsUsd == v1Exchange.volume1hrsUsd
                && this.volume1dayUsd == v1Exchange.volume1dayUsd
                && this.volume1mthUsd == v1Exchange.volume1mthUsd
                && this.metricId == v1Exchange.metricId
                && this.icons == v1Exchange.icons
                && this.rank == v1Exchange.rank
                && this.integrationStatus == v1Exchange.integrationStatus;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (exchangeId == null ? 0 : System.hashCode(exchangeId));
        hashCode = (17 * hashCode) + (website == null ? 0 : System.hashCode(website));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (dataStart == null ? 0 : System.hashCode(dataStart));
        hashCode = (17 * hashCode) + (dataEnd == null ? 0 : System.hashCode(dataEnd));
        hashCode = (17 * hashCode) + (dataQuoteStart == null ? 0 : System.hashCode(dataQuoteStart));
        hashCode = (17 * hashCode) + (dataQuoteEnd == null ? 0 : System.hashCode(dataQuoteEnd));
        hashCode = (17 * hashCode) + (dataOrderbookStart == null ? 0 : System.hashCode(dataOrderbookStart));
        hashCode = (17 * hashCode) + (dataOrderbookEnd == null ? 0 : System.hashCode(dataOrderbookEnd));
        hashCode = (17 * hashCode) + (dataTradeStart == null ? 0 : System.hashCode(dataTradeStart));
        hashCode = (17 * hashCode) + (dataTradeEnd == null ? 0 : System.hashCode(dataTradeEnd));
        hashCode = (17 * hashCode) + (dataTradeCount == null ? 0 : System.hashCode(dataTradeCount));
        hashCode = (17 * hashCode) + (dataSymbolsCount == null ? 0 : System.hashCode(dataSymbolsCount));
        hashCode = (17 * hashCode) + (volume1hrsUsd == null ? 0 : System.hashCode(volume1hrsUsd));
        hashCode = (17 * hashCode) + (volume1dayUsd == null ? 0 : System.hashCode(volume1dayUsd));
        hashCode = (17 * hashCode) + (volume1mthUsd == null ? 0 : System.hashCode(volume1mthUsd));
        hashCode = (17 * hashCode) + (metricId == null ? 0 : System.hashCode(metricId));
        hashCode = (17 * hashCode) + (icons == null ? 0 : System.hashCode(icons));
        hashCode = (17 * hashCode) + (rank == null ? 0 : System.hashCode(rank));
        hashCode = (17 * hashCode) + (integrationStatus == null ? 0 : System.hashCode(integrationStatus));
        return hashCode;
    }
}

