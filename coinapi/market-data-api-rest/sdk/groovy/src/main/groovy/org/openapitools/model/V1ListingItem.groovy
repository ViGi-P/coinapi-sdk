package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1ListingItem {
    /* Gets or sets the metric ID. */
    String metricId
    /* Gets or sets the CoinAPI symbol ID. Null for exchange-level metrics. */
    String symbolId
    /* Gets or sets the exchange-native symbol ID. Null for exchange-level metrics. */
    String symbolIdExternal
    /* Gets or sets the exchange ID. */
    String exchangeId
    /* Gets or sets the asset ID. */
    String assetId
    /* Gets or sets the asset ID. */
    String assetIdExternal
    /* Gets or sets the chain ID. */
    String chainId
    /* Gets or sets the network ID. */
    String networkId
}
