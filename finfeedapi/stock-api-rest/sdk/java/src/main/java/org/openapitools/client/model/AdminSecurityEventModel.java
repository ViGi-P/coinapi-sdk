/*
 * FinFeedAPI Stock REST API
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
import java.time.OffsetDateTime;
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
 * Represents the response DTO for security event information
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2025-08-01T06:10:16.195267915Z[Etc/UTC]", comments = "Generator version: 7.14.0")
public class AdminSecurityEventModel {
  public static final String SERIALIZED_NAME_SYMBOL = "symbol";
  @SerializedName(SERIALIZED_NAME_SYMBOL)
  @javax.annotation.Nullable
  private String symbol;

  public static final String SERIALIZED_NAME_TIMESTAMP_NANOS = "timestamp_nanos";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP_NANOS)
  @javax.annotation.Nullable
  private Long timestampNanos;

  public static final String SERIALIZED_NAME_TIMESTAMP = "timestamp";
  @SerializedName(SERIALIZED_NAME_TIMESTAMP)
  @javax.annotation.Nullable
  private OffsetDateTime timestamp;

  public static final String SERIALIZED_NAME_SECURITY_EVENT = "security_event";
  @SerializedName(SERIALIZED_NAME_SECURITY_EVENT)
  @javax.annotation.Nullable
  private Integer securityEvent;

  public static final String SERIALIZED_NAME_SECURITY_EVENT_CODE = "security_event_code";
  @SerializedName(SERIALIZED_NAME_SECURITY_EVENT_CODE)
  @javax.annotation.Nullable
  private String securityEventCode;

  public static final String SERIALIZED_NAME_SECURITY_EVENT_TEXT = "security_event_text";
  @SerializedName(SERIALIZED_NAME_SECURITY_EVENT_TEXT)
  @javax.annotation.Nullable
  private String securityEventText;

  public static final String SERIALIZED_NAME_IS_OPENING_PROCESS_COMPLETE = "is_opening_process_complete";
  @SerializedName(SERIALIZED_NAME_IS_OPENING_PROCESS_COMPLETE)
  @javax.annotation.Nullable
  private Boolean isOpeningProcessComplete;

  public static final String SERIALIZED_NAME_IS_CLOSING_PROCESS_COMPLETE = "is_closing_process_complete";
  @SerializedName(SERIALIZED_NAME_IS_CLOSING_PROCESS_COMPLETE)
  @javax.annotation.Nullable
  private Boolean isClosingProcessComplete;

  public AdminSecurityEventModel() {
  }

  public AdminSecurityEventModel symbol(@javax.annotation.Nullable String symbol) {
    this.symbol = symbol;
    return this;
  }

  /**
   * The stock symbol
   * @return symbol
   */
  @javax.annotation.Nullable
  public String getSymbol() {
    return symbol;
  }

  public void setSymbol(@javax.annotation.Nullable String symbol) {
    this.symbol = symbol;
  }


  public AdminSecurityEventModel timestampNanos(@javax.annotation.Nullable Long timestampNanos) {
    this.timestampNanos = timestampNanos;
    return this;
  }

  /**
   * Original timestamp in nanoseconds since epoch
   * @return timestampNanos
   */
  @javax.annotation.Nullable
  public Long getTimestampNanos() {
    return timestampNanos;
  }

  public void setTimestampNanos(@javax.annotation.Nullable Long timestampNanos) {
    this.timestampNanos = timestampNanos;
  }


  public AdminSecurityEventModel timestamp(@javax.annotation.Nullable OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

  /**
   * Time when the security event was recorded as DateTime
   * @return timestamp
   */
  @javax.annotation.Nullable
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(@javax.annotation.Nullable OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }


  public AdminSecurityEventModel securityEvent(@javax.annotation.Nullable Integer securityEvent) {
    this.securityEvent = securityEvent;
    return this;
  }

  /**
   * Security event as byte value
   * @return securityEvent
   */
  @javax.annotation.Nullable
  public Integer getSecurityEvent() {
    return securityEvent;
  }

  public void setSecurityEvent(@javax.annotation.Nullable Integer securityEvent) {
    this.securityEvent = securityEvent;
  }


  public AdminSecurityEventModel securityEventCode(@javax.annotation.Nullable String securityEventCode) {
    this.securityEventCode = securityEventCode;
    return this;
  }

  /**
   * Security event as character string (&#39;O&#39; or &#39;C&#39;)
   * @return securityEventCode
   */
  @javax.annotation.Nullable
  public String getSecurityEventCode() {
    return securityEventCode;
  }

  public void setSecurityEventCode(@javax.annotation.Nullable String securityEventCode) {
    this.securityEventCode = securityEventCode;
  }


  public AdminSecurityEventModel securityEventText(@javax.annotation.Nullable String securityEventText) {
    this.securityEventText = securityEventText;
    return this;
  }

  /**
   * Human-readable description of the security event
   * @return securityEventText
   */
  @javax.annotation.Nullable
  public String getSecurityEventText() {
    return securityEventText;
  }

  public void setSecurityEventText(@javax.annotation.Nullable String securityEventText) {
    this.securityEventText = securityEventText;
  }


  public AdminSecurityEventModel isOpeningProcessComplete(@javax.annotation.Nullable Boolean isOpeningProcessComplete) {
    this.isOpeningProcessComplete = isOpeningProcessComplete;
    return this;
  }

  /**
   * Indicates if the security event is &#39;Opening Process Complete&#39; (&#39;O&#39;/0x4f).
   * @return isOpeningProcessComplete
   */
  @javax.annotation.Nullable
  public Boolean getIsOpeningProcessComplete() {
    return isOpeningProcessComplete;
  }

  public void setIsOpeningProcessComplete(@javax.annotation.Nullable Boolean isOpeningProcessComplete) {
    this.isOpeningProcessComplete = isOpeningProcessComplete;
  }


  public AdminSecurityEventModel isClosingProcessComplete(@javax.annotation.Nullable Boolean isClosingProcessComplete) {
    this.isClosingProcessComplete = isClosingProcessComplete;
    return this;
  }

  /**
   * Indicates if the security event is &#39;Closing Process Complete&#39; (&#39;C&#39;/0x43).
   * @return isClosingProcessComplete
   */
  @javax.annotation.Nullable
  public Boolean getIsClosingProcessComplete() {
    return isClosingProcessComplete;
  }

  public void setIsClosingProcessComplete(@javax.annotation.Nullable Boolean isClosingProcessComplete) {
    this.isClosingProcessComplete = isClosingProcessComplete;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdminSecurityEventModel adminSecurityEventModel = (AdminSecurityEventModel) o;
    return Objects.equals(this.symbol, adminSecurityEventModel.symbol) &&
        Objects.equals(this.timestampNanos, adminSecurityEventModel.timestampNanos) &&
        Objects.equals(this.timestamp, adminSecurityEventModel.timestamp) &&
        Objects.equals(this.securityEvent, adminSecurityEventModel.securityEvent) &&
        Objects.equals(this.securityEventCode, adminSecurityEventModel.securityEventCode) &&
        Objects.equals(this.securityEventText, adminSecurityEventModel.securityEventText) &&
        Objects.equals(this.isOpeningProcessComplete, adminSecurityEventModel.isOpeningProcessComplete) &&
        Objects.equals(this.isClosingProcessComplete, adminSecurityEventModel.isClosingProcessComplete);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(symbol, timestampNanos, timestamp, securityEvent, securityEventCode, securityEventText, isOpeningProcessComplete, isClosingProcessComplete);
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
    sb.append("class AdminSecurityEventModel {\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    timestampNanos: ").append(toIndentedString(timestampNanos)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    securityEvent: ").append(toIndentedString(securityEvent)).append("\n");
    sb.append("    securityEventCode: ").append(toIndentedString(securityEventCode)).append("\n");
    sb.append("    securityEventText: ").append(toIndentedString(securityEventText)).append("\n");
    sb.append("    isOpeningProcessComplete: ").append(toIndentedString(isOpeningProcessComplete)).append("\n");
    sb.append("    isClosingProcessComplete: ").append(toIndentedString(isClosingProcessComplete)).append("\n");
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
    openapiFields = new HashSet<String>(Arrays.asList("symbol", "timestamp_nanos", "timestamp", "security_event", "security_event_code", "security_event_text", "is_opening_process_complete", "is_closing_process_complete"));

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>(0);
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to AdminSecurityEventModel
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!AdminSecurityEventModel.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in AdminSecurityEventModel is not found in the empty JSON string", AdminSecurityEventModel.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!AdminSecurityEventModel.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `AdminSecurityEventModel` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("symbol") != null && !jsonObj.get("symbol").isJsonNull()) && !jsonObj.get("symbol").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `symbol` to be a primitive type in the JSON string but got `%s`", jsonObj.get("symbol").toString()));
      }
      if ((jsonObj.get("security_event_code") != null && !jsonObj.get("security_event_code").isJsonNull()) && !jsonObj.get("security_event_code").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `security_event_code` to be a primitive type in the JSON string but got `%s`", jsonObj.get("security_event_code").toString()));
      }
      if ((jsonObj.get("security_event_text") != null && !jsonObj.get("security_event_text").isJsonNull()) && !jsonObj.get("security_event_text").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `security_event_text` to be a primitive type in the JSON string but got `%s`", jsonObj.get("security_event_text").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!AdminSecurityEventModel.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'AdminSecurityEventModel' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<AdminSecurityEventModel> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(AdminSecurityEventModel.class));

       return (TypeAdapter<T>) new TypeAdapter<AdminSecurityEventModel>() {
           @Override
           public void write(JsonWriter out, AdminSecurityEventModel value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public AdminSecurityEventModel read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of AdminSecurityEventModel given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of AdminSecurityEventModel
   * @throws IOException if the JSON string is invalid with respect to AdminSecurityEventModel
   */
  public static AdminSecurityEventModel fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, AdminSecurityEventModel.class);
  }

  /**
   * Convert an instance of AdminSecurityEventModel to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

