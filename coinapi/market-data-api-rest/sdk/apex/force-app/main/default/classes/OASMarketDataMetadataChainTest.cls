@isTest
private class OASMarketDataMetadataChainTest {
    @isTest
    private static void equalsSameInstance() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = marketDataMetadataChain1;
        OASMarketDataMetadataChain marketDataMetadataChain3 = new OASMarketDataMetadataChain();
        OASMarketDataMetadataChain marketDataMetadataChain4 = marketDataMetadataChain3;

        System.assert(marketDataMetadataChain1.equals(marketDataMetadataChain2));
        System.assert(marketDataMetadataChain2.equals(marketDataMetadataChain1));
        System.assert(marketDataMetadataChain1.equals(marketDataMetadataChain1));
        System.assert(marketDataMetadataChain3.equals(marketDataMetadataChain4));
        System.assert(marketDataMetadataChain4.equals(marketDataMetadataChain3));
        System.assert(marketDataMetadataChain3.equals(marketDataMetadataChain3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain3 = new OASMarketDataMetadataChain();
        OASMarketDataMetadataChain marketDataMetadataChain4 = new OASMarketDataMetadataChain();

        System.assert(marketDataMetadataChain1.equals(marketDataMetadataChain2));
        System.assert(marketDataMetadataChain2.equals(marketDataMetadataChain1));
        System.assert(marketDataMetadataChain3.equals(marketDataMetadataChain4));
        System.assert(marketDataMetadataChain4.equals(marketDataMetadataChain3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = new OASMarketDataMetadataChain();

        System.assertEquals(false, marketDataMetadataChain1.equals('foo'));
        System.assertEquals(false, marketDataMetadataChain2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = new OASMarketDataMetadataChain();
        OASMarketDataMetadataChain marketDataMetadataChain3;

        System.assertEquals(false, marketDataMetadataChain1.equals(marketDataMetadataChain3));
        System.assertEquals(false, marketDataMetadataChain2.equals(marketDataMetadataChain3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = new OASMarketDataMetadataChain();

        System.assertEquals(marketDataMetadataChain1.hashCode(), marketDataMetadataChain1.hashCode());
        System.assertEquals(marketDataMetadataChain2.hashCode(), marketDataMetadataChain2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMarketDataMetadataChain marketDataMetadataChain1 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain2 = OASMarketDataMetadataChain.getExample();
        OASMarketDataMetadataChain marketDataMetadataChain3 = new OASMarketDataMetadataChain();
        OASMarketDataMetadataChain marketDataMetadataChain4 = new OASMarketDataMetadataChain();

        System.assert(marketDataMetadataChain1.equals(marketDataMetadataChain2));
        System.assert(marketDataMetadataChain3.equals(marketDataMetadataChain4));
        System.assertEquals(marketDataMetadataChain1.hashCode(), marketDataMetadataChain2.hashCode());
        System.assertEquals(marketDataMetadataChain3.hashCode(), marketDataMetadataChain4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMarketDataMetadataChain marketDataMetadataChain = new OASMarketDataMetadataChain();
        Map<String, String> x-property-mappings = marketDataMetadataChain.getx-property-mappings();
        System.assertEquals('chainId', x-property-mappings.get('chain_id'));
    }
}
