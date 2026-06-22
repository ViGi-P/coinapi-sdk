@isTest
private class OASV1ExchangeRatesChainNetworkAddresTest {
    @isTest
    private static void equalsSameInstance() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = v1ExchangeRatesChainNetworkAddress1;
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress3 = new OASV1ExchangeRatesChainNetworkAddres();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress4 = v1ExchangeRatesChainNetworkAddress3;

        System.assert(v1ExchangeRatesChainNetworkAddress1.equals(v1ExchangeRatesChainNetworkAddress2));
        System.assert(v1ExchangeRatesChainNetworkAddress2.equals(v1ExchangeRatesChainNetworkAddress1));
        System.assert(v1ExchangeRatesChainNetworkAddress1.equals(v1ExchangeRatesChainNetworkAddress1));
        System.assert(v1ExchangeRatesChainNetworkAddress3.equals(v1ExchangeRatesChainNetworkAddress4));
        System.assert(v1ExchangeRatesChainNetworkAddress4.equals(v1ExchangeRatesChainNetworkAddress3));
        System.assert(v1ExchangeRatesChainNetworkAddress3.equals(v1ExchangeRatesChainNetworkAddress3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress3 = new OASV1ExchangeRatesChainNetworkAddres();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress4 = new OASV1ExchangeRatesChainNetworkAddres();

        System.assert(v1ExchangeRatesChainNetworkAddress1.equals(v1ExchangeRatesChainNetworkAddress2));
        System.assert(v1ExchangeRatesChainNetworkAddress2.equals(v1ExchangeRatesChainNetworkAddress1));
        System.assert(v1ExchangeRatesChainNetworkAddress3.equals(v1ExchangeRatesChainNetworkAddress4));
        System.assert(v1ExchangeRatesChainNetworkAddress4.equals(v1ExchangeRatesChainNetworkAddress3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = new OASV1ExchangeRatesChainNetworkAddres();

        System.assertEquals(false, v1ExchangeRatesChainNetworkAddress1.equals('foo'));
        System.assertEquals(false, v1ExchangeRatesChainNetworkAddress2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = new OASV1ExchangeRatesChainNetworkAddres();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress3;

        System.assertEquals(false, v1ExchangeRatesChainNetworkAddress1.equals(v1ExchangeRatesChainNetworkAddress3));
        System.assertEquals(false, v1ExchangeRatesChainNetworkAddress2.equals(v1ExchangeRatesChainNetworkAddress3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = new OASV1ExchangeRatesChainNetworkAddres();

        System.assertEquals(v1ExchangeRatesChainNetworkAddress1.hashCode(), v1ExchangeRatesChainNetworkAddress1.hashCode());
        System.assertEquals(v1ExchangeRatesChainNetworkAddress2.hashCode(), v1ExchangeRatesChainNetworkAddress2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress1 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress2 = OASV1ExchangeRatesChainNetworkAddres.getExample();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress3 = new OASV1ExchangeRatesChainNetworkAddres();
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress4 = new OASV1ExchangeRatesChainNetworkAddres();

        System.assert(v1ExchangeRatesChainNetworkAddress1.equals(v1ExchangeRatesChainNetworkAddress2));
        System.assert(v1ExchangeRatesChainNetworkAddress3.equals(v1ExchangeRatesChainNetworkAddress4));
        System.assertEquals(v1ExchangeRatesChainNetworkAddress1.hashCode(), v1ExchangeRatesChainNetworkAddress2.hashCode());
        System.assertEquals(v1ExchangeRatesChainNetworkAddress3.hashCode(), v1ExchangeRatesChainNetworkAddress4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASV1ExchangeRatesChainNetworkAddres v1ExchangeRatesChainNetworkAddress = new OASV1ExchangeRatesChainNetworkAddres();
        Map<String, String> x-property-mappings = v1ExchangeRatesChainNetworkAddress.getx-property-mappings();
        System.assertEquals('chainId', x-property-mappings.get('chain_id'));
        System.assertEquals('networkId', x-property-mappings.get('network_id'));
    }
}
