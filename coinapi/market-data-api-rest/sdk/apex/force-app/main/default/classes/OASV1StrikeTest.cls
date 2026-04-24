@isTest
private class OASV1StrikeTest {
    @isTest
    private static void equalsSameInstance() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = v1Strike1;
        OASV1Strike v1Strike3 = new OASV1Strike();
        OASV1Strike v1Strike4 = v1Strike3;

        System.assert(v1Strike1.equals(v1Strike2));
        System.assert(v1Strike2.equals(v1Strike1));
        System.assert(v1Strike1.equals(v1Strike1));
        System.assert(v1Strike3.equals(v1Strike4));
        System.assert(v1Strike4.equals(v1Strike3));
        System.assert(v1Strike3.equals(v1Strike3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = OASV1Strike.getExample();
        OASV1Strike v1Strike3 = new OASV1Strike();
        OASV1Strike v1Strike4 = new OASV1Strike();

        System.assert(v1Strike1.equals(v1Strike2));
        System.assert(v1Strike2.equals(v1Strike1));
        System.assert(v1Strike3.equals(v1Strike4));
        System.assert(v1Strike4.equals(v1Strike3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = new OASV1Strike();

        System.assertEquals(false, v1Strike1.equals('foo'));
        System.assertEquals(false, v1Strike2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = new OASV1Strike();
        OASV1Strike v1Strike3;

        System.assertEquals(false, v1Strike1.equals(v1Strike3));
        System.assertEquals(false, v1Strike2.equals(v1Strike3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = new OASV1Strike();

        System.assertEquals(v1Strike1.hashCode(), v1Strike1.hashCode());
        System.assertEquals(v1Strike2.hashCode(), v1Strike2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASV1Strike v1Strike1 = OASV1Strike.getExample();
        OASV1Strike v1Strike2 = OASV1Strike.getExample();
        OASV1Strike v1Strike3 = new OASV1Strike();
        OASV1Strike v1Strike4 = new OASV1Strike();

        System.assert(v1Strike1.equals(v1Strike2));
        System.assert(v1Strike3.equals(v1Strike4));
        System.assertEquals(v1Strike1.hashCode(), v1Strike2.hashCode());
        System.assertEquals(v1Strike3.hashCode(), v1Strike4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASV1Strike v1Strike = new OASV1Strike();
        Map<String, String> x-property-mappings = v1Strike.getx-property-mappings();
        System.assertEquals('strikePrice', x-property-mappings.get('strike_price'));
    }
}
