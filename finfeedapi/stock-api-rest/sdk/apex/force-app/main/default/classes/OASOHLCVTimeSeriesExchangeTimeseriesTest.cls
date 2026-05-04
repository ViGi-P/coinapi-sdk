@isTest
private class OASOHLCVTimeSeriesExchangeTimeseriesTest {
    @isTest
    private static void equalsSameInstance() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = ohLCVTimeSeriesExchangeTimeseriesItem1;
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem3 = new OASOHLCVTimeSeriesExchangeTimeseries();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem4 = ohLCVTimeSeriesExchangeTimeseriesItem3;

        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem1.equals(ohLCVTimeSeriesExchangeTimeseriesItem2));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem2.equals(ohLCVTimeSeriesExchangeTimeseriesItem1));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem1.equals(ohLCVTimeSeriesExchangeTimeseriesItem1));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem3.equals(ohLCVTimeSeriesExchangeTimeseriesItem4));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem4.equals(ohLCVTimeSeriesExchangeTimeseriesItem3));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem3.equals(ohLCVTimeSeriesExchangeTimeseriesItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem3 = new OASOHLCVTimeSeriesExchangeTimeseries();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem4 = new OASOHLCVTimeSeriesExchangeTimeseries();

        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem1.equals(ohLCVTimeSeriesExchangeTimeseriesItem2));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem2.equals(ohLCVTimeSeriesExchangeTimeseriesItem1));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem3.equals(ohLCVTimeSeriesExchangeTimeseriesItem4));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem4.equals(ohLCVTimeSeriesExchangeTimeseriesItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = new OASOHLCVTimeSeriesExchangeTimeseries();

        System.assertEquals(false, ohLCVTimeSeriesExchangeTimeseriesItem1.equals('foo'));
        System.assertEquals(false, ohLCVTimeSeriesExchangeTimeseriesItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = new OASOHLCVTimeSeriesExchangeTimeseries();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem3;

        System.assertEquals(false, ohLCVTimeSeriesExchangeTimeseriesItem1.equals(ohLCVTimeSeriesExchangeTimeseriesItem3));
        System.assertEquals(false, ohLCVTimeSeriesExchangeTimeseriesItem2.equals(ohLCVTimeSeriesExchangeTimeseriesItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = new OASOHLCVTimeSeriesExchangeTimeseries();

        System.assertEquals(ohLCVTimeSeriesExchangeTimeseriesItem1.hashCode(), ohLCVTimeSeriesExchangeTimeseriesItem1.hashCode());
        System.assertEquals(ohLCVTimeSeriesExchangeTimeseriesItem2.hashCode(), ohLCVTimeSeriesExchangeTimeseriesItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem1 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem2 = OASOHLCVTimeSeriesExchangeTimeseries.getExample();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem3 = new OASOHLCVTimeSeriesExchangeTimeseries();
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem4 = new OASOHLCVTimeSeriesExchangeTimeseries();

        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem1.equals(ohLCVTimeSeriesExchangeTimeseriesItem2));
        System.assert(ohLCVTimeSeriesExchangeTimeseriesItem3.equals(ohLCVTimeSeriesExchangeTimeseriesItem4));
        System.assertEquals(ohLCVTimeSeriesExchangeTimeseriesItem1.hashCode(), ohLCVTimeSeriesExchangeTimeseriesItem2.hashCode());
        System.assertEquals(ohLCVTimeSeriesExchangeTimeseriesItem3.hashCode(), ohLCVTimeSeriesExchangeTimeseriesItem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASOHLCVTimeSeriesExchangeTimeseries ohLCVTimeSeriesExchangeTimeseriesItem = new OASOHLCVTimeSeriesExchangeTimeseries();
        Map<String, String> x-property-mappings = ohLCVTimeSeriesExchangeTimeseriesItem.getx-property-mappings();
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
        System.assertEquals('symbolIdExchange', x-property-mappings.get('symbol_id_exchange'));
    }
}
