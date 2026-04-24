package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.V1LastTrade;

@Canonical
class V1QuoteTrade {
    /* Gets or sets the symbol identifier. */
    String symbolId
    /* Gets or sets the exchange time of the quote trade. */
    Date timeExchange
    /* Gets or sets the CoinAPI time when the quote trade was received. */
    Date timeCoinapi
    /* Gets or sets the best asking price. */
    Double askPrice
    /* Gets or sets the volume resting on the best ask. If the value is equal to zero, then the size is unknown. */
    Double askSize
    /* Gets or sets the best bidding price. */
    Double bidPrice
    /* Gets or sets the volume resting on the best bid. If the value is equal to zero, then the size is unknown. */
    Double bidSize
    
    V1LastTrade lastTrade
}
