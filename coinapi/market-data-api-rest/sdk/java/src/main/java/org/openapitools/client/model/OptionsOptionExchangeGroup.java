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
import java.time.OffsetDateTime;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.client.model.OptionsStrike;
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
 * Represents an option exchange group data model.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2025-08-01T06:05:24.178838719Z[Etc/UTC]", comments = "Generator version: 7.14.0")
public class OptionsOptionExchangeGroup {
  public static final String SERIALIZED_NAME_ASSET_ID_BASE = "asset_id_base";
  @SerializedName(SERIALIZED_NAME_ASSET_ID_BASE)
  @javax.annotation.Nullable
  private String assetIdBase;

  public static final String SERIALIZED_NAME_ASSET_ID_QUOTE = "asset_id_quote";
  @SerializedName(SERIALIZED_NAME_ASSET_ID_QUOTE)
  @javax.annotation.Nullable
  private String assetIdQuote;

  public static final String SERIALIZED_NAME_UNDERLYING_PRICE = "underlying_price";
  @SerializedName(SERIALIZED_NAME_UNDERLYING_PRICE)
  @javax.annotation.Nullable
  private Double underlyingPrice;

  public static final String SERIALIZED_NAME_TIME_EXPIRATION = "time_expiration";
  @SerializedName(SERIALIZED_NAME_TIME_EXPIRATION)
  @javax.annotation.Nullable
  private OffsetDateTime timeExpiration;

  public static final String SERIALIZED_NAME_STRIKES = "strikes";
  @SerializedName(SERIALIZED_NAME_STRIKES)
  @javax.annotation.Nullable
  private List<OptionsStrike> strikes;

  public OptionsOptionExchangeGroup() {
  }

  public OptionsOptionExchangeGroup assetIdBase(@javax.annotation.Nullable String assetIdBase) {
    this.assetIdBase = assetIdBase;
    return this;
  }

  /**
   * The base asset identifier.
   * @return assetIdBase
   */
  @javax.annotation.Nullable
  public String getAssetIdBase() {
    return assetIdBase;
  }

  public void setAssetIdBase(@javax.annotation.Nullable String assetIdBase) {
    this.assetIdBase = assetIdBase;
  }


  public OptionsOptionExchangeGroup assetIdQuote(@javax.annotation.Nullable String assetIdQuote) {
    this.assetIdQuote = assetIdQuote;
    return this;
  }

  /**
   * The quote asset identifier.
   * @return assetIdQuote
   */
  @javax.annotation.Nullable
  public String getAssetIdQuote() {
    return assetIdQuote;
  }

  public void setAssetIdQuote(@javax.annotation.Nullable String assetIdQuote) {
    this.assetIdQuote = assetIdQuote;
  }


  public OptionsOptionExchangeGroup underlyingPrice(@javax.annotation.Nullable Double underlyingPrice) {
    this.underlyingPrice = underlyingPrice;
    return this;
  }

  /**
   * The underlying price of the option.
   * @return underlyingPrice
   */
  @javax.annotation.Nullable
  public Double getUnderlyingPrice() {
    return underlyingPrice;
  }

  public void setUnderlyingPrice(@javax.annotation.Nullable Double underlyingPrice) {
    this.underlyingPrice = underlyingPrice;
  }


  public OptionsOptionExchangeGroup timeExpiration(@javax.annotation.Nullable OffsetDateTime timeExpiration) {
    this.timeExpiration = timeExpiration;
    return this;
  }

  /**
   * The expiration time of the option.
   * @return timeExpiration
   */
  @javax.annotation.Nullable
  public OffsetDateTime getTimeExpiration() {
    return timeExpiration;
  }

  public void setTimeExpiration(@javax.annotation.Nullable OffsetDateTime timeExpiration) {
    this.timeExpiration = timeExpiration;
  }


  public OptionsOptionExchangeGroup strikes(@javax.annotation.Nullable List<OptionsStrike> strikes) {
    this.strikes = strikes;
    return this;
  }

  public OptionsOptionExchangeGroup addStrikesItem(OptionsStrike strikesItem) {
    if (this.strikes == null) {
      this.strikes = new ArrayList<>();
    }
    this.strikes.add(strikesItem);
    return this;
  }

  /**
   * The list of strikes available.
   * @return strikes
   */
  @javax.annotation.Nullable
  public List<OptionsStrike> getStrikes() {
    return strikes;
  }

  public void setStrikes(@javax.annotation.Nullable List<OptionsStrike> strikes) {
    this.strikes = strikes;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OptionsOptionExchangeGroup optionsOptionExchangeGroup = (OptionsOptionExchangeGroup) o;
    return Objects.equals(this.assetIdBase, optionsOptionExchangeGroup.assetIdBase) &&
        Objects.equals(this.assetIdQuote, optionsOptionExchangeGroup.assetIdQuote) &&
        Objects.equals(this.underlyingPrice, optionsOptionExchangeGroup.underlyingPrice) &&
        Objects.equals(this.timeExpiration, optionsOptionExchangeGroup.timeExpiration) &&
        Objects.equals(this.strikes, optionsOptionExchangeGroup.strikes);
  }

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(assetIdBase, assetIdQuote, underlyingPrice, timeExpiration, strikes);
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
    sb.append("class OptionsOptionExchangeGroup {\n");
    sb.append("    assetIdBase: ").append(toIndentedString(assetIdBase)).append("\n");
    sb.append("    assetIdQuote: ").append(toIndentedString(assetIdQuote)).append("\n");
    sb.append("    underlyingPrice: ").append(toIndentedString(underlyingPrice)).append("\n");
    sb.append("    timeExpiration: ").append(toIndentedString(timeExpiration)).append("\n");
    sb.append("    strikes: ").append(toIndentedString(strikes)).append("\n");
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
    openapiFields = new HashSet<String>(Arrays.asList("asset_id_base", "asset_id_quote", "underlying_price", "time_expiration", "strikes"));

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>(0);
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to OptionsOptionExchangeGroup
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!OptionsOptionExchangeGroup.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in OptionsOptionExchangeGroup is not found in the empty JSON string", OptionsOptionExchangeGroup.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!OptionsOptionExchangeGroup.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `OptionsOptionExchangeGroup` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      if ((jsonObj.get("asset_id_base") != null && !jsonObj.get("asset_id_base").isJsonNull()) && !jsonObj.get("asset_id_base").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `asset_id_base` to be a primitive type in the JSON string but got `%s`", jsonObj.get("asset_id_base").toString()));
      }
      if ((jsonObj.get("asset_id_quote") != null && !jsonObj.get("asset_id_quote").isJsonNull()) && !jsonObj.get("asset_id_quote").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `asset_id_quote` to be a primitive type in the JSON string but got `%s`", jsonObj.get("asset_id_quote").toString()));
      }
      if (jsonObj.get("strikes") != null && !jsonObj.get("strikes").isJsonNull()) {
        JsonArray jsonArraystrikes = jsonObj.getAsJsonArray("strikes");
        if (jsonArraystrikes != null) {
          // ensure the json data is an array
          if (!jsonObj.get("strikes").isJsonArray()) {
            throw new IllegalArgumentException(String.format("Expected the field `strikes` to be an array in the JSON string but got `%s`", jsonObj.get("strikes").toString()));
          }

          // validate the optional field `strikes` (array)
          for (int i = 0; i < jsonArraystrikes.size(); i++) {
            OptionsStrike.validateJsonElement(jsonArraystrikes.get(i));
          };
        }
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!OptionsOptionExchangeGroup.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'OptionsOptionExchangeGroup' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<OptionsOptionExchangeGroup> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(OptionsOptionExchangeGroup.class));

       return (TypeAdapter<T>) new TypeAdapter<OptionsOptionExchangeGroup>() {
           @Override
           public void write(JsonWriter out, OptionsOptionExchangeGroup value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public OptionsOptionExchangeGroup read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of OptionsOptionExchangeGroup given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of OptionsOptionExchangeGroup
   * @throws IOException if the JSON string is invalid with respect to OptionsOptionExchangeGroup
   */
  public static OptionsOptionExchangeGroup fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, OptionsOptionExchangeGroup.class);
  }

  /**
   * Convert an instance of OptionsOptionExchangeGroup to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

