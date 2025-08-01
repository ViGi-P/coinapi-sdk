/*
 * CoinAPI Market Data REST API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Xunit;
using Microsoft.Extensions.DependencyInjection;
using APIBricks.CoinAPI.MarketDataAPI.REST.V1.Api;
using APIBricks.CoinAPI.MarketDataAPI.REST.V1.Model;


/* *********************************************************************************
*              Follow these manual steps to construct tests.
*              This file will not be overwritten.
*  *********************************************************************************
* 1. Navigate to ApiTests.Base.cs and ensure any tokens are being created correctly.
*    Take care not to commit credentials to any repository.
*
* 2. Mocking is coordinated by ApiTestsBase#AddApiHttpClients.
*    To mock the client, use the generic AddApiHttpClients.
*    To mock the server, change the client's BaseAddress.
*
* 3. Locate the test you want below
*      - remove the skip property from the Fact attribute
*      - set the value of any variables if necessary
*
* 4. Run the tests and ensure they work.
*
*/


namespace APIBricks.CoinAPI.MarketDataAPI.REST.V1.Test.Api
{
    /// <summary>
    ///  Class for testing MetricsV1Api
    /// </summary>
    public sealed class MetricsV1ApiTests : ApiTestsBase
    {
        private readonly IMetricsV1Api _instance;

        public MetricsV1ApiTests(): base(Array.Empty<string>())
        {
            _instance = _host.Services.GetRequiredService<IMetricsV1Api>();
        }

        /// <summary>
        /// Test V1MetricsAssetCurrentGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsAssetCurrentGetAsyncTest()
        {
            Client.Option<string> metricId = default!;
            Client.Option<string> assetId = default!;
            Client.Option<string> assetIdExternal = default!;
            Client.Option<string> exchangeId = default!;
            var response = await _instance.V1MetricsAssetCurrentGetAsync(metricId, assetId, assetIdExternal, exchangeId);
            var model = response.Ok();
            Assert.IsType<List<V1GeneralData>>(model);
        }

        /// <summary>
        /// Test V1MetricsAssetHistoryGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsAssetHistoryGetAsyncTest()
        {
            string metricId = default!;
            string exchangeId = default!;
            Client.Option<string> assetId = default!;
            Client.Option<string> assetIdExternal = default!;
            Client.Option<DateTime> timeStart = default!;
            Client.Option<DateTime> timeEnd = default!;
            Client.Option<string> timeFormat = default!;
            Client.Option<string> periodId = default!;
            Client.Option<int> limit = default!;
            var response = await _instance.V1MetricsAssetHistoryGetAsync(metricId, exchangeId, assetId, assetIdExternal, timeStart, timeEnd, timeFormat, periodId, limit);
            var model = response.Ok();
            Assert.IsType<List<V1MetricData>>(model);
        }

        /// <summary>
        /// Test V1MetricsAssetListingGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsAssetListingGetAsyncTest()
        {
            Client.Option<string> metricId = default!;
            Client.Option<string> exchangeId = default!;
            Client.Option<string> chainId = default!;
            Client.Option<string> networkId = default!;
            Client.Option<string> assetId = default!;
            Client.Option<string> assetIdExternal = default!;
            var response = await _instance.V1MetricsAssetListingGetAsync(metricId, exchangeId, chainId, networkId, assetId, assetIdExternal);
            var model = response.Ok();
            Assert.IsType<List<V1ListingItem>>(model);
        }

        /// <summary>
        /// Test V1MetricsExchangeCurrentGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsExchangeCurrentGetAsyncTest()
        {
            string exchangeId = default!;
            Client.Option<string> metricId = default!;
            var response = await _instance.V1MetricsExchangeCurrentGetAsync(exchangeId, metricId);
            var model = response.Ok();
            Assert.IsType<List<V1GeneralData>>(model);
        }

        /// <summary>
        /// Test V1MetricsExchangeHistoryGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsExchangeHistoryGetAsyncTest()
        {
            string metricId = default!;
            string exchangeId = default!;
            Client.Option<DateTime> timeStart = default!;
            Client.Option<DateTime> timeEnd = default!;
            Client.Option<string> timeFormat = default!;
            Client.Option<string> periodId = default!;
            Client.Option<int> limit = default!;
            var response = await _instance.V1MetricsExchangeHistoryGetAsync(metricId, exchangeId, timeStart, timeEnd, timeFormat, periodId, limit);
            var model = response.Ok();
            Assert.IsType<List<V1MetricData>>(model);
        }

        /// <summary>
        /// Test V1MetricsExchangeListingGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsExchangeListingGetAsyncTest()
        {
            string exchangeId = default!;
            Client.Option<string> metricId = default!;
            var response = await _instance.V1MetricsExchangeListingGetAsync(exchangeId, metricId);
            var model = response.Ok();
            Assert.IsType<List<V1ListingItem>>(model);
        }

        /// <summary>
        /// Test V1MetricsListingGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsListingGetAsyncTest()
        {
            var response = await _instance.V1MetricsListingGetAsync();
            var model = response.Ok();
            Assert.IsType<List<V1Metric>>(model);
        }

        /// <summary>
        /// Test V1MetricsSymbolCurrentGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsSymbolCurrentGetAsyncTest()
        {
            Client.Option<string> metricId = default!;
            Client.Option<string> symbolId = default!;
            Client.Option<string> exchangeId = default!;
            var response = await _instance.V1MetricsSymbolCurrentGetAsync(metricId, symbolId, exchangeId);
            var model = response.Ok();
            Assert.IsType<List<V1GeneralData>>(model);
        }

        /// <summary>
        /// Test V1MetricsSymbolHistoryGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsSymbolHistoryGetAsyncTest()
        {
            string metricId = default!;
            string symbolId = default!;
            Client.Option<DateTime> timeStart = default!;
            Client.Option<DateTime> timeEnd = default!;
            Client.Option<string> timeFormat = default!;
            Client.Option<string> periodId = default!;
            Client.Option<int> limit = default!;
            var response = await _instance.V1MetricsSymbolHistoryGetAsync(metricId, symbolId, timeStart, timeEnd, timeFormat, periodId, limit);
            var model = response.Ok();
            Assert.IsType<List<V1MetricData>>(model);
        }

        /// <summary>
        /// Test V1MetricsSymbolListingGet
        /// </summary>
        [Fact (Skip = "not implemented")]
        public async Task V1MetricsSymbolListingGetAsyncTest()
        {
            Client.Option<string> metricId = default!;
            Client.Option<string> exchangeId = default!;
            Client.Option<string> symbolId = default!;
            var response = await _instance.V1MetricsSymbolListingGetAsync(metricId, exchangeId, symbolId);
            var model = response.Ok();
            Assert.IsType<List<V1ListingItem>>(model);
        }
    }
}
