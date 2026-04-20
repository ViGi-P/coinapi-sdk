@isTest
private class OASOhlcvExchangeTimeseriesItemTest {
    @isTest
    private static void equalsSameInstance() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = ohlcvExchangeTimeseriesItem1;
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem3 = new OASOhlcvExchangeTimeseriesItem();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem4 = ohlcvExchangeTimeseriesItem3;

        System.assert(ohlcvExchangeTimeseriesItem1.equals(ohlcvExchangeTimeseriesItem2));
        System.assert(ohlcvExchangeTimeseriesItem2.equals(ohlcvExchangeTimeseriesItem1));
        System.assert(ohlcvExchangeTimeseriesItem1.equals(ohlcvExchangeTimeseriesItem1));
        System.assert(ohlcvExchangeTimeseriesItem3.equals(ohlcvExchangeTimeseriesItem4));
        System.assert(ohlcvExchangeTimeseriesItem4.equals(ohlcvExchangeTimeseriesItem3));
        System.assert(ohlcvExchangeTimeseriesItem3.equals(ohlcvExchangeTimeseriesItem3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem3 = new OASOhlcvExchangeTimeseriesItem();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem4 = new OASOhlcvExchangeTimeseriesItem();

        System.assert(ohlcvExchangeTimeseriesItem1.equals(ohlcvExchangeTimeseriesItem2));
        System.assert(ohlcvExchangeTimeseriesItem2.equals(ohlcvExchangeTimeseriesItem1));
        System.assert(ohlcvExchangeTimeseriesItem3.equals(ohlcvExchangeTimeseriesItem4));
        System.assert(ohlcvExchangeTimeseriesItem4.equals(ohlcvExchangeTimeseriesItem3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = new OASOhlcvExchangeTimeseriesItem();

        System.assertEquals(false, ohlcvExchangeTimeseriesItem1.equals('foo'));
        System.assertEquals(false, ohlcvExchangeTimeseriesItem2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = new OASOhlcvExchangeTimeseriesItem();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem3;

        System.assertEquals(false, ohlcvExchangeTimeseriesItem1.equals(ohlcvExchangeTimeseriesItem3));
        System.assertEquals(false, ohlcvExchangeTimeseriesItem2.equals(ohlcvExchangeTimeseriesItem3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = new OASOhlcvExchangeTimeseriesItem();

        System.assertEquals(ohlcvExchangeTimeseriesItem1.hashCode(), ohlcvExchangeTimeseriesItem1.hashCode());
        System.assertEquals(ohlcvExchangeTimeseriesItem2.hashCode(), ohlcvExchangeTimeseriesItem2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem1 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem2 = OASOhlcvExchangeTimeseriesItem.getExample();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem3 = new OASOhlcvExchangeTimeseriesItem();
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem4 = new OASOhlcvExchangeTimeseriesItem();

        System.assert(ohlcvExchangeTimeseriesItem1.equals(ohlcvExchangeTimeseriesItem2));
        System.assert(ohlcvExchangeTimeseriesItem3.equals(ohlcvExchangeTimeseriesItem4));
        System.assertEquals(ohlcvExchangeTimeseriesItem1.hashCode(), ohlcvExchangeTimeseriesItem2.hashCode());
        System.assertEquals(ohlcvExchangeTimeseriesItem3.hashCode(), ohlcvExchangeTimeseriesItem4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASOhlcvExchangeTimeseriesItem ohlcvExchangeTimeseriesItem = new OASOhlcvExchangeTimeseriesItem();
        Map<String, String> x-property-mappings = ohlcvExchangeTimeseriesItem.getx-property-mappings();
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
        System.assertEquals('symbolIdCoinapi', x-property-mappings.get('symbol_id_coinapi'));
    }
}
