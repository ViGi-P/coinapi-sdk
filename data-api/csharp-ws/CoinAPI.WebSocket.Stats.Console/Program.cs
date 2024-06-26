﻿using Cocona;
using CoinAPI.WebSocket.Stats.Console.Infrastructure;
using CoinAPI.WebSocket.Stats.Console.Interfaces;
using CoinAPI.WebSocket.V1;
using CoinAPI.WebSocket.V1.DataModels;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using Serilog;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Net;
using System.Runtime.CompilerServices;
using System.Text;
using System.Xml;
using System.Xml.Xsl;
using static System.Net.Mime.MediaTypeNames;

internal enum SubType
{
    book5,
    book20,
    book50,
    book,
    book_l,
    quote,
    trade,
    ohlcv,
    exrate,
}

internal enum Endpoints
{
    emea,
    apac,
    ncsa
}

internal enum LatencyType
{
    nc, //Now-CoinAPI
    ne, //Now-Exchange
    ce, //CoinAPI-Exchange
}
    public enum TimeseriesPeriodShortcode
    {
        _1SEC,
        _2SEC,
        _3SEC,
        _4SEC,
        _5SEC,
        _6SEC,
        _10SEC,
        _15SEC,
        _20SEC,
        _30SEC,
        _1MIN,
        _2MIN,
        _3MIN,
        _4MIN,
        _5MIN,
        _6MIN,
        _10MIN,
        _15MIN,
        _20MIN,
        _30MIN,
        _1HRS,
        _2HRS,
        _3HRS,
        _4HRS,
        _6HRS,
        _8HRS,
        _12HRS,
        _1DAY,
        _2DAY,
        _3DAY,
        _5DAY,
        _7DAY,
        _10DAY,
        _1MTH,
        _2MTH,
        _3MTH,
        _4MTH,
        _6MTH,
        _1YRS,
        _2YRS,
        _3YRS,
        _4YRS,
        _5YRS
    }

internal class Program
{
    //public static IConfiguration Configuration { get; private set; }

    public static Dictionary<string, string> Endpoints = new Dictionary<string, string>
    {
        { global::Endpoints.emea.ToString(), "ws://api-emea.coinapi.net" },
        { global::Endpoints.apac.ToString(), "ws://api-apac.coinapi.net" },
        { global::Endpoints.ncsa.ToString(), "ws://api-ncsa.coinapi.net" }
    };
    static async Task Main(string[] args)
    {
        Thread.CurrentThread.CurrentCulture = CultureInfo.InvariantCulture;
        Thread.CurrentThread.CurrentUICulture = CultureInfo.InvariantCulture;

        Log.Logger = new LoggerConfiguration()
           .MinimumLevel.Debug()
           .WriteTo.Console()
           //.WriteTo.File("logs/myapp.txt", rollingInterval: RollingInterval.Day)
           .CreateLogger();

        var coconaBuilder = CoconaApp.CreateBuilder();
        var host = coconaBuilder.Host;
        host.ConfigureLogging(logging =>
        {
            logging.AddSerilog();
        })
        .ConfigureAppConfiguration((context, config) =>
        {
        })
        .ConfigureServices((context, services) =>
        {
            AppConfigureServices(services, context.Configuration);
        });
        //host.Run<Program>(args);
        var coconaApp = coconaBuilder.Build();
        await coconaApp.RunAsync<Program>();
    }

    public async Task MakeRequest([FromService] IConfiguration configuration, [FromService] IDataOutput dataOutput,
        string endpoint_name = "wss://ws.coinapi.io/", string subscribe_data_type = null, string asset = null, 
        string symbol = null, string exchange = null, string period_id = null, string apikey = null, string type = "hello", 
        string supress_hb = "false", string latency_type = "ce")
    {
        var appConfig = AppConfiguration.LoadFromIConfiguration(configuration);

        var typeNames = Enum.GetNames<SubType>().ToList();
        if (!typeNames.Any(x => x == subscribe_data_type))
        {
            Serilog.Log.Error($"Invalid subscribe_data_type, valid values: {string.Join(",", typeNames)}");
            return;
        }

        // the user provided endpoint
        if (Enum.GetNames<Endpoints>().ToList().Any(x => x == endpoint_name))
        {
            // it's site name translate
            endpoint_name = Endpoints[endpoint_name];
        }
        else if (endpoint_name.StartsWith("ws://") || endpoint_name.StartsWith("wss://"))
        {
            // its uri OK
        }
        else
        {
            // eveyrhting else is invalid
            Serilog.Log.Error($"Invalid endpoint_name, valid values: {string.Join(",", Enum.GetNames<Endpoints>().ToList())} or ws:// or wss:// uri");
            return;
        }
        
        var latencyTypes = Enum.GetNames<LatencyType>().ToList();
        if (!string.IsNullOrWhiteSpace(latency_type) && !latencyTypes.Any(x => x == latency_type))
        {
            Serilog.Log.Error($"Invalid latency_type, valid values: {string.Join(",", latencyTypes)}");
            return;
        }

        var period_ids = Enum.GetNames<TimeseriesPeriodShortcode>().Select(x => x.Replace("_", "")).ToList();
        if (!string.IsNullOrWhiteSpace(period_id) && !period_ids.Any(x => x == period_id))
        {
            Serilog.Log.Error($"Invalid period_id, valid values: {string.Join(",", period_ids)}");
            return;
        }

        bool.TryParse(supress_hb, out bool hb_supressed);

        using (var wsClient = new CoinApiWsClient(endpoint_name))
        {
            wsClient.SupressHeartbeat(hb_supressed);

            LatencyType latencyType = Enum.GetValues<LatencyType>().FirstOrDefault(x => x.ToString() == latency_type);

            wsClient.Error += WsClient_Error;

            SubscribeToEvent(subscribe_data_type, wsClient, latencyType);
            
            SendHello(subscribe_data_type, asset, symbol, exchange, period_id, apikey, type, appConfig, wsClient);

            _ = PrintingTaskLoopAsync(wsClient, endpoint_name, subscribe_data_type, asset, symbol, exchange, period_id, hb_supressed, latency_type, dataOutput);

            await Task.Run(() => Console.ReadKey());
        }
    }

    private static void SendHello(string subscribe_data_type, string asset, string symbol, string exchange, string period_id, string apikey, string type, AppConfiguration appConfig, CoinApiWsClient wsClient)
    {
        var hello = new Hello()
        {
            apikey = new Guid(apikey ?? appConfig.ApiKey ?? throw new ArgumentNullException("ApiKey is required")),
            type = type,
            subscribe_data_type = new string[] { subscribe_data_type },
            subscribe_filter_asset_id = string.IsNullOrWhiteSpace(asset) ? null : new string[] { asset },
            subscribe_filter_symbol_id = string.IsNullOrWhiteSpace(symbol) ? null : new string[] { symbol },
            subscribe_filter_exchange_id = string.IsNullOrWhiteSpace(exchange) ? null : new string[] { exchange },
            subscribe_filter_period_id = string.IsNullOrEmpty(period_id) ? null : new string[] { period_id }
        };
        wsClient.SendHelloMessage(hello);
    }

    private void SubscribeToEvent(string subscribe_data_type, CoinApiWsClient wsClient, LatencyType latencyType)
    {
        switch (subscribe_data_type)
        {
            case "book5":
                wsClient.OrderBook5Event += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "book20":
                wsClient.OrderBook20Event += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "book50":
                wsClient.OrderBook50Event += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "book":
                wsClient.OrderBookEvent += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "book_l":
                wsClient.OrderBookL3Event += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "quote":
                wsClient.QuoteEvent += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "trade":
                wsClient.TradeEvent += (s, i) => { ProcessMsg(i.time_exchange, i.time_coinapi, latencyType); };
                break;
            case "ohlcv":
                wsClient.OHLCVEvent += (s, i) => { ProcessMsg(i.time_close, null, latencyType); };
                break;
            case "exrate":
                wsClient.ExchangeRateEvent += (s, i) => { msgCount++; };
                break;
        }
    }

    private ulong errorCount = 0;
    void WsClient_Error(object? sender, Exception e)
    {
        Serilog.Log.Error(e, "Error in websocket client");
        errorCount++;
    }

    private ulong msgCount = 0;
    private readonly List<(DateTime, DateTime)> latencyList = new List<(DateTime, DateTime)>();
    private void ProcessMsg(DateTime? time_exchange, DateTime? time_coinapi, LatencyType latencyType)
    {
        msgCount++;
        if (latencyType == LatencyType.nc && time_coinapi.HasValue)
        {
            latencyList.Add((DateTime.UtcNow, time_coinapi.Value));
        }
        else if (latencyType == LatencyType.ne && time_exchange.HasValue)
        {
            latencyList.Add((DateTime.UtcNow, time_exchange.Value));
        }
        else if (latencyType == LatencyType.ce && time_coinapi.HasValue && time_exchange.HasValue)
        {
            latencyList.Add((time_coinapi.Value, time_exchange.Value));
        }
    }

    private async Task PrintingTaskLoopAsync(CoinApiWsClient wsClient, 
        string endpoint_name, string subscribe_data_type, string asset, 
        string symbol, string exchange, string period_id, bool supress_hb, string latency_type, IDataOutput dataOutput)
    {
        var iterations = 0;

        var inputData = new InputData() 
        { 
            Asset = asset, 
            Exchange = exchange, 
            Symbol = symbol, 
            Period = period_id,
            SubscribeDataType = subscribe_data_type, 
            SupressHeartbeat = supress_hb, 
            LatencyType = latency_type 
        };    

        await dataOutput.InitializeAsync(inputData);

        while (true)
        {
            if (!wsClient.IsConnected)
            {
                Log.Warning("Websocket is not connected.");
                await DelayToNextFullSecond();
                continue;
            }

            if (iterations % 10 == 0)
            {
                Serilog.Log.Information($"Endpoint {endpoint_name}, {iterations} iterations, {msgCount} messages received, {wsClient.TotalBytesReceived} bytes received, Error count {errorCount}");
            }
            iterations++;

            var msgCountPrev = msgCount;
            var totalBytesReceivedPrev = wsClient.TotalBytesReceived;

            (TimeSpan cpuWaiting, TimeSpan cpuParsing, TimeSpan cpuHandling) cpuUsagePrev
                = (wsClient.TotalWaitTime, wsClient.TotalParseTime, wsClient.TotalHandleTime);

            //TimeSpan totalCpuTimePrev = process.TotalProcessorTime;

            await DelayToNextFullSecond();
            (TimeSpan cpuWaiting, TimeSpan cpuParsing, TimeSpan cpuHandling) cpuUsage
                = (wsClient.TotalWaitTime, wsClient.TotalParseTime, wsClient.TotalHandleTime);

            //TimeSpan totalCpuTime = process.TotalProcessorTime;
            var deltaCpuWaiting = cpuUsage.cpuWaiting - cpuUsagePrev.cpuWaiting;
            var deltaCpuParsing = cpuUsage.cpuParsing - cpuUsagePrev.cpuParsing;
            var deltaCpuHandling = cpuUsage.cpuHandling - cpuUsagePrev.cpuHandling;
            //var deltaCpuTime = totalCpuTime - totalCpuTimePrev;
            var deltaCpuTime = deltaCpuWaiting + deltaCpuParsing + deltaCpuHandling;


            var cpuWaitingPercent = deltaCpuWaiting.TotalMilliseconds / deltaCpuTime.TotalMilliseconds;
            var cpuParsingPercent = deltaCpuParsing.TotalMilliseconds / deltaCpuTime.TotalMilliseconds;
            var cpuHandlingPercent = deltaCpuHandling.TotalMilliseconds / deltaCpuTime.TotalMilliseconds;


            var msgCountOnInterval = msgCount - msgCountPrev;
            var bytesCountOnInterval = wsClient.TotalBytesReceived - totalBytesReceivedPrev;
            var latencies = latencyList.Select(x => x.Item1 - x.Item2).ToList();
            latencyList.Clear();

            var average = 0.0;
            var standardDeviation = 0.0;

            if (latencies.Any())
            {
                average = latencies.Average(x => x.TotalMilliseconds);
                double sumOfSquaredDifferences = latencies.Select(x => Math.Pow(x.TotalMilliseconds - average, 2)).Sum();
                standardDeviation = Math.Sqrt(sumOfSquaredDifferences / latencies.Count);
            }

            var outputData = new OutputData()
            {
                Messages = msgCountOnInterval,
                BytesReceived = bytesCountOnInterval,
                CpuWaitingPercent = cpuWaitingPercent,
                CpuParsingPercent = cpuParsingPercent,
                CpuHandlingPercent = cpuHandlingPercent,
                LatencyMaxMilliseconds = latencies.Any() ? latencies.Max().TotalMilliseconds : 0,
                LatencyMinMilliseconds = latencies.Any() ? latencies.Min().TotalMilliseconds : 0,
                LatencyAverage = average,
                LatencyStdDev = standardDeviation
            };

            await dataOutput.WriteAsync(outputData);

        }
    }

    private static async Task DelayToNextFullSecond()
    {
        var now = DateTime.Now;
        var nextFullSecond = new DateTime(now.Year, now.Month, now.Day, now.Hour, now.Minute, now.Second).AddSeconds(1);
        var delay = nextFullSecond - now;
        await Task.Delay(delay);
    }

    static void AppConfigureServices(IServiceCollection services, IConfiguration configuration)
    {
        // Add configuration, logging, and IDataOutput implementations
        if (configuration == null)
        {
            throw new ArgumentNullException(nameof(configuration));
        }
        IDataOutput dataOutput = null;
        
        var appConfig = AppConfiguration.LoadFromIConfiguration(configuration);
        
        List<IDataOutput> outputs = new List<IDataOutput>();
        
        foreach (var outputType in appConfig.OutputType)
        {
            switch (outputType.ToLower())
            {
                case "file":
                    outputs.Add(new FileDataOutput());
                    break;
                case "console":
                    outputs.Add(new ConsoleDataOutput());
                    break;
                default:
                    throw new InvalidOperationException($"Invalid output type: {outputType}");
            }
        }

        if (outputs.Count > 1)
        {
            var compositeDataOutput = new CompositeDataOutput();
            foreach (var output in outputs)
            {
                compositeDataOutput.AddDataOutput(output);
            }
            dataOutput = compositeDataOutput;
        }
        else
        {
            dataOutput = outputs.FirstOrDefault();
        }
        dataOutput = dataOutput ?? new ConsoleDataOutput(); //add default

        services.AddSingleton(dataOutput);
    }

}
