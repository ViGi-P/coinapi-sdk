@isTest
private class OASModelsTradingStatusModelTest {
    @isTest
    private static void equalsSameInstance() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = modelsTradingStatusModel1;
        OASModelsTradingStatusModel modelsTradingStatusModel3 = new OASModelsTradingStatusModel();
        OASModelsTradingStatusModel modelsTradingStatusModel4 = modelsTradingStatusModel3;

        System.assert(modelsTradingStatusModel1.equals(modelsTradingStatusModel2));
        System.assert(modelsTradingStatusModel2.equals(modelsTradingStatusModel1));
        System.assert(modelsTradingStatusModel1.equals(modelsTradingStatusModel1));
        System.assert(modelsTradingStatusModel3.equals(modelsTradingStatusModel4));
        System.assert(modelsTradingStatusModel4.equals(modelsTradingStatusModel3));
        System.assert(modelsTradingStatusModel3.equals(modelsTradingStatusModel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel3 = new OASModelsTradingStatusModel();
        OASModelsTradingStatusModel modelsTradingStatusModel4 = new OASModelsTradingStatusModel();

        System.assert(modelsTradingStatusModel1.equals(modelsTradingStatusModel2));
        System.assert(modelsTradingStatusModel2.equals(modelsTradingStatusModel1));
        System.assert(modelsTradingStatusModel3.equals(modelsTradingStatusModel4));
        System.assert(modelsTradingStatusModel4.equals(modelsTradingStatusModel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = new OASModelsTradingStatusModel();

        System.assertEquals(false, modelsTradingStatusModel1.equals('foo'));
        System.assertEquals(false, modelsTradingStatusModel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = new OASModelsTradingStatusModel();
        OASModelsTradingStatusModel modelsTradingStatusModel3;

        System.assertEquals(false, modelsTradingStatusModel1.equals(modelsTradingStatusModel3));
        System.assertEquals(false, modelsTradingStatusModel2.equals(modelsTradingStatusModel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = new OASModelsTradingStatusModel();

        System.assertEquals(modelsTradingStatusModel1.hashCode(), modelsTradingStatusModel1.hashCode());
        System.assertEquals(modelsTradingStatusModel2.hashCode(), modelsTradingStatusModel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASModelsTradingStatusModel modelsTradingStatusModel1 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel2 = OASModelsTradingStatusModel.getExample();
        OASModelsTradingStatusModel modelsTradingStatusModel3 = new OASModelsTradingStatusModel();
        OASModelsTradingStatusModel modelsTradingStatusModel4 = new OASModelsTradingStatusModel();

        System.assert(modelsTradingStatusModel1.equals(modelsTradingStatusModel2));
        System.assert(modelsTradingStatusModel3.equals(modelsTradingStatusModel4));
        System.assertEquals(modelsTradingStatusModel1.hashCode(), modelsTradingStatusModel2.hashCode());
        System.assertEquals(modelsTradingStatusModel3.hashCode(), modelsTradingStatusModel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASModelsTradingStatusModel modelsTradingStatusModel = new OASModelsTradingStatusModel();
        Map<String, String> x-property-mappings = modelsTradingStatusModel.getx-property-mappings();
        System.assertEquals('timestampNanos', x-property-mappings.get('timestamp_nanos'));
        System.assertEquals('isTradingLive', x-property-mappings.get('is_trading_live'));
        System.assertEquals('isTradingHalted', x-property-mappings.get('is_trading_halted'));
        System.assertEquals('isTradingInOrderAcceptancePeriod', x-property-mappings.get('is_trading_in_order_acceptance_period'));
        System.assertEquals('isTradingPaused', x-property-mappings.get('is_trading_paused'));
        System.assertEquals('isReasonHaltNewsPending', x-property-mappings.get('is_reason_halt_news_pending'));
        System.assertEquals('isReasonIpoNotYetTrading', x-property-mappings.get('is_reason_ipo_not_yet_trading'));
        System.assertEquals('isReasonIpoDeferred', x-property-mappings.get('is_reason_ipo_deferred'));
        System.assertEquals('isReasonHaltNewsDissemination', x-property-mappings.get('is_reason_halt_news_dissemination'));
        System.assertEquals('isReasonIpoOrderAcceptancePeriod', x-property-mappings.get('is_reason_ipo_order_acceptance_period'));
        System.assertEquals('isReasonIpoPreLaunchPeriod', x-property-mappings.get('is_reason_ipo_pre_launch_period'));
        System.assertEquals('isReasonMarketWideCircuitBreakerLevel1', x-property-mappings.get('is_reason_market_wide_circuit_breaker_level1'));
        System.assertEquals('isReasonMarketWideCircuitBreakerLevel2', x-property-mappings.get('is_reason_market_wide_circuit_breaker_level2'));
        System.assertEquals('isReasonMarketWideCircuitBreakerLevel3', x-property-mappings.get('is_reason_market_wide_circuit_breaker_level3'));
        System.assertEquals('isReasonNotApplicable', x-property-mappings.get('is_reason_not_applicable'));
        System.assertEquals('isReasonNotAvailable', x-property-mappings.get('is_reason_not_available'));
    }
}
