/*
 * CoinAPI Market Data REST API
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
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.TypeAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import org.openapitools.client.JSON;

/**
 * Represents a timeseries period used in exchange rate data.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2025-08-01T06:05:24.178838719Z[Etc/UTC]", comments = "Generator version: 7.14.0")
public class V1TimeseriesPeriod {
  public static final String SERIALIZED_NAME_PERIOD_ID = "period_id";
  @SerializedName(SERIALIZED_NAME_PERIOD_ID)
  @javax.annotation.Nullable
  private String periodId;

  public static final String SERIALIZED_NAME_LENGTH_SECONDS = "length_seconds";
  @SerializedName(SERIALIZED_NAME_LENGTH_SECONDS)
  @javax.annotation.Nullable
  private Integer lengthSeconds;

  public static final String SERIALIZED_NAME_LENGTH_MONTHS = "length_months";
  @SerializedName(SERIALIZED_NAME_LENGTH_MONTHS)
  @javax.annotation.Nullable
  private Integer lengthMonths;

  public static final String SERIALIZED_NAME_UNIT_COUNT = "unit_count";
  @SerializedName(SERIALIZED_NAME_UNIT_COUNT)
  @javax.annotation.Nullable
  private Integer unitCount;

  public static final String SERIALIZED_NAME_UNIT_NAME = "unit_name";
  @SerializedName(SERIALIZED_NAME_UNIT_NAME)
  @javax.annotation.Nullable
  private String unitName;

  public static final String SERIALIZED_NAME_DISPLAY_NAME = "display_name";
  @SerializedName(SERIALIZED_NAME_DISPLAY_NAME)
  @javax.annotation.Nullable
  private String displayName;

  public V1TimeseriesPeriod() {
  }

  public V1TimeseriesPeriod periodId(@javax.annotation.Nullable String periodId) {
    this.periodId = periodId;
    return this;
  }

  /**
   * The period ID.
   * @return periodId
   */
  @javax.annotation.Nullable
  public String getPeriodId() {
    return periodId;
  }

  public void setPeriodId(@javax.annotation.Nullable String periodId) {
    this.periodId = periodId;
  }


  public V1TimeseriesPeriod lengthSeconds(@javax.annotation.Nullable Integer lengthSeconds) {
    this.lengthSeconds = lengthSeconds;
    return this;
  }

  /**
   * The length of the period in seconds.
   * @return lengthSeconds
   */
  @javax.annotation.Nullable
  public Integer getLengthSeconds() {
    return lengthSeconds;
  }

  public void setLengthSeconds(@javax.annotation.Nullable Integer lengthSeconds) {
    this.lengthSeconds = lengthSeconds;
  }


  public V1TimeseriesPeriod lengthMonths(@javax.annotation.Nullable Integer lengthMonths) {
    this.lengthMonths = lengthMonths;
    return this;
  }

  /**
   * The length of the period in months.
   * @return lengthMonths
   */
  @javax.annotation.Nullable
  public Integer getLengthMonths() {
    return lengthMonths;
  }

  public void setLengthMonths(@javax.annotation.Nullable Integer lengthMonths) {
    this.lengthMonths = lengthMonths;
  }


  public V1TimeseriesPeriod unitCount(@javax.annotation.Nullable Integer unitCount) {
    this.unitCount = unitCount;
    return this;
  }

  /**
   * The unit count.
   * @return unitCount
   */
  @javax.annotation.Nullable
  public Integer getUnitCount() {
    return unitCount;
  }

  public void setUnitCount(@javax.annotation.Nullable Integer unitCount) {
    this.unitCount = unitCount;
  }


  public V1TimeseriesPeriod unitName(@javax.annotation.Nullable String unitName) {
    this.unitName = unitName;
    return this;
  }

  /**
   * The unit name.
   * @return unitName
   */
  @javax.annotation.Nullable
  public String getUnitName() {
    return unitName;
  }

  public void setUnitName(@javax.annotation.Nullable String unitName) {
    this.unitName = unitName;
  }


  public V1TimeseriesPeriod displayName(@javax.annotation.Nullable String displayName) {
    this.displayName = displayName;
    return this;
  }

  /**
   * The display name of the timeseries period.
   * @return displayName
   */
  @javax.annotation.Nullable
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(@javax.annotation.Nullable String displayName) {
    this.displayName = displayName;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    V1TimeseriesPeriod v1TimeseriesPeriod = (V1TimeseriesPeriod) o;
    return Objects.equals(this.periodId, v1TimeseriesPeriod.periodId) &&
        Objects.equals(this.lengthSeconds, v1TimeseriesPeriod.lengthSeconds) &&
        Objects.equals(this.lengthMonths, v1TimeseriesPeriod.lengthMonths) &&
        Objects.equals(this.unitCount, v1TimeseriesPeriod.unitCount) &&
        Objects.equals(this.unitName, v1TimeseriesPeriod.unitName) &&
        Objects.equals(this.displayName, v1TimeseriesPeriod.displayName);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(periodId, lengthSeconds, lengthMonths, unitCount, unitName, displayName);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class V1TimeseriesPeriod {\n");
    sb.append("    periodId: ").append(toIndentedString(periodId)).append("\n");
    sb.append("    lengthSeconds: ").append(toIndentedString(lengthSeconds)).append("\n");
    sb.append("    lengthMonths: ").append(toIndentedString(lengthMonths)).append("\n");
    sb.append("    unitCount: ").append(toIndentedString(unitCount)).append("\n");
    sb.append("    unitName: ").append(toIndentedString(unitName)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>(Arrays.asList("period_id", "length_seconds", "length_months", "unit_count", "unit_name", "display_name"));

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>(0);
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to V1TimeseriesPeriod
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!V1TimeseriesPeriod.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in V1TimeseriesPeriod is not found in the empty JSON string", V1TimeseriesPeriod.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!V1TimeseriesPeriod.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `V1TimeseriesPeriod` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("period_id") != null && !jsonObj.get("period_id").isJsonNull()) && !jsonObj.get("period_id").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `period_id` to be a primitive type in the JSON string but got `%s`", jsonObj.get("period_id").toString()));
      }
      if ((jsonObj.get("unit_name") != null && !jsonObj.get("unit_name").isJsonNull()) && !jsonObj.get("unit_name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `unit_name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("unit_name").toString()));
      }
      if ((jsonObj.get("display_name") != null && !jsonObj.get("display_name").isJsonNull()) && !jsonObj.get("display_name").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `display_name` to be a primitive type in the JSON string but got `%s`", jsonObj.get("display_name").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!V1TimeseriesPeriod.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'V1TimeseriesPeriod' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<V1TimeseriesPeriod> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(V1TimeseriesPeriod.class));

       return (TypeAdapter<T>) new TypeAdapter<V1TimeseriesPeriod>() {
           @Override
           public void write(JsonWriter out, V1TimeseriesPeriod value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public V1TimeseriesPeriod read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of V1TimeseriesPeriod given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of V1TimeseriesPeriod
   * @throws IOException if the JSON string is invalid with respect to V1TimeseriesPeriod
   */
  public static V1TimeseriesPeriod fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, V1TimeseriesPeriod.class);
  }

  /**
   * Convert an instance of V1TimeseriesPeriod to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

