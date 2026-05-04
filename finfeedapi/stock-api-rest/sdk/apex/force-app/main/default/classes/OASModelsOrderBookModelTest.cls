@isTest
private class OASModelsOrderBookModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = modelsOrderBookModel1;
        OASModelsOrderBookModel modelsOrderBookModel3 = new OASModelsOrderBookModel();
        OASModelsOrderBookModel modelsOrderBookModel4 = modelsOrderBookModel3;

        System.assert(modelsOrderBookModel1.equals(modelsOrderBookModel2));
        System.assert(modelsOrderBookModel2.equals(modelsOrderBookModel1));
        System.assert(modelsOrderBookModel1.equals(modelsOrderBookModel1));
        System.assert(modelsOrderBookModel3.equals(modelsOrderBookModel4));
        System.assert(modelsOrderBookModel4.equals(modelsOrderBookModel3));
        System.assert(modelsOrderBookModel3.equals(modelsOrderBookModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel3 = new OASModelsOrderBookModel();
        OASModelsOrderBookModel modelsOrderBookModel4 = new OASModelsOrderBookModel();

        System.assert(modelsOrderBookModel1.equals(modelsOrderBookModel2));
        System.assert(modelsOrderBookModel2.equals(modelsOrderBookModel1));
        System.assert(modelsOrderBookModel3.equals(modelsOrderBookModel4));
        System.assert(modelsOrderBookModel4.equals(modelsOrderBookModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = new OASModelsOrderBookModel();

        System.assertEquals(false, modelsOrderBookModel1.equals('foo'));
        System.assertEquals(false, modelsOrderBookModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = new OASModelsOrderBookModel();
        OASModelsOrderBookModel modelsOrderBookModel3;

        System.assertEquals(false, modelsOrderBookModel1.equals(modelsOrderBookModel3));
        System.assertEquals(false, modelsOrderBookModel2.equals(modelsOrderBookModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = new OASModelsOrderBookModel();

        System.assertEquals(modelsOrderBookModel1.hashCode(), modelsOrderBookModel1.hashCode());
        System.assertEquals(modelsOrderBookModel2.hashCode(), modelsOrderBookModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsOrderBookModel modelsOrderBookModel1 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel2 = OASModelsOrderBookModel.getExample();
        OASModelsOrderBookModel modelsOrderBookModel3 = new OASModelsOrderBookModel();
        OASModelsOrderBookModel modelsOrderBookModel4 = new OASModelsOrderBookModel();

        System.assert(modelsOrderBookModel1.equals(modelsOrderBookModel2));
        System.assert(modelsOrderBookModel3.equals(modelsOrderBookModel4));
        System.assertEquals(modelsOrderBookModel1.hashCode(), modelsOrderBookModel2.hashCode());
        System.assertEquals(modelsOrderBookModel3.hashCode(), modelsOrderBookModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsOrderBookModel modelsOrderBookModel = new OASModelsOrderBookModel();
        Map<String, String> x-property-mappings = modelsOrderBookModel.getx-property-mappings();
        System.assertEquals('addOrder', x-property-mappings.get('add_order'));
        System.assertEquals('deleteOrder', x-property-mappings.get('delete_order'));
        System.assertEquals('modifyOrder', x-property-mappings.get('modify_order'));
        System.assertEquals('executedOrder', x-property-mappings.get('executed_order'));
        System.assertEquals('clearBook', x-property-mappings.get('clear_book'));
    }
}
