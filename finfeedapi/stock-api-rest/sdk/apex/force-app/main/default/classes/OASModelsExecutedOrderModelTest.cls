@isTest
private class OASModelsExecutedOrderModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = modelsExecutedOrderModel1;
        OASModelsExecutedOrderModel modelsExecutedOrderModel3 = new OASModelsExecutedOrderModel();
        OASModelsExecutedOrderModel modelsExecutedOrderModel4 = modelsExecutedOrderModel3;

        System.assert(modelsExecutedOrderModel1.equals(modelsExecutedOrderModel2));
        System.assert(modelsExecutedOrderModel2.equals(modelsExecutedOrderModel1));
        System.assert(modelsExecutedOrderModel1.equals(modelsExecutedOrderModel1));
        System.assert(modelsExecutedOrderModel3.equals(modelsExecutedOrderModel4));
        System.assert(modelsExecutedOrderModel4.equals(modelsExecutedOrderModel3));
        System.assert(modelsExecutedOrderModel3.equals(modelsExecutedOrderModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel3 = new OASModelsExecutedOrderModel();
        OASModelsExecutedOrderModel modelsExecutedOrderModel4 = new OASModelsExecutedOrderModel();

        System.assert(modelsExecutedOrderModel1.equals(modelsExecutedOrderModel2));
        System.assert(modelsExecutedOrderModel2.equals(modelsExecutedOrderModel1));
        System.assert(modelsExecutedOrderModel3.equals(modelsExecutedOrderModel4));
        System.assert(modelsExecutedOrderModel4.equals(modelsExecutedOrderModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = new OASModelsExecutedOrderModel();

        System.assertEquals(false, modelsExecutedOrderModel1.equals('foo'));
        System.assertEquals(false, modelsExecutedOrderModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = new OASModelsExecutedOrderModel();
        OASModelsExecutedOrderModel modelsExecutedOrderModel3;

        System.assertEquals(false, modelsExecutedOrderModel1.equals(modelsExecutedOrderModel3));
        System.assertEquals(false, modelsExecutedOrderModel2.equals(modelsExecutedOrderModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = new OASModelsExecutedOrderModel();

        System.assertEquals(modelsExecutedOrderModel1.hashCode(), modelsExecutedOrderModel1.hashCode());
        System.assertEquals(modelsExecutedOrderModel2.hashCode(), modelsExecutedOrderModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel1 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel2 = OASModelsExecutedOrderModel.getExample();
        OASModelsExecutedOrderModel modelsExecutedOrderModel3 = new OASModelsExecutedOrderModel();
        OASModelsExecutedOrderModel modelsExecutedOrderModel4 = new OASModelsExecutedOrderModel();

        System.assert(modelsExecutedOrderModel1.equals(modelsExecutedOrderModel2));
        System.assert(modelsExecutedOrderModel3.equals(modelsExecutedOrderModel4));
        System.assertEquals(modelsExecutedOrderModel1.hashCode(), modelsExecutedOrderModel2.hashCode());
        System.assertEquals(modelsExecutedOrderModel3.hashCode(), modelsExecutedOrderModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsExecutedOrderModel modelsExecutedOrderModel = new OASModelsExecutedOrderModel();
        Map<String, String> x-property-mappings = modelsExecutedOrderModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('orderIdReference', x-property-mappings.get('order_id_reference'));
        System.assertEquals('saleConditionFlags', x-property-mappings.get('sale_condition_flags'));
        System.assertEquals('isIntermarketSweep', x-property-mappings.get('is_intermarket_sweep'));
        System.assertEquals('isExtendedHoursTrade', x-property-mappings.get('is_extended_hours_trade'));
        System.assertEquals('isOddLotTrade', x-property-mappings.get('is_odd_lot_trade'));
        System.assertEquals('isTradeThroughExempt', x-property-mappings.get('is_trade_through_exempt'));
        System.assertEquals('isSinglePriceCrossTrade', x-property-mappings.get('is_single_price_cross_trade'));
        System.assertEquals('tradeId', x-property-mappings.get('trade_id'));
    }
}
