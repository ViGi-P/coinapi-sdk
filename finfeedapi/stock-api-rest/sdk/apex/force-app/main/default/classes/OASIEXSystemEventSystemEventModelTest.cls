@isTest
private class OASIEXSystemEventSystemEventModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = ieXSystemEventSystemEventModel1;
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel3 = new OASIEXSystemEventSystemEventModel();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel4 = ieXSystemEventSystemEventModel3;

        System.assert(ieXSystemEventSystemEventModel1.equals(ieXSystemEventSystemEventModel2));
        System.assert(ieXSystemEventSystemEventModel2.equals(ieXSystemEventSystemEventModel1));
        System.assert(ieXSystemEventSystemEventModel1.equals(ieXSystemEventSystemEventModel1));
        System.assert(ieXSystemEventSystemEventModel3.equals(ieXSystemEventSystemEventModel4));
        System.assert(ieXSystemEventSystemEventModel4.equals(ieXSystemEventSystemEventModel3));
        System.assert(ieXSystemEventSystemEventModel3.equals(ieXSystemEventSystemEventModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel3 = new OASIEXSystemEventSystemEventModel();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel4 = new OASIEXSystemEventSystemEventModel();

        System.assert(ieXSystemEventSystemEventModel1.equals(ieXSystemEventSystemEventModel2));
        System.assert(ieXSystemEventSystemEventModel2.equals(ieXSystemEventSystemEventModel1));
        System.assert(ieXSystemEventSystemEventModel3.equals(ieXSystemEventSystemEventModel4));
        System.assert(ieXSystemEventSystemEventModel4.equals(ieXSystemEventSystemEventModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = new OASIEXSystemEventSystemEventModel();

        System.assertEquals(false, ieXSystemEventSystemEventModel1.equals('foo'));
        System.assertEquals(false, ieXSystemEventSystemEventModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = new OASIEXSystemEventSystemEventModel();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel3;

        System.assertEquals(false, ieXSystemEventSystemEventModel1.equals(ieXSystemEventSystemEventModel3));
        System.assertEquals(false, ieXSystemEventSystemEventModel2.equals(ieXSystemEventSystemEventModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = new OASIEXSystemEventSystemEventModel();

        System.assertEquals(ieXSystemEventSystemEventModel1.hashCode(), ieXSystemEventSystemEventModel1.hashCode());
        System.assertEquals(ieXSystemEventSystemEventModel2.hashCode(), ieXSystemEventSystemEventModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel1 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel2 = OASIEXSystemEventSystemEventModel.getExample();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel3 = new OASIEXSystemEventSystemEventModel();
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel4 = new OASIEXSystemEventSystemEventModel();

        System.assert(ieXSystemEventSystemEventModel1.equals(ieXSystemEventSystemEventModel2));
        System.assert(ieXSystemEventSystemEventModel3.equals(ieXSystemEventSystemEventModel4));
        System.assertEquals(ieXSystemEventSystemEventModel1.hashCode(), ieXSystemEventSystemEventModel2.hashCode());
        System.assertEquals(ieXSystemEventSystemEventModel3.hashCode(), ieXSystemEventSystemEventModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIEXSystemEventSystemEventModel ieXSystemEventSystemEventModel = new OASIEXSystemEventSystemEventModel();
        Map<String, String> x-property-mappings = ieXSystemEventSystemEventModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('systemEvent', x-property-mappings.get('system_event'));
        System.assertEquals('systemEventCode', x-property-mappings.get('system_event_code'));
        System.assertEquals('systemEventText', x-property-mappings.get('system_event_text'));
        System.assertEquals('isSystemEventStartOfMessages', x-property-mappings.get('is_system_event_start_of_messages'));
        System.assertEquals('isSystemEventStartOfSystemHours', x-property-mappings.get('is_system_event_start_of_system_hours'));
        System.assertEquals('isSystemEventStartOfRegularMarketHours', x-property-mappings.get('is_system_event_start_of_regular_market_hours'));
        System.assertEquals('isSystemEventEndOfRegularMarketHours', x-property-mappings.get('is_system_event_end_of_regular_market_hours'));
        System.assertEquals('isSystemEventEndOfSystemHours', x-property-mappings.get('is_system_event_end_of_system_hours'));
        System.assertEquals('isSystemEventEndOfMessages', x-property-mappings.get('is_system_event_end_of_messages'));
    }
}
