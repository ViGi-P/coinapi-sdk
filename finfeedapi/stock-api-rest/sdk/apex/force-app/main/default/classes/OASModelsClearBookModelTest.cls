@isTest
private class OASModelsClearBookModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = modelsClearBookModel1;
        OASModelsClearBookModel modelsClearBookModel3 = new OASModelsClearBookModel();
        OASModelsClearBookModel modelsClearBookModel4 = modelsClearBookModel3;

        System.assert(modelsClearBookModel1.equals(modelsClearBookModel2));
        System.assert(modelsClearBookModel2.equals(modelsClearBookModel1));
        System.assert(modelsClearBookModel1.equals(modelsClearBookModel1));
        System.assert(modelsClearBookModel3.equals(modelsClearBookModel4));
        System.assert(modelsClearBookModel4.equals(modelsClearBookModel3));
        System.assert(modelsClearBookModel3.equals(modelsClearBookModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel3 = new OASModelsClearBookModel();
        OASModelsClearBookModel modelsClearBookModel4 = new OASModelsClearBookModel();

        System.assert(modelsClearBookModel1.equals(modelsClearBookModel2));
        System.assert(modelsClearBookModel2.equals(modelsClearBookModel1));
        System.assert(modelsClearBookModel3.equals(modelsClearBookModel4));
        System.assert(modelsClearBookModel4.equals(modelsClearBookModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = new OASModelsClearBookModel();

        System.assertEquals(false, modelsClearBookModel1.equals('foo'));
        System.assertEquals(false, modelsClearBookModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = new OASModelsClearBookModel();
        OASModelsClearBookModel modelsClearBookModel3;

        System.assertEquals(false, modelsClearBookModel1.equals(modelsClearBookModel3));
        System.assertEquals(false, modelsClearBookModel2.equals(modelsClearBookModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = new OASModelsClearBookModel();

        System.assertEquals(modelsClearBookModel1.hashCode(), modelsClearBookModel1.hashCode());
        System.assertEquals(modelsClearBookModel2.hashCode(), modelsClearBookModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsClearBookModel modelsClearBookModel1 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel2 = OASModelsClearBookModel.getExample();
        OASModelsClearBookModel modelsClearBookModel3 = new OASModelsClearBookModel();
        OASModelsClearBookModel modelsClearBookModel4 = new OASModelsClearBookModel();

        System.assert(modelsClearBookModel1.equals(modelsClearBookModel2));
        System.assert(modelsClearBookModel3.equals(modelsClearBookModel4));
        System.assertEquals(modelsClearBookModel1.hashCode(), modelsClearBookModel2.hashCode());
        System.assertEquals(modelsClearBookModel3.hashCode(), modelsClearBookModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsClearBookModel modelsClearBookModel = new OASModelsClearBookModel();
        Map<String, String> x-property-mappings = modelsClearBookModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
    }
}
