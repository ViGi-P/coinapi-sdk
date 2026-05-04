@isTest
private class OASModelsAddOrderModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = modelsAddOrderModel1;
        OASModelsAddOrderModel modelsAddOrderModel3 = new OASModelsAddOrderModel();
        OASModelsAddOrderModel modelsAddOrderModel4 = modelsAddOrderModel3;

        System.assert(modelsAddOrderModel1.equals(modelsAddOrderModel2));
        System.assert(modelsAddOrderModel2.equals(modelsAddOrderModel1));
        System.assert(modelsAddOrderModel1.equals(modelsAddOrderModel1));
        System.assert(modelsAddOrderModel3.equals(modelsAddOrderModel4));
        System.assert(modelsAddOrderModel4.equals(modelsAddOrderModel3));
        System.assert(modelsAddOrderModel3.equals(modelsAddOrderModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel3 = new OASModelsAddOrderModel();
        OASModelsAddOrderModel modelsAddOrderModel4 = new OASModelsAddOrderModel();

        System.assert(modelsAddOrderModel1.equals(modelsAddOrderModel2));
        System.assert(modelsAddOrderModel2.equals(modelsAddOrderModel1));
        System.assert(modelsAddOrderModel3.equals(modelsAddOrderModel4));
        System.assert(modelsAddOrderModel4.equals(modelsAddOrderModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = new OASModelsAddOrderModel();

        System.assertEquals(false, modelsAddOrderModel1.equals('foo'));
        System.assertEquals(false, modelsAddOrderModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = new OASModelsAddOrderModel();
        OASModelsAddOrderModel modelsAddOrderModel3;

        System.assertEquals(false, modelsAddOrderModel1.equals(modelsAddOrderModel3));
        System.assertEquals(false, modelsAddOrderModel2.equals(modelsAddOrderModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = new OASModelsAddOrderModel();

        System.assertEquals(modelsAddOrderModel1.hashCode(), modelsAddOrderModel1.hashCode());
        System.assertEquals(modelsAddOrderModel2.hashCode(), modelsAddOrderModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsAddOrderModel modelsAddOrderModel1 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel2 = OASModelsAddOrderModel.getExample();
        OASModelsAddOrderModel modelsAddOrderModel3 = new OASModelsAddOrderModel();
        OASModelsAddOrderModel modelsAddOrderModel4 = new OASModelsAddOrderModel();

        System.assert(modelsAddOrderModel1.equals(modelsAddOrderModel2));
        System.assert(modelsAddOrderModel3.equals(modelsAddOrderModel4));
        System.assertEquals(modelsAddOrderModel1.hashCode(), modelsAddOrderModel2.hashCode());
        System.assertEquals(modelsAddOrderModel3.hashCode(), modelsAddOrderModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsAddOrderModel modelsAddOrderModel = new OASModelsAddOrderModel();
        Map<String, String> x-property-mappings = modelsAddOrderModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('isSideBuy', x-property-mappings.get('is_side_buy'));
        System.assertEquals('orderId', x-property-mappings.get('order_id'));
    }
}
