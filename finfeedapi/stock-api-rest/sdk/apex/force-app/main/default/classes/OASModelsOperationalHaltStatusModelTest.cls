@isTest
private class OASModelsOperationalHaltStatusModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = modelsOperationalHaltStatusModel1;
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel3 = new OASModelsOperationalHaltStatusModel();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel4 = modelsOperationalHaltStatusModel3;

        System.assert(modelsOperationalHaltStatusModel1.equals(modelsOperationalHaltStatusModel2));
        System.assert(modelsOperationalHaltStatusModel2.equals(modelsOperationalHaltStatusModel1));
        System.assert(modelsOperationalHaltStatusModel1.equals(modelsOperationalHaltStatusModel1));
        System.assert(modelsOperationalHaltStatusModel3.equals(modelsOperationalHaltStatusModel4));
        System.assert(modelsOperationalHaltStatusModel4.equals(modelsOperationalHaltStatusModel3));
        System.assert(modelsOperationalHaltStatusModel3.equals(modelsOperationalHaltStatusModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel3 = new OASModelsOperationalHaltStatusModel();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel4 = new OASModelsOperationalHaltStatusModel();

        System.assert(modelsOperationalHaltStatusModel1.equals(modelsOperationalHaltStatusModel2));
        System.assert(modelsOperationalHaltStatusModel2.equals(modelsOperationalHaltStatusModel1));
        System.assert(modelsOperationalHaltStatusModel3.equals(modelsOperationalHaltStatusModel4));
        System.assert(modelsOperationalHaltStatusModel4.equals(modelsOperationalHaltStatusModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = new OASModelsOperationalHaltStatusModel();

        System.assertEquals(false, modelsOperationalHaltStatusModel1.equals('foo'));
        System.assertEquals(false, modelsOperationalHaltStatusModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = new OASModelsOperationalHaltStatusModel();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel3;

        System.assertEquals(false, modelsOperationalHaltStatusModel1.equals(modelsOperationalHaltStatusModel3));
        System.assertEquals(false, modelsOperationalHaltStatusModel2.equals(modelsOperationalHaltStatusModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = new OASModelsOperationalHaltStatusModel();

        System.assertEquals(modelsOperationalHaltStatusModel1.hashCode(), modelsOperationalHaltStatusModel1.hashCode());
        System.assertEquals(modelsOperationalHaltStatusModel2.hashCode(), modelsOperationalHaltStatusModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel1 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel2 = OASModelsOperationalHaltStatusModel.getExample();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel3 = new OASModelsOperationalHaltStatusModel();
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel4 = new OASModelsOperationalHaltStatusModel();

        System.assert(modelsOperationalHaltStatusModel1.equals(modelsOperationalHaltStatusModel2));
        System.assert(modelsOperationalHaltStatusModel3.equals(modelsOperationalHaltStatusModel4));
        System.assertEquals(modelsOperationalHaltStatusModel1.hashCode(), modelsOperationalHaltStatusModel2.hashCode());
        System.assertEquals(modelsOperationalHaltStatusModel3.hashCode(), modelsOperationalHaltStatusModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsOperationalHaltStatusModel modelsOperationalHaltStatusModel = new OASModelsOperationalHaltStatusModel();
        Map<String, String> x-property-mappings = modelsOperationalHaltStatusModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('operationalHaltStatus', x-property-mappings.get('operational_halt_status'));
        System.assertEquals('operationalHaltStatusCode', x-property-mappings.get('operational_halt_status_code'));
        System.assertEquals('operationalHaltStatusText', x-property-mappings.get('operational_halt_status_text'));
        System.assertEquals('isOperationallyHalted', x-property-mappings.get('is_operationally_halted'));
        System.assertEquals('isNotOperationallyHalted', x-property-mappings.get('is_not_operationally_halted'));
    }
}
