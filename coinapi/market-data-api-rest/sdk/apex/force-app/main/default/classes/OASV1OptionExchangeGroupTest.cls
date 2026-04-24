@isTest
private class OASV1OptionExchangeGroupTest {
    @isTest
    private static void equalsSameInstance() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = v1OptionExchangeGroup1;
        OASV1OptionExchangeGroup v1OptionExchangeGroup3 = new OASV1OptionExchangeGroup();
        OASV1OptionExchangeGroup v1OptionExchangeGroup4 = v1OptionExchangeGroup3;

        System.assert(v1OptionExchangeGroup1.equals(v1OptionExchangeGroup2));
        System.assert(v1OptionExchangeGroup2.equals(v1OptionExchangeGroup1));
        System.assert(v1OptionExchangeGroup1.equals(v1OptionExchangeGroup1));
        System.assert(v1OptionExchangeGroup3.equals(v1OptionExchangeGroup4));
        System.assert(v1OptionExchangeGroup4.equals(v1OptionExchangeGroup3));
        System.assert(v1OptionExchangeGroup3.equals(v1OptionExchangeGroup3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup3 = new OASV1OptionExchangeGroup();
        OASV1OptionExchangeGroup v1OptionExchangeGroup4 = new OASV1OptionExchangeGroup();

        System.assert(v1OptionExchangeGroup1.equals(v1OptionExchangeGroup2));
        System.assert(v1OptionExchangeGroup2.equals(v1OptionExchangeGroup1));
        System.assert(v1OptionExchangeGroup3.equals(v1OptionExchangeGroup4));
        System.assert(v1OptionExchangeGroup4.equals(v1OptionExchangeGroup3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = new OASV1OptionExchangeGroup();

        System.assertEquals(false, v1OptionExchangeGroup1.equals('foo'));
        System.assertEquals(false, v1OptionExchangeGroup2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = new OASV1OptionExchangeGroup();
        OASV1OptionExchangeGroup v1OptionExchangeGroup3;

        System.assertEquals(false, v1OptionExchangeGroup1.equals(v1OptionExchangeGroup3));
        System.assertEquals(false, v1OptionExchangeGroup2.equals(v1OptionExchangeGroup3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = new OASV1OptionExchangeGroup();

        System.assertEquals(v1OptionExchangeGroup1.hashCode(), v1OptionExchangeGroup1.hashCode());
        System.assertEquals(v1OptionExchangeGroup2.hashCode(), v1OptionExchangeGroup2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup1 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup2 = OASV1OptionExchangeGroup.getExample();
        OASV1OptionExchangeGroup v1OptionExchangeGroup3 = new OASV1OptionExchangeGroup();
        OASV1OptionExchangeGroup v1OptionExchangeGroup4 = new OASV1OptionExchangeGroup();

        System.assert(v1OptionExchangeGroup1.equals(v1OptionExchangeGroup2));
        System.assert(v1OptionExchangeGroup3.equals(v1OptionExchangeGroup4));
        System.assertEquals(v1OptionExchangeGroup1.hashCode(), v1OptionExchangeGroup2.hashCode());
        System.assertEquals(v1OptionExchangeGroup3.hashCode(), v1OptionExchangeGroup4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup = new OASV1OptionExchangeGroup();
        Map<String, String> x-property-mappings = v1OptionExchangeGroup.getx-property-mappings();
        System.assertEquals('assetIdBase', x-property-mappings.get('asset_id_base'));
        System.assertEquals('assetIdQuote', x-property-mappings.get('asset_id_quote'));
        System.assertEquals('underlyingPrice', x-property-mappings.get('underlying_price'));
        System.assertEquals('timeExpiration', x-property-mappings.get('time_expiration'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASV1OptionExchangeGroup v1OptionExchangeGroup = new OASV1OptionExchangeGroup();
        System.assertEquals(new List<OASV1Strike>(), v1OptionExchangeGroup.strikes);
        System.assertEquals(null, v1OptionExchangeGroup.assetIdBase);
        System.assertEquals(null, v1OptionExchangeGroup.assetIdQuote);
        System.assertEquals(null, v1OptionExchangeGroup.underlyingPrice);
        System.assertEquals(null, v1OptionExchangeGroup.timeExpiration);
    }
}
