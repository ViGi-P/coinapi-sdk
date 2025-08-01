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
 * Represents the response DTO for add order information
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2025-08-01T06:10:16.195267915Z[Etc/UTC]", comments = "Generator version: 7.14.0")
public class Level3AddOrderModel {
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

  public static final String SERIALIZED_NAME_IS_SIDE_BUY = "is_side_buy";
  @SerializedName(SERIALIZED_NAME_IS_SIDE_BUY)
  @javax.annotation.Nullable
  private Boolean isSideBuy;

  public static final String SERIALIZED_NAME_SIZE = "size";
  @SerializedName(SERIALIZED_NAME_SIZE)
  @javax.annotation.Nullable
  private Integer size;

  public static final String SERIALIZED_NAME_PRICE = "price";
  @SerializedName(SERIALIZED_NAME_PRICE)
  @javax.annotation.Nullable
  private Double price;

  public static final String SERIALIZED_NAME_ORDER_ID = "order_id";
  @SerializedName(SERIALIZED_NAME_ORDER_ID)
  @javax.annotation.Nullable
  private Long orderId;

  public Level3AddOrderModel() {
  }

  public Level3AddOrderModel symbol(@javax.annotation.Nullable String symbol) {
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


  public Level3AddOrderModel timestampNanos(@javax.annotation.Nullable Long timestampNanos) {
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


  public Level3AddOrderModel timestamp(@javax.annotation.Nullable OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

  /**
   * Time when the order was added as DateTime (UTC)
   * @return timestamp
   */
  @javax.annotation.Nullable
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(@javax.annotation.Nullable OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }


  public Level3AddOrderModel isSideBuy(@javax.annotation.Nullable Boolean isSideBuy) {
    this.isSideBuy = isSideBuy;
    return this;
  }

  /**
   * Indicates if this is a Buy order (&#39;8&#39;/0x38).
   * @return isSideBuy
   */
  @javax.annotation.Nullable
  public Boolean getIsSideBuy() {
    return isSideBuy;
  }

  public void setIsSideBuy(@javax.annotation.Nullable Boolean isSideBuy) {
    this.isSideBuy = isSideBuy;
  }


  public Level3AddOrderModel size(@javax.annotation.Nullable Integer size) {
    this.size = size;
    return this;
  }

  /**
   * Quoted size in number of shares
   * @return size
   */
  @javax.annotation.Nullable
  public Integer getSize() {
    return size;
  }

  public void setSize(@javax.annotation.Nullable Integer size) {
    this.size = size;
  }


  public Level3AddOrderModel price(@javax.annotation.Nullable Double price) {
    this.price = price;
    return this;
  }

  /**
   * Price as decimal
   * @return price
   */
  @javax.annotation.Nullable
  public Double getPrice() {
    return price;
  }

  public void setPrice(@javax.annotation.Nullable Double price) {
    this.price = price;
  }


  public Level3AddOrderModel orderId(@javax.annotation.Nullable Long orderId) {
    this.orderId = orderId;
    return this;
  }

  /**
   * Order identifier
   * @return orderId
   */
  @javax.annotation.Nullable
  public Long getOrderId() {
    return orderId;
  }

  public void setOrderId(@javax.annotation.Nullable Long orderId) {
    this.orderId = orderId;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Level3AddOrderModel level3AddOrderModel = (Level3AddOrderModel) o;
    return Objects.equals(this.symbol, level3AddOrderModel.symbol) &&
        Objects.equals(this.timestampNanos, level3AddOrderModel.timestampNanos) &&
        Objects.equals(this.timestamp, level3AddOrderModel.timestamp) &&
        Objects.equals(this.isSideBuy, level3AddOrderModel.isSideBuy) &&
        Objects.equals(this.size, level3AddOrderModel.size) &&
        Objects.equals(this.price, level3AddOrderModel.price) &&
        Objects.equals(this.orderId, level3AddOrderModel.orderId);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(symbol, timestampNanos, timestamp, isSideBuy, size, price, orderId);
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
    sb.append("class Level3AddOrderModel {\n");
    sb.append("    symbol: ").append(toIndentedString(symbol)).append("\n");
    sb.append("    timestampNanos: ").append(toIndentedString(timestampNanos)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    isSideBuy: ").append(toIndentedString(isSideBuy)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    orderId: ").append(toIndentedString(orderId)).append("\n");
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
    openapiFields = new HashSet<String>(Arrays.asList("symbol", "timestamp_nanos", "timestamp", "is_side_buy", "size", "price", "order_id"));

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>(0);
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to Level3AddOrderModel
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!Level3AddOrderModel.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in Level3AddOrderModel is not found in the empty JSON string", Level3AddOrderModel.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!Level3AddOrderModel.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `Level3AddOrderModel` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("symbol") != null && !jsonObj.get("symbol").isJsonNull()) && !jsonObj.get("symbol").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `symbol` to be a primitive type in the JSON string but got `%s`", jsonObj.get("symbol").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!Level3AddOrderModel.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'Level3AddOrderModel' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<Level3AddOrderModel> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(Level3AddOrderModel.class));

       return (TypeAdapter<T>) new TypeAdapter<Level3AddOrderModel>() {
           @Override
           public void write(JsonWriter out, Level3AddOrderModel value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public Level3AddOrderModel read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of Level3AddOrderModel given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of Level3AddOrderModel
   * @throws IOException if the JSON string is invalid with respect to Level3AddOrderModel
   */
  public static Level3AddOrderModel fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, Level3AddOrderModel.class);
  }

  /**
   * Convert an instance of Level3AddOrderModel to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

