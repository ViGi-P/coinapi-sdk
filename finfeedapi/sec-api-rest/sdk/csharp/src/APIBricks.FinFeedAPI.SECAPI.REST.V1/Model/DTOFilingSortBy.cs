// <auto-generated>
/*
 * FinFeedAPI SEC REST API
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
using OpenAPIClientUtils = APIBricks.FinFeedAPI.SECAPI.REST.V1.Client.ClientUtils;
using APIBricks.FinFeedAPI.SECAPI.REST.V1.Client;

namespace APIBricks.FinFeedAPI.SECAPI.REST.V1.Model
{
    /// <summary>
    /// Defines sorting options for the filing query.
    /// </summary>
    /// <value>Defines sorting options for the filing query.</value>
    public enum DTOFilingSortBy
    {
        /// <summary>
        /// Enum AccessionNumber for value: AccessionNumber
        /// </summary>
        AccessionNumber = 1,

        /// <summary>
        /// Enum FilingDate for value: FilingDate
        /// </summary>
        FilingDate = 2,

        /// <summary>
        /// Enum ReportDate for value: ReportDate
        /// </summary>
        ReportDate = 3,

        /// <summary>
        /// Enum AcceptanceDateTime for value: AcceptanceDateTime
        /// </summary>
        AcceptanceDateTime = 4,

        /// <summary>
        /// Enum Size for value: Size
        /// </summary>
        Size = 5
    }

    /// <summary>
    /// Converts <see cref="DTOFilingSortBy"/> to and from the JSON value
    /// </summary>
    public static class DTOFilingSortByValueConverter
    {
        /// <summary>
        /// Parses a given value to <see cref="DTOFilingSortBy"/>
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static DTOFilingSortBy FromString(string value)
        {
            if (value.Equals("AccessionNumber"))
                return DTOFilingSortBy.AccessionNumber;

            if (value.Equals("FilingDate"))
                return DTOFilingSortBy.FilingDate;

            if (value.Equals("ReportDate"))
                return DTOFilingSortBy.ReportDate;

            if (value.Equals("AcceptanceDateTime"))
                return DTOFilingSortBy.AcceptanceDateTime;

            if (value.Equals("Size"))
                return DTOFilingSortBy.Size;

            throw new NotImplementedException($"Could not convert value to type DTOFilingSortBy: '{value}'");
        }

        /// <summary>
        /// Parses a given value to <see cref="DTOFilingSortBy"/>
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static DTOFilingSortBy? FromStringOrDefault(string value)
        {
            if (value.Equals("AccessionNumber"))
                return DTOFilingSortBy.AccessionNumber;

            if (value.Equals("FilingDate"))
                return DTOFilingSortBy.FilingDate;

            if (value.Equals("ReportDate"))
                return DTOFilingSortBy.ReportDate;

            if (value.Equals("AcceptanceDateTime"))
                return DTOFilingSortBy.AcceptanceDateTime;

            if (value.Equals("Size"))
                return DTOFilingSortBy.Size;

            return null;
        }

        /// <summary>
        /// Converts the <see cref="DTOFilingSortBy"/> to the json value
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        /// <exception cref="NotImplementedException"></exception>
        public static string ToJsonValue(DTOFilingSortBy value)
        {
            if (value == DTOFilingSortBy.AccessionNumber)
                return "AccessionNumber";

            if (value == DTOFilingSortBy.FilingDate)
                return "FilingDate";

            if (value == DTOFilingSortBy.ReportDate)
                return "ReportDate";

            if (value == DTOFilingSortBy.AcceptanceDateTime)
                return "AcceptanceDateTime";

            if (value == DTOFilingSortBy.Size)
                return "Size";

            throw new NotImplementedException($"Value could not be handled: '{value}'");
        }
    }

    /// <summary>
    /// A Json converter for type <see cref="DTOFilingSortBy"/>
    /// </summary>
    /// <exception cref="NotImplementedException"></exception>
    public class DTOFilingSortByJsonConverter : JsonConverter<DTOFilingSortBy>
    {
        /// <summary>
        /// Returns a  from the Json object
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="options"></param>
        /// <returns></returns>
        public override DTOFilingSortBy Read(ref Utf8JsonReader reader, Type typeToConvert, JsonSerializerOptions options)
        {
            string? rawValue = reader.GetString();

            DTOFilingSortBy? result = rawValue == null
                ? null
                : DTOFilingSortByValueConverter.FromStringOrDefault(rawValue);

            if (result != null)
                return result.Value;

            throw new JsonException();
        }

        /// <summary>
        /// Writes the DTOFilingSortBy to the json writer
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="dTOFilingSortBy"></param>
        /// <param name="options"></param>
        public override void Write(Utf8JsonWriter writer, DTOFilingSortBy dTOFilingSortBy, JsonSerializerOptions options)
        {
            writer.WriteStringValue(dTOFilingSortBy.ToString());
        }
    }

    /// <summary>
    /// A Json converter for type <see cref="DTOFilingSortBy"/>
    /// </summary>
    public class DTOFilingSortByNullableJsonConverter : JsonConverter<DTOFilingSortBy?>
    {
        /// <summary>
        /// Returns a DTOFilingSortBy from the Json object
        /// </summary>
        /// <param name="reader"></param>
        /// <param name="typeToConvert"></param>
        /// <param name="options"></param>
        /// <returns></returns>
        public override DTOFilingSortBy? Read(ref Utf8JsonReader reader, Type typeToConvert, JsonSerializerOptions options)
        {
            string? rawValue = reader.GetString();

            DTOFilingSortBy? result = rawValue == null
                ? null
                : DTOFilingSortByValueConverter.FromStringOrDefault(rawValue);

            if (result != null)
                return result.Value;

            throw new JsonException();
        }

        /// <summary>
        /// Writes the DateTime to the json writer
        /// </summary>
        /// <param name="writer"></param>
        /// <param name="dTOFilingSortBy"></param>
        /// <param name="options"></param>
        public override void Write(Utf8JsonWriter writer, DTOFilingSortBy? dTOFilingSortBy, JsonSerializerOptions options)
        {
            writer.WriteStringValue(dTOFilingSortBy?.ToString() ?? "null");
        }
    }
}
