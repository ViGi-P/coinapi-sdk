@isTest
private class OASModelsIndexMultiAssetWeightTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = modelsIndexMultiAssetWeight1;
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight3 = new OASModelsIndexMultiAssetWeight();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight4 = modelsIndexMultiAssetWeight3;

        System.assert(modelsIndexMultiAssetWeight1.equals(modelsIndexMultiAssetWeight2));
        System.assert(modelsIndexMultiAssetWeight2.equals(modelsIndexMultiAssetWeight1));
        System.assert(modelsIndexMultiAssetWeight1.equals(modelsIndexMultiAssetWeight1));
        System.assert(modelsIndexMultiAssetWeight3.equals(modelsIndexMultiAssetWeight4));
        System.assert(modelsIndexMultiAssetWeight4.equals(modelsIndexMultiAssetWeight3));
        System.assert(modelsIndexMultiAssetWeight3.equals(modelsIndexMultiAssetWeight3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight3 = new OASModelsIndexMultiAssetWeight();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight4 = new OASModelsIndexMultiAssetWeight();

        System.assert(modelsIndexMultiAssetWeight1.equals(modelsIndexMultiAssetWeight2));
        System.assert(modelsIndexMultiAssetWeight2.equals(modelsIndexMultiAssetWeight1));
        System.assert(modelsIndexMultiAssetWeight3.equals(modelsIndexMultiAssetWeight4));
        System.assert(modelsIndexMultiAssetWeight4.equals(modelsIndexMultiAssetWeight3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = new OASModelsIndexMultiAssetWeight();

        System.assertEquals(false, modelsIndexMultiAssetWeight1.equals('foo'));
        System.assertEquals(false, modelsIndexMultiAssetWeight2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = new OASModelsIndexMultiAssetWeight();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight3;

        System.assertEquals(false, modelsIndexMultiAssetWeight1.equals(modelsIndexMultiAssetWeight3));
        System.assertEquals(false, modelsIndexMultiAssetWeight2.equals(modelsIndexMultiAssetWeight3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = new OASModelsIndexMultiAssetWeight();

        System.assertEquals(modelsIndexMultiAssetWeight1.hashCode(), modelsIndexMultiAssetWeight1.hashCode());
        System.assertEquals(modelsIndexMultiAssetWeight2.hashCode(), modelsIndexMultiAssetWeight2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight1 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight2 = OASModelsIndexMultiAssetWeight.getExample();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight3 = new OASModelsIndexMultiAssetWeight();
        OASModelsIndexMultiAssetWeight modelsIndexMultiAssetWeight4 = new OASModelsIndexMultiAssetWeight();

        System.assert(modelsIndexMultiAssetWeight1.equals(modelsIndexMultiAssetWeight2));
        System.assert(modelsIndexMultiAssetWeight3.equals(modelsIndexMultiAssetWeight4));
        System.assertEquals(modelsIndexMultiAssetWeight1.hashCode(), modelsIndexMultiAssetWeight2.hashCode());
        System.assertEquals(modelsIndexMultiAssetWeight3.hashCode(), modelsIndexMultiAssetWeight4.hashCode());
    }
}
