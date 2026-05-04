@isTest
private class OASIEXPriceLevelUpdatePriceLevelUpdaTest {
    @isTest
    private static void equalsSameInstance() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = ieXPriceLevelUpdatePriceLevelUpdateModel1;
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel3 = new OASIEXPriceLevelUpdatePriceLevelUpda();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel4 = ieXPriceLevelUpdatePriceLevelUpdateModel3;

        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel1.equals(ieXPriceLevelUpdatePriceLevelUpdateModel2));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel2.equals(ieXPriceLevelUpdatePriceLevelUpdateModel1));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel1.equals(ieXPriceLevelUpdatePriceLevelUpdateModel1));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel3.equals(ieXPriceLevelUpdatePriceLevelUpdateModel4));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel4.equals(ieXPriceLevelUpdatePriceLevelUpdateModel3));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel3.equals(ieXPriceLevelUpdatePriceLevelUpdateModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel3 = new OASIEXPriceLevelUpdatePriceLevelUpda();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel4 = new OASIEXPriceLevelUpdatePriceLevelUpda();

        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel1.equals(ieXPriceLevelUpdatePriceLevelUpdateModel2));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel2.equals(ieXPriceLevelUpdatePriceLevelUpdateModel1));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel3.equals(ieXPriceLevelUpdatePriceLevelUpdateModel4));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel4.equals(ieXPriceLevelUpdatePriceLevelUpdateModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = new OASIEXPriceLevelUpdatePriceLevelUpda();

        System.assertEquals(false, ieXPriceLevelUpdatePriceLevelUpdateModel1.equals('foo'));
        System.assertEquals(false, ieXPriceLevelUpdatePriceLevelUpdateModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = new OASIEXPriceLevelUpdatePriceLevelUpda();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel3;

        System.assertEquals(false, ieXPriceLevelUpdatePriceLevelUpdateModel1.equals(ieXPriceLevelUpdatePriceLevelUpdateModel3));
        System.assertEquals(false, ieXPriceLevelUpdatePriceLevelUpdateModel2.equals(ieXPriceLevelUpdatePriceLevelUpdateModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = new OASIEXPriceLevelUpdatePriceLevelUpda();

        System.assertEquals(ieXPriceLevelUpdatePriceLevelUpdateModel1.hashCode(), ieXPriceLevelUpdatePriceLevelUpdateModel1.hashCode());
        System.assertEquals(ieXPriceLevelUpdatePriceLevelUpdateModel2.hashCode(), ieXPriceLevelUpdatePriceLevelUpdateModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel1 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel2 = OASIEXPriceLevelUpdatePriceLevelUpda.getExample();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel3 = new OASIEXPriceLevelUpdatePriceLevelUpda();
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel4 = new OASIEXPriceLevelUpdatePriceLevelUpda();

        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel1.equals(ieXPriceLevelUpdatePriceLevelUpdateModel2));
        System.assert(ieXPriceLevelUpdatePriceLevelUpdateModel3.equals(ieXPriceLevelUpdatePriceLevelUpdateModel4));
        System.assertEquals(ieXPriceLevelUpdatePriceLevelUpdateModel1.hashCode(), ieXPriceLevelUpdatePriceLevelUpdateModel2.hashCode());
        System.assertEquals(ieXPriceLevelUpdatePriceLevelUpdateModel3.hashCode(), ieXPriceLevelUpdatePriceLevelUpdateModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASIEXPriceLevelUpdatePriceLevelUpda ieXPriceLevelUpdatePriceLevelUpdateModel = new OASIEXPriceLevelUpdatePriceLevelUpda();
        Map<String, String> x-property-mappings = ieXPriceLevelUpdatePriceLevelUpdateModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('isSideBuy', x-property-mappings.get('is_side_buy'));
        System.assertEquals('isEventProcessingComplete', x-property-mappings.get('is_event_processing_complete'));
    }
}
