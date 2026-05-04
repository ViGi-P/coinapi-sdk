@isTest
private class OASIEXTradeTradeModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = ieXTradeTradeModel1;
        OASIEXTradeTradeModel ieXTradeTradeModel3 = new OASIEXTradeTradeModel();
        OASIEXTradeTradeModel ieXTradeTradeModel4 = ieXTradeTradeModel3;

        System.assert(ieXTradeTradeModel1.equals(ieXTradeTradeModel2));
        System.assert(ieXTradeTradeModel2.equals(ieXTradeTradeModel1));
        System.assert(ieXTradeTradeModel1.equals(ieXTradeTradeModel1));
        System.assert(ieXTradeTradeModel3.equals(ieXTradeTradeModel4));
        System.assert(ieXTradeTradeModel4.equals(ieXTradeTradeModel3));
        System.assert(ieXTradeTradeModel3.equals(ieXTradeTradeModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel3 = new OASIEXTradeTradeModel();
        OASIEXTradeTradeModel ieXTradeTradeModel4 = new OASIEXTradeTradeModel();

        System.assert(ieXTradeTradeModel1.equals(ieXTradeTradeModel2));
        System.assert(ieXTradeTradeModel2.equals(ieXTradeTradeModel1));
        System.assert(ieXTradeTradeModel3.equals(ieXTradeTradeModel4));
        System.assert(ieXTradeTradeModel4.equals(ieXTradeTradeModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = new OASIEXTradeTradeModel();

        System.assertEquals(false, ieXTradeTradeModel1.equals('foo'));
        System.assertEquals(false, ieXTradeTradeModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = new OASIEXTradeTradeModel();
        OASIEXTradeTradeModel ieXTradeTradeModel3;

        System.assertEquals(false, ieXTradeTradeModel1.equals(ieXTradeTradeModel3));
        System.assertEquals(false, ieXTradeTradeModel2.equals(ieXTradeTradeModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = new OASIEXTradeTradeModel();

        System.assertEquals(ieXTradeTradeModel1.hashCode(), ieXTradeTradeModel1.hashCode());
        System.assertEquals(ieXTradeTradeModel2.hashCode(), ieXTradeTradeModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIEXTradeTradeModel ieXTradeTradeModel1 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel2 = OASIEXTradeTradeModel.getExample();
        OASIEXTradeTradeModel ieXTradeTradeModel3 = new OASIEXTradeTradeModel();
        OASIEXTradeTradeModel ieXTradeTradeModel4 = new OASIEXTradeTradeModel();

        System.assert(ieXTradeTradeModel1.equals(ieXTradeTradeModel2));
        System.assert(ieXTradeTradeModel3.equals(ieXTradeTradeModel4));
        System.assertEquals(ieXTradeTradeModel1.hashCode(), ieXTradeTradeModel2.hashCode());
        System.assertEquals(ieXTradeTradeModel3.hashCode(), ieXTradeTradeModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIEXTradeTradeModel ieXTradeTradeModel = new OASIEXTradeTradeModel();
        Map<String, String> x-property-mappings = ieXTradeTradeModel.getx-property-mappings();
        System.assertEquals('isTradeBreak', x-property-mappings.get('is_trade_break'));
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('tradeId', x-property-mappings.get('trade_id'));
        System.assertEquals('isIntermarketSweep', x-property-mappings.get('is_intermarket_sweep'));
        System.assertEquals('isExtendedHoursTrade', x-property-mappings.get('is_extended_hours_trade'));
        System.assertEquals('isOddLotTrade', x-property-mappings.get('is_odd_lot_trade'));
        System.assertEquals('isTradeThroughExempt', x-property-mappings.get('is_trade_through_exempt'));
        System.assertEquals('isSinglePriceCrossTrade', x-property-mappings.get('is_single_price_cross_trade'));
    }
}
