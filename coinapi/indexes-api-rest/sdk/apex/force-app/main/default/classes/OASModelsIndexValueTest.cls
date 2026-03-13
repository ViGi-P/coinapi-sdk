@isTest
private class OASModelsIndexValueTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = modelsIndexValue1;
        OASModelsIndexValue modelsIndexValue3 = new OASModelsIndexValue();
        OASModelsIndexValue modelsIndexValue4 = modelsIndexValue3;

        System.assert(modelsIndexValue1.equals(modelsIndexValue2));
        System.assert(modelsIndexValue2.equals(modelsIndexValue1));
        System.assert(modelsIndexValue1.equals(modelsIndexValue1));
        System.assert(modelsIndexValue3.equals(modelsIndexValue4));
        System.assert(modelsIndexValue4.equals(modelsIndexValue3));
        System.assert(modelsIndexValue3.equals(modelsIndexValue3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue3 = new OASModelsIndexValue();
        OASModelsIndexValue modelsIndexValue4 = new OASModelsIndexValue();

        System.assert(modelsIndexValue1.equals(modelsIndexValue2));
        System.assert(modelsIndexValue2.equals(modelsIndexValue1));
        System.assert(modelsIndexValue3.equals(modelsIndexValue4));
        System.assert(modelsIndexValue4.equals(modelsIndexValue3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = new OASModelsIndexValue();

        System.assertEquals(false, modelsIndexValue1.equals('foo'));
        System.assertEquals(false, modelsIndexValue2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = new OASModelsIndexValue();
        OASModelsIndexValue modelsIndexValue3;

        System.assertEquals(false, modelsIndexValue1.equals(modelsIndexValue3));
        System.assertEquals(false, modelsIndexValue2.equals(modelsIndexValue3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = new OASModelsIndexValue();

        System.assertEquals(modelsIndexValue1.hashCode(), modelsIndexValue1.hashCode());
        System.assertEquals(modelsIndexValue2.hashCode(), modelsIndexValue2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexValue modelsIndexValue1 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue2 = OASModelsIndexValue.getExample();
        OASModelsIndexValue modelsIndexValue3 = new OASModelsIndexValue();
        OASModelsIndexValue modelsIndexValue4 = new OASModelsIndexValue();

        System.assert(modelsIndexValue1.equals(modelsIndexValue2));
        System.assert(modelsIndexValue3.equals(modelsIndexValue4));
        System.assertEquals(modelsIndexValue1.hashCode(), modelsIndexValue2.hashCode());
        System.assertEquals(modelsIndexValue3.hashCode(), modelsIndexValue4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASModelsIndexValue modelsIndexValue = new OASModelsIndexValue();
        System.assertEquals(new List<OASModelsIndexValueComponent>(), modelsIndexValue.composition);
        System.assertEquals(null, modelsIndexValue.timestamp);
        System.assertEquals(null, modelsIndexValue.value);
    }
}
