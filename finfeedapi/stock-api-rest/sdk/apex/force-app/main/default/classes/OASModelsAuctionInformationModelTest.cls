@isTest
private class OASModelsAuctionInformationModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = modelsAuctionInformationModel1;
        OASModelsAuctionInformationModel modelsAuctionInformationModel3 = new OASModelsAuctionInformationModel();
        OASModelsAuctionInformationModel modelsAuctionInformationModel4 = modelsAuctionInformationModel3;

        System.assert(modelsAuctionInformationModel1.equals(modelsAuctionInformationModel2));
        System.assert(modelsAuctionInformationModel2.equals(modelsAuctionInformationModel1));
        System.assert(modelsAuctionInformationModel1.equals(modelsAuctionInformationModel1));
        System.assert(modelsAuctionInformationModel3.equals(modelsAuctionInformationModel4));
        System.assert(modelsAuctionInformationModel4.equals(modelsAuctionInformationModel3));
        System.assert(modelsAuctionInformationModel3.equals(modelsAuctionInformationModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel3 = new OASModelsAuctionInformationModel();
        OASModelsAuctionInformationModel modelsAuctionInformationModel4 = new OASModelsAuctionInformationModel();

        System.assert(modelsAuctionInformationModel1.equals(modelsAuctionInformationModel2));
        System.assert(modelsAuctionInformationModel2.equals(modelsAuctionInformationModel1));
        System.assert(modelsAuctionInformationModel3.equals(modelsAuctionInformationModel4));
        System.assert(modelsAuctionInformationModel4.equals(modelsAuctionInformationModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = new OASModelsAuctionInformationModel();

        System.assertEquals(false, modelsAuctionInformationModel1.equals('foo'));
        System.assertEquals(false, modelsAuctionInformationModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = new OASModelsAuctionInformationModel();
        OASModelsAuctionInformationModel modelsAuctionInformationModel3;

        System.assertEquals(false, modelsAuctionInformationModel1.equals(modelsAuctionInformationModel3));
        System.assertEquals(false, modelsAuctionInformationModel2.equals(modelsAuctionInformationModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = new OASModelsAuctionInformationModel();

        System.assertEquals(modelsAuctionInformationModel1.hashCode(), modelsAuctionInformationModel1.hashCode());
        System.assertEquals(modelsAuctionInformationModel2.hashCode(), modelsAuctionInformationModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel1 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel2 = OASModelsAuctionInformationModel.getExample();
        OASModelsAuctionInformationModel modelsAuctionInformationModel3 = new OASModelsAuctionInformationModel();
        OASModelsAuctionInformationModel modelsAuctionInformationModel4 = new OASModelsAuctionInformationModel();

        System.assert(modelsAuctionInformationModel1.equals(modelsAuctionInformationModel2));
        System.assert(modelsAuctionInformationModel3.equals(modelsAuctionInformationModel4));
        System.assertEquals(modelsAuctionInformationModel1.hashCode(), modelsAuctionInformationModel2.hashCode());
        System.assertEquals(modelsAuctionInformationModel3.hashCode(), modelsAuctionInformationModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsAuctionInformationModel modelsAuctionInformationModel = new OASModelsAuctionInformationModel();
        Map<String, String> x-property-mappings = modelsAuctionInformationModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('auctionType', x-property-mappings.get('auction_type'));
        System.assertEquals('auctionTypeCode', x-property-mappings.get('auction_type_code'));
        System.assertEquals('auctionTypeText', x-property-mappings.get('auction_type_text'));
        System.assertEquals('isAuctionTypeOpening', x-property-mappings.get('is_auction_type_opening'));
        System.assertEquals('isAuctionTypeClosing', x-property-mappings.get('is_auction_type_closing'));
        System.assertEquals('isAuctionTypeIpo', x-property-mappings.get('is_auction_type_ipo'));
        System.assertEquals('isAuctionTypeHalt', x-property-mappings.get('is_auction_type_halt'));
        System.assertEquals('isAuctionTypeVolatility', x-property-mappings.get('is_auction_type_volatility'));
        System.assertEquals('pairedShares', x-property-mappings.get('paired_shares'));
        System.assertEquals('referencePrice', x-property-mappings.get('reference_price'));
        System.assertEquals('indicativeClearingPrice', x-property-mappings.get('indicative_clearing_price'));
        System.assertEquals('imbalanceShares', x-property-mappings.get('imbalance_shares'));
        System.assertEquals('imbalanceSide', x-property-mappings.get('imbalance_side'));
        System.assertEquals('imbalanceSideCode', x-property-mappings.get('imbalance_side_code'));
        System.assertEquals('imbalanceSideText', x-property-mappings.get('imbalance_side_text'));
        System.assertEquals('isImbalanceSideBuy', x-property-mappings.get('is_imbalance_side_buy'));
        System.assertEquals('isImbalanceSideSell', x-property-mappings.get('is_imbalance_side_sell'));
        System.assertEquals('isImbalanceSideNone', x-property-mappings.get('is_imbalance_side_none'));
        System.assertEquals('extensionNumber', x-property-mappings.get('extension_number'));
        System.assertEquals('scheduledAuctionTimeSeconds', x-property-mappings.get('scheduled_auction_time_seconds'));
        System.assertEquals('scheduledAuctionTime', x-property-mappings.get('scheduled_auction_time'));
        System.assertEquals('auctionBookClearingPrice', x-property-mappings.get('auction_book_clearing_price'));
        System.assertEquals('collarReferencePrice', x-property-mappings.get('collar_reference_price'));
        System.assertEquals('lowerAuctionCollar', x-property-mappings.get('lower_auction_collar'));
        System.assertEquals('upperAuctionCollar', x-property-mappings.get('upper_auction_collar'));
    }
}
