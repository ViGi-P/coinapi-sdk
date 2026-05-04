@isTest
private class OASOHLCVTimeSeriesTimeseriesItemTest {
    @isTest
    private static void equalsSameInstance() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = ohLCVTimeSeriesTimeseriesItem1;
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem3 = new OASOHLCVTimeSeriesTimeseriesItem();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem4 = ohLCVTimeSeriesTimeseriesItem3;

        System.assert(ohLCVTimeSeriesTimeseriesItem1.equals(ohLCVTimeSeriesTimeseriesItem2));
        System.assert(ohLCVTimeSeriesTimeseriesItem2.equals(ohLCVTimeSeriesTimeseriesItem1));
        System.assert(ohLCVTimeSeriesTimeseriesItem1.equals(ohLCVTimeSeriesTimeseriesItem1));
        System.assert(ohLCVTimeSeriesTimeseriesItem3.equals(ohLCVTimeSeriesTimeseriesItem4));
        System.assert(ohLCVTimeSeriesTimeseriesItem4.equals(ohLCVTimeSeriesTimeseriesItem3));
        System.assert(ohLCVTimeSeriesTimeseriesItem3.equals(ohLCVTimeSeriesTimeseriesItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem3 = new OASOHLCVTimeSeriesTimeseriesItem();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem4 = new OASOHLCVTimeSeriesTimeseriesItem();

        System.assert(ohLCVTimeSeriesTimeseriesItem1.equals(ohLCVTimeSeriesTimeseriesItem2));
        System.assert(ohLCVTimeSeriesTimeseriesItem2.equals(ohLCVTimeSeriesTimeseriesItem1));
        System.assert(ohLCVTimeSeriesTimeseriesItem3.equals(ohLCVTimeSeriesTimeseriesItem4));
        System.assert(ohLCVTimeSeriesTimeseriesItem4.equals(ohLCVTimeSeriesTimeseriesItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = new OASOHLCVTimeSeriesTimeseriesItem();

        System.assertEquals(false, ohLCVTimeSeriesTimeseriesItem1.equals('foo'));
        System.assertEquals(false, ohLCVTimeSeriesTimeseriesItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = new OASOHLCVTimeSeriesTimeseriesItem();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem3;

        System.assertEquals(false, ohLCVTimeSeriesTimeseriesItem1.equals(ohLCVTimeSeriesTimeseriesItem3));
        System.assertEquals(false, ohLCVTimeSeriesTimeseriesItem2.equals(ohLCVTimeSeriesTimeseriesItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = new OASOHLCVTimeSeriesTimeseriesItem();

        System.assertEquals(ohLCVTimeSeriesTimeseriesItem1.hashCode(), ohLCVTimeSeriesTimeseriesItem1.hashCode());
        System.assertEquals(ohLCVTimeSeriesTimeseriesItem2.hashCode(), ohLCVTimeSeriesTimeseriesItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem1 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem2 = OASOHLCVTimeSeriesTimeseriesItem.getExample();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem3 = new OASOHLCVTimeSeriesTimeseriesItem();
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem4 = new OASOHLCVTimeSeriesTimeseriesItem();

        System.assert(ohLCVTimeSeriesTimeseriesItem1.equals(ohLCVTimeSeriesTimeseriesItem2));
        System.assert(ohLCVTimeSeriesTimeseriesItem3.equals(ohLCVTimeSeriesTimeseriesItem4));
        System.assertEquals(ohLCVTimeSeriesTimeseriesItem1.hashCode(), ohLCVTimeSeriesTimeseriesItem2.hashCode());
        System.assertEquals(ohLCVTimeSeriesTimeseriesItem3.hashCode(), ohLCVTimeSeriesTimeseriesItem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASOHLCVTimeSeriesTimeseriesItem ohLCVTimeSeriesTimeseriesItem = new OASOHLCVTimeSeriesTimeseriesItem();
        Map<String, String> x-property-mappings = ohLCVTimeSeriesTimeseriesItem.getx-property-mappings();
        System.assertEquals('timePeriodStart', x-property-mappings.get('time_period_start'));
        System.assertEquals('timePeriodEnd', x-property-mappings.get('time_period_end'));
        System.assertEquals('timeOpen', x-property-mappings.get('time_open'));
        System.assertEquals('timeClose', x-property-mappings.get('time_close'));
        System.assertEquals('priceOpen', x-property-mappings.get('price_open'));
        System.assertEquals('priceHigh', x-property-mappings.get('price_high'));
        System.assertEquals('priceLow', x-property-mappings.get('price_low'));
        System.assertEquals('priceClose', x-property-mappings.get('price_close'));
        System.assertEquals('volumeTraded', x-property-mappings.get('volume_traded'));
        System.assertEquals('tradesCount', x-property-mappings.get('trades_count'));
    }
}
