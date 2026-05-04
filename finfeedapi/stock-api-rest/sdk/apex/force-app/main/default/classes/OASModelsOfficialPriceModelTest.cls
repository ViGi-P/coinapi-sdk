@isTest
private class OASModelsOfficialPriceModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = modelsOfficialPriceModel1;
        OASModelsOfficialPriceModel modelsOfficialPriceModel3 = new OASModelsOfficialPriceModel();
        OASModelsOfficialPriceModel modelsOfficialPriceModel4 = modelsOfficialPriceModel3;

        System.assert(modelsOfficialPriceModel1.equals(modelsOfficialPriceModel2));
        System.assert(modelsOfficialPriceModel2.equals(modelsOfficialPriceModel1));
        System.assert(modelsOfficialPriceModel1.equals(modelsOfficialPriceModel1));
        System.assert(modelsOfficialPriceModel3.equals(modelsOfficialPriceModel4));
        System.assert(modelsOfficialPriceModel4.equals(modelsOfficialPriceModel3));
        System.assert(modelsOfficialPriceModel3.equals(modelsOfficialPriceModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel3 = new OASModelsOfficialPriceModel();
        OASModelsOfficialPriceModel modelsOfficialPriceModel4 = new OASModelsOfficialPriceModel();

        System.assert(modelsOfficialPriceModel1.equals(modelsOfficialPriceModel2));
        System.assert(modelsOfficialPriceModel2.equals(modelsOfficialPriceModel1));
        System.assert(modelsOfficialPriceModel3.equals(modelsOfficialPriceModel4));
        System.assert(modelsOfficialPriceModel4.equals(modelsOfficialPriceModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = new OASModelsOfficialPriceModel();

        System.assertEquals(false, modelsOfficialPriceModel1.equals('foo'));
        System.assertEquals(false, modelsOfficialPriceModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = new OASModelsOfficialPriceModel();
        OASModelsOfficialPriceModel modelsOfficialPriceModel3;

        System.assertEquals(false, modelsOfficialPriceModel1.equals(modelsOfficialPriceModel3));
        System.assertEquals(false, modelsOfficialPriceModel2.equals(modelsOfficialPriceModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = new OASModelsOfficialPriceModel();

        System.assertEquals(modelsOfficialPriceModel1.hashCode(), modelsOfficialPriceModel1.hashCode());
        System.assertEquals(modelsOfficialPriceModel2.hashCode(), modelsOfficialPriceModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel1 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel2 = OASModelsOfficialPriceModel.getExample();
        OASModelsOfficialPriceModel modelsOfficialPriceModel3 = new OASModelsOfficialPriceModel();
        OASModelsOfficialPriceModel modelsOfficialPriceModel4 = new OASModelsOfficialPriceModel();

        System.assert(modelsOfficialPriceModel1.equals(modelsOfficialPriceModel2));
        System.assert(modelsOfficialPriceModel3.equals(modelsOfficialPriceModel4));
        System.assertEquals(modelsOfficialPriceModel1.hashCode(), modelsOfficialPriceModel2.hashCode());
        System.assertEquals(modelsOfficialPriceModel3.hashCode(), modelsOfficialPriceModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsOfficialPriceModel modelsOfficialPriceModel = new OASModelsOfficialPriceModel();
        Map<String, String> x-property-mappings = modelsOfficialPriceModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('priceType', x-property-mappings.get('price_type'));
        System.assertEquals('priceTypeCode', x-property-mappings.get('price_type_code'));
        System.assertEquals('priceTypeText', x-property-mappings.get('price_type_text'));
        System.assertEquals('isPriceTypeOpening', x-property-mappings.get('is_price_type_opening'));
        System.assertEquals('isPriceTypeClosing', x-property-mappings.get('is_price_type_closing'));
        System.assertEquals('officialPrice', x-property-mappings.get('official_price'));
    }
}
