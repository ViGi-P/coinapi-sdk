@isTest
private class OASMarketDataMetadataIconTest {
    @isTest
    private static void equalsSameInstance() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = marketDataMetadataIcon1;
        OASMarketDataMetadataIcon marketDataMetadataIcon3 = new OASMarketDataMetadataIcon();
        OASMarketDataMetadataIcon marketDataMetadataIcon4 = marketDataMetadataIcon3;

        System.assert(marketDataMetadataIcon1.equals(marketDataMetadataIcon2));
        System.assert(marketDataMetadataIcon2.equals(marketDataMetadataIcon1));
        System.assert(marketDataMetadataIcon1.equals(marketDataMetadataIcon1));
        System.assert(marketDataMetadataIcon3.equals(marketDataMetadataIcon4));
        System.assert(marketDataMetadataIcon4.equals(marketDataMetadataIcon3));
        System.assert(marketDataMetadataIcon3.equals(marketDataMetadataIcon3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon3 = new OASMarketDataMetadataIcon();
        OASMarketDataMetadataIcon marketDataMetadataIcon4 = new OASMarketDataMetadataIcon();

        System.assert(marketDataMetadataIcon1.equals(marketDataMetadataIcon2));
        System.assert(marketDataMetadataIcon2.equals(marketDataMetadataIcon1));
        System.assert(marketDataMetadataIcon3.equals(marketDataMetadataIcon4));
        System.assert(marketDataMetadataIcon4.equals(marketDataMetadataIcon3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = new OASMarketDataMetadataIcon();

        System.assertEquals(false, marketDataMetadataIcon1.equals('foo'));
        System.assertEquals(false, marketDataMetadataIcon2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = new OASMarketDataMetadataIcon();
        OASMarketDataMetadataIcon marketDataMetadataIcon3;

        System.assertEquals(false, marketDataMetadataIcon1.equals(marketDataMetadataIcon3));
        System.assertEquals(false, marketDataMetadataIcon2.equals(marketDataMetadataIcon3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = new OASMarketDataMetadataIcon();

        System.assertEquals(marketDataMetadataIcon1.hashCode(), marketDataMetadataIcon1.hashCode());
        System.assertEquals(marketDataMetadataIcon2.hashCode(), marketDataMetadataIcon2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMarketDataMetadataIcon marketDataMetadataIcon1 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon2 = OASMarketDataMetadataIcon.getExample();
        OASMarketDataMetadataIcon marketDataMetadataIcon3 = new OASMarketDataMetadataIcon();
        OASMarketDataMetadataIcon marketDataMetadataIcon4 = new OASMarketDataMetadataIcon();

        System.assert(marketDataMetadataIcon1.equals(marketDataMetadataIcon2));
        System.assert(marketDataMetadataIcon3.equals(marketDataMetadataIcon4));
        System.assertEquals(marketDataMetadataIcon1.hashCode(), marketDataMetadataIcon2.hashCode());
        System.assertEquals(marketDataMetadataIcon3.hashCode(), marketDataMetadataIcon4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMarketDataMetadataIcon marketDataMetadataIcon = new OASMarketDataMetadataIcon();
        Map<String, String> x-property-mappings = marketDataMetadataIcon.getx-property-mappings();
        System.assertEquals('exchangeId', x-property-mappings.get('exchange_id'));
        System.assertEquals('assetId', x-property-mappings.get('asset_id'));
    }
}
