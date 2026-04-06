@isTest
private class OASModelsIndexDefinitionInputDataTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = modelsIndexDefinitionInputData1;
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData3 = new OASModelsIndexDefinitionInputData();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData4 = modelsIndexDefinitionInputData3;

        System.assert(modelsIndexDefinitionInputData1.equals(modelsIndexDefinitionInputData2));
        System.assert(modelsIndexDefinitionInputData2.equals(modelsIndexDefinitionInputData1));
        System.assert(modelsIndexDefinitionInputData1.equals(modelsIndexDefinitionInputData1));
        System.assert(modelsIndexDefinitionInputData3.equals(modelsIndexDefinitionInputData4));
        System.assert(modelsIndexDefinitionInputData4.equals(modelsIndexDefinitionInputData3));
        System.assert(modelsIndexDefinitionInputData3.equals(modelsIndexDefinitionInputData3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData3 = new OASModelsIndexDefinitionInputData();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData4 = new OASModelsIndexDefinitionInputData();

        System.assert(modelsIndexDefinitionInputData1.equals(modelsIndexDefinitionInputData2));
        System.assert(modelsIndexDefinitionInputData2.equals(modelsIndexDefinitionInputData1));
        System.assert(modelsIndexDefinitionInputData3.equals(modelsIndexDefinitionInputData4));
        System.assert(modelsIndexDefinitionInputData4.equals(modelsIndexDefinitionInputData3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = new OASModelsIndexDefinitionInputData();

        System.assertEquals(false, modelsIndexDefinitionInputData1.equals('foo'));
        System.assertEquals(false, modelsIndexDefinitionInputData2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = new OASModelsIndexDefinitionInputData();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData3;

        System.assertEquals(false, modelsIndexDefinitionInputData1.equals(modelsIndexDefinitionInputData3));
        System.assertEquals(false, modelsIndexDefinitionInputData2.equals(modelsIndexDefinitionInputData3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = new OASModelsIndexDefinitionInputData();

        System.assertEquals(modelsIndexDefinitionInputData1.hashCode(), modelsIndexDefinitionInputData1.hashCode());
        System.assertEquals(modelsIndexDefinitionInputData2.hashCode(), modelsIndexDefinitionInputData2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData1 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData2 = OASModelsIndexDefinitionInputData.getExample();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData3 = new OASModelsIndexDefinitionInputData();
        OASModelsIndexDefinitionInputData modelsIndexDefinitionInputData4 = new OASModelsIndexDefinitionInputData();

        System.assert(modelsIndexDefinitionInputData1.equals(modelsIndexDefinitionInputData2));
        System.assert(modelsIndexDefinitionInputData3.equals(modelsIndexDefinitionInputData4));
        System.assertEquals(modelsIndexDefinitionInputData1.hashCode(), modelsIndexDefinitionInputData2.hashCode());
        System.assertEquals(modelsIndexDefinitionInputData3.hashCode(), modelsIndexDefinitionInputData4.hashCode());
    }
}
