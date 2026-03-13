@isTest
private class OASModelsIndexIdentifierTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = modelsIndexIdentifier1;
        OASModelsIndexIdentifier modelsIndexIdentifier3 = new OASModelsIndexIdentifier();
        OASModelsIndexIdentifier modelsIndexIdentifier4 = modelsIndexIdentifier3;

        System.assert(modelsIndexIdentifier1.equals(modelsIndexIdentifier2));
        System.assert(modelsIndexIdentifier2.equals(modelsIndexIdentifier1));
        System.assert(modelsIndexIdentifier1.equals(modelsIndexIdentifier1));
        System.assert(modelsIndexIdentifier3.equals(modelsIndexIdentifier4));
        System.assert(modelsIndexIdentifier4.equals(modelsIndexIdentifier3));
        System.assert(modelsIndexIdentifier3.equals(modelsIndexIdentifier3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier3 = new OASModelsIndexIdentifier();
        OASModelsIndexIdentifier modelsIndexIdentifier4 = new OASModelsIndexIdentifier();

        System.assert(modelsIndexIdentifier1.equals(modelsIndexIdentifier2));
        System.assert(modelsIndexIdentifier2.equals(modelsIndexIdentifier1));
        System.assert(modelsIndexIdentifier3.equals(modelsIndexIdentifier4));
        System.assert(modelsIndexIdentifier4.equals(modelsIndexIdentifier3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = new OASModelsIndexIdentifier();

        System.assertEquals(false, modelsIndexIdentifier1.equals('foo'));
        System.assertEquals(false, modelsIndexIdentifier2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = new OASModelsIndexIdentifier();
        OASModelsIndexIdentifier modelsIndexIdentifier3;

        System.assertEquals(false, modelsIndexIdentifier1.equals(modelsIndexIdentifier3));
        System.assertEquals(false, modelsIndexIdentifier2.equals(modelsIndexIdentifier3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = new OASModelsIndexIdentifier();

        System.assertEquals(modelsIndexIdentifier1.hashCode(), modelsIndexIdentifier1.hashCode());
        System.assertEquals(modelsIndexIdentifier2.hashCode(), modelsIndexIdentifier2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexIdentifier modelsIndexIdentifier1 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier2 = OASModelsIndexIdentifier.getExample();
        OASModelsIndexIdentifier modelsIndexIdentifier3 = new OASModelsIndexIdentifier();
        OASModelsIndexIdentifier modelsIndexIdentifier4 = new OASModelsIndexIdentifier();

        System.assert(modelsIndexIdentifier1.equals(modelsIndexIdentifier2));
        System.assert(modelsIndexIdentifier3.equals(modelsIndexIdentifier4));
        System.assertEquals(modelsIndexIdentifier1.hashCode(), modelsIndexIdentifier2.hashCode());
        System.assertEquals(modelsIndexIdentifier3.hashCode(), modelsIndexIdentifier4.hashCode());
    }
}
