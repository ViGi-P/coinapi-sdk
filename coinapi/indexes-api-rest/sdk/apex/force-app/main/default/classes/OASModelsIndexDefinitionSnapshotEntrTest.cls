@isTest
private class OASModelsIndexDefinitionSnapshotEntrTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = modelsIndexDefinitionSnapshotEntry1;
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry3 = new OASModelsIndexDefinitionSnapshotEntr();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry4 = modelsIndexDefinitionSnapshotEntry3;

        System.assert(modelsIndexDefinitionSnapshotEntry1.equals(modelsIndexDefinitionSnapshotEntry2));
        System.assert(modelsIndexDefinitionSnapshotEntry2.equals(modelsIndexDefinitionSnapshotEntry1));
        System.assert(modelsIndexDefinitionSnapshotEntry1.equals(modelsIndexDefinitionSnapshotEntry1));
        System.assert(modelsIndexDefinitionSnapshotEntry3.equals(modelsIndexDefinitionSnapshotEntry4));
        System.assert(modelsIndexDefinitionSnapshotEntry4.equals(modelsIndexDefinitionSnapshotEntry3));
        System.assert(modelsIndexDefinitionSnapshotEntry3.equals(modelsIndexDefinitionSnapshotEntry3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry3 = new OASModelsIndexDefinitionSnapshotEntr();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry4 = new OASModelsIndexDefinitionSnapshotEntr();

        System.assert(modelsIndexDefinitionSnapshotEntry1.equals(modelsIndexDefinitionSnapshotEntry2));
        System.assert(modelsIndexDefinitionSnapshotEntry2.equals(modelsIndexDefinitionSnapshotEntry1));
        System.assert(modelsIndexDefinitionSnapshotEntry3.equals(modelsIndexDefinitionSnapshotEntry4));
        System.assert(modelsIndexDefinitionSnapshotEntry4.equals(modelsIndexDefinitionSnapshotEntry3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = new OASModelsIndexDefinitionSnapshotEntr();

        System.assertEquals(false, modelsIndexDefinitionSnapshotEntry1.equals('foo'));
        System.assertEquals(false, modelsIndexDefinitionSnapshotEntry2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = new OASModelsIndexDefinitionSnapshotEntr();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry3;

        System.assertEquals(false, modelsIndexDefinitionSnapshotEntry1.equals(modelsIndexDefinitionSnapshotEntry3));
        System.assertEquals(false, modelsIndexDefinitionSnapshotEntry2.equals(modelsIndexDefinitionSnapshotEntry3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = new OASModelsIndexDefinitionSnapshotEntr();

        System.assertEquals(modelsIndexDefinitionSnapshotEntry1.hashCode(), modelsIndexDefinitionSnapshotEntry1.hashCode());
        System.assertEquals(modelsIndexDefinitionSnapshotEntry2.hashCode(), modelsIndexDefinitionSnapshotEntry2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry1 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry2 = OASModelsIndexDefinitionSnapshotEntr.getExample();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry3 = new OASModelsIndexDefinitionSnapshotEntr();
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry4 = new OASModelsIndexDefinitionSnapshotEntr();

        System.assert(modelsIndexDefinitionSnapshotEntry1.equals(modelsIndexDefinitionSnapshotEntry2));
        System.assert(modelsIndexDefinitionSnapshotEntry3.equals(modelsIndexDefinitionSnapshotEntry4));
        System.assertEquals(modelsIndexDefinitionSnapshotEntry1.hashCode(), modelsIndexDefinitionSnapshotEntry2.hashCode());
        System.assertEquals(modelsIndexDefinitionSnapshotEntry3.hashCode(), modelsIndexDefinitionSnapshotEntry4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsIndexDefinitionSnapshotEntr modelsIndexDefinitionSnapshotEntry = new OASModelsIndexDefinitionSnapshotEntr();
        Map<String, String> x-property-mappings = modelsIndexDefinitionSnapshotEntry.getx-property-mappings();
        System.assertEquals('indexId', x-property-mappings.get('index_id'));
    }
}
