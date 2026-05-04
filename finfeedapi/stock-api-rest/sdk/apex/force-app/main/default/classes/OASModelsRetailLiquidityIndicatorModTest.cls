@isTest
private class OASModelsRetailLiquidityIndicatorModTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = modelsRetailLiquidityIndicatorModel1;
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel3 = new OASModelsRetailLiquidityIndicatorMod();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel4 = modelsRetailLiquidityIndicatorModel3;

        System.assert(modelsRetailLiquidityIndicatorModel1.equals(modelsRetailLiquidityIndicatorModel2));
        System.assert(modelsRetailLiquidityIndicatorModel2.equals(modelsRetailLiquidityIndicatorModel1));
        System.assert(modelsRetailLiquidityIndicatorModel1.equals(modelsRetailLiquidityIndicatorModel1));
        System.assert(modelsRetailLiquidityIndicatorModel3.equals(modelsRetailLiquidityIndicatorModel4));
        System.assert(modelsRetailLiquidityIndicatorModel4.equals(modelsRetailLiquidityIndicatorModel3));
        System.assert(modelsRetailLiquidityIndicatorModel3.equals(modelsRetailLiquidityIndicatorModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel3 = new OASModelsRetailLiquidityIndicatorMod();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel4 = new OASModelsRetailLiquidityIndicatorMod();

        System.assert(modelsRetailLiquidityIndicatorModel1.equals(modelsRetailLiquidityIndicatorModel2));
        System.assert(modelsRetailLiquidityIndicatorModel2.equals(modelsRetailLiquidityIndicatorModel1));
        System.assert(modelsRetailLiquidityIndicatorModel3.equals(modelsRetailLiquidityIndicatorModel4));
        System.assert(modelsRetailLiquidityIndicatorModel4.equals(modelsRetailLiquidityIndicatorModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = new OASModelsRetailLiquidityIndicatorMod();

        System.assertEquals(false, modelsRetailLiquidityIndicatorModel1.equals('foo'));
        System.assertEquals(false, modelsRetailLiquidityIndicatorModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = new OASModelsRetailLiquidityIndicatorMod();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel3;

        System.assertEquals(false, modelsRetailLiquidityIndicatorModel1.equals(modelsRetailLiquidityIndicatorModel3));
        System.assertEquals(false, modelsRetailLiquidityIndicatorModel2.equals(modelsRetailLiquidityIndicatorModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = new OASModelsRetailLiquidityIndicatorMod();

        System.assertEquals(modelsRetailLiquidityIndicatorModel1.hashCode(), modelsRetailLiquidityIndicatorModel1.hashCode());
        System.assertEquals(modelsRetailLiquidityIndicatorModel2.hashCode(), modelsRetailLiquidityIndicatorModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel1 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel2 = OASModelsRetailLiquidityIndicatorMod.getExample();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel3 = new OASModelsRetailLiquidityIndicatorMod();
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel4 = new OASModelsRetailLiquidityIndicatorMod();

        System.assert(modelsRetailLiquidityIndicatorModel1.equals(modelsRetailLiquidityIndicatorModel2));
        System.assert(modelsRetailLiquidityIndicatorModel3.equals(modelsRetailLiquidityIndicatorModel4));
        System.assertEquals(modelsRetailLiquidityIndicatorModel1.hashCode(), modelsRetailLiquidityIndicatorModel2.hashCode());
        System.assertEquals(modelsRetailLiquidityIndicatorModel3.hashCode(), modelsRetailLiquidityIndicatorModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsRetailLiquidityIndicatorMod modelsRetailLiquidityIndicatorModel = new OASModelsRetailLiquidityIndicatorMod();
        Map<String, String> x-property-mappings = modelsRetailLiquidityIndicatorModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('retailLiquidityIndicator', x-property-mappings.get('retail_liquidity_indicator'));
        System.assertEquals('retailLiquidityIndicatorCode', x-property-mappings.get('retail_liquidity_indicator_code'));
        System.assertEquals('retailLiquidityIndicatorText', x-property-mappings.get('retail_liquidity_indicator_text'));
        System.assertEquals('isRetailIndicatorNotApplicable', x-property-mappings.get('is_retail_indicator_not_applicable'));
        System.assertEquals('isRetailIndicatorBuyInterest', x-property-mappings.get('is_retail_indicator_buy_interest'));
        System.assertEquals('isRetailIndicatorSellInterest', x-property-mappings.get('is_retail_indicator_sell_interest'));
        System.assertEquals('isRetailIndicatorBuyAndSellInterest', x-property-mappings.get('is_retail_indicator_buy_and_sell_interest'));
    }
}
