package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.HashMap;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1Symbol {
    /* Gets or sets the symbol identifier. */
    String symbolId
    /* Gets or sets the exchange identifier. */
    String exchangeId
    /* Gets or sets the symbol type. */
    String symbolType
    /* Gets or sets the base asset identifier. */
    String assetIdBase
    /* Gets or sets the quote asset identifier. */
    String assetIdQuote
    /* Gets or sets the unit asset identifier. */
    String assetIdUnit
    /* Gets or sets the contract unit for futures. */
    Double futureContractUnit
    /* Gets or sets the asset used as the unit for futures contract. */
    String futureContractUnitAsset
    /* Gets or sets the future delivery time for futures contract. */
    Date futureDeliveryTime
    /* Gets or sets a value indicating whether the option type is a call. */
    Boolean optionTypeIsCall
    /* Gets or sets the strike price for options. */
    Double optionStrikePrice
    /* Gets or sets the contract unit for options. */
    Double optionContractUnit
    /* Gets or sets the exercise style for options. Possible values: AMERICAN, ASIAN, BARRIER, BERMUDAN, BINARY, EUROPEAN, EXOTIC. */
    String optionExerciseStyle
    /* Gets or sets the expiration time for options. */
    Date optionExpirationTime
    /* Gets or sets the delivery time for contracts. */
    Date contractDeliveryTime
    /* Gets or sets the contract unit for contracts. */
    Double contractUnit
    /* Gets or sets the asset used as the unit for contracts. */
    String contractUnitAsset
    /* Gets or sets the contract identifier. */
    String contractId
    /* Gets or sets the display name of the contract. */
    String contractDisplayName
    /* Gets or sets the display description of the contract. */
    String contractDisplayDescription
    /* Gets the start date of the data in string format (\"yyyy-MM-dd\"). */
    String dataStart
    /* Gets the end date of the data in string format (\"yyyy-MM-dd\"). */
    String dataEnd
    /* Gets or sets the start date of quote data. */
    Date dataQuoteStart
    /* Gets or sets the end date of quote data. */
    Date dataQuoteEnd
    /* Gets or sets the start date of order book data. */
    Date dataOrderbookStart
    /* Gets or sets the end date of order book data. */
    Date dataOrderbookEnd
    /* Gets or sets the start date of trade data. */
    Date dataTradeStart
    /* Gets or sets the end date of trade data. */
    Date dataTradeEnd
    /* Gets or sets the index identifier. */
    String indexId
    /* Gets or sets the display name of the index. */
    String indexDisplayName
    /* Gets or sets the display description of the index. */
    String indexDisplayDescription
    /* Gets or sets the volume in the last 1 hour. */
    Double volume1hrs
    /* Gets or sets the volume in USD in the last 1 hour. */
    Double volume1hrsUsd
    /* Gets or sets the volume in the last 1 day. */
    Double volume1day
    /* Gets or sets the volume in USD in the last 1 day. */
    Double volume1dayUsd
    /* Gets or sets the volume in the last 1 month. */
    Double volume1mth
    /* Gets or sets the volume in USD in the last 1 month. */
    Double volume1mthUsd
    /* Gets or sets the price. */
    Double price
    /* Gets or sets the symbol identifier in the exchange. */
    String symbolIdExchange
    /* Gets or sets the base asset identifier in the exchange. */
    String assetIdBaseExchange
    /* Gets or sets the quote asset identifier in the exchange. */
    String assetIdQuoteExchange
    /* Gets or sets the price precision. */
    Double pricePrecision
    /* Gets or sets the size precision. */
    Double sizePrecision
    /* Key Value Pair store with raw data from the data source. */
    Map<String, String> rawKvp
    /* Gets or sets a value indicating whether the futures contract is inverse (coin-margined). */
    Boolean futureIsInverse
    /* Gets or sets a value indicating whether the futures contract is quanto. */
    Boolean futureIsQuanto
    /* Gets or sets the volume in USD. */
    Double volumeToUsd
    /* Gets or sets the up barrier price for barrier options. */
    Double optionBarrierUpPrice
    /* Gets or sets the up barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. */
    String optionBarrierUpType
    /* Gets or sets the down barrier price for barrier options. */
    Double optionBarrierDownPrice
    /* Gets or sets the down barrier type for barrier options. Possible values: EXPIRATION, IN, OUT. */
    String optionBarrierDownType
    /* Gets or sets the symbol identifier in integer immutable format, used to correlate data across different APIs. */
    Integer symbolIdInt
}
