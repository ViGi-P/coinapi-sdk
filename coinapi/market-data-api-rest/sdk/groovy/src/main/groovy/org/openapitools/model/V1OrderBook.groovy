package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1OrderBook {
    /* Gets or sets the symbol identifier. */
    String symbolId
    /* Gets or sets the exchange time of the order book. */
    Date timeExchange
    /* Gets or sets the CoinAPI time when the order book was received. */
    Date timeCoinapi
    /* Gets or sets the asks made by market makers. */
    Object asks = null
    /* Gets or sets the bids made by market makers. */
    Object bids = null
}
