@isTest
private class OASModelsModifyOrderModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = modelsModifyOrderModel1;
        OASModelsModifyOrderModel modelsModifyOrderModel3 = new OASModelsModifyOrderModel();
        OASModelsModifyOrderModel modelsModifyOrderModel4 = modelsModifyOrderModel3;

        System.assert(modelsModifyOrderModel1.equals(modelsModifyOrderModel2));
        System.assert(modelsModifyOrderModel2.equals(modelsModifyOrderModel1));
        System.assert(modelsModifyOrderModel1.equals(modelsModifyOrderModel1));
        System.assert(modelsModifyOrderModel3.equals(modelsModifyOrderModel4));
        System.assert(modelsModifyOrderModel4.equals(modelsModifyOrderModel3));
        System.assert(modelsModifyOrderModel3.equals(modelsModifyOrderModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel3 = new OASModelsModifyOrderModel();
        OASModelsModifyOrderModel modelsModifyOrderModel4 = new OASModelsModifyOrderModel();

        System.assert(modelsModifyOrderModel1.equals(modelsModifyOrderModel2));
        System.assert(modelsModifyOrderModel2.equals(modelsModifyOrderModel1));
        System.assert(modelsModifyOrderModel3.equals(modelsModifyOrderModel4));
        System.assert(modelsModifyOrderModel4.equals(modelsModifyOrderModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = new OASModelsModifyOrderModel();

        System.assertEquals(false, modelsModifyOrderModel1.equals('foo'));
        System.assertEquals(false, modelsModifyOrderModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = new OASModelsModifyOrderModel();
        OASModelsModifyOrderModel modelsModifyOrderModel3;

        System.assertEquals(false, modelsModifyOrderModel1.equals(modelsModifyOrderModel3));
        System.assertEquals(false, modelsModifyOrderModel2.equals(modelsModifyOrderModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = new OASModelsModifyOrderModel();

        System.assertEquals(modelsModifyOrderModel1.hashCode(), modelsModifyOrderModel1.hashCode());
        System.assertEquals(modelsModifyOrderModel2.hashCode(), modelsModifyOrderModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsModifyOrderModel modelsModifyOrderModel1 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel2 = OASModelsModifyOrderModel.getExample();
        OASModelsModifyOrderModel modelsModifyOrderModel3 = new OASModelsModifyOrderModel();
        OASModelsModifyOrderModel modelsModifyOrderModel4 = new OASModelsModifyOrderModel();

        System.assert(modelsModifyOrderModel1.equals(modelsModifyOrderModel2));
        System.assert(modelsModifyOrderModel3.equals(modelsModifyOrderModel4));
        System.assertEquals(modelsModifyOrderModel1.hashCode(), modelsModifyOrderModel2.hashCode());
        System.assertEquals(modelsModifyOrderModel3.hashCode(), modelsModifyOrderModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsModifyOrderModel modelsModifyOrderModel = new OASModelsModifyOrderModel();
        Map<String, String> x-property-mappings = modelsModifyOrderModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('orderIdReference', x-property-mappings.get('order_id_reference'));
        System.assertEquals('isPriorityReset', x-property-mappings.get('is_priority_reset'));
    }
}
