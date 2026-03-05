package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class V1ListingItem {
    /* Gets or sets the metric ID. */
    String metricId
    /* The CoinAPI symbol identifier. Null for exchange-level metrics that are not associated with a specific symbol. */
    String symbolId
    /* The exchange-native symbol identifier. Null for exchange-level metrics. */
    String symbolIdExternal
    /* Gets or sets the exchange ID. */
    String exchangeId
    /* Gets or sets the asset ID. */
    String assetId
    /* Gets or sets the asset ID from the exchange. */
    String assetIdExternal
    /* Gets or sets the chain id. */
    String chainId
    /* Gets or sets the network id. */
    String networkId
}
