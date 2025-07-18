/**
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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Represents symbol mapping information for exchange symbols.
 **/
@ApiModel(description = "Represents symbol mapping information for exchange symbols.")
public class V1SymbolMapping {
  
  @SerializedName("symbol_id")
  private String symbolId = null;
  @SerializedName("symbol_id_exchange")
  private String symbolIdExchange = null;
  @SerializedName("coinapi_datainfo_id")
  private Integer coinapiDatainfoId = null;
  @SerializedName("asset_id_base_exchange")
  private String assetIdBaseExchange = null;
  @SerializedName("asset_id_quote_exchange")
  private String assetIdQuoteExchange = null;
  @SerializedName("asset_id_base")
  private String assetIdBase = null;
  @SerializedName("asset_id_quote")
  private String assetIdQuote = null;
  @SerializedName("price_precision")
  private Double pricePrecision = null;
  @SerializedName("size_precision")
  private Double sizePrecision = null;

  /**
   * The symbol ID.
   **/
  @ApiModelProperty(value = "The symbol ID.")
  public String getSymbolId() {
    return symbolId;
  }
  public void setSymbolId(String symbolId) {
    this.symbolId = symbolId;
  }

  /**
   * The exchange-specific symbol ID.
   **/
  @ApiModelProperty(value = "The exchange-specific symbol ID.")
  public String getSymbolIdExchange() {
    return symbolIdExchange;
  }
  public void setSymbolIdExchange(String symbolIdExchange) {
    this.symbolIdExchange = symbolIdExchange;
  }

  /**
   * The CoinAPI DataInfo ID.
   **/
  @ApiModelProperty(value = "The CoinAPI DataInfo ID.")
  public Integer getCoinapiDatainfoId() {
    return coinapiDatainfoId;
  }
  public void setCoinapiDatainfoId(Integer coinapiDatainfoId) {
    this.coinapiDatainfoId = coinapiDatainfoId;
  }

  /**
   * The exchange-specific base asset ID.
   **/
  @ApiModelProperty(value = "The exchange-specific base asset ID.")
  public String getAssetIdBaseExchange() {
    return assetIdBaseExchange;
  }
  public void setAssetIdBaseExchange(String assetIdBaseExchange) {
    this.assetIdBaseExchange = assetIdBaseExchange;
  }

  /**
   * The exchange-specific quote asset ID.
   **/
  @ApiModelProperty(value = "The exchange-specific quote asset ID.")
  public String getAssetIdQuoteExchange() {
    return assetIdQuoteExchange;
  }
  public void setAssetIdQuoteExchange(String assetIdQuoteExchange) {
    this.assetIdQuoteExchange = assetIdQuoteExchange;
  }

  /**
   * The base asset ID.
   **/
  @ApiModelProperty(value = "The base asset ID.")
  public String getAssetIdBase() {
    return assetIdBase;
  }
  public void setAssetIdBase(String assetIdBase) {
    this.assetIdBase = assetIdBase;
  }

  /**
   * The quote asset ID.
   **/
  @ApiModelProperty(value = "The quote asset ID.")
  public String getAssetIdQuote() {
    return assetIdQuote;
  }
  public void setAssetIdQuote(String assetIdQuote) {
    this.assetIdQuote = assetIdQuote;
  }

  /**
   * The price precision.
   **/
  @ApiModelProperty(value = "The price precision.")
  public Double getPricePrecision() {
    return pricePrecision;
  }
  public void setPricePrecision(Double pricePrecision) {
    this.pricePrecision = pricePrecision;
  }

  /**
   * The size precision.
   **/
  @ApiModelProperty(value = "The size precision.")
  public Double getSizePrecision() {
    return sizePrecision;
  }
  public void setSizePrecision(Double sizePrecision) {
    this.sizePrecision = sizePrecision;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    V1SymbolMapping v1SymbolMapping = (V1SymbolMapping) o;
    return (this.symbolId == null ? v1SymbolMapping.symbolId == null : this.symbolId.equals(v1SymbolMapping.symbolId)) &&
        (this.symbolIdExchange == null ? v1SymbolMapping.symbolIdExchange == null : this.symbolIdExchange.equals(v1SymbolMapping.symbolIdExchange)) &&
        (this.coinapiDatainfoId == null ? v1SymbolMapping.coinapiDatainfoId == null : this.coinapiDatainfoId.equals(v1SymbolMapping.coinapiDatainfoId)) &&
        (this.assetIdBaseExchange == null ? v1SymbolMapping.assetIdBaseExchange == null : this.assetIdBaseExchange.equals(v1SymbolMapping.assetIdBaseExchange)) &&
        (this.assetIdQuoteExchange == null ? v1SymbolMapping.assetIdQuoteExchange == null : this.assetIdQuoteExchange.equals(v1SymbolMapping.assetIdQuoteExchange)) &&
        (this.assetIdBase == null ? v1SymbolMapping.assetIdBase == null : this.assetIdBase.equals(v1SymbolMapping.assetIdBase)) &&
        (this.assetIdQuote == null ? v1SymbolMapping.assetIdQuote == null : this.assetIdQuote.equals(v1SymbolMapping.assetIdQuote)) &&
        (this.pricePrecision == null ? v1SymbolMapping.pricePrecision == null : this.pricePrecision.equals(v1SymbolMapping.pricePrecision)) &&
        (this.sizePrecision == null ? v1SymbolMapping.sizePrecision == null : this.sizePrecision.equals(v1SymbolMapping.sizePrecision));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.symbolId == null ? 0: this.symbolId.hashCode());
    result = 31 * result + (this.symbolIdExchange == null ? 0: this.symbolIdExchange.hashCode());
    result = 31 * result + (this.coinapiDatainfoId == null ? 0: this.coinapiDatainfoId.hashCode());
    result = 31 * result + (this.assetIdBaseExchange == null ? 0: this.assetIdBaseExchange.hashCode());
    result = 31 * result + (this.assetIdQuoteExchange == null ? 0: this.assetIdQuoteExchange.hashCode());
    result = 31 * result + (this.assetIdBase == null ? 0: this.assetIdBase.hashCode());
    result = 31 * result + (this.assetIdQuote == null ? 0: this.assetIdQuote.hashCode());
    result = 31 * result + (this.pricePrecision == null ? 0: this.pricePrecision.hashCode());
    result = 31 * result + (this.sizePrecision == null ? 0: this.sizePrecision.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class V1SymbolMapping {\n");
    
    sb.append("  symbolId: ").append(symbolId).append("\n");
    sb.append("  symbolIdExchange: ").append(symbolIdExchange).append("\n");
    sb.append("  coinapiDatainfoId: ").append(coinapiDatainfoId).append("\n");
    sb.append("  assetIdBaseExchange: ").append(assetIdBaseExchange).append("\n");
    sb.append("  assetIdQuoteExchange: ").append(assetIdQuoteExchange).append("\n");
    sb.append("  assetIdBase: ").append(assetIdBase).append("\n");
    sb.append("  assetIdQuote: ").append(assetIdQuote).append("\n");
    sb.append("  pricePrecision: ").append(pricePrecision).append("\n");
    sb.append("  sizePrecision: ").append(sizePrecision).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
