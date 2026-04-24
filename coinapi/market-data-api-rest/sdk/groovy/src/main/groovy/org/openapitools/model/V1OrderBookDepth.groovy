package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1OrderBookDepth {
    /* Gets or sets the symbol identifier. */
    String symbolId
    /* Gets or sets the exchange time of the order book. */
    Date timeExchange
    /* Gets or sets the CoinAPI time when the order book was received. */
    Date timeCoinapi
    /* Gets or sets the number of ask levels in the order book. */
    Long askLevels
    /* Gets or sets the number of bid levels in the order book. */
    Long bidLevels
    /* Gets or sets the depth of the ask side of the order book. */
    Double askDepth
    /* Gets or sets the depth of the bid side of the order book. */
    Double bidDepth
}
