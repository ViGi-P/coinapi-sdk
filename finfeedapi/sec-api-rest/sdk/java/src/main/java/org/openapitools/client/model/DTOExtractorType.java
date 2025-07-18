/*
 * FinFeedAPI SEC REST API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 * Contact: support@apibricks.io
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;

import java.io.IOException;
import com.google.gson.TypeAdapter;
import com.google.gson.JsonElement;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;

/**
 * Gets or Sets DTO.ExtractorType
 */
@JsonAdapter(DTOExtractorType.Adapter.class)
public enum DTOExtractorType {
  
  TEXT("text"),
  
  HTML("html");

  private String value;

  DTOExtractorType(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static DTOExtractorType fromValue(String value) {
    for (DTOExtractorType b : DTOExtractorType.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<DTOExtractorType> {
    @Override
    public void write(final JsonWriter jsonWriter, final DTOExtractorType enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public DTOExtractorType read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return DTOExtractorType.fromValue(value);
    }
  }

  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    String value = jsonElement.getAsString();
    DTOExtractorType.fromValue(value);
  }
}

