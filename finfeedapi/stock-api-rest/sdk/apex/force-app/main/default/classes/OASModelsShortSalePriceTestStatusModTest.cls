@isTest
private class OASModelsShortSalePriceTestStatusModTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = modelsShortSalePriceTestStatusModel1;
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel3 = new OASModelsShortSalePriceTestStatusMod();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel4 = modelsShortSalePriceTestStatusModel3;

        System.assert(modelsShortSalePriceTestStatusModel1.equals(modelsShortSalePriceTestStatusModel2));
        System.assert(modelsShortSalePriceTestStatusModel2.equals(modelsShortSalePriceTestStatusModel1));
        System.assert(modelsShortSalePriceTestStatusModel1.equals(modelsShortSalePriceTestStatusModel1));
        System.assert(modelsShortSalePriceTestStatusModel3.equals(modelsShortSalePriceTestStatusModel4));
        System.assert(modelsShortSalePriceTestStatusModel4.equals(modelsShortSalePriceTestStatusModel3));
        System.assert(modelsShortSalePriceTestStatusModel3.equals(modelsShortSalePriceTestStatusModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel3 = new OASModelsShortSalePriceTestStatusMod();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel4 = new OASModelsShortSalePriceTestStatusMod();

        System.assert(modelsShortSalePriceTestStatusModel1.equals(modelsShortSalePriceTestStatusModel2));
        System.assert(modelsShortSalePriceTestStatusModel2.equals(modelsShortSalePriceTestStatusModel1));
        System.assert(modelsShortSalePriceTestStatusModel3.equals(modelsShortSalePriceTestStatusModel4));
        System.assert(modelsShortSalePriceTestStatusModel4.equals(modelsShortSalePriceTestStatusModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = new OASModelsShortSalePriceTestStatusMod();

        System.assertEquals(false, modelsShortSalePriceTestStatusModel1.equals('foo'));
        System.assertEquals(false, modelsShortSalePriceTestStatusModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = new OASModelsShortSalePriceTestStatusMod();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel3;

        System.assertEquals(false, modelsShortSalePriceTestStatusModel1.equals(modelsShortSalePriceTestStatusModel3));
        System.assertEquals(false, modelsShortSalePriceTestStatusModel2.equals(modelsShortSalePriceTestStatusModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = new OASModelsShortSalePriceTestStatusMod();

        System.assertEquals(modelsShortSalePriceTestStatusModel1.hashCode(), modelsShortSalePriceTestStatusModel1.hashCode());
        System.assertEquals(modelsShortSalePriceTestStatusModel2.hashCode(), modelsShortSalePriceTestStatusModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel1 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel2 = OASModelsShortSalePriceTestStatusMod.getExample();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel3 = new OASModelsShortSalePriceTestStatusMod();
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel4 = new OASModelsShortSalePriceTestStatusMod();

        System.assert(modelsShortSalePriceTestStatusModel1.equals(modelsShortSalePriceTestStatusModel2));
        System.assert(modelsShortSalePriceTestStatusModel3.equals(modelsShortSalePriceTestStatusModel4));
        System.assertEquals(modelsShortSalePriceTestStatusModel1.hashCode(), modelsShortSalePriceTestStatusModel2.hashCode());
        System.assertEquals(modelsShortSalePriceTestStatusModel3.hashCode(), modelsShortSalePriceTestStatusModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsShortSalePriceTestStatusMod modelsShortSalePriceTestStatusModel = new OASModelsShortSalePriceTestStatusMod();
        Map<String, String> x-property-mappings = modelsShortSalePriceTestStatusModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('shortSalePriceTestStatus', x-property-mappings.get('short_sale_price_test_status'));
        System.assertEquals('shortSalePriceTestStatusCode', x-property-mappings.get('short_sale_price_test_status_code'));
        System.assertEquals('shortSalePriceTestStatusText', x-property-mappings.get('short_sale_price_test_status_text'));
        System.assertEquals('isShortSalePriceTestNotInEffect', x-property-mappings.get('is_short_sale_price_test_not_in_effect'));
        System.assertEquals('isShortSalePriceTestInEffect', x-property-mappings.get('is_short_sale_price_test_in_effect'));
        System.assertEquals('detailCode', x-property-mappings.get('detail_code'));
        System.assertEquals('detailText', x-property-mappings.get('detail_text'));
        System.assertEquals('isDetailNoPriceTest', x-property-mappings.get('is_detail_no_price_test'));
        System.assertEquals('isDetailActivated', x-property-mappings.get('is_detail_activated'));
        System.assertEquals('isDetailContinued', x-property-mappings.get('is_detail_continued'));
        System.assertEquals('isDetailDeactivated', x-property-mappings.get('is_detail_deactivated'));
        System.assertEquals('isDetailNotAvailable', x-property-mappings.get('is_detail_not_available'));
    }
}
