@isTest
private class OASOHLCVTimeSeriesTimeseriesPeriodTest {
    @isTest
    private static void equalsSameInstance() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = ohLCVTimeSeriesTimeseriesPeriod1;
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod3 = new OASOHLCVTimeSeriesTimeseriesPeriod();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod4 = ohLCVTimeSeriesTimeseriesPeriod3;

        System.assert(ohLCVTimeSeriesTimeseriesPeriod1.equals(ohLCVTimeSeriesTimeseriesPeriod2));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod2.equals(ohLCVTimeSeriesTimeseriesPeriod1));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod1.equals(ohLCVTimeSeriesTimeseriesPeriod1));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod3.equals(ohLCVTimeSeriesTimeseriesPeriod4));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod4.equals(ohLCVTimeSeriesTimeseriesPeriod3));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod3.equals(ohLCVTimeSeriesTimeseriesPeriod3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod3 = new OASOHLCVTimeSeriesTimeseriesPeriod();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod4 = new OASOHLCVTimeSeriesTimeseriesPeriod();

        System.assert(ohLCVTimeSeriesTimeseriesPeriod1.equals(ohLCVTimeSeriesTimeseriesPeriod2));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod2.equals(ohLCVTimeSeriesTimeseriesPeriod1));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod3.equals(ohLCVTimeSeriesTimeseriesPeriod4));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod4.equals(ohLCVTimeSeriesTimeseriesPeriod3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = new OASOHLCVTimeSeriesTimeseriesPeriod();

        System.assertEquals(false, ohLCVTimeSeriesTimeseriesPeriod1.equals('foo'));
        System.assertEquals(false, ohLCVTimeSeriesTimeseriesPeriod2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = new OASOHLCVTimeSeriesTimeseriesPeriod();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod3;

        System.assertEquals(false, ohLCVTimeSeriesTimeseriesPeriod1.equals(ohLCVTimeSeriesTimeseriesPeriod3));
        System.assertEquals(false, ohLCVTimeSeriesTimeseriesPeriod2.equals(ohLCVTimeSeriesTimeseriesPeriod3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = new OASOHLCVTimeSeriesTimeseriesPeriod();

        System.assertEquals(ohLCVTimeSeriesTimeseriesPeriod1.hashCode(), ohLCVTimeSeriesTimeseriesPeriod1.hashCode());
        System.assertEquals(ohLCVTimeSeriesTimeseriesPeriod2.hashCode(), ohLCVTimeSeriesTimeseriesPeriod2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod1 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod2 = OASOHLCVTimeSeriesTimeseriesPeriod.getExample();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod3 = new OASOHLCVTimeSeriesTimeseriesPeriod();
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod4 = new OASOHLCVTimeSeriesTimeseriesPeriod();

        System.assert(ohLCVTimeSeriesTimeseriesPeriod1.equals(ohLCVTimeSeriesTimeseriesPeriod2));
        System.assert(ohLCVTimeSeriesTimeseriesPeriod3.equals(ohLCVTimeSeriesTimeseriesPeriod4));
        System.assertEquals(ohLCVTimeSeriesTimeseriesPeriod1.hashCode(), ohLCVTimeSeriesTimeseriesPeriod2.hashCode());
        System.assertEquals(ohLCVTimeSeriesTimeseriesPeriod3.hashCode(), ohLCVTimeSeriesTimeseriesPeriod4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASOHLCVTimeSeriesTimeseriesPeriod ohLCVTimeSeriesTimeseriesPeriod = new OASOHLCVTimeSeriesTimeseriesPeriod();
        Map<String, String> x-property-mappings = ohLCVTimeSeriesTimeseriesPeriod.getx-property-mappings();
        System.assertEquals('periodId', x-property-mappings.get('period_id'));
        System.assertEquals('lengthSeconds', x-property-mappings.get('length_seconds'));
        System.assertEquals('lengthMonths', x-property-mappings.get('length_months'));
        System.assertEquals('unitCount', x-property-mappings.get('unit_count'));
        System.assertEquals('unitName', x-property-mappings.get('unit_name'));
        System.assertEquals('displayName', x-property-mappings.get('display_name'));
    }
}
