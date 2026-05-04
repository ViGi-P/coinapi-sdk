@isTest
private class OASIEXQuoteUpdateQuoteUpdateModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = ieXQuoteUpdateQuoteUpdateModel1;
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel3 = new OASIEXQuoteUpdateQuoteUpdateModel();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel4 = ieXQuoteUpdateQuoteUpdateModel3;

        System.assert(ieXQuoteUpdateQuoteUpdateModel1.equals(ieXQuoteUpdateQuoteUpdateModel2));
        System.assert(ieXQuoteUpdateQuoteUpdateModel2.equals(ieXQuoteUpdateQuoteUpdateModel1));
        System.assert(ieXQuoteUpdateQuoteUpdateModel1.equals(ieXQuoteUpdateQuoteUpdateModel1));
        System.assert(ieXQuoteUpdateQuoteUpdateModel3.equals(ieXQuoteUpdateQuoteUpdateModel4));
        System.assert(ieXQuoteUpdateQuoteUpdateModel4.equals(ieXQuoteUpdateQuoteUpdateModel3));
        System.assert(ieXQuoteUpdateQuoteUpdateModel3.equals(ieXQuoteUpdateQuoteUpdateModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel3 = new OASIEXQuoteUpdateQuoteUpdateModel();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel4 = new OASIEXQuoteUpdateQuoteUpdateModel();

        System.assert(ieXQuoteUpdateQuoteUpdateModel1.equals(ieXQuoteUpdateQuoteUpdateModel2));
        System.assert(ieXQuoteUpdateQuoteUpdateModel2.equals(ieXQuoteUpdateQuoteUpdateModel1));
        System.assert(ieXQuoteUpdateQuoteUpdateModel3.equals(ieXQuoteUpdateQuoteUpdateModel4));
        System.assert(ieXQuoteUpdateQuoteUpdateModel4.equals(ieXQuoteUpdateQuoteUpdateModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = new OASIEXQuoteUpdateQuoteUpdateModel();

        System.assertEquals(false, ieXQuoteUpdateQuoteUpdateModel1.equals('foo'));
        System.assertEquals(false, ieXQuoteUpdateQuoteUpdateModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = new OASIEXQuoteUpdateQuoteUpdateModel();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel3;

        System.assertEquals(false, ieXQuoteUpdateQuoteUpdateModel1.equals(ieXQuoteUpdateQuoteUpdateModel3));
        System.assertEquals(false, ieXQuoteUpdateQuoteUpdateModel2.equals(ieXQuoteUpdateQuoteUpdateModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = new OASIEXQuoteUpdateQuoteUpdateModel();

        System.assertEquals(ieXQuoteUpdateQuoteUpdateModel1.hashCode(), ieXQuoteUpdateQuoteUpdateModel1.hashCode());
        System.assertEquals(ieXQuoteUpdateQuoteUpdateModel2.hashCode(), ieXQuoteUpdateQuoteUpdateModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel1 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel2 = OASIEXQuoteUpdateQuoteUpdateModel.getExample();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel3 = new OASIEXQuoteUpdateQuoteUpdateModel();
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel4 = new OASIEXQuoteUpdateQuoteUpdateModel();

        System.assert(ieXQuoteUpdateQuoteUpdateModel1.equals(ieXQuoteUpdateQuoteUpdateModel2));
        System.assert(ieXQuoteUpdateQuoteUpdateModel3.equals(ieXQuoteUpdateQuoteUpdateModel4));
        System.assertEquals(ieXQuoteUpdateQuoteUpdateModel1.hashCode(), ieXQuoteUpdateQuoteUpdateModel2.hashCode());
        System.assertEquals(ieXQuoteUpdateQuoteUpdateModel3.hashCode(), ieXQuoteUpdateQuoteUpdateModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIEXQuoteUpdateQuoteUpdateModel ieXQuoteUpdateQuoteUpdateModel = new OASIEXQuoteUpdateQuoteUpdateModel();
        Map<String, String> x-property-mappings = ieXQuoteUpdateQuoteUpdateModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('isSymbolAvailable', x-property-mappings.get('is_symbol_available'));
        System.assertEquals('isPrePostMarketSession', x-property-mappings.get('is_pre_post_market_session'));
        System.assertEquals('askSize', x-property-mappings.get('ask_size'));
        System.assertEquals('askPrice', x-property-mappings.get('ask_price'));
        System.assertEquals('bidPrice', x-property-mappings.get('bid_price'));
        System.assertEquals('bidSize', x-property-mappings.get('bid_size'));
    }
}
