// <auto-generated>
/*
 * FinFeedAPI Stock REST API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

#nullable enable

using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.ComponentModel.DataAnnotations;
using OpenAPIClientUtils = APIBricks.FinFeedAPI.STOCKAPI.REST.V1.Client.ClientUtils;
using APIBricks.FinFeedAPI.STOCKAPI.REST.V1.Client;

namespace APIBricks.FinFeedAPI.STOCKAPI.REST.V1.Model
{
    /// <summary>
    /// Represents the response DTO for retail liquidity indicator information
    /// </summary>
    public partial class AdminRetailLiquidityIndicatorModel : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AdminRetailLiquidityIndicatorModel" /> class.
        /// </summary>
        /// <param name="symbol">The stock symbol</param>
        /// <param name="timestampNanos">Original timestamp in nanoseconds since epoch</param>
        /// <param name="timestamp">Time when the retail liquidity indicator was recorded as DateTime</param>
        /// <param name="retailLiquidityIndicator">Retail liquidity indicator as byte value</param>
        /// <param name="retailLiquidityIndicatorCode">Retail liquidity indicator as character string</param>
        /// <param name="retailLiquidityIndicatorText">Human-readable description of the retail liquidity indicator</param>
        /// <param name="isRetailIndicatorNotApplicable">Indicates if the indicator is &#39;Not Applicable&#39; (&#39; &#39;/0x20).</param>
        /// <param name="isRetailIndicatorBuyInterest">Indicates if there is &#39;Buy interest for Retail&#39; (&#39;A&#39;/0x41).</param>
        /// <param name="isRetailIndicatorSellInterest">Indicates if there is &#39;Sell interest for Retail&#39; (&#39;B&#39;/0x42).</param>
        /// <param name="isRetailIndicatorBuyAndSellInterest">Indicates if there is &#39;Buy and sell interest for Retail&#39; (&#39;C&#39;/0x43).</param>
        [JsonConstructor]
        public AdminRetailLiquidityIndicatorModel(Option<string?> symbol = default, Option<long?> timestampNanos = default, Option<DateTime?> timestamp = default, Option<int?> retailLiquidityIndicator = default, Option<string?> retailLiquidityIndicatorCode = default, Option<string?> retailLiquidityIndicatorText = default, Option<bool?> isRetailIndicatorNotApplicable = default, Option<bool?> isRetailIndicatorBuyInterest = default, Option<bool?> isRetailIndicatorSellInterest = default, Option<bool?> isRetailIndicatorBuyAndSellInterest = default)
        {
            SymbolOption = symbol;
            TimestampNanosOption = timestampNanos;
            TimestampOption = timestamp;
            RetailLiquidityIndicatorOption = retailLiquidityIndicator;
            RetailLiquidityIndicatorCodeOption = retailLiquidityIndicatorCode;
            RetailLiquidityIndicatorTextOption = retailLiquidityIndicatorText;
            IsRetailIndicatorNotApplicableOption = isRetailIndicatorNotApplicable;
            IsRetailIndicatorBuyInterestOption = isRetailIndicatorBuyInterest;
            IsRetailIndicatorSellInterestOption = isRetailIndicatorSellInterest;
            IsRetailIndicatorBuyAndSellInterestOption = isRetailIndicatorBuyAndSellInterest;
            OnCreated();
        }

        partial void OnCreated();

        /// <summary>
        /// Used to track the state of Symbol
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> SymbolOption { get; private set; }

        /// <summary>
        /// The stock symbol
        /// </summary>
        /// <value>The stock symbol</value>
        [JsonPropertyName("symbol")]
        public string? Symbol { get { return this.SymbolOption; } set { this.SymbolOption = new(value); } }

        /// <summary>
        /// Used to track the state of TimestampNanos
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<long?> TimestampNanosOption { get; private set; }

        /// <summary>
        /// Original timestamp in nanoseconds since epoch
        /// </summary>
        /// <value>Original timestamp in nanoseconds since epoch</value>
        [JsonPropertyName("timestamp_nanos")]
        public long? TimestampNanos { get { return this.TimestampNanosOption; } set { this.TimestampNanosOption = new(value); } }

        /// <summary>
        /// Used to track the state of Timestamp
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<DateTime?> TimestampOption { get; private set; }

        /// <summary>
        /// Time when the retail liquidity indicator was recorded as DateTime
        /// </summary>
        /// <value>Time when the retail liquidity indicator was recorded as DateTime</value>
        [JsonPropertyName("timestamp")]
        public DateTime? Timestamp { get { return this.TimestampOption; } set { this.TimestampOption = new(value); } }

        /// <summary>
        /// Used to track the state of RetailLiquidityIndicator
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> RetailLiquidityIndicatorOption { get; private set; }

        /// <summary>
        /// Retail liquidity indicator as byte value
        /// </summary>
        /// <value>Retail liquidity indicator as byte value</value>
        [JsonPropertyName("retail_liquidity_indicator")]
        public int? RetailLiquidityIndicator { get { return this.RetailLiquidityIndicatorOption; } set { this.RetailLiquidityIndicatorOption = new(value); } }

        /// <summary>
        /// Used to track the state of RetailLiquidityIndicatorCode
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> RetailLiquidityIndicatorCodeOption { get; private set; }

        /// <summary>
        /// Retail liquidity indicator as character string
        /// </summary>
        /// <value>Retail liquidity indicator as character string</value>
        [JsonPropertyName("retail_liquidity_indicator_code")]
        public string? RetailLiquidityIndicatorCode { get { return this.RetailLiquidityIndicatorCodeOption; } set { this.RetailLiquidityIndicatorCodeOption = new(value); } }

        /// <summary>
        /// Used to track the state of RetailLiquidityIndicatorText
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> RetailLiquidityIndicatorTextOption { get; private set; }

        /// <summary>
        /// Human-readable description of the retail liquidity indicator
        /// </summary>
        /// <value>Human-readable description of the retail liquidity indicator</value>
        [JsonPropertyName("retail_liquidity_indicator_text")]
        public string? RetailLiquidityIndicatorText { get { return this.RetailLiquidityIndicatorTextOption; } set { this.RetailLiquidityIndicatorTextOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsRetailIndicatorNotApplicable
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsRetailIndicatorNotApplicableOption { get; private set; }

        /// <summary>
        /// Indicates if the indicator is &#39;Not Applicable&#39; (&#39; &#39;/0x20).
        /// </summary>
        /// <value>Indicates if the indicator is &#39;Not Applicable&#39; (&#39; &#39;/0x20).</value>
        [JsonPropertyName("is_retail_indicator_not_applicable")]
        public bool? IsRetailIndicatorNotApplicable { get { return this.IsRetailIndicatorNotApplicableOption; } set { this.IsRetailIndicatorNotApplicableOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsRetailIndicatorBuyInterest
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsRetailIndicatorBuyInterestOption { get; private set; }

        /// <summary>
        /// Indicates if there is &#39;Buy interest for Retail&#39; (&#39;A&#39;/0x41).
        /// </summary>
        /// <value>Indicates if there is &#39;Buy interest for Retail&#39; (&#39;A&#39;/0x41).</value>
        [JsonPropertyName("is_retail_indicator_buy_interest")]
        public bool? IsRetailIndicatorBuyInterest { get { return this.IsRetailIndicatorBuyInterestOption; } set { this.IsRetailIndicatorBuyInterestOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsRetailIndicatorSellInterest
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsRetailIndicatorSellInterestOption { get; private set; }

        /// <summary>
        /// Indicates if there is &#39;Sell interest for Retail&#39; (&#39;B&#39;/0x42).
        /// </summary>
        /// <value>Indicates if there is &#39;Sell interest for Retail&#39; (&#39;B&#39;/0x42).</value>
        [JsonPropertyName("is_retail_indicator_sell_interest")]
        public bool? IsRetailIndicatorSellInterest { get { return this.IsRetailIndicatorSellInterestOption; } set { this.IsRetailIndicatorSellInterestOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsRetailIndicatorBuyAndSellInterest
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsRetailIndicatorBuyAndSellInterestOption { get; private set; }

        /// <summary>
        /// Indicates if there is &#39;Buy and sell interest for Retail&#39; (&#39;C&#39;/0x43).
        /// </summary>
        /// <value>Indicates if there is &#39;Buy and sell interest for Retail&#39; (&#39;C&#39;/0x43).</value>
        [JsonPropertyName("is_retail_indicator_buy_and_sell_interest")]
        public bool? IsRetailIndicatorBuyAndSellInterest { get { return this.IsRetailIndicatorBuyAndSellInterestOption; } set { this.IsRetailIndicatorBuyAndSellInterestOption = new(value); } }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AdminRetailLiquidityIndicatorModel {\n");
            sb.Append("  Symbol: ").Append(Symbol).Append("\n");
            sb.Append("  TimestampNanos: ").Append(TimestampNanos).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  RetailLiquidityIndicator: ").Append(RetailLiquidityIndicator).Append("\n");
            sb.Append("  RetailLiquidityIndicatorCode: ").Append(RetailLiquidityIndicatorCode).Append("\n");
            sb.Append("  RetailLiquidityIndicatorText: ").Append(RetailLiquidityIndicatorText).Append("\n");
            sb.Append("  IsRetailIndicatorNotApplicable: ").Append(IsRetailIndicatorNotApplicable).Append("\n");
            sb.Append("  IsRetailIndicatorBuyInterest: ").Append(IsRetailIndicatorBuyInterest).Append("\n");
            sb.Append("  IsRetailIndicatorSellInterest: ").Append(IsRetailIndicatorSellInterest).Append("\n");
            sb.Append("  IsRetailIndicatorBuyAndSellInterest: ").Append(IsRetailIndicatorBuyAndSellInterest).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

    /// <summary>
    /// A Json converter for type <see cref="AdminRetailLiquidityIndicatorModel" />
    /// </summary>
    public class AdminRetailLiquidityIndicatorModelJsonConverter : JsonConverter<AdminRetailLiquidityIndicatorModel>
    {
        /// <summary>
        /// The format to use to serialize Timestamp
        /// </summary>
        public static string TimestampFormat { get; set; } = "yyyy'-'MM'-'dd'T'HH':'mm':'ss'.'fffffffK";

        /// <summary>
        /// Deserializes json to <see cref="AdminRetailLiquidityIndicatorModel" />
        /// </summary>
        /// <param name="utf8JsonReader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <returns></returns>
        /// <exception cref="JsonException"></exception>
        public override AdminRetailLiquidityIndicatorModel Read(ref Utf8JsonReader utf8JsonReader, Type typeToConvert, JsonSerializerOptions jsonSerializerOptions)
        {
            int currentDepth = utf8JsonReader.CurrentDepth;

            if (utf8JsonReader.TokenType != JsonTokenType.StartObject && utf8JsonReader.TokenType != JsonTokenType.StartArray)
                throw new JsonException();

            JsonTokenType startingTokenType = utf8JsonReader.TokenType;

            Option<string?> symbol = default;
            Option<long?> timestampNanos = default;
            Option<DateTime?> timestamp = default;
            Option<int?> retailLiquidityIndicator = default;
            Option<string?> retailLiquidityIndicatorCode = default;
            Option<string?> retailLiquidityIndicatorText = default;
            Option<bool?> isRetailIndicatorNotApplicable = default;
            Option<bool?> isRetailIndicatorBuyInterest = default;
            Option<bool?> isRetailIndicatorSellInterest = default;
            Option<bool?> isRetailIndicatorBuyAndSellInterest = default;

            while (utf8JsonReader.Read())
            {
                if (startingTokenType == JsonTokenType.StartObject && utf8JsonReader.TokenType == JsonTokenType.EndObject && currentDepth == utf8JsonReader.CurrentDepth)
                    break;

                if (startingTokenType == JsonTokenType.StartArray && utf8JsonReader.TokenType == JsonTokenType.EndArray && currentDepth == utf8JsonReader.CurrentDepth)
                    break;

                if (utf8JsonReader.TokenType == JsonTokenType.PropertyName && currentDepth == utf8JsonReader.CurrentDepth - 1)
                {
                    string? localVarJsonPropertyName = utf8JsonReader.GetString();
                    utf8JsonReader.Read();

                    switch (localVarJsonPropertyName)
                    {
                        case "symbol":
                            symbol = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        case "timestamp_nanos":
                            timestampNanos = new Option<long?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (long?)null : utf8JsonReader.GetInt64());
                            break;
                        case "timestamp":
                            timestamp = new Option<DateTime?>(JsonSerializer.Deserialize<DateTime>(ref utf8JsonReader, jsonSerializerOptions));
                            break;
                        case "retail_liquidity_indicator":
                            retailLiquidityIndicator = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "retail_liquidity_indicator_code":
                            retailLiquidityIndicatorCode = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        case "retail_liquidity_indicator_text":
                            retailLiquidityIndicatorText = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        case "is_retail_indicator_not_applicable":
                            isRetailIndicatorNotApplicable = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_retail_indicator_buy_interest":
                            isRetailIndicatorBuyInterest = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_retail_indicator_sell_interest":
                            isRetailIndicatorSellInterest = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_retail_indicator_buy_and_sell_interest":
                            isRetailIndicatorBuyAndSellInterest = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        default:
                            break;
                    }
                }
            }

            if (timestampNanos.IsSet && timestampNanos.Value == null)
                throw new ArgumentNullException(nameof(timestampNanos), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (timestamp.IsSet && timestamp.Value == null)
                throw new ArgumentNullException(nameof(timestamp), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (retailLiquidityIndicator.IsSet && retailLiquidityIndicator.Value == null)
                throw new ArgumentNullException(nameof(retailLiquidityIndicator), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (isRetailIndicatorNotApplicable.IsSet && isRetailIndicatorNotApplicable.Value == null)
                throw new ArgumentNullException(nameof(isRetailIndicatorNotApplicable), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (isRetailIndicatorBuyInterest.IsSet && isRetailIndicatorBuyInterest.Value == null)
                throw new ArgumentNullException(nameof(isRetailIndicatorBuyInterest), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (isRetailIndicatorSellInterest.IsSet && isRetailIndicatorSellInterest.Value == null)
                throw new ArgumentNullException(nameof(isRetailIndicatorSellInterest), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            if (isRetailIndicatorBuyAndSellInterest.IsSet && isRetailIndicatorBuyAndSellInterest.Value == null)
                throw new ArgumentNullException(nameof(isRetailIndicatorBuyAndSellInterest), "Property is not nullable for class AdminRetailLiquidityIndicatorModel.");

            return new AdminRetailLiquidityIndicatorModel(symbol, timestampNanos, timestamp, retailLiquidityIndicator, retailLiquidityIndicatorCode, retailLiquidityIndicatorText, isRetailIndicatorNotApplicable, isRetailIndicatorBuyInterest, isRetailIndicatorSellInterest, isRetailIndicatorBuyAndSellInterest);
        }

        /// <summary>
        /// Serializes a <see cref="AdminRetailLiquidityIndicatorModel" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="adminRetailLiquidityIndicatorModel"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public override void Write(Utf8JsonWriter writer, AdminRetailLiquidityIndicatorModel adminRetailLiquidityIndicatorModel, JsonSerializerOptions jsonSerializerOptions)
        {
            writer.WriteStartObject();

            WriteProperties(writer, adminRetailLiquidityIndicatorModel, jsonSerializerOptions);
            writer.WriteEndObject();
        }

        /// <summary>
        /// Serializes the properties of <see cref="AdminRetailLiquidityIndicatorModel" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="adminRetailLiquidityIndicatorModel"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public void WriteProperties(Utf8JsonWriter writer, AdminRetailLiquidityIndicatorModel adminRetailLiquidityIndicatorModel, JsonSerializerOptions jsonSerializerOptions)
        {
            if (adminRetailLiquidityIndicatorModel.SymbolOption.IsSet)
                if (adminRetailLiquidityIndicatorModel.SymbolOption.Value != null)
                    writer.WriteString("symbol", adminRetailLiquidityIndicatorModel.Symbol);
                else
                    writer.WriteNull("symbol");

            if (adminRetailLiquidityIndicatorModel.TimestampNanosOption.IsSet)
                writer.WriteNumber("timestamp_nanos", adminRetailLiquidityIndicatorModel.TimestampNanosOption.Value!.Value);

            if (adminRetailLiquidityIndicatorModel.TimestampOption.IsSet)
                writer.WriteString("timestamp", adminRetailLiquidityIndicatorModel.TimestampOption.Value!.Value.ToString(TimestampFormat));

            if (adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorOption.IsSet)
                writer.WriteNumber("retail_liquidity_indicator", adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorOption.Value!.Value);

            if (adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorCodeOption.IsSet)
                if (adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorCodeOption.Value != null)
                    writer.WriteString("retail_liquidity_indicator_code", adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorCode);
                else
                    writer.WriteNull("retail_liquidity_indicator_code");

            if (adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorTextOption.IsSet)
                if (adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorTextOption.Value != null)
                    writer.WriteString("retail_liquidity_indicator_text", adminRetailLiquidityIndicatorModel.RetailLiquidityIndicatorText);
                else
                    writer.WriteNull("retail_liquidity_indicator_text");

            if (adminRetailLiquidityIndicatorModel.IsRetailIndicatorNotApplicableOption.IsSet)
                writer.WriteBoolean("is_retail_indicator_not_applicable", adminRetailLiquidityIndicatorModel.IsRetailIndicatorNotApplicableOption.Value!.Value);

            if (adminRetailLiquidityIndicatorModel.IsRetailIndicatorBuyInterestOption.IsSet)
                writer.WriteBoolean("is_retail_indicator_buy_interest", adminRetailLiquidityIndicatorModel.IsRetailIndicatorBuyInterestOption.Value!.Value);

            if (adminRetailLiquidityIndicatorModel.IsRetailIndicatorSellInterestOption.IsSet)
                writer.WriteBoolean("is_retail_indicator_sell_interest", adminRetailLiquidityIndicatorModel.IsRetailIndicatorSellInterestOption.Value!.Value);

            if (adminRetailLiquidityIndicatorModel.IsRetailIndicatorBuyAndSellInterestOption.IsSet)
                writer.WriteBoolean("is_retail_indicator_buy_and_sell_interest", adminRetailLiquidityIndicatorModel.IsRetailIndicatorBuyAndSellInterestOption.Value!.Value);
        }
    }
}
