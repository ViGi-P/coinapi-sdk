@isTest
private class OASModelsDeleteOrderModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = modelsDeleteOrderModel1;
        OASModelsDeleteOrderModel modelsDeleteOrderModel3 = new OASModelsDeleteOrderModel();
        OASModelsDeleteOrderModel modelsDeleteOrderModel4 = modelsDeleteOrderModel3;

        System.assert(modelsDeleteOrderModel1.equals(modelsDeleteOrderModel2));
        System.assert(modelsDeleteOrderModel2.equals(modelsDeleteOrderModel1));
        System.assert(modelsDeleteOrderModel1.equals(modelsDeleteOrderModel1));
        System.assert(modelsDeleteOrderModel3.equals(modelsDeleteOrderModel4));
        System.assert(modelsDeleteOrderModel4.equals(modelsDeleteOrderModel3));
        System.assert(modelsDeleteOrderModel3.equals(modelsDeleteOrderModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel3 = new OASModelsDeleteOrderModel();
        OASModelsDeleteOrderModel modelsDeleteOrderModel4 = new OASModelsDeleteOrderModel();

        System.assert(modelsDeleteOrderModel1.equals(modelsDeleteOrderModel2));
        System.assert(modelsDeleteOrderModel2.equals(modelsDeleteOrderModel1));
        System.assert(modelsDeleteOrderModel3.equals(modelsDeleteOrderModel4));
        System.assert(modelsDeleteOrderModel4.equals(modelsDeleteOrderModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = new OASModelsDeleteOrderModel();

        System.assertEquals(false, modelsDeleteOrderModel1.equals('foo'));
        System.assertEquals(false, modelsDeleteOrderModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = new OASModelsDeleteOrderModel();
        OASModelsDeleteOrderModel modelsDeleteOrderModel3;

        System.assertEquals(false, modelsDeleteOrderModel1.equals(modelsDeleteOrderModel3));
        System.assertEquals(false, modelsDeleteOrderModel2.equals(modelsDeleteOrderModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = new OASModelsDeleteOrderModel();

        System.assertEquals(modelsDeleteOrderModel1.hashCode(), modelsDeleteOrderModel1.hashCode());
        System.assertEquals(modelsDeleteOrderModel2.hashCode(), modelsDeleteOrderModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel1 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel2 = OASModelsDeleteOrderModel.getExample();
        OASModelsDeleteOrderModel modelsDeleteOrderModel3 = new OASModelsDeleteOrderModel();
        OASModelsDeleteOrderModel modelsDeleteOrderModel4 = new OASModelsDeleteOrderModel();

        System.assert(modelsDeleteOrderModel1.equals(modelsDeleteOrderModel2));
        System.assert(modelsDeleteOrderModel3.equals(modelsDeleteOrderModel4));
        System.assertEquals(modelsDeleteOrderModel1.hashCode(), modelsDeleteOrderModel2.hashCode());
        System.assertEquals(modelsDeleteOrderModel3.hashCode(), modelsDeleteOrderModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsDeleteOrderModel modelsDeleteOrderModel = new OASModelsDeleteOrderModel();
        Map<String, String> x-property-mappings = modelsDeleteOrderModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('orderIdReference', x-property-mappings.get('order_id_reference'));
    }
}
