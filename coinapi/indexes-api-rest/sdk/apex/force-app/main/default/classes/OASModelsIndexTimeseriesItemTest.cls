@isTest
private class OASModelsIndexTimeseriesItemTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = modelsIndexTimeseriesItem1;
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem3 = new OASModelsIndexTimeseriesItem();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem4 = modelsIndexTimeseriesItem3;

        System.assert(modelsIndexTimeseriesItem1.equals(modelsIndexTimeseriesItem2));
        System.assert(modelsIndexTimeseriesItem2.equals(modelsIndexTimeseriesItem1));
        System.assert(modelsIndexTimeseriesItem1.equals(modelsIndexTimeseriesItem1));
        System.assert(modelsIndexTimeseriesItem3.equals(modelsIndexTimeseriesItem4));
        System.assert(modelsIndexTimeseriesItem4.equals(modelsIndexTimeseriesItem3));
        System.assert(modelsIndexTimeseriesItem3.equals(modelsIndexTimeseriesItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem3 = new OASModelsIndexTimeseriesItem();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem4 = new OASModelsIndexTimeseriesItem();

        System.assert(modelsIndexTimeseriesItem1.equals(modelsIndexTimeseriesItem2));
        System.assert(modelsIndexTimeseriesItem2.equals(modelsIndexTimeseriesItem1));
        System.assert(modelsIndexTimeseriesItem3.equals(modelsIndexTimeseriesItem4));
        System.assert(modelsIndexTimeseriesItem4.equals(modelsIndexTimeseriesItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = new OASModelsIndexTimeseriesItem();

        System.assertEquals(false, modelsIndexTimeseriesItem1.equals('foo'));
        System.assertEquals(false, modelsIndexTimeseriesItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = new OASModelsIndexTimeseriesItem();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem3;

        System.assertEquals(false, modelsIndexTimeseriesItem1.equals(modelsIndexTimeseriesItem3));
        System.assertEquals(false, modelsIndexTimeseriesItem2.equals(modelsIndexTimeseriesItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = new OASModelsIndexTimeseriesItem();

        System.assertEquals(modelsIndexTimeseriesItem1.hashCode(), modelsIndexTimeseriesItem1.hashCode());
        System.assertEquals(modelsIndexTimeseriesItem2.hashCode(), modelsIndexTimeseriesItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem1 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem2 = OASModelsIndexTimeseriesItem.getExample();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem3 = new OASModelsIndexTimeseriesItem();
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem4 = new OASModelsIndexTimeseriesItem();

        System.assert(modelsIndexTimeseriesItem1.equals(modelsIndexTimeseriesItem2));
        System.assert(modelsIndexTimeseriesItem3.equals(modelsIndexTimeseriesItem4));
        System.assertEquals(modelsIndexTimeseriesItem1.hashCode(), modelsIndexTimeseriesItem2.hashCode());
        System.assertEquals(modelsIndexTimeseriesItem3.hashCode(), modelsIndexTimeseriesItem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsIndexTimeseriesItem modelsIndexTimeseriesItem = new OASModelsIndexTimeseriesItem();
        Map<String, String> x-property-mappings = modelsIndexTimeseriesItem.getx-property-mappings();
        System.assertEquals('timePeriodStart', x-property-mappings.get('time_period_start'));
        System.assertEquals('timePeriodEnd', x-property-mappings.get('time_period_end'));
        System.assertEquals('timeOpen', x-property-mappings.get('time_open'));
        System.assertEquals('timeClose', x-property-mappings.get('time_close'));
        System.assertEquals('valueOpen', x-property-mappings.get('value_open'));
        System.assertEquals('valueHigh', x-property-mappings.get('value_high'));
        System.assertEquals('valueLow', x-property-mappings.get('value_low'));
        System.assertEquals('valueClose', x-property-mappings.get('value_close'));
        System.assertEquals('valueCount', x-property-mappings.get('value_count'));
    }
}
