@isTest
private class OASMarketDataMetadataSymbolTest {
    @isTest
    private static void equalsSameInstance() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = marketDataMetadataSymbol1;
        OASMarketDataMetadataSymbol marketDataMetadataSymbol3 = new OASMarketDataMetadataSymbol();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol4 = marketDataMetadataSymbol3;

        System.assert(marketDataMetadataSymbol1.equals(marketDataMetadataSymbol2));
        System.assert(marketDataMetadataSymbol2.equals(marketDataMetadataSymbol1));
        System.assert(marketDataMetadataSymbol1.equals(marketDataMetadataSymbol1));
        System.assert(marketDataMetadataSymbol3.equals(marketDataMetadataSymbol4));
        System.assert(marketDataMetadataSymbol4.equals(marketDataMetadataSymbol3));
        System.assert(marketDataMetadataSymbol3.equals(marketDataMetadataSymbol3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol3 = new OASMarketDataMetadataSymbol();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol4 = new OASMarketDataMetadataSymbol();

        System.assert(marketDataMetadataSymbol1.equals(marketDataMetadataSymbol2));
        System.assert(marketDataMetadataSymbol2.equals(marketDataMetadataSymbol1));
        System.assert(marketDataMetadataSymbol3.equals(marketDataMetadataSymbol4));
        System.assert(marketDataMetadataSymbol4.equals(marketDataMetadataSymbol3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = new OASMarketDataMetadataSymbol();

        System.assertEquals(false, marketDataMetadataSymbol1.equals('foo'));
        System.assertEquals(false, marketDataMetadataSymbol2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = new OASMarketDataMetadataSymbol();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol3;

        System.assertEquals(false, marketDataMetadataSymbol1.equals(marketDataMetadataSymbol3));
        System.assertEquals(false, marketDataMetadataSymbol2.equals(marketDataMetadataSymbol3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = new OASMarketDataMetadataSymbol();

        System.assertEquals(marketDataMetadataSymbol1.hashCode(), marketDataMetadataSymbol1.hashCode());
        System.assertEquals(marketDataMetadataSymbol2.hashCode(), marketDataMetadataSymbol2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol1 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol2 = OASMarketDataMetadataSymbol.getExample();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol3 = new OASMarketDataMetadataSymbol();
        OASMarketDataMetadataSymbol marketDataMetadataSymbol4 = new OASMarketDataMetadataSymbol();

        System.assert(marketDataMetadataSymbol1.equals(marketDataMetadataSymbol2));
        System.assert(marketDataMetadataSymbol3.equals(marketDataMetadataSymbol4));
        System.assertEquals(marketDataMetadataSymbol1.hashCode(), marketDataMetadataSymbol2.hashCode());
        System.assertEquals(marketDataMetadataSymbol3.hashCode(), marketDataMetadataSymbol4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol = new OASMarketDataMetadataSymbol();
        Map<String, String> x-property-mappings = marketDataMetadataSymbol.getx-property-mappings();
        System.assertEquals('symbolId', x-property-mappings.get('symbol_id'));
        System.assertEquals('exchangeId', x-property-mappings.get('exchange_id'));
        System.assertEquals('symbolType', x-property-mappings.get('symbol_type'));
        System.assertEquals('assetIdBase', x-property-mappings.get('asset_id_base'));
        System.assertEquals('assetIdQuote', x-property-mappings.get('asset_id_quote'));
        System.assertEquals('assetIdUnit', x-property-mappings.get('asset_id_unit'));
        System.assertEquals('futureContractUnit', x-property-mappings.get('future_contract_unit'));
        System.assertEquals('futureContractUnitAsset', x-property-mappings.get('future_contract_unit_asset'));
        System.assertEquals('futureDeliveryTime', x-property-mappings.get('future_delivery_time'));
        System.assertEquals('optionTypeIsCall', x-property-mappings.get('option_type_is_call'));
        System.assertEquals('optionStrikePrice', x-property-mappings.get('option_strike_price'));
        System.assertEquals('optionContractUnit', x-property-mappings.get('option_contract_unit'));
        System.assertEquals('optionExerciseStyle', x-property-mappings.get('option_exercise_style'));
        System.assertEquals('optionExpirationTime', x-property-mappings.get('option_expiration_time'));
        System.assertEquals('contractDeliveryTime', x-property-mappings.get('contract_delivery_time'));
        System.assertEquals('contractUnit', x-property-mappings.get('contract_unit'));
        System.assertEquals('contractUnitAsset', x-property-mappings.get('contract_unit_asset'));
        System.assertEquals('contractId', x-property-mappings.get('contract_id'));
        System.assertEquals('contractDisplayName', x-property-mappings.get('contract_display_name'));
        System.assertEquals('contractDisplayDescription', x-property-mappings.get('contract_display_description'));
        System.assertEquals('dataStart', x-property-mappings.get('data_start'));
        System.assertEquals('dataEnd', x-property-mappings.get('data_end'));
        System.assertEquals('dataQuoteStart', x-property-mappings.get('data_quote_start'));
        System.assertEquals('dataQuoteEnd', x-property-mappings.get('data_quote_end'));
        System.assertEquals('dataOrderbookStart', x-property-mappings.get('data_orderbook_start'));
        System.assertEquals('dataOrderbookEnd', x-property-mappings.get('data_orderbook_end'));
        System.assertEquals('dataTradeStart', x-property-mappings.get('data_trade_start'));
        System.assertEquals('dataTradeEnd', x-property-mappings.get('data_trade_end'));
        System.assertEquals('indexId', x-property-mappings.get('index_id'));
        System.assertEquals('indexDisplayName', x-property-mappings.get('index_display_name'));
        System.assertEquals('indexDisplayDescription', x-property-mappings.get('index_display_description'));
        System.assertEquals('volume1hrs', x-property-mappings.get('volume_1hrs'));
        System.assertEquals('volume1hrsUsd', x-property-mappings.get('volume_1hrs_usd'));
        System.assertEquals('volume1day', x-property-mappings.get('volume_1day'));
        System.assertEquals('volume1dayUsd', x-property-mappings.get('volume_1day_usd'));
        System.assertEquals('volume1mth', x-property-mappings.get('volume_1mth'));
        System.assertEquals('volume1mthUsd', x-property-mappings.get('volume_1mth_usd'));
        System.assertEquals('symbolIdExchange', x-property-mappings.get('symbol_id_exchange'));
        System.assertEquals('assetIdBaseExchange', x-property-mappings.get('asset_id_base_exchange'));
        System.assertEquals('assetIdQuoteExchange', x-property-mappings.get('asset_id_quote_exchange'));
        System.assertEquals('pricePrecision', x-property-mappings.get('price_precision'));
        System.assertEquals('sizePrecision', x-property-mappings.get('size_precision'));
        System.assertEquals('rawKvp', x-property-mappings.get('raw_kvp'));
        System.assertEquals('futureIsInverse', x-property-mappings.get('future_is_inverse'));
        System.assertEquals('futureIsQuanto', x-property-mappings.get('future_is_quanto'));
        System.assertEquals('volumeToUsd', x-property-mappings.get('volume_to_usd'));
        System.assertEquals('optionBarrierUpPrice', x-property-mappings.get('option_barrier_up_price'));
        System.assertEquals('optionBarrierUpType', x-property-mappings.get('option_barrier_up_type'));
        System.assertEquals('optionBarrierDownPrice', x-property-mappings.get('option_barrier_down_price'));
        System.assertEquals('optionBarrierDownType', x-property-mappings.get('option_barrier_down_type'));
        System.assertEquals('symbolIdInt', x-property-mappings.get('symbol_id_int'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASMarketDataMetadataSymbol marketDataMetadataSymbol = new OASMarketDataMetadataSymbol();
        System.assertEquals(new Map<String, String>(), marketDataMetadataSymbol.rawKvp);
        System.assertEquals(null, marketDataMetadataSymbol.symbolId);
        System.assertEquals(null, marketDataMetadataSymbol.exchangeId);
        System.assertEquals(null, marketDataMetadataSymbol.symbolType);
        System.assertEquals(null, marketDataMetadataSymbol.assetIdBase);
        System.assertEquals(null, marketDataMetadataSymbol.assetIdQuote);
        System.assertEquals(null, marketDataMetadataSymbol.assetIdUnit);
        System.assertEquals(null, marketDataMetadataSymbol.futureContractUnit);
        System.assertEquals(null, marketDataMetadataSymbol.futureContractUnitAsset);
        System.assertEquals(null, marketDataMetadataSymbol.futureDeliveryTime);
        System.assertEquals(null, marketDataMetadataSymbol.optionTypeIsCall);
        System.assertEquals(null, marketDataMetadataSymbol.optionStrikePrice);
        System.assertEquals(null, marketDataMetadataSymbol.optionContractUnit);
        System.assertEquals(null, marketDataMetadataSymbol.optionExerciseStyle);
        System.assertEquals(null, marketDataMetadataSymbol.optionExpirationTime);
        System.assertEquals(null, marketDataMetadataSymbol.contractDeliveryTime);
        System.assertEquals(null, marketDataMetadataSymbol.contractUnit);
        System.assertEquals(null, marketDataMetadataSymbol.contractUnitAsset);
        System.assertEquals(null, marketDataMetadataSymbol.contractId);
        System.assertEquals(null, marketDataMetadataSymbol.contractDisplayName);
        System.assertEquals(null, marketDataMetadataSymbol.contractDisplayDescription);
        System.assertEquals(null, marketDataMetadataSymbol.dataStart);
        System.assertEquals(null, marketDataMetadataSymbol.dataEnd);
        System.assertEquals(null, marketDataMetadataSymbol.dataQuoteStart);
        System.assertEquals(null, marketDataMetadataSymbol.dataQuoteEnd);
        System.assertEquals(null, marketDataMetadataSymbol.dataOrderbookStart);
        System.assertEquals(null, marketDataMetadataSymbol.dataOrderbookEnd);
        System.assertEquals(null, marketDataMetadataSymbol.dataTradeStart);
        System.assertEquals(null, marketDataMetadataSymbol.dataTradeEnd);
        System.assertEquals(null, marketDataMetadataSymbol.indexId);
        System.assertEquals(null, marketDataMetadataSymbol.indexDisplayName);
        System.assertEquals(null, marketDataMetadataSymbol.indexDisplayDescription);
        System.assertEquals(null, marketDataMetadataSymbol.volume1hrs);
        System.assertEquals(null, marketDataMetadataSymbol.volume1hrsUsd);
        System.assertEquals(null, marketDataMetadataSymbol.volume1day);
        System.assertEquals(null, marketDataMetadataSymbol.volume1dayUsd);
        System.assertEquals(null, marketDataMetadataSymbol.volume1mth);
        System.assertEquals(null, marketDataMetadataSymbol.volume1mthUsd);
        System.assertEquals(null, marketDataMetadataSymbol.price);
        System.assertEquals(null, marketDataMetadataSymbol.symbolIdExchange);
        System.assertEquals(null, marketDataMetadataSymbol.assetIdBaseExchange);
        System.assertEquals(null, marketDataMetadataSymbol.assetIdQuoteExchange);
        System.assertEquals(null, marketDataMetadataSymbol.pricePrecision);
        System.assertEquals(null, marketDataMetadataSymbol.sizePrecision);
        System.assertEquals(null, marketDataMetadataSymbol.futureIsInverse);
        System.assertEquals(null, marketDataMetadataSymbol.futureIsQuanto);
        System.assertEquals(null, marketDataMetadataSymbol.volumeToUsd);
        System.assertEquals(null, marketDataMetadataSymbol.optionBarrierUpPrice);
        System.assertEquals(null, marketDataMetadataSymbol.optionBarrierUpType);
        System.assertEquals(null, marketDataMetadataSymbol.optionBarrierDownPrice);
        System.assertEquals(null, marketDataMetadataSymbol.optionBarrierDownType);
        System.assertEquals(null, marketDataMetadataSymbol.symbolIdInt);
    }
}
