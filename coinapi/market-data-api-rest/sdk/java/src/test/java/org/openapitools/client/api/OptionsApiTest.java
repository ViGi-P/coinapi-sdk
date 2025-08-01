/*
 * CoinAPI Market Data REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.OptionsOptionExchangeGroup;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OptionsApi
 */
@Disabled
public class OptionsApiTest {

    private final OptionsApi api = new OptionsApi();

    /**
     * Current data by Exchange
     *
     * Get current options data for a specific exchange.  Returns option data grouped by underlying asset, quote currency, and expiration time, with quotes for both calls and puts at each strike price.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1OptionsExchangeIdCurrentGetTest() throws ApiException {
        String exchangeId = null;
        List<OptionsOptionExchangeGroup> response = api.v1OptionsExchangeIdCurrentGet(exchangeId);
        // TODO: test validations
    }

}
