@isTest
private class OASModelsSecurityEventModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = modelsSecurityEventModel1;
        OASModelsSecurityEventModel modelsSecurityEventModel3 = new OASModelsSecurityEventModel();
        OASModelsSecurityEventModel modelsSecurityEventModel4 = modelsSecurityEventModel3;

        System.assert(modelsSecurityEventModel1.equals(modelsSecurityEventModel2));
        System.assert(modelsSecurityEventModel2.equals(modelsSecurityEventModel1));
        System.assert(modelsSecurityEventModel1.equals(modelsSecurityEventModel1));
        System.assert(modelsSecurityEventModel3.equals(modelsSecurityEventModel4));
        System.assert(modelsSecurityEventModel4.equals(modelsSecurityEventModel3));
        System.assert(modelsSecurityEventModel3.equals(modelsSecurityEventModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel3 = new OASModelsSecurityEventModel();
        OASModelsSecurityEventModel modelsSecurityEventModel4 = new OASModelsSecurityEventModel();

        System.assert(modelsSecurityEventModel1.equals(modelsSecurityEventModel2));
        System.assert(modelsSecurityEventModel2.equals(modelsSecurityEventModel1));
        System.assert(modelsSecurityEventModel3.equals(modelsSecurityEventModel4));
        System.assert(modelsSecurityEventModel4.equals(modelsSecurityEventModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = new OASModelsSecurityEventModel();

        System.assertEquals(false, modelsSecurityEventModel1.equals('foo'));
        System.assertEquals(false, modelsSecurityEventModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = new OASModelsSecurityEventModel();
        OASModelsSecurityEventModel modelsSecurityEventModel3;

        System.assertEquals(false, modelsSecurityEventModel1.equals(modelsSecurityEventModel3));
        System.assertEquals(false, modelsSecurityEventModel2.equals(modelsSecurityEventModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = new OASModelsSecurityEventModel();

        System.assertEquals(modelsSecurityEventModel1.hashCode(), modelsSecurityEventModel1.hashCode());
        System.assertEquals(modelsSecurityEventModel2.hashCode(), modelsSecurityEventModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsSecurityEventModel modelsSecurityEventModel1 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel2 = OASModelsSecurityEventModel.getExample();
        OASModelsSecurityEventModel modelsSecurityEventModel3 = new OASModelsSecurityEventModel();
        OASModelsSecurityEventModel modelsSecurityEventModel4 = new OASModelsSecurityEventModel();

        System.assert(modelsSecurityEventModel1.equals(modelsSecurityEventModel2));
        System.assert(modelsSecurityEventModel3.equals(modelsSecurityEventModel4));
        System.assertEquals(modelsSecurityEventModel1.hashCode(), modelsSecurityEventModel2.hashCode());
        System.assertEquals(modelsSecurityEventModel3.hashCode(), modelsSecurityEventModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsSecurityEventModel modelsSecurityEventModel = new OASModelsSecurityEventModel();
        Map<String, String> x-property-mappings = modelsSecurityEventModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('securityEvent', x-property-mappings.get('security_event'));
        System.assertEquals('securityEventCode', x-property-mappings.get('security_event_code'));
        System.assertEquals('securityEventText', x-property-mappings.get('security_event_text'));
        System.assertEquals('isOpeningProcessComplete', x-property-mappings.get('is_opening_process_complete'));
        System.assertEquals('isClosingProcessComplete', x-property-mappings.get('is_closing_process_complete'));
    }
}
