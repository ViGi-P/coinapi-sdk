@isTest
private class OASModelsAdminMessageModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = modelsAdminMessageModel1;
        OASModelsAdminMessageModel modelsAdminMessageModel3 = new OASModelsAdminMessageModel();
        OASModelsAdminMessageModel modelsAdminMessageModel4 = modelsAdminMessageModel3;

        System.assert(modelsAdminMessageModel1.equals(modelsAdminMessageModel2));
        System.assert(modelsAdminMessageModel2.equals(modelsAdminMessageModel1));
        System.assert(modelsAdminMessageModel1.equals(modelsAdminMessageModel1));
        System.assert(modelsAdminMessageModel3.equals(modelsAdminMessageModel4));
        System.assert(modelsAdminMessageModel4.equals(modelsAdminMessageModel3));
        System.assert(modelsAdminMessageModel3.equals(modelsAdminMessageModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel3 = new OASModelsAdminMessageModel();
        OASModelsAdminMessageModel modelsAdminMessageModel4 = new OASModelsAdminMessageModel();

        System.assert(modelsAdminMessageModel1.equals(modelsAdminMessageModel2));
        System.assert(modelsAdminMessageModel2.equals(modelsAdminMessageModel1));
        System.assert(modelsAdminMessageModel3.equals(modelsAdminMessageModel4));
        System.assert(modelsAdminMessageModel4.equals(modelsAdminMessageModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = new OASModelsAdminMessageModel();

        System.assertEquals(false, modelsAdminMessageModel1.equals('foo'));
        System.assertEquals(false, modelsAdminMessageModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = new OASModelsAdminMessageModel();
        OASModelsAdminMessageModel modelsAdminMessageModel3;

        System.assertEquals(false, modelsAdminMessageModel1.equals(modelsAdminMessageModel3));
        System.assertEquals(false, modelsAdminMessageModel2.equals(modelsAdminMessageModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = new OASModelsAdminMessageModel();

        System.assertEquals(modelsAdminMessageModel1.hashCode(), modelsAdminMessageModel1.hashCode());
        System.assertEquals(modelsAdminMessageModel2.hashCode(), modelsAdminMessageModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsAdminMessageModel modelsAdminMessageModel1 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel2 = OASModelsAdminMessageModel.getExample();
        OASModelsAdminMessageModel modelsAdminMessageModel3 = new OASModelsAdminMessageModel();
        OASModelsAdminMessageModel modelsAdminMessageModel4 = new OASModelsAdminMessageModel();

        System.assert(modelsAdminMessageModel1.equals(modelsAdminMessageModel2));
        System.assert(modelsAdminMessageModel3.equals(modelsAdminMessageModel4));
        System.assertEquals(modelsAdminMessageModel1.hashCode(), modelsAdminMessageModel2.hashCode());
        System.assertEquals(modelsAdminMessageModel3.hashCode(), modelsAdminMessageModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsAdminMessageModel modelsAdminMessageModel = new OASModelsAdminMessageModel();
        Map<String, String> x-property-mappings = modelsAdminMessageModel.getx-property-mappings();
        System.assertEquals('tradingStatus', x-property-mappings.get('trading_status'));
        System.assertEquals('officialPrice', x-property-mappings.get('official_price'));
        System.assertEquals('securityEvent', x-property-mappings.get('security_event'));
        System.assertEquals('auctionInformation', x-property-mappings.get('auction_information'));
        System.assertEquals('shortSalePriceTest', x-property-mappings.get('short_sale_price_test'));
        System.assertEquals('operationalHaltStatus', x-property-mappings.get('operational_halt_status'));
        System.assertEquals('retailLiquidityIndicator', x-property-mappings.get('retail_liquidity_indicator'));
        System.assertEquals('systemEvent', x-property-mappings.get('system_event'));
        System.assertEquals('securityDirectory', x-property-mappings.get('security_directory'));
    }
}
