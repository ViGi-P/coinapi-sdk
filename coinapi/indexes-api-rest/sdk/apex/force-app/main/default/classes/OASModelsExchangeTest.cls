@isTest
private class OASModelsExchangeTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = modelsExchange1;
        OASModelsExchange modelsExchange3 = new OASModelsExchange();
        OASModelsExchange modelsExchange4 = modelsExchange3;

        System.assert(modelsExchange1.equals(modelsExchange2));
        System.assert(modelsExchange2.equals(modelsExchange1));
        System.assert(modelsExchange1.equals(modelsExchange1));
        System.assert(modelsExchange3.equals(modelsExchange4));
        System.assert(modelsExchange4.equals(modelsExchange3));
        System.assert(modelsExchange3.equals(modelsExchange3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange3 = new OASModelsExchange();
        OASModelsExchange modelsExchange4 = new OASModelsExchange();

        System.assert(modelsExchange1.equals(modelsExchange2));
        System.assert(modelsExchange2.equals(modelsExchange1));
        System.assert(modelsExchange3.equals(modelsExchange4));
        System.assert(modelsExchange4.equals(modelsExchange3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = new OASModelsExchange();

        System.assertEquals(false, modelsExchange1.equals('foo'));
        System.assertEquals(false, modelsExchange2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = new OASModelsExchange();
        OASModelsExchange modelsExchange3;

        System.assertEquals(false, modelsExchange1.equals(modelsExchange3));
        System.assertEquals(false, modelsExchange2.equals(modelsExchange3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = new OASModelsExchange();

        System.assertEquals(modelsExchange1.hashCode(), modelsExchange1.hashCode());
        System.assertEquals(modelsExchange2.hashCode(), modelsExchange2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsExchange modelsExchange1 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange2 = OASModelsExchange.getExample();
        OASModelsExchange modelsExchange3 = new OASModelsExchange();
        OASModelsExchange modelsExchange4 = new OASModelsExchange();

        System.assert(modelsExchange1.equals(modelsExchange2));
        System.assert(modelsExchange3.equals(modelsExchange4));
        System.assertEquals(modelsExchange1.hashCode(), modelsExchange2.hashCode());
        System.assertEquals(modelsExchange3.hashCode(), modelsExchange4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsExchange modelsExchange = new OASModelsExchange();
        Map<String, String> x-property-mappings = modelsExchange.getx-property-mappings();
        System.assertEquals('exchangeId', x-property-mappings.get('exchange_id'));
    }
}
