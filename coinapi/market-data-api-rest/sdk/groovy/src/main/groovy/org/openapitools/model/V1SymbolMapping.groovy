package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1SymbolMapping {
    /* Gets or sets the symbol ID. */
    String symbolId
    /* Gets or sets the exchange-specific symbol ID. */
    String symbolIdExchange
    /* Gets or sets the DataInfo ID. */
    Integer coinapiDatainfoId
    /* Gets or sets the exchange-specific base asset ID. */
    String assetIdBaseExchange
    /* Gets or sets the exchange-specific quote asset ID. */
    String assetIdQuoteExchange
    /* Gets or sets the base asset ID. */
    String assetIdBase
    /* Gets or sets the quote asset ID. */
    String assetIdQuote
    /* Gets or sets the price precision. */
    Double pricePrecision
    /* Gets or sets the size precision. */
    Double sizePrecision
}
