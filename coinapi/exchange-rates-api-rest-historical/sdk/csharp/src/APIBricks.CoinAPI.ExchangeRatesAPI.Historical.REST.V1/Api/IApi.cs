using System.Net.Http;

namespace APIBricks.CoinAPI.ExchangeRatesAPI.Historical.REST.V1.Api
{
    /// <summary>
    /// Any Api client
    /// </summary>
    public interface IApi
    {
        /// <summary>
        /// The HttpClient
        /// </summary>
        HttpClient HttpClient { get; }
    }
}