@isTest
private class OASMarketDataMetadataExchangeTest {
    @isTest
    private static void equalsSameInstance() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = marketDataMetadataExchange1;
        OASMarketDataMetadataExchange marketDataMetadataExchange3 = new OASMarketDataMetadataExchange();
        OASMarketDataMetadataExchange marketDataMetadataExchange4 = marketDataMetadataExchange3;

        System.assert(marketDataMetadataExchange1.equals(marketDataMetadataExchange2));
        System.assert(marketDataMetadataExchange2.equals(marketDataMetadataExchange1));
        System.assert(marketDataMetadataExchange1.equals(marketDataMetadataExchange1));
        System.assert(marketDataMetadataExchange3.equals(marketDataMetadataExchange4));
        System.assert(marketDataMetadataExchange4.equals(marketDataMetadataExchange3));
        System.assert(marketDataMetadataExchange3.equals(marketDataMetadataExchange3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange3 = new OASMarketDataMetadataExchange();
        OASMarketDataMetadataExchange marketDataMetadataExchange4 = new OASMarketDataMetadataExchange();

        System.assert(marketDataMetadataExchange1.equals(marketDataMetadataExchange2));
        System.assert(marketDataMetadataExchange2.equals(marketDataMetadataExchange1));
        System.assert(marketDataMetadataExchange3.equals(marketDataMetadataExchange4));
        System.assert(marketDataMetadataExchange4.equals(marketDataMetadataExchange3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = new OASMarketDataMetadataExchange();

        System.assertEquals(false, marketDataMetadataExchange1.equals('foo'));
        System.assertEquals(false, marketDataMetadataExchange2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = new OASMarketDataMetadataExchange();
        OASMarketDataMetadataExchange marketDataMetadataExchange3;

        System.assertEquals(false, marketDataMetadataExchange1.equals(marketDataMetadataExchange3));
        System.assertEquals(false, marketDataMetadataExchange2.equals(marketDataMetadataExchange3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = new OASMarketDataMetadataExchange();

        System.assertEquals(marketDataMetadataExchange1.hashCode(), marketDataMetadataExchange1.hashCode());
        System.assertEquals(marketDataMetadataExchange2.hashCode(), marketDataMetadataExchange2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMarketDataMetadataExchange marketDataMetadataExchange1 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange2 = OASMarketDataMetadataExchange.getExample();
        OASMarketDataMetadataExchange marketDataMetadataExchange3 = new OASMarketDataMetadataExchange();
        OASMarketDataMetadataExchange marketDataMetadataExchange4 = new OASMarketDataMetadataExchange();

        System.assert(marketDataMetadataExchange1.equals(marketDataMetadataExchange2));
        System.assert(marketDataMetadataExchange3.equals(marketDataMetadataExchange4));
        System.assertEquals(marketDataMetadataExchange1.hashCode(), marketDataMetadataExchange2.hashCode());
        System.assertEquals(marketDataMetadataExchange3.hashCode(), marketDataMetadataExchange4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMarketDataMetadataExchange marketDataMetadataExchange = new OASMarketDataMetadataExchange();
        Map<String, String> x-property-mappings = marketDataMetadataExchange.getx-property-mappings();
        System.assertEquals('exchangeId', x-property-mappings.get('exchange_id'));
        System.assertEquals('dataStart', x-property-mappings.get('data_start'));
        System.assertEquals('dataEnd', x-property-mappings.get('data_end'));
        System.assertEquals('dataQuoteStart', x-property-mappings.get('data_quote_start'));
        System.assertEquals('dataQuoteEnd', x-property-mappings.get('data_quote_end'));
        System.assertEquals('dataOrderbookStart', x-property-mappings.get('data_orderbook_start'));
        System.assertEquals('dataOrderbookEnd', x-property-mappings.get('data_orderbook_end'));
        System.assertEquals('dataTradeStart', x-property-mappings.get('data_trade_start'));
        System.assertEquals('dataTradeEnd', x-property-mappings.get('data_trade_end'));
        System.assertEquals('dataTradeCount', x-property-mappings.get('data_trade_count'));
        System.assertEquals('dataSymbolsCount', x-property-mappings.get('data_symbols_count'));
        System.assertEquals('volume1hrsUsd', x-property-mappings.get('volume_1hrs_usd'));
        System.assertEquals('volume1dayUsd', x-property-mappings.get('volume_1day_usd'));
        System.assertEquals('volume1mthUsd', x-property-mappings.get('volume_1mth_usd'));
        System.assertEquals('metricId', x-property-mappings.get('metric_id'));
        System.assertEquals('integrationStatus', x-property-mappings.get('integration_status'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMarketDataMetadataExchange marketDataMetadataExchange = new OASMarketDataMetadataExchange();
        System.assertEquals(new List<String>(), marketDataMetadataExchange.metricId);
        System.assertEquals(new List<OASMarketDataMetadataIcon>(), marketDataMetadataExchange.icons);
        System.assertEquals(null, marketDataMetadataExchange.exchangeId);
        System.assertEquals(null, marketDataMetadataExchange.website);
        System.assertEquals(null, marketDataMetadataExchange.name);
        System.assertEquals(null, marketDataMetadataExchange.dataStart);
        System.assertEquals(null, marketDataMetadataExchange.dataEnd);
        System.assertEquals(null, marketDataMetadataExchange.dataQuoteStart);
        System.assertEquals(null, marketDataMetadataExchange.dataQuoteEnd);
        System.assertEquals(null, marketDataMetadataExchange.dataOrderbookStart);
        System.assertEquals(null, marketDataMetadataExchange.dataOrderbookEnd);
        System.assertEquals(null, marketDataMetadataExchange.dataTradeStart);
        System.assertEquals(null, marketDataMetadataExchange.dataTradeEnd);
        System.assertEquals(null, marketDataMetadataExchange.dataTradeCount);
        System.assertEquals(null, marketDataMetadataExchange.dataSymbolsCount);
        System.assertEquals(null, marketDataMetadataExchange.volume1hrsUsd);
        System.assertEquals(null, marketDataMetadataExchange.volume1dayUsd);
        System.assertEquals(null, marketDataMetadataExchange.volume1mthUsd);
        System.assertEquals(null, marketDataMetadataExchange.rank);
        System.assertEquals(null, marketDataMetadataExchange.integrationStatus);
    }
}
