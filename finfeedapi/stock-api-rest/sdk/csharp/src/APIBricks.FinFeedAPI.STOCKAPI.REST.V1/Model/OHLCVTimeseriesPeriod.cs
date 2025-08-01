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
    /// Represents a timeseries period used in exchange rate data.
    /// </summary>
    public partial class OHLCVTimeseriesPeriod : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OHLCVTimeseriesPeriod" /> class.
        /// </summary>
        /// <param name="periodId">Gets or sets the period ID.</param>
        /// <param name="lengthSeconds">Gets or sets the length of the period in seconds.</param>
        /// <param name="lengthMonths">Gets or sets the length of the period in months.</param>
        /// <param name="unitCount">Gets or sets the unit count.</param>
        /// <param name="unitName">Gets or sets the unit name.</param>
        /// <param name="displayName">Gets or sets the display name of the timeseries period.</param>
        [JsonConstructor]
        public OHLCVTimeseriesPeriod(Option<string?> periodId = default, Option<int?> lengthSeconds = default, Option<int?> lengthMonths = default, Option<int?> unitCount = default, Option<string?> unitName = default, Option<string?> displayName = default)
        {
            PeriodIdOption = periodId;
            LengthSecondsOption = lengthSeconds;
            LengthMonthsOption = lengthMonths;
            UnitCountOption = unitCount;
            UnitNameOption = unitName;
            DisplayNameOption = displayName;
            OnCreated();
        }

        partial void OnCreated();

        /// <summary>
        /// Used to track the state of PeriodId
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> PeriodIdOption { get; private set; }

        /// <summary>
        /// Gets or sets the period ID.
        /// </summary>
        /// <value>Gets or sets the period ID.</value>
        [JsonPropertyName("period_id")]
        public string? PeriodId { get { return this.PeriodIdOption; } set { this.PeriodIdOption = new(value); } }

        /// <summary>
        /// Used to track the state of LengthSeconds
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> LengthSecondsOption { get; private set; }

        /// <summary>
        /// Gets or sets the length of the period in seconds.
        /// </summary>
        /// <value>Gets or sets the length of the period in seconds.</value>
        [JsonPropertyName("length_seconds")]
        public int? LengthSeconds { get { return this.LengthSecondsOption; } set { this.LengthSecondsOption = new(value); } }

        /// <summary>
        /// Used to track the state of LengthMonths
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> LengthMonthsOption { get; private set; }

        /// <summary>
        /// Gets or sets the length of the period in months.
        /// </summary>
        /// <value>Gets or sets the length of the period in months.</value>
        [JsonPropertyName("length_months")]
        public int? LengthMonths { get { return this.LengthMonthsOption; } set { this.LengthMonthsOption = new(value); } }

        /// <summary>
        /// Used to track the state of UnitCount
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<int?> UnitCountOption { get; private set; }

        /// <summary>
        /// Gets or sets the unit count.
        /// </summary>
        /// <value>Gets or sets the unit count.</value>
        [JsonPropertyName("unit_count")]
        public int? UnitCount { get { return this.UnitCountOption; } set { this.UnitCountOption = new(value); } }

        /// <summary>
        /// Used to track the state of UnitName
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> UnitNameOption { get; private set; }

        /// <summary>
        /// Gets or sets the unit name.
        /// </summary>
        /// <value>Gets or sets the unit name.</value>
        [JsonPropertyName("unit_name")]
        public string? UnitName { get { return this.UnitNameOption; } set { this.UnitNameOption = new(value); } }

        /// <summary>
        /// Used to track the state of DisplayName
        /// </summary>
        [JsonIgnore]
        [global::System.ComponentModel.EditorBrowsable(global::System.ComponentModel.EditorBrowsableState.Never)]
        public Option<string?> DisplayNameOption { get; private set; }

        /// <summary>
        /// Gets or sets the display name of the timeseries period.
        /// </summary>
        /// <value>Gets or sets the display name of the timeseries period.</value>
        [JsonPropertyName("display_name")]
        public string? DisplayName { get { return this.DisplayNameOption; } set { this.DisplayNameOption = new(value); } }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class OHLCVTimeseriesPeriod {\n");
            sb.Append("  PeriodId: ").Append(PeriodId).Append("\n");
            sb.Append("  LengthSeconds: ").Append(LengthSeconds).Append("\n");
            sb.Append("  LengthMonths: ").Append(LengthMonths).Append("\n");
            sb.Append("  UnitCount: ").Append(UnitCount).Append("\n");
            sb.Append("  UnitName: ").Append(UnitName).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
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
    /// A Json converter for type <see cref="OHLCVTimeseriesPeriod" />
    /// </summary>
    public class OHLCVTimeseriesPeriodJsonConverter : JsonConverter<OHLCVTimeseriesPeriod>
    {
        /// <summary>
        /// Deserializes json to <see cref="OHLCVTimeseriesPeriod" />
        /// </summary>
        /// <param name="utf8JsonReader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <returns></returns>
        /// <exception cref="JsonException"></exception>
        public override OHLCVTimeseriesPeriod Read(ref Utf8JsonReader utf8JsonReader, Type typeToConvert, JsonSerializerOptions jsonSerializerOptions)
        {
            int currentDepth = utf8JsonReader.CurrentDepth;

            if (utf8JsonReader.TokenType != JsonTokenType.StartObject && utf8JsonReader.TokenType != JsonTokenType.StartArray)
                throw new JsonException();

            JsonTokenType startingTokenType = utf8JsonReader.TokenType;

            Option<string?> periodId = default;
            Option<int?> lengthSeconds = default;
            Option<int?> lengthMonths = default;
            Option<int?> unitCount = default;
            Option<string?> unitName = default;
            Option<string?> displayName = default;

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
                        case "period_id":
                            periodId = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        case "length_seconds":
                            lengthSeconds = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "length_months":
                            lengthMonths = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "unit_count":
                            unitCount = new Option<int?>(utf8JsonReader.TokenType == JsonTokenType.Null ? (int?)null : utf8JsonReader.GetInt32());
                            break;
                        case "unit_name":
                            unitName = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        case "display_name":
                            displayName = new Option<string?>(utf8JsonReader.GetString());
                            break;
                        default:
                            break;
                    }
                }
            }

            if (lengthSeconds.IsSet && lengthSeconds.Value == null)
                throw new ArgumentNullException(nameof(lengthSeconds), "Property is not nullable for class OHLCVTimeseriesPeriod.");

            if (lengthMonths.IsSet && lengthMonths.Value == null)
                throw new ArgumentNullException(nameof(lengthMonths), "Property is not nullable for class OHLCVTimeseriesPeriod.");

            return new OHLCVTimeseriesPeriod(periodId, lengthSeconds, lengthMonths, unitCount, unitName, displayName);
        }

        /// <summary>
        /// Serializes a <see cref="OHLCVTimeseriesPeriod" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="oHLCVTimeseriesPeriod"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public override void Write(Utf8JsonWriter writer, OHLCVTimeseriesPeriod oHLCVTimeseriesPeriod, JsonSerializerOptions jsonSerializerOptions)
        {
            writer.WriteStartObject();

            WriteProperties(writer, oHLCVTimeseriesPeriod, jsonSerializerOptions);
            writer.WriteEndObject();
        }

        /// <summary>
        /// Serializes the properties of <see cref="OHLCVTimeseriesPeriod" />
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="oHLCVTimeseriesPeriod"></param>
        /// <param name="jsonSerializerOptions"></param>
        /// <exception cref="NotImplementedException"></exception>
        public void WriteProperties(Utf8JsonWriter writer, OHLCVTimeseriesPeriod oHLCVTimeseriesPeriod, JsonSerializerOptions jsonSerializerOptions)
        {
            if (oHLCVTimeseriesPeriod.PeriodIdOption.IsSet)
                if (oHLCVTimeseriesPeriod.PeriodIdOption.Value != null)
                    writer.WriteString("period_id", oHLCVTimeseriesPeriod.PeriodId);
                else
                    writer.WriteNull("period_id");

            if (oHLCVTimeseriesPeriod.LengthSecondsOption.IsSet)
                writer.WriteNumber("length_seconds", oHLCVTimeseriesPeriod.LengthSecondsOption.Value!.Value);

            if (oHLCVTimeseriesPeriod.LengthMonthsOption.IsSet)
                writer.WriteNumber("length_months", oHLCVTimeseriesPeriod.LengthMonthsOption.Value!.Value);

            if (oHLCVTimeseriesPeriod.UnitCountOption.IsSet)
                if (oHLCVTimeseriesPeriod.UnitCountOption.Value != null)
                    writer.WriteNumber("unit_count", oHLCVTimeseriesPeriod.UnitCountOption.Value!.Value);
                else
                    writer.WriteNull("unit_count");

            if (oHLCVTimeseriesPeriod.UnitNameOption.IsSet)
                if (oHLCVTimeseriesPeriod.UnitNameOption.Value != null)
                    writer.WriteString("unit_name", oHLCVTimeseriesPeriod.UnitName);
                else
                    writer.WriteNull("unit_name");

            if (oHLCVTimeseriesPeriod.DisplayNameOption.IsSet)
                if (oHLCVTimeseriesPeriod.DisplayNameOption.Value != null)
                    writer.WriteString("display_name", oHLCVTimeseriesPeriod.DisplayName);
                else
                    writer.WriteNull("display_name");
        }
    }
}
