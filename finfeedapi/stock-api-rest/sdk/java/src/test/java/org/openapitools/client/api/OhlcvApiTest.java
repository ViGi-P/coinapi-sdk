/*
 * FinFeedAPI Stock REST API
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
import org.openapitools.client.model.OHLCVExchangeTimeseriesItem;
import org.openapitools.client.model.OHLCVTimeseriesItem;
import org.openapitools.client.model.OHLCVTimeseriesPeriod;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OhlcvApi
 */
@Disabled
public class OhlcvApiTest {

    private final OhlcvApi api = new OhlcvApi();

    /**
     * Historical data by exchange
     *
     * Get OHLCV timeseries data returned in time ascending order. Data can be requested by the period and for the specific exchange.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1OhlcvExchangeExchangeIdHistoryGetTest() throws ApiException {
        String exchangeId = null;
        String periodId = null;
        String timeStart = null;
        String timeEnd = null;
        List<OHLCVExchangeTimeseriesItem> response = api.v1OhlcvExchangeExchangeIdHistoryGet(exchangeId, periodId, timeStart, timeEnd);
        // TODO: test validations
    }

    /**
     * Historical data
     *
     * Get OHLCV timeseries data returned in time ascending order.
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGetTest() throws ApiException {
        String exchangeId = null;
        String symbolId = null;
        String periodId = null;
        String timeStart = null;
        String timeEnd = null;
        Integer limit = null;
        List<OHLCVTimeseriesItem> response = api.v1OhlcvExchangeSymbolExchangeIdSymbolIdHistoryGet(exchangeId, symbolId, periodId, timeStart, timeEnd, limit);
        // TODO: test validations
    }

    /**
     * Latest data
     *
     * Get OHLCV latest timeseries data returned in time descending order. Data can be requested by the period and for the specific symbol eg &#x60;BITSTAMP_SPOT_BTC_USD&#x60;, if you need to query timeseries by asset pairs eg. &#x60;BTC/USD&#x60;, then please reffer to the Exchange Rates Timeseries data              :::info OHLCV Latest endpoint is just the shortcut to the OHLCV Historical endpoint with substituted &#x60;time_start&#x60; and &#x60;time_end&#x60; parameters.  The OHLCV Historical endpoint data can be delayed a few seconds. Use OHLCV real-time data stream to get data without delay. :::
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGetTest() throws ApiException {
        String exchangeId = null;
        String symbolId = null;
        String periodId = null;
        Integer limit = null;
        List<OHLCVTimeseriesItem> response = api.v1OhlcvExchangeSymbolExchangeIdSymbolIdLatestGet(exchangeId, symbolId, periodId, limit);
        // TODO: test validations
    }

    /**
     * List all periods
     *
     * Get full list of supported time periods available for requesting OHLCV timeseries data.              ### Available periods              Time unit | Period identifiers --------- | ----------- Second | 1SEC, 2SEC, 3SEC, 4SEC, 5SEC, 6SEC, 10SEC, 15SEC, 20SEC, 30SEC Minute | 1MIN, 2MIN, 3MIN, 4MIN, 5MIN, 6MIN, 10MIN, 15MIN, 20MIN, 30MIN Hour | 1HRS, 2HRS, 3HRS, 4HRS, 6HRS, 8HRS, 12HRS Day | 1DAY, 2DAY, 3DAY, 5DAY, 7DAY, 10DAY Month | 1MTH, 2MTH, 3MTH, 4MTH, 6MTH Year | 1YRS, 2YRS, 3YRS, 4YRS, 5YRS              :::tip You can assume that we will not remove any periods from this response, however, we may add new ones. :::
     *
     * @throws ApiException if the Api call fails
     */
    @Test
    public void v1OhlcvPeriodsGetTest() throws ApiException {
        List<OHLCVTimeseriesPeriod> response = api.v1OhlcvPeriodsGet();
        // TODO: test validations
    }

}
