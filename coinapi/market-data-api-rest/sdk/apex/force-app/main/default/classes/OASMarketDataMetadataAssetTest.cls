@isTest
private class OASMarketDataMetadataAssetTest {
    @isTest
    private static void equalsSameInstance() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = marketDataMetadataAsset1;
        OASMarketDataMetadataAsset marketDataMetadataAsset3 = new OASMarketDataMetadataAsset();
        OASMarketDataMetadataAsset marketDataMetadataAsset4 = marketDataMetadataAsset3;

        System.assert(marketDataMetadataAsset1.equals(marketDataMetadataAsset2));
        System.assert(marketDataMetadataAsset2.equals(marketDataMetadataAsset1));
        System.assert(marketDataMetadataAsset1.equals(marketDataMetadataAsset1));
        System.assert(marketDataMetadataAsset3.equals(marketDataMetadataAsset4));
        System.assert(marketDataMetadataAsset4.equals(marketDataMetadataAsset3));
        System.assert(marketDataMetadataAsset3.equals(marketDataMetadataAsset3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset3 = new OASMarketDataMetadataAsset();
        OASMarketDataMetadataAsset marketDataMetadataAsset4 = new OASMarketDataMetadataAsset();

        System.assert(marketDataMetadataAsset1.equals(marketDataMetadataAsset2));
        System.assert(marketDataMetadataAsset2.equals(marketDataMetadataAsset1));
        System.assert(marketDataMetadataAsset3.equals(marketDataMetadataAsset4));
        System.assert(marketDataMetadataAsset4.equals(marketDataMetadataAsset3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = new OASMarketDataMetadataAsset();

        System.assertEquals(false, marketDataMetadataAsset1.equals('foo'));
        System.assertEquals(false, marketDataMetadataAsset2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = new OASMarketDataMetadataAsset();
        OASMarketDataMetadataAsset marketDataMetadataAsset3;

        System.assertEquals(false, marketDataMetadataAsset1.equals(marketDataMetadataAsset3));
        System.assertEquals(false, marketDataMetadataAsset2.equals(marketDataMetadataAsset3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = new OASMarketDataMetadataAsset();

        System.assertEquals(marketDataMetadataAsset1.hashCode(), marketDataMetadataAsset1.hashCode());
        System.assertEquals(marketDataMetadataAsset2.hashCode(), marketDataMetadataAsset2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMarketDataMetadataAsset marketDataMetadataAsset1 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset2 = OASMarketDataMetadataAsset.getExample();
        OASMarketDataMetadataAsset marketDataMetadataAsset3 = new OASMarketDataMetadataAsset();
        OASMarketDataMetadataAsset marketDataMetadataAsset4 = new OASMarketDataMetadataAsset();

        System.assert(marketDataMetadataAsset1.equals(marketDataMetadataAsset2));
        System.assert(marketDataMetadataAsset3.equals(marketDataMetadataAsset4));
        System.assertEquals(marketDataMetadataAsset1.hashCode(), marketDataMetadataAsset2.hashCode());
        System.assertEquals(marketDataMetadataAsset3.hashCode(), marketDataMetadataAsset4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMarketDataMetadataAsset marketDataMetadataAsset = new OASMarketDataMetadataAsset();
        Map<String, String> x-property-mappings = marketDataMetadataAsset.getx-property-mappings();
        System.assertEquals('assetId', x-property-mappings.get('asset_id'));
        System.assertEquals('typeIsCrypto', x-property-mappings.get('type_is_crypto'));
        System.assertEquals('dataQuoteStart', x-property-mappings.get('data_quote_start'));
        System.assertEquals('dataQuoteEnd', x-property-mappings.get('data_quote_end'));
        System.assertEquals('dataOrderbookStart', x-property-mappings.get('data_orderbook_start'));
        System.assertEquals('dataOrderbookEnd', x-property-mappings.get('data_orderbook_end'));
        System.assertEquals('dataTradeStart', x-property-mappings.get('data_trade_start'));
        System.assertEquals('dataTradeEnd', x-property-mappings.get('data_trade_end'));
        System.assertEquals('dataSymbolsCount', x-property-mappings.get('data_symbols_count'));
        System.assertEquals('volume1hrsUsd', x-property-mappings.get('volume_1hrs_usd'));
        System.assertEquals('volume1dayUsd', x-property-mappings.get('volume_1day_usd'));
        System.assertEquals('volume1mthUsd', x-property-mappings.get('volume_1mth_usd'));
        System.assertEquals('priceUsd', x-property-mappings.get('price_usd'));
        System.assertEquals('idIcon', x-property-mappings.get('id_icon'));
        System.assertEquals('supplyCurrent', x-property-mappings.get('supply_current'));
        System.assertEquals('supplyTotal', x-property-mappings.get('supply_total'));
        System.assertEquals('supplyMax', x-property-mappings.get('supply_max'));
        System.assertEquals('chainAddresses', x-property-mappings.get('chain_addresses'));
        System.assertEquals('assetType', x-property-mappings.get('asset_type'));
        System.assertEquals('dataStart', x-property-mappings.get('data_start'));
        System.assertEquals('dataEnd', x-property-mappings.get('data_end'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMarketDataMetadataAsset marketDataMetadataAsset = new OASMarketDataMetadataAsset();
        System.assertEquals(new List<OASV1ChainNetworkAddress>(), marketDataMetadataAsset.chainAddresses);
        System.assertEquals(null, marketDataMetadataAsset.assetId);
        System.assertEquals(null, marketDataMetadataAsset.name);
        System.assertEquals(null, marketDataMetadataAsset.typeIsCrypto);
        System.assertEquals(null, marketDataMetadataAsset.dataQuoteStart);
        System.assertEquals(null, marketDataMetadataAsset.dataQuoteEnd);
        System.assertEquals(null, marketDataMetadataAsset.dataOrderbookStart);
        System.assertEquals(null, marketDataMetadataAsset.dataOrderbookEnd);
        System.assertEquals(null, marketDataMetadataAsset.dataTradeStart);
        System.assertEquals(null, marketDataMetadataAsset.dataTradeEnd);
        System.assertEquals(null, marketDataMetadataAsset.dataSymbolsCount);
        System.assertEquals(null, marketDataMetadataAsset.volume1hrsUsd);
        System.assertEquals(null, marketDataMetadataAsset.volume1dayUsd);
        System.assertEquals(null, marketDataMetadataAsset.volume1mthUsd);
        System.assertEquals(null, marketDataMetadataAsset.priceUsd);
        System.assertEquals(null, marketDataMetadataAsset.idIcon);
        System.assertEquals(null, marketDataMetadataAsset.supplyCurrent);
        System.assertEquals(null, marketDataMetadataAsset.supplyTotal);
        System.assertEquals(null, marketDataMetadataAsset.supplyMax);
        System.assertEquals(null, marketDataMetadataAsset.assetType);
        System.assertEquals(null, marketDataMetadataAsset.dataStart);
        System.assertEquals(null, marketDataMetadataAsset.dataEnd);
    }
}
