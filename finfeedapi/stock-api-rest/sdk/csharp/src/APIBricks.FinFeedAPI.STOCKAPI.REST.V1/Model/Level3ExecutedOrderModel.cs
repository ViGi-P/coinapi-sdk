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
    /// Represents the response DTO for order executed information
    /// </summary>
    public partial class Level3ExecutedOrderModel : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Level3ExecutedOrderModel" /> class.
        /// </summary>
        /// <param name="symbol">The stock symbol</param>
        /// <param name="timestampNanos">Original timestamp in nanoseconds since epoch</param>
        /// <param name="timestamp">Time when the order was executed as DateTime</param>
        /// <param name="orderIdReference">Order identifier reference</param>
        /// <param name="saleConditionFlags">Sale condition flags for the execution as byte value</param>
        /// <param name="isIntermarketSweep">Bit 7 (Mask 0x80): Intermarket Sweep Flag True: Intermarket Sweep Order (\&quot;ISO\&quot;) False: Non-Intermarket Sweep Order</param>
        /// <param name="isExtendedHoursTrade">Bit 6 (Mask 0x40): Extended Hours Flag True: Extended Hours Trade (i.e., Form T sale condition) False: Regular Market Session Trade</param>
        /// <param name="isOddLotTrade">Bit 5 (Mask 0x20): Odd Lot Flag True: Odd Lot Trade False: Round or Mixed Lot Trade</param>
        /// <param name="isTradeThroughExempt">Bit 4 (Mask 0x10): Trade Through Exempt Flag True: Trade is not subject to Rule 611 (Trade Through) of SEC Reg. NMS False: Trade is subject to Rule 611 (Trade Through) of SEC Reg. NMS</param>
        /// <param name="isSinglePriceCrossTrade">Bit 3 (Mask 0x08): Single-price Cross Trade Flag True: Trade resulting from a single-price cross False: Execution during continuous trading</param>
        /// <param name="size">Trade volume in number of shares</param>
        /// <param name="price">Execution price as decimal</param>
        /// <param name="tradeId">IEX trade identifier</param>
        [JsonConstructor]
        public Level3ExecutedOrderModel(Option<string?> symbol = default, Option<long?> timestampNanos = default, Option<DateTime?> timestamp = default, Option<long?> orderIdReference = default, Option<int?> saleConditionFlags = default, Option<bool?> isIntermarketSweep = default, Option<bool?> isExtendedHoursTrade = default, Option<bool?> isOddLotTrade = default, Option<bool?> isTradeThroughExempt = default, Option<bool?> isSinglePriceCrossTrade = default, Option<int?> size = default, Option<double?> price = default, Option<long?> tradeId = default)
        {
            SymbolOption = symbol;
            TimestampNanosOption = timestampNanos;
            TimestampOption = timestamp;
            OrderIdReferenceOption = orderIdReference;
            SaleConditionFlagsOption = saleConditionFlags;
            IsIntermarketSweepOption = isIntermarketSweep;
            IsExtendedHoursTradeOption = isExtendedHoursTrade;
            IsOddLotTradeOption = isOddLotTrade;
            IsTradeThroughExemptOption = isTradeThroughExempt;
            IsSinglePriceCrossTradeOption = isSinglePriceCrossTrade;
            SizeOption = size;
            PriceOption = price;
            TradeIdOption = tradeId;
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
        /// Time when the order was executed as DateTime
        /// </summary>
        /// <value>Time when the order was executed as DateTime</value>
        [JsonPropertyName("timestamp")]
        public DateTime? Timestamp { get { return this.TimestampOption; } set { this.TimestampOption = new(value); } }

        /// <summary>
        /// Used to track the state of OrderIdReference
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<long?> OrderIdReferenceOption { get; private set; }

        /// <summary>
        /// Order identifier reference
        /// </summary>
        /// <value>Order identifier reference</value>
        [JsonPropertyName("order_id_reference")]
        public long? OrderIdReference { get { return this.OrderIdReferenceOption; } set { this.OrderIdReferenceOption = new(value); } }

        /// <summary>
        /// Used to track the state of SaleConditionFlags
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> SaleConditionFlagsOption { get; private set; }

        /// <summary>
        /// Sale condition flags for the execution as byte value
        /// </summary>
        /// <value>Sale condition flags for the execution as byte value</value>
        [JsonPropertyName("sale_condition_flags")]
        public int? SaleConditionFlags { get { return this.SaleConditionFlagsOption; } set { this.SaleConditionFlagsOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsIntermarketSweep
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsIntermarketSweepOption { get; private set; }

        /// <summary>
        /// Bit 7 (Mask 0x80): Intermarket Sweep Flag True: Intermarket Sweep Order (\&quot;ISO\&quot;) False: Non-Intermarket Sweep Order
        /// </summary>
        /// <value>Bit 7 (Mask 0x80): Intermarket Sweep Flag True: Intermarket Sweep Order (\&quot;ISO\&quot;) False: Non-Intermarket Sweep Order</value>
        [JsonPropertyName("is_intermarket_sweep")]
        public bool? IsIntermarketSweep { get { return this.IsIntermarketSweepOption; } set { this.IsIntermarketSweepOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsExtendedHoursTrade
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsExtendedHoursTradeOption { get; private set; }

        /// <summary>
        /// Bit 6 (Mask 0x40): Extended Hours Flag True: Extended Hours Trade (i.e., Form T sale condition) False: Regular Market Session Trade
        /// </summary>
        /// <value>Bit 6 (Mask 0x40): Extended Hours Flag True: Extended Hours Trade (i.e., Form T sale condition) False: Regular Market Session Trade</value>
        [JsonPropertyName("is_extended_hours_trade")]
        public bool? IsExtendedHoursTrade { get { return this.IsExtendedHoursTradeOption; } set { this.IsExtendedHoursTradeOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsOddLotTrade
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsOddLotTradeOption { get; private set; }

        /// <summary>
        /// Bit 5 (Mask 0x20): Odd Lot Flag True: Odd Lot Trade False: Round or Mixed Lot Trade
        /// </summary>
        /// <value>Bit 5 (Mask 0x20): Odd Lot Flag True: Odd Lot Trade False: Round or Mixed Lot Trade</value>
        [JsonPropertyName("is_odd_lot_trade")]
        public bool? IsOddLotTrade { get { return this.IsOddLotTradeOption; } set { this.IsOddLotTradeOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsTradeThroughExempt
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsTradeThroughExemptOption { get; private set; }

        /// <summary>
        /// Bit 4 (Mask 0x10): Trade Through Exempt Flag True: Trade is not subject to Rule 611 (Trade Through) of SEC Reg. NMS False: Trade is subject to Rule 611 (Trade Through) of SEC Reg. NMS
        /// </summary>
        /// <value>Bit 4 (Mask 0x10): Trade Through Exempt Flag True: Trade is not subject to Rule 611 (Trade Through) of SEC Reg. NMS False: Trade is subject to Rule 611 (Trade Through) of SEC Reg. NMS</value>
        [JsonPropertyName("is_trade_through_exempt")]
        public bool? IsTradeThroughExempt { get { return this.IsTradeThroughExemptOption; } set { this.IsTradeThroughExemptOption = new(value); } }

        /// <summary>
        /// Used to track the state of IsSinglePriceCrossTrade
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<bool?> IsSinglePriceCrossTradeOption { get; private set; }

        /// <summary>
        /// Bit 3 (Mask 0x08): Single-price Cross Trade Flag True: Trade resulting from a single-price cross False: Execution during continuous trading
        /// </summary>
        /// <value>Bit 3 (Mask 0x08): Single-price Cross Trade Flag True: Trade resulting from a single-price cross False: Execution during continuous trading</value>
        [JsonPropertyName("is_single_price_cross_trade")]
        public bool? IsSinglePriceCrossTrade { get { return this.IsSinglePriceCrossTradeOption; } set { this.IsSinglePriceCrossTradeOption = new(value); } }

        /// <summary>
        /// Used to track the state of Size
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> SizeOption { get; private set; }

        /// <summary>
        /// Trade volume in number of shares
        /// </summary>
        /// <value>Trade volume in number of shares</value>
        [JsonPropertyName("size")]
        public int? Size { get { return this.SizeOption; } set { this.SizeOption = new(value); } }

        /// <summary>
        /// Used to track the state of Price
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<double?> PriceOption { get; private set; }

        /// <summary>
        /// Execution price as decimal
        /// </summary>
        /// <value>Execution price as decimal</value>
        [JsonPropertyName("price")]
        public double? Price { get { return this.PriceOption; } set { this.PriceOption = new(value); } }

        /// <summary>
        /// Used to track the state of TradeId
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<long?> TradeIdOption { get; private set; }

        /// <summary>
        /// IEX trade identifier
        /// </summary>
        /// <value>IEX trade identifier</value>
        [JsonPropertyName("trade_id")]
        public long? TradeId { get { return this.TradeIdOption; } set { this.TradeIdOption = new(value); } }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class Level3ExecutedOrderModel {\n");
            sb.Append("  Symbol: ").Append(Symbol).Append("\n");
            sb.Append("  TimestampNanos: ").Append(TimestampNanos).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  OrderIdReference: ").Append(OrderIdReference).Append("\n");
            sb.Append("  SaleConditionFlags: ").Append(SaleConditionFlags).Append("\n");
            sb.Append("  IsIntermarketSweep: ").Append(IsIntermarketSweep).Append("\n");
            sb.Append("  IsExtendedHoursTrade: ").Append(IsExtendedHoursTrade).Append("\n");
            sb.Append("  IsOddLotTrade: ").Append(IsOddLotTrade).Append("\n");
            sb.Append("  IsTradeThroughExempt: ").Append(IsTradeThroughExempt).Append("\n");
            sb.Append("  IsSinglePriceCrossTrade: ").Append(IsSinglePriceCrossTrade).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  TradeId: ").Append(TradeId).Append("\n");
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
    /// A Json converter for type <see cref="Level3ExecutedOrderModel" />
    /// </summary>
    public class Level3ExecutedOrderModelJsonConverter : JsonConverter<Level3ExecutedOrderModel>
    {
        /// <summary>
        /// The format to use to serialize Timestamp
        /// </summary>
        public static string TimestampFormat { get; set; } = "yyyy'-'MM'-'dd'T'HH':'mm':'ss'.'fffffffK";

        /// <summary>
        /// Deserializes json to <see cref="Level3ExecutedOrderModel" />
        /// </summary>
        /// <param name="utf8JsonReader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <returns></returns>
        /// <exception cref="JsonException"></exception>
        public override Level3ExecutedOrderModel Read(ref Utf8JsonReader utf8JsonReader, Type typeToConvert, JsonSerializerOptions jsonSerializerOptions)
        {
            int currentDepth = utf8JsonReader.CurrentDepth;

            if (utf8JsonReader.TokenType != JsonTokenType.StartObject && utf8JsonReader.TokenType != JsonTokenType.StartArray)
                throw new JsonException();

            JsonTokenType startingTokenType = utf8JsonReader.TokenType;

            Option<string?> symbol = default;
            Option<long?> timestampNanos = default;
            Option<DateTime?> timestamp = default;
            Option<long?> orderIdReference = default;
            Option<int?> saleConditionFlags = default;
            Option<bool?> isIntermarketSweep = default;
            Option<bool?> isExtendedHoursTrade = default;
            Option<bool?> isOddLotTrade = default;
            Option<bool?> isTradeThroughExempt = default;
            Option<bool?> isSinglePriceCrossTrade = default;
            Option<int?> size = default;
            Option<double?> price = default;
            Option<long?> tradeId = default;

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
                        case "order_id_reference":
                            orderIdReference = new Option<long?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (long?)null : utf8JsonReader.GetInt64());
                            break;
                        case "sale_condition_flags":
                            saleConditionFlags = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "is_intermarket_sweep":
                            isIntermarketSweep = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_extended_hours_trade":
                            isExtendedHoursTrade = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_odd_lot_trade":
                            isOddLotTrade = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_trade_through_exempt":
                            isTradeThroughExempt = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "is_single_price_cross_trade":
                            isSinglePriceCrossTrade = new Option<bool?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (bool?)null : utf8JsonReader.GetBoolean());
                            break;
                        case "size":
                            size = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "price":
                            price = new Option<double?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (double?)null : utf8JsonReader.GetDouble());
                            break;
                        case "trade_id":
                            tradeId = new Option<long?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (long?)null : utf8JsonReader.GetInt64());
                            break;
                        default:
                            break;
                    }
                }
            }

            if (timestampNanos.IsSet && timestampNanos.Value == null)
                throw new ArgumentNullException(nameof(timestampNanos), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (timestamp.IsSet && timestamp.Value == null)
                throw new ArgumentNullException(nameof(timestamp), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (orderIdReference.IsSet && orderIdReference.Value == null)
                throw new ArgumentNullException(nameof(orderIdReference), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (saleConditionFlags.IsSet && saleConditionFlags.Value == null)
                throw new ArgumentNullException(nameof(saleConditionFlags), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (isIntermarketSweep.IsSet && isIntermarketSweep.Value == null)
                throw new ArgumentNullException(nameof(isIntermarketSweep), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (isExtendedHoursTrade.IsSet && isExtendedHoursTrade.Value == null)
                throw new ArgumentNullException(nameof(isExtendedHoursTrade), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (isOddLotTrade.IsSet && isOddLotTrade.Value == null)
                throw new ArgumentNullException(nameof(isOddLotTrade), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (isTradeThroughExempt.IsSet && isTradeThroughExempt.Value == null)
                throw new ArgumentNullException(nameof(isTradeThroughExempt), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (isSinglePriceCrossTrade.IsSet && isSinglePriceCrossTrade.Value == null)
                throw new ArgumentNullException(nameof(isSinglePriceCrossTrade), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (size.IsSet && size.Value == null)
                throw new ArgumentNullException(nameof(size), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (price.IsSet && price.Value == null)
                throw new ArgumentNullException(nameof(price), "Property is not nullable for class Level3ExecutedOrderModel.");

            if (tradeId.IsSet && tradeId.Value == null)
                throw new ArgumentNullException(nameof(tradeId), "Property is not nullable for class Level3ExecutedOrderModel.");

            return new Level3ExecutedOrderModel(symbol, timestampNanos, timestamp, orderIdReference, saleConditionFlags, isIntermarketSweep, isExtendedHoursTrade, isOddLotTrade, isTradeThroughExempt, isSinglePriceCrossTrade, size, price, tradeId);
        }

        /// <summary>
        /// Serializes a <see cref="Level3ExecutedOrderModel" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="level3ExecutedOrderModel"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public override void Write(Utf8JsonWriter writer, Level3ExecutedOrderModel level3ExecutedOrderModel, JsonSerializerOptions jsonSerializerOptions)
        {
            writer.WriteStartObject();

            WriteProperties(writer, level3ExecutedOrderModel, jsonSerializerOptions);
            writer.WriteEndObject();
        }

        /// <summary>
        /// Serializes the properties of <see cref="Level3ExecutedOrderModel" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="level3ExecutedOrderModel"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public void WriteProperties(Utf8JsonWriter writer, Level3ExecutedOrderModel level3ExecutedOrderModel, JsonSerializerOptions jsonSerializerOptions)
        {
            if (level3ExecutedOrderModel.SymbolOption.IsSet)
                if (level3ExecutedOrderModel.SymbolOption.Value != null)
                    writer.WriteString("symbol", level3ExecutedOrderModel.Symbol);
                else
                    writer.WriteNull("symbol");

            if (level3ExecutedOrderModel.TimestampNanosOption.IsSet)
                writer.WriteNumber("timestamp_nanos", level3ExecutedOrderModel.TimestampNanosOption.Value!.Value);

            if (level3ExecutedOrderModel.TimestampOption.IsSet)
                writer.WriteString("timestamp", level3ExecutedOrderModel.TimestampOption.Value!.Value.ToString(TimestampFormat));

            if (level3ExecutedOrderModel.OrderIdReferenceOption.IsSet)
                writer.WriteNumber("order_id_reference", level3ExecutedOrderModel.OrderIdReferenceOption.Value!.Value);

            if (level3ExecutedOrderModel.SaleConditionFlagsOption.IsSet)
                writer.WriteNumber("sale_condition_flags", level3ExecutedOrderModel.SaleConditionFlagsOption.Value!.Value);

            if (level3ExecutedOrderModel.IsIntermarketSweepOption.IsSet)
                writer.WriteBoolean("is_intermarket_sweep", level3ExecutedOrderModel.IsIntermarketSweepOption.Value!.Value);

            if (level3ExecutedOrderModel.IsExtendedHoursTradeOption.IsSet)
                writer.WriteBoolean("is_extended_hours_trade", level3ExecutedOrderModel.IsExtendedHoursTradeOption.Value!.Value);

            if (level3ExecutedOrderModel.IsOddLotTradeOption.IsSet)
                writer.WriteBoolean("is_odd_lot_trade", level3ExecutedOrderModel.IsOddLotTradeOption.Value!.Value);

            if (level3ExecutedOrderModel.IsTradeThroughExemptOption.IsSet)
                writer.WriteBoolean("is_trade_through_exempt", level3ExecutedOrderModel.IsTradeThroughExemptOption.Value!.Value);

            if (level3ExecutedOrderModel.IsSinglePriceCrossTradeOption.IsSet)
                writer.WriteBoolean("is_single_price_cross_trade", level3ExecutedOrderModel.IsSinglePriceCrossTradeOption.Value!.Value);

            if (level3ExecutedOrderModel.SizeOption.IsSet)
                writer.WriteNumber("size", level3ExecutedOrderModel.SizeOption.Value!.Value);

            if (level3ExecutedOrderModel.PriceOption.IsSet)
                writer.WriteNumber("price", level3ExecutedOrderModel.PriceOption.Value!.Value);

            if (level3ExecutedOrderModel.TradeIdOption.IsSet)
                writer.WriteNumber("trade_id", level3ExecutedOrderModel.TradeIdOption.Value!.Value);
        }
    }
}
