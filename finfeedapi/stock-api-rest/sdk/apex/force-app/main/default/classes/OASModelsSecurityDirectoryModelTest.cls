@isTest
private class OASModelsSecurityDirectoryModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = modelsSecurityDirectoryModel1;
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel3 = new OASModelsSecurityDirectoryModel();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel4 = modelsSecurityDirectoryModel3;

        System.assert(modelsSecurityDirectoryModel1.equals(modelsSecurityDirectoryModel2));
        System.assert(modelsSecurityDirectoryModel2.equals(modelsSecurityDirectoryModel1));
        System.assert(modelsSecurityDirectoryModel1.equals(modelsSecurityDirectoryModel1));
        System.assert(modelsSecurityDirectoryModel3.equals(modelsSecurityDirectoryModel4));
        System.assert(modelsSecurityDirectoryModel4.equals(modelsSecurityDirectoryModel3));
        System.assert(modelsSecurityDirectoryModel3.equals(modelsSecurityDirectoryModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel3 = new OASModelsSecurityDirectoryModel();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel4 = new OASModelsSecurityDirectoryModel();

        System.assert(modelsSecurityDirectoryModel1.equals(modelsSecurityDirectoryModel2));
        System.assert(modelsSecurityDirectoryModel2.equals(modelsSecurityDirectoryModel1));
        System.assert(modelsSecurityDirectoryModel3.equals(modelsSecurityDirectoryModel4));
        System.assert(modelsSecurityDirectoryModel4.equals(modelsSecurityDirectoryModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = new OASModelsSecurityDirectoryModel();

        System.assertEquals(false, modelsSecurityDirectoryModel1.equals('foo'));
        System.assertEquals(false, modelsSecurityDirectoryModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = new OASModelsSecurityDirectoryModel();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel3;

        System.assertEquals(false, modelsSecurityDirectoryModel1.equals(modelsSecurityDirectoryModel3));
        System.assertEquals(false, modelsSecurityDirectoryModel2.equals(modelsSecurityDirectoryModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = new OASModelsSecurityDirectoryModel();

        System.assertEquals(modelsSecurityDirectoryModel1.hashCode(), modelsSecurityDirectoryModel1.hashCode());
        System.assertEquals(modelsSecurityDirectoryModel2.hashCode(), modelsSecurityDirectoryModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel1 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel2 = OASModelsSecurityDirectoryModel.getExample();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel3 = new OASModelsSecurityDirectoryModel();
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel4 = new OASModelsSecurityDirectoryModel();

        System.assert(modelsSecurityDirectoryModel1.equals(modelsSecurityDirectoryModel2));
        System.assert(modelsSecurityDirectoryModel3.equals(modelsSecurityDirectoryModel4));
        System.assertEquals(modelsSecurityDirectoryModel1.hashCode(), modelsSecurityDirectoryModel2.hashCode());
        System.assertEquals(modelsSecurityDirectoryModel3.hashCode(), modelsSecurityDirectoryModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsSecurityDirectoryModel modelsSecurityDirectoryModel = new OASModelsSecurityDirectoryModel();
        Map<String, String> x-property-mappings = modelsSecurityDirectoryModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('roundLotSize', x-property-mappings.get('round_lot_size'));
        System.assertEquals('adjustedPocPrice', x-property-mappings.get('adjusted_poc_price'));
        System.assertEquals('luldTier', x-property-mappings.get('luld_tier'));
        System.assertEquals('luldTierCode', x-property-mappings.get('luld_tier_code'));
        System.assertEquals('luldTierText', x-property-mappings.get('luld_tier_text'));
        System.assertEquals('isLuldTierNotApplicable', x-property-mappings.get('is_luld_tier_not_applicable'));
        System.assertEquals('isLuldTier1', x-property-mappings.get('is_luld_tier1'));
        System.assertEquals('isLuldTier2', x-property-mappings.get('is_luld_tier2'));
    }
}
