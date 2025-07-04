/*
 * FinFeedAPI SEC REST API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using Microsoft.Extensions.Hosting;
using Microsoft.Extensions.DependencyInjection;
using System.Collections.Generic;
using System.Security.Cryptography;
using APIBricks.FinFeedAPI.SECAPI.REST.V1.Client;
using APIBricks.FinFeedAPI.SECAPI.REST.V1.Api;
using APIBricks.FinFeedAPI.SECAPI.REST.V1.Extensions;
using Xunit;

namespace APIBricks.FinFeedAPI.SECAPI.REST.V1.Test.Api
{
    /// <summary>
    ///  Tests the dependency injection.
    /// </summary>
    public class DependencyInjectionTest
    {
        private readonly IHost _hostUsingConfigureWithoutAClient =
            Host.CreateDefaultBuilder([]).ConfigureApi((context, services, options) =>
            {
                ApiKeyToken apiKeyToken1 = new("<token>", ClientUtils.ApiKeyHeader.Authorization, timeout: TimeSpan.FromSeconds(1));
                options.AddTokens(apiKeyToken1);

                BearerToken bearerToken1 = new("<token>", timeout: TimeSpan.FromSeconds(1));
                options.AddTokens(bearerToken1);
            })
            .Build();

        private readonly IHost _hostUsingConfigureWithAClient =
            Host.CreateDefaultBuilder([]).ConfigureApi((context, services, options) =>
            {
                ApiKeyToken apiKeyToken1 = new("<token>", ClientUtils.ApiKeyHeader.Authorization, timeout: TimeSpan.FromSeconds(1));
                options.AddTokens(apiKeyToken1);

                BearerToken bearerToken1 = new("<token>", timeout: TimeSpan.FromSeconds(1));
                options.AddTokens(bearerToken1);
                options.AddApiHttpClients(client => client.BaseAddress = new Uri(ClientUtils.BASE_ADDRESS));
            })
            .Build();

        private readonly IHost _hostUsingAddWithoutAClient =
            Host.CreateDefaultBuilder([]).ConfigureServices((host, services) =>
            {
                services.AddApi(options =>
                {
                    ApiKeyToken apiKeyToken1 = new("<token>", ClientUtils.ApiKeyHeader.Authorization, timeout: TimeSpan.FromSeconds(1));
                    options.AddTokens(apiKeyToken1);

                    BearerToken bearerToken1 = new("<token>", timeout: TimeSpan.FromSeconds(1));
                    options.AddTokens(bearerToken1);
                });
            })
            .Build();

        private readonly IHost _hostUsingAddWithAClient =
            Host.CreateDefaultBuilder([]).ConfigureServices((host, services) =>
            {
                services.AddApi(options =>
                {
                    ApiKeyToken apiKeyToken1 = new("<token>", ClientUtils.ApiKeyHeader.Authorization, timeout: TimeSpan.FromSeconds(1));
                    options.AddTokens(apiKeyToken1);

                    BearerToken bearerToken1 = new("<token>", timeout: TimeSpan.FromSeconds(1));
                    options.AddTokens(bearerToken1);
                    options.AddApiHttpClients(client => client.BaseAddress = new Uri(ClientUtils.BASE_ADDRESS));
                });
            })
            .Build();

        /// <summary>
        /// Test dependency injection when using the configure method
        /// </summary>
        [Fact]
        public void ConfigureApiWithAClientTest()
        {
            var contentExtractionApi = _hostUsingConfigureWithAClient.Services.GetRequiredService<IContentExtractionApi>();
            Assert.True(contentExtractionApi.HttpClient.BaseAddress != null);

            var fileDownloadApi = _hostUsingConfigureWithAClient.Services.GetRequiredService<IFileDownloadApi>();
            Assert.True(fileDownloadApi.HttpClient.BaseAddress != null);

            var filingMetadataApi = _hostUsingConfigureWithAClient.Services.GetRequiredService<IFilingMetadataApi>();
            Assert.True(filingMetadataApi.HttpClient.BaseAddress != null);

            var fullTextSearchApi = _hostUsingConfigureWithAClient.Services.GetRequiredService<IFullTextSearchApi>();
            Assert.True(fullTextSearchApi.HttpClient.BaseAddress != null);

            var xBRLConversionApi = _hostUsingConfigureWithAClient.Services.GetRequiredService<IXBRLConversionApi>();
            Assert.True(xBRLConversionApi.HttpClient.BaseAddress != null);
        }

        /// <summary>
        /// Test dependency injection when using the configure method
        /// </summary>
        [Fact]
        public void ConfigureApiWithoutAClientTest()
        {
            var contentExtractionApi = _hostUsingConfigureWithoutAClient.Services.GetRequiredService<IContentExtractionApi>();
            Assert.True(contentExtractionApi.HttpClient.BaseAddress != null);

            var fileDownloadApi = _hostUsingConfigureWithoutAClient.Services.GetRequiredService<IFileDownloadApi>();
            Assert.True(fileDownloadApi.HttpClient.BaseAddress != null);

            var filingMetadataApi = _hostUsingConfigureWithoutAClient.Services.GetRequiredService<IFilingMetadataApi>();
            Assert.True(filingMetadataApi.HttpClient.BaseAddress != null);

            var fullTextSearchApi = _hostUsingConfigureWithoutAClient.Services.GetRequiredService<IFullTextSearchApi>();
            Assert.True(fullTextSearchApi.HttpClient.BaseAddress != null);

            var xBRLConversionApi = _hostUsingConfigureWithoutAClient.Services.GetRequiredService<IXBRLConversionApi>();
            Assert.True(xBRLConversionApi.HttpClient.BaseAddress != null);
        }

        /// <summary>
        /// Test dependency injection when using the add method
        /// </summary>
        [Fact]
        public void AddApiWithAClientTest()
        {
            var contentExtractionApi = _hostUsingAddWithAClient.Services.GetRequiredService<IContentExtractionApi>();
            Assert.True(contentExtractionApi.HttpClient.BaseAddress != null);
            
            var fileDownloadApi = _hostUsingAddWithAClient.Services.GetRequiredService<IFileDownloadApi>();
            Assert.True(fileDownloadApi.HttpClient.BaseAddress != null);
            
            var filingMetadataApi = _hostUsingAddWithAClient.Services.GetRequiredService<IFilingMetadataApi>();
            Assert.True(filingMetadataApi.HttpClient.BaseAddress != null);
            
            var fullTextSearchApi = _hostUsingAddWithAClient.Services.GetRequiredService<IFullTextSearchApi>();
            Assert.True(fullTextSearchApi.HttpClient.BaseAddress != null);
            
            var xBRLConversionApi = _hostUsingAddWithAClient.Services.GetRequiredService<IXBRLConversionApi>();
            Assert.True(xBRLConversionApi.HttpClient.BaseAddress != null);
        }

        /// <summary>
        /// Test dependency injection when using the add method
        /// </summary>
        [Fact]
        public void AddApiWithoutAClientTest()
        {
            var contentExtractionApi = _hostUsingAddWithoutAClient.Services.GetRequiredService<IContentExtractionApi>();
            Assert.True(contentExtractionApi.HttpClient.BaseAddress != null);

            var fileDownloadApi = _hostUsingAddWithoutAClient.Services.GetRequiredService<IFileDownloadApi>();
            Assert.True(fileDownloadApi.HttpClient.BaseAddress != null);

            var filingMetadataApi = _hostUsingAddWithoutAClient.Services.GetRequiredService<IFilingMetadataApi>();
            Assert.True(filingMetadataApi.HttpClient.BaseAddress != null);

            var fullTextSearchApi = _hostUsingAddWithoutAClient.Services.GetRequiredService<IFullTextSearchApi>();
            Assert.True(fullTextSearchApi.HttpClient.BaseAddress != null);

            var xBRLConversionApi = _hostUsingAddWithoutAClient.Services.GetRequiredService<IXBRLConversionApi>();
            Assert.True(xBRLConversionApi.HttpClient.BaseAddress != null);
        }
    }
}
