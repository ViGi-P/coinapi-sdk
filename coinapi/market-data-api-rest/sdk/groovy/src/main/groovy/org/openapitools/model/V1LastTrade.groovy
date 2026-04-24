package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.UUID;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1LastTrade {
    /* Gets or sets the exchange time of the last trade. */
    Date timeExchange
    /* Gets or sets the CoinAPI time when the last trade was received. */
    Date timeCoinapi
    /* Gets or sets the UUID of the last trade. */
    UUID uuid
    /* Gets or sets the price of the last trade. */
    Double price
    /* Gets or sets the size of the last trade. */
    Double size
    /* Gets or sets the taker side of the last trade. */
    String takerSide
}
