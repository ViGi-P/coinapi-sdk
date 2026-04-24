package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.V1Strike;

@Canonical
class V1OptionExchangeGroup {
    /* Gets or sets the base asset identifier. */
    String assetIdBase
    /* Gets or sets the quote asset identifier. */
    String assetIdQuote
    /* Gets or sets the underlying price of the option. */
    Double underlyingPrice
    /* Gets or sets the expiration time of the option. */
    Date timeExpiration
    /* Gets or sets the list of strikes available. */
    List<V1Strike> strikes
}
