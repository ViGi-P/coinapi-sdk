@isTest
private class OASModelsIndexValueComponentTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = modelsIndexValueComponent1;
        OASModelsIndexValueComponent modelsIndexValueComponent3 = new OASModelsIndexValueComponent();
        OASModelsIndexValueComponent modelsIndexValueComponent4 = modelsIndexValueComponent3;

        System.assert(modelsIndexValueComponent1.equals(modelsIndexValueComponent2));
        System.assert(modelsIndexValueComponent2.equals(modelsIndexValueComponent1));
        System.assert(modelsIndexValueComponent1.equals(modelsIndexValueComponent1));
        System.assert(modelsIndexValueComponent3.equals(modelsIndexValueComponent4));
        System.assert(modelsIndexValueComponent4.equals(modelsIndexValueComponent3));
        System.assert(modelsIndexValueComponent3.equals(modelsIndexValueComponent3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent3 = new OASModelsIndexValueComponent();
        OASModelsIndexValueComponent modelsIndexValueComponent4 = new OASModelsIndexValueComponent();

        System.assert(modelsIndexValueComponent1.equals(modelsIndexValueComponent2));
        System.assert(modelsIndexValueComponent2.equals(modelsIndexValueComponent1));
        System.assert(modelsIndexValueComponent3.equals(modelsIndexValueComponent4));
        System.assert(modelsIndexValueComponent4.equals(modelsIndexValueComponent3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = new OASModelsIndexValueComponent();

        System.assertEquals(false, modelsIndexValueComponent1.equals('foo'));
        System.assertEquals(false, modelsIndexValueComponent2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = new OASModelsIndexValueComponent();
        OASModelsIndexValueComponent modelsIndexValueComponent3;

        System.assertEquals(false, modelsIndexValueComponent1.equals(modelsIndexValueComponent3));
        System.assertEquals(false, modelsIndexValueComponent2.equals(modelsIndexValueComponent3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = new OASModelsIndexValueComponent();

        System.assertEquals(modelsIndexValueComponent1.hashCode(), modelsIndexValueComponent1.hashCode());
        System.assertEquals(modelsIndexValueComponent2.hashCode(), modelsIndexValueComponent2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsIndexValueComponent modelsIndexValueComponent1 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent2 = OASModelsIndexValueComponent.getExample();
        OASModelsIndexValueComponent modelsIndexValueComponent3 = new OASModelsIndexValueComponent();
        OASModelsIndexValueComponent modelsIndexValueComponent4 = new OASModelsIndexValueComponent();

        System.assert(modelsIndexValueComponent1.equals(modelsIndexValueComponent2));
        System.assert(modelsIndexValueComponent3.equals(modelsIndexValueComponent4));
        System.assertEquals(modelsIndexValueComponent1.hashCode(), modelsIndexValueComponent2.hashCode());
        System.assertEquals(modelsIndexValueComponent3.hashCode(), modelsIndexValueComponent4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsIndexValueComponent modelsIndexValueComponent = new OASModelsIndexValueComponent();
        Map<String, String> x-property-mappings = modelsIndexValueComponent.getx-property-mappings();
        System.assertEquals('componentId', x-property-mappings.get('component_id'));
        System.assertEquals('componentValue', x-property-mappings.get('component_value'));
    }
}
