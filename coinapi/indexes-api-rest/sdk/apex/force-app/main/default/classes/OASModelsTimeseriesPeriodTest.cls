@isTest
private class OASModelsTimeseriesPeriodTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = modelsTimeseriesPeriod1;
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod3 = new OASModelsTimeseriesPeriod();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod4 = modelsTimeseriesPeriod3;

        System.assert(modelsTimeseriesPeriod1.equals(modelsTimeseriesPeriod2));
        System.assert(modelsTimeseriesPeriod2.equals(modelsTimeseriesPeriod1));
        System.assert(modelsTimeseriesPeriod1.equals(modelsTimeseriesPeriod1));
        System.assert(modelsTimeseriesPeriod3.equals(modelsTimeseriesPeriod4));
        System.assert(modelsTimeseriesPeriod4.equals(modelsTimeseriesPeriod3));
        System.assert(modelsTimeseriesPeriod3.equals(modelsTimeseriesPeriod3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod3 = new OASModelsTimeseriesPeriod();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod4 = new OASModelsTimeseriesPeriod();

        System.assert(modelsTimeseriesPeriod1.equals(modelsTimeseriesPeriod2));
        System.assert(modelsTimeseriesPeriod2.equals(modelsTimeseriesPeriod1));
        System.assert(modelsTimeseriesPeriod3.equals(modelsTimeseriesPeriod4));
        System.assert(modelsTimeseriesPeriod4.equals(modelsTimeseriesPeriod3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = new OASModelsTimeseriesPeriod();

        System.assertEquals(false, modelsTimeseriesPeriod1.equals('foo'));
        System.assertEquals(false, modelsTimeseriesPeriod2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = new OASModelsTimeseriesPeriod();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod3;

        System.assertEquals(false, modelsTimeseriesPeriod1.equals(modelsTimeseriesPeriod3));
        System.assertEquals(false, modelsTimeseriesPeriod2.equals(modelsTimeseriesPeriod3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = new OASModelsTimeseriesPeriod();

        System.assertEquals(modelsTimeseriesPeriod1.hashCode(), modelsTimeseriesPeriod1.hashCode());
        System.assertEquals(modelsTimeseriesPeriod2.hashCode(), modelsTimeseriesPeriod2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod1 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod2 = OASModelsTimeseriesPeriod.getExample();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod3 = new OASModelsTimeseriesPeriod();
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod4 = new OASModelsTimeseriesPeriod();

        System.assert(modelsTimeseriesPeriod1.equals(modelsTimeseriesPeriod2));
        System.assert(modelsTimeseriesPeriod3.equals(modelsTimeseriesPeriod4));
        System.assertEquals(modelsTimeseriesPeriod1.hashCode(), modelsTimeseriesPeriod2.hashCode());
        System.assertEquals(modelsTimeseriesPeriod3.hashCode(), modelsTimeseriesPeriod4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsTimeseriesPeriod modelsTimeseriesPeriod = new OASModelsTimeseriesPeriod();
        Map<String, String> x-property-mappings = modelsTimeseriesPeriod.getx-property-mappings();
        System.assertEquals('periodId', x-property-mappings.get('period_id'));
        System.assertEquals('lengthSeconds', x-property-mappings.get('length_seconds'));
        System.assertEquals('lengthMonths', x-property-mappings.get('length_months'));
        System.assertEquals('unitCount', x-property-mappings.get('unit_count'));
        System.assertEquals('unitName', x-property-mappings.get('unit_name'));
        System.assertEquals('displayName', x-property-mappings.get('display_name'));
    }
}
