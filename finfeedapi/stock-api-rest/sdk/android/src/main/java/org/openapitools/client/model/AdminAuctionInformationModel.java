/**
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

import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Represents the response DTO for auction information
 **/
@ApiModel(description = "Represents the response DTO for auction information")
public class AdminAuctionInformationModel {
  
  @SerializedName("symbol")
  private String symbol = null;
  @SerializedName("timestamp_nanos")
  private Long timestampNanos = null;
  @SerializedName("timestamp")
  private Date timestamp = null;
  @SerializedName("auction_type")
  private Integer auctionType = null;
  @SerializedName("auction_type_code")
  private String auctionTypeCode = null;
  @SerializedName("auction_type_text")
  private String auctionTypeText = null;
  @SerializedName("is_auction_type_opening")
  private Boolean isAuctionTypeOpening = null;
  @SerializedName("is_auction_type_closing")
  private Boolean isAuctionTypeClosing = null;
  @SerializedName("is_auction_type_ipo")
  private Boolean isAuctionTypeIpo = null;
  @SerializedName("is_auction_type_halt")
  private Boolean isAuctionTypeHalt = null;
  @SerializedName("is_auction_type_volatility")
  private Boolean isAuctionTypeVolatility = null;
  @SerializedName("paired_shares")
  private Integer pairedShares = null;
  @SerializedName("reference_price")
  private Double referencePrice = null;
  @SerializedName("indicative_clearing_price")
  private Double indicativeClearingPrice = null;
  @SerializedName("imbalance_shares")
  private Integer imbalanceShares = null;
  @SerializedName("imbalance_side")
  private Integer imbalanceSide = null;
  @SerializedName("imbalance_side_code")
  private String imbalanceSideCode = null;
  @SerializedName("imbalance_side_text")
  private String imbalanceSideText = null;
  @SerializedName("is_imbalance_side_buy")
  private Boolean isImbalanceSideBuy = null;
  @SerializedName("is_imbalance_side_sell")
  private Boolean isImbalanceSideSell = null;
  @SerializedName("is_imbalance_side_none")
  private Boolean isImbalanceSideNone = null;
  @SerializedName("extension_number")
  private Integer extensionNumber = null;
  @SerializedName("scheduled_auction_time_seconds")
  private Integer scheduledAuctionTimeSeconds = null;
  @SerializedName("scheduled_auction_time")
  private Date scheduledAuctionTime = null;
  @SerializedName("auction_book_clearing_price")
  private Double auctionBookClearingPrice = null;
  @SerializedName("collar_reference_price")
  private Double collarReferencePrice = null;
  @SerializedName("lower_auction_collar")
  private Double lowerAuctionCollar = null;
  @SerializedName("upper_auction_collar")
  private Double upperAuctionCollar = null;

  /**
   * The stock symbol
   **/
  @ApiModelProperty(value = "The stock symbol")
  public String getSymbol() {
    return symbol;
  }
  public void setSymbol(String symbol) {
    this.symbol = symbol;
  }

  /**
   * Original timestamp in nanoseconds since epoch
   **/
  @ApiModelProperty(value = "Original timestamp in nanoseconds since epoch")
  public Long getTimestampNanos() {
    return timestampNanos;
  }
  public void setTimestampNanos(Long timestampNanos) {
    this.timestampNanos = timestampNanos;
  }

  /**
   * Time when the auction data was recorded as DateTime
   **/
  @ApiModelProperty(value = "Time when the auction data was recorded as DateTime")
  public Date getTimestamp() {
    return timestamp;
  }
  public void setTimestamp(Date timestamp) {
    this.timestamp = timestamp;
  }

  /**
   * Type of auction as byte value
   **/
  @ApiModelProperty(value = "Type of auction as byte value")
  public Integer getAuctionType() {
    return auctionType;
  }
  public void setAuctionType(Integer auctionType) {
    this.auctionType = auctionType;
  }

  /**
   * Type of auction as character string
   **/
  @ApiModelProperty(value = "Type of auction as character string")
  public String getAuctionTypeCode() {
    return auctionTypeCode;
  }
  public void setAuctionTypeCode(String auctionTypeCode) {
    this.auctionTypeCode = auctionTypeCode;
  }

  /**
   * Human-readable description of the auction type
   **/
  @ApiModelProperty(value = "Human-readable description of the auction type")
  public String getAuctionTypeText() {
    return auctionTypeText;
  }
  public void setAuctionTypeText(String auctionTypeText) {
    this.auctionTypeText = auctionTypeText;
  }

  /**
   * Indicates if the auction type is 'Opening Auction' ('O'/0x4f).
   **/
  @ApiModelProperty(value = "Indicates if the auction type is 'Opening Auction' ('O'/0x4f).")
  public Boolean getIsAuctionTypeOpening() {
    return isAuctionTypeOpening;
  }
  public void setIsAuctionTypeOpening(Boolean isAuctionTypeOpening) {
    this.isAuctionTypeOpening = isAuctionTypeOpening;
  }

  /**
   * Indicates if the auction type is 'Closing Auction' ('C'/0x43).
   **/
  @ApiModelProperty(value = "Indicates if the auction type is 'Closing Auction' ('C'/0x43).")
  public Boolean getIsAuctionTypeClosing() {
    return isAuctionTypeClosing;
  }
  public void setIsAuctionTypeClosing(Boolean isAuctionTypeClosing) {
    this.isAuctionTypeClosing = isAuctionTypeClosing;
  }

  /**
   * Indicates if the auction type is 'IPO Auction' ('I'/0x49).
   **/
  @ApiModelProperty(value = "Indicates if the auction type is 'IPO Auction' ('I'/0x49).")
  public Boolean getIsAuctionTypeIpo() {
    return isAuctionTypeIpo;
  }
  public void setIsAuctionTypeIpo(Boolean isAuctionTypeIpo) {
    this.isAuctionTypeIpo = isAuctionTypeIpo;
  }

  /**
   * Indicates if the auction type is 'Halt Auction' ('H'/0x48).
   **/
  @ApiModelProperty(value = "Indicates if the auction type is 'Halt Auction' ('H'/0x48).")
  public Boolean getIsAuctionTypeHalt() {
    return isAuctionTypeHalt;
  }
  public void setIsAuctionTypeHalt(Boolean isAuctionTypeHalt) {
    this.isAuctionTypeHalt = isAuctionTypeHalt;
  }

  /**
   * Indicates if the auction type is 'Volatility Auction' ('V'/0x56).
   **/
  @ApiModelProperty(value = "Indicates if the auction type is 'Volatility Auction' ('V'/0x56).")
  public Boolean getIsAuctionTypeVolatility() {
    return isAuctionTypeVolatility;
  }
  public void setIsAuctionTypeVolatility(Boolean isAuctionTypeVolatility) {
    this.isAuctionTypeVolatility = isAuctionTypeVolatility;
  }

  /**
   * Number of shares paired at the Reference Price
   **/
  @ApiModelProperty(value = "Number of shares paired at the Reference Price")
  public Integer getPairedShares() {
    return pairedShares;
  }
  public void setPairedShares(Integer pairedShares) {
    this.pairedShares = pairedShares;
  }

  /**
   * Reference price as decimal
   **/
  @ApiModelProperty(value = "Reference price as decimal")
  public Double getReferencePrice() {
    return referencePrice;
  }
  public void setReferencePrice(Double referencePrice) {
    this.referencePrice = referencePrice;
  }

  /**
   * Indicative clearing price as decimal
   **/
  @ApiModelProperty(value = "Indicative clearing price as decimal")
  public Double getIndicativeClearingPrice() {
    return indicativeClearingPrice;
  }
  public void setIndicativeClearingPrice(Double indicativeClearingPrice) {
    this.indicativeClearingPrice = indicativeClearingPrice;
  }

  /**
   * Number of unpaired shares at the Reference Price
   **/
  @ApiModelProperty(value = "Number of unpaired shares at the Reference Price")
  public Integer getImbalanceShares() {
    return imbalanceShares;
  }
  public void setImbalanceShares(Integer imbalanceShares) {
    this.imbalanceShares = imbalanceShares;
  }

  /**
   * Side of the imbalance as byte value
   **/
  @ApiModelProperty(value = "Side of the imbalance as byte value")
  public Integer getImbalanceSide() {
    return imbalanceSide;
  }
  public void setImbalanceSide(Integer imbalanceSide) {
    this.imbalanceSide = imbalanceSide;
  }

  /**
   * Side of the imbalance as character string
   **/
  @ApiModelProperty(value = "Side of the imbalance as character string")
  public String getImbalanceSideCode() {
    return imbalanceSideCode;
  }
  public void setImbalanceSideCode(String imbalanceSideCode) {
    this.imbalanceSideCode = imbalanceSideCode;
  }

  /**
   * Human-readable description of the imbalance side
   **/
  @ApiModelProperty(value = "Human-readable description of the imbalance side")
  public String getImbalanceSideText() {
    return imbalanceSideText;
  }
  public void setImbalanceSideText(String imbalanceSideText) {
    this.imbalanceSideText = imbalanceSideText;
  }

  /**
   * Indicates if there is a buy-side imbalance ('B'/0x42).
   **/
  @ApiModelProperty(value = "Indicates if there is a buy-side imbalance ('B'/0x42).")
  public Boolean getIsImbalanceSideBuy() {
    return isImbalanceSideBuy;
  }
  public void setIsImbalanceSideBuy(Boolean isImbalanceSideBuy) {
    this.isImbalanceSideBuy = isImbalanceSideBuy;
  }

  /**
   * Indicates if there is a sell-side imbalance ('S'/0x53).
   **/
  @ApiModelProperty(value = "Indicates if there is a sell-side imbalance ('S'/0x53).")
  public Boolean getIsImbalanceSideSell() {
    return isImbalanceSideSell;
  }
  public void setIsImbalanceSideSell(Boolean isImbalanceSideSell) {
    this.isImbalanceSideSell = isImbalanceSideSell;
  }

  /**
   * Indicates if there is no imbalance ('N'/0x4e).
   **/
  @ApiModelProperty(value = "Indicates if there is no imbalance ('N'/0x4e).")
  public Boolean getIsImbalanceSideNone() {
    return isImbalanceSideNone;
  }
  public void setIsImbalanceSideNone(Boolean isImbalanceSideNone) {
    this.isImbalanceSideNone = isImbalanceSideNone;
  }

  /**
   * Number of extensions to the auction
   **/
  @ApiModelProperty(value = "Number of extensions to the auction")
  public Integer getExtensionNumber() {
    return extensionNumber;
  }
  public void setExtensionNumber(Integer extensionNumber) {
    this.extensionNumber = extensionNumber;
  }

  /**
   * Scheduled auction time in seconds since epoch
   **/
  @ApiModelProperty(value = "Scheduled auction time in seconds since epoch")
  public Integer getScheduledAuctionTimeSeconds() {
    return scheduledAuctionTimeSeconds;
  }
  public void setScheduledAuctionTimeSeconds(Integer scheduledAuctionTimeSeconds) {
    this.scheduledAuctionTimeSeconds = scheduledAuctionTimeSeconds;
  }

  /**
   * Scheduled time for the auction as DateTime
   **/
  @ApiModelProperty(value = "Scheduled time for the auction as DateTime")
  public Date getScheduledAuctionTime() {
    return scheduledAuctionTime;
  }
  public void setScheduledAuctionTime(Date scheduledAuctionTime) {
    this.scheduledAuctionTime = scheduledAuctionTime;
  }

  /**
   * Auction book clearing price as decimal
   **/
  @ApiModelProperty(value = "Auction book clearing price as decimal")
  public Double getAuctionBookClearingPrice() {
    return auctionBookClearingPrice;
  }
  public void setAuctionBookClearingPrice(Double auctionBookClearingPrice) {
    this.auctionBookClearingPrice = auctionBookClearingPrice;
  }

  /**
   * Collar reference price as decimal
   **/
  @ApiModelProperty(value = "Collar reference price as decimal")
  public Double getCollarReferencePrice() {
    return collarReferencePrice;
  }
  public void setCollarReferencePrice(Double collarReferencePrice) {
    this.collarReferencePrice = collarReferencePrice;
  }

  /**
   * Lower auction collar as decimal
   **/
  @ApiModelProperty(value = "Lower auction collar as decimal")
  public Double getLowerAuctionCollar() {
    return lowerAuctionCollar;
  }
  public void setLowerAuctionCollar(Double lowerAuctionCollar) {
    this.lowerAuctionCollar = lowerAuctionCollar;
  }

  /**
   * Upper auction collar as decimal
   **/
  @ApiModelProperty(value = "Upper auction collar as decimal")
  public Double getUpperAuctionCollar() {
    return upperAuctionCollar;
  }
  public void setUpperAuctionCollar(Double upperAuctionCollar) {
    this.upperAuctionCollar = upperAuctionCollar;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdminAuctionInformationModel adminAuctionInformationModel = (AdminAuctionInformationModel) o;
    return (this.symbol == null ? adminAuctionInformationModel.symbol == null : this.symbol.equals(adminAuctionInformationModel.symbol)) &&
        (this.timestampNanos == null ? adminAuctionInformationModel.timestampNanos == null : this.timestampNanos.equals(adminAuctionInformationModel.timestampNanos)) &&
        (this.timestamp == null ? adminAuctionInformationModel.timestamp == null : this.timestamp.equals(adminAuctionInformationModel.timestamp)) &&
        (this.auctionType == null ? adminAuctionInformationModel.auctionType == null : this.auctionType.equals(adminAuctionInformationModel.auctionType)) &&
        (this.auctionTypeCode == null ? adminAuctionInformationModel.auctionTypeCode == null : this.auctionTypeCode.equals(adminAuctionInformationModel.auctionTypeCode)) &&
        (this.auctionTypeText == null ? adminAuctionInformationModel.auctionTypeText == null : this.auctionTypeText.equals(adminAuctionInformationModel.auctionTypeText)) &&
        (this.isAuctionTypeOpening == null ? adminAuctionInformationModel.isAuctionTypeOpening == null : this.isAuctionTypeOpening.equals(adminAuctionInformationModel.isAuctionTypeOpening)) &&
        (this.isAuctionTypeClosing == null ? adminAuctionInformationModel.isAuctionTypeClosing == null : this.isAuctionTypeClosing.equals(adminAuctionInformationModel.isAuctionTypeClosing)) &&
        (this.isAuctionTypeIpo == null ? adminAuctionInformationModel.isAuctionTypeIpo == null : this.isAuctionTypeIpo.equals(adminAuctionInformationModel.isAuctionTypeIpo)) &&
        (this.isAuctionTypeHalt == null ? adminAuctionInformationModel.isAuctionTypeHalt == null : this.isAuctionTypeHalt.equals(adminAuctionInformationModel.isAuctionTypeHalt)) &&
        (this.isAuctionTypeVolatility == null ? adminAuctionInformationModel.isAuctionTypeVolatility == null : this.isAuctionTypeVolatility.equals(adminAuctionInformationModel.isAuctionTypeVolatility)) &&
        (this.pairedShares == null ? adminAuctionInformationModel.pairedShares == null : this.pairedShares.equals(adminAuctionInformationModel.pairedShares)) &&
        (this.referencePrice == null ? adminAuctionInformationModel.referencePrice == null : this.referencePrice.equals(adminAuctionInformationModel.referencePrice)) &&
        (this.indicativeClearingPrice == null ? adminAuctionInformationModel.indicativeClearingPrice == null : this.indicativeClearingPrice.equals(adminAuctionInformationModel.indicativeClearingPrice)) &&
        (this.imbalanceShares == null ? adminAuctionInformationModel.imbalanceShares == null : this.imbalanceShares.equals(adminAuctionInformationModel.imbalanceShares)) &&
        (this.imbalanceSide == null ? adminAuctionInformationModel.imbalanceSide == null : this.imbalanceSide.equals(adminAuctionInformationModel.imbalanceSide)) &&
        (this.imbalanceSideCode == null ? adminAuctionInformationModel.imbalanceSideCode == null : this.imbalanceSideCode.equals(adminAuctionInformationModel.imbalanceSideCode)) &&
        (this.imbalanceSideText == null ? adminAuctionInformationModel.imbalanceSideText == null : this.imbalanceSideText.equals(adminAuctionInformationModel.imbalanceSideText)) &&
        (this.isImbalanceSideBuy == null ? adminAuctionInformationModel.isImbalanceSideBuy == null : this.isImbalanceSideBuy.equals(adminAuctionInformationModel.isImbalanceSideBuy)) &&
        (this.isImbalanceSideSell == null ? adminAuctionInformationModel.isImbalanceSideSell == null : this.isImbalanceSideSell.equals(adminAuctionInformationModel.isImbalanceSideSell)) &&
        (this.isImbalanceSideNone == null ? adminAuctionInformationModel.isImbalanceSideNone == null : this.isImbalanceSideNone.equals(adminAuctionInformationModel.isImbalanceSideNone)) &&
        (this.extensionNumber == null ? adminAuctionInformationModel.extensionNumber == null : this.extensionNumber.equals(adminAuctionInformationModel.extensionNumber)) &&
        (this.scheduledAuctionTimeSeconds == null ? adminAuctionInformationModel.scheduledAuctionTimeSeconds == null : this.scheduledAuctionTimeSeconds.equals(adminAuctionInformationModel.scheduledAuctionTimeSeconds)) &&
        (this.scheduledAuctionTime == null ? adminAuctionInformationModel.scheduledAuctionTime == null : this.scheduledAuctionTime.equals(adminAuctionInformationModel.scheduledAuctionTime)) &&
        (this.auctionBookClearingPrice == null ? adminAuctionInformationModel.auctionBookClearingPrice == null : this.auctionBookClearingPrice.equals(adminAuctionInformationModel.auctionBookClearingPrice)) &&
        (this.collarReferencePrice == null ? adminAuctionInformationModel.collarReferencePrice == null : this.collarReferencePrice.equals(adminAuctionInformationModel.collarReferencePrice)) &&
        (this.lowerAuctionCollar == null ? adminAuctionInformationModel.lowerAuctionCollar == null : this.lowerAuctionCollar.equals(adminAuctionInformationModel.lowerAuctionCollar)) &&
        (this.upperAuctionCollar == null ? adminAuctionInformationModel.upperAuctionCollar == null : this.upperAuctionCollar.equals(adminAuctionInformationModel.upperAuctionCollar));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.symbol == null ? 0: this.symbol.hashCode());
    result = 31 * result + (this.timestampNanos == null ? 0: this.timestampNanos.hashCode());
    result = 31 * result + (this.timestamp == null ? 0: this.timestamp.hashCode());
    result = 31 * result + (this.auctionType == null ? 0: this.auctionType.hashCode());
    result = 31 * result + (this.auctionTypeCode == null ? 0: this.auctionTypeCode.hashCode());
    result = 31 * result + (this.auctionTypeText == null ? 0: this.auctionTypeText.hashCode());
    result = 31 * result + (this.isAuctionTypeOpening == null ? 0: this.isAuctionTypeOpening.hashCode());
    result = 31 * result + (this.isAuctionTypeClosing == null ? 0: this.isAuctionTypeClosing.hashCode());
    result = 31 * result + (this.isAuctionTypeIpo == null ? 0: this.isAuctionTypeIpo.hashCode());
    result = 31 * result + (this.isAuctionTypeHalt == null ? 0: this.isAuctionTypeHalt.hashCode());
    result = 31 * result + (this.isAuctionTypeVolatility == null ? 0: this.isAuctionTypeVolatility.hashCode());
    result = 31 * result + (this.pairedShares == null ? 0: this.pairedShares.hashCode());
    result = 31 * result + (this.referencePrice == null ? 0: this.referencePrice.hashCode());
    result = 31 * result + (this.indicativeClearingPrice == null ? 0: this.indicativeClearingPrice.hashCode());
    result = 31 * result + (this.imbalanceShares == null ? 0: this.imbalanceShares.hashCode());
    result = 31 * result + (this.imbalanceSide == null ? 0: this.imbalanceSide.hashCode());
    result = 31 * result + (this.imbalanceSideCode == null ? 0: this.imbalanceSideCode.hashCode());
    result = 31 * result + (this.imbalanceSideText == null ? 0: this.imbalanceSideText.hashCode());
    result = 31 * result + (this.isImbalanceSideBuy == null ? 0: this.isImbalanceSideBuy.hashCode());
    result = 31 * result + (this.isImbalanceSideSell == null ? 0: this.isImbalanceSideSell.hashCode());
    result = 31 * result + (this.isImbalanceSideNone == null ? 0: this.isImbalanceSideNone.hashCode());
    result = 31 * result + (this.extensionNumber == null ? 0: this.extensionNumber.hashCode());
    result = 31 * result + (this.scheduledAuctionTimeSeconds == null ? 0: this.scheduledAuctionTimeSeconds.hashCode());
    result = 31 * result + (this.scheduledAuctionTime == null ? 0: this.scheduledAuctionTime.hashCode());
    result = 31 * result + (this.auctionBookClearingPrice == null ? 0: this.auctionBookClearingPrice.hashCode());
    result = 31 * result + (this.collarReferencePrice == null ? 0: this.collarReferencePrice.hashCode());
    result = 31 * result + (this.lowerAuctionCollar == null ? 0: this.lowerAuctionCollar.hashCode());
    result = 31 * result + (this.upperAuctionCollar == null ? 0: this.upperAuctionCollar.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdminAuctionInformationModel {\n");
    
    sb.append("  symbol: ").append(symbol).append("\n");
    sb.append("  timestampNanos: ").append(timestampNanos).append("\n");
    sb.append("  timestamp: ").append(timestamp).append("\n");
    sb.append("  auctionType: ").append(auctionType).append("\n");
    sb.append("  auctionTypeCode: ").append(auctionTypeCode).append("\n");
    sb.append("  auctionTypeText: ").append(auctionTypeText).append("\n");
    sb.append("  isAuctionTypeOpening: ").append(isAuctionTypeOpening).append("\n");
    sb.append("  isAuctionTypeClosing: ").append(isAuctionTypeClosing).append("\n");
    sb.append("  isAuctionTypeIpo: ").append(isAuctionTypeIpo).append("\n");
    sb.append("  isAuctionTypeHalt: ").append(isAuctionTypeHalt).append("\n");
    sb.append("  isAuctionTypeVolatility: ").append(isAuctionTypeVolatility).append("\n");
    sb.append("  pairedShares: ").append(pairedShares).append("\n");
    sb.append("  referencePrice: ").append(referencePrice).append("\n");
    sb.append("  indicativeClearingPrice: ").append(indicativeClearingPrice).append("\n");
    sb.append("  imbalanceShares: ").append(imbalanceShares).append("\n");
    sb.append("  imbalanceSide: ").append(imbalanceSide).append("\n");
    sb.append("  imbalanceSideCode: ").append(imbalanceSideCode).append("\n");
    sb.append("  imbalanceSideText: ").append(imbalanceSideText).append("\n");
    sb.append("  isImbalanceSideBuy: ").append(isImbalanceSideBuy).append("\n");
    sb.append("  isImbalanceSideSell: ").append(isImbalanceSideSell).append("\n");
    sb.append("  isImbalanceSideNone: ").append(isImbalanceSideNone).append("\n");
    sb.append("  extensionNumber: ").append(extensionNumber).append("\n");
    sb.append("  scheduledAuctionTimeSeconds: ").append(scheduledAuctionTimeSeconds).append("\n");
    sb.append("  scheduledAuctionTime: ").append(scheduledAuctionTime).append("\n");
    sb.append("  auctionBookClearingPrice: ").append(auctionBookClearingPrice).append("\n");
    sb.append("  collarReferencePrice: ").append(collarReferencePrice).append("\n");
    sb.append("  lowerAuctionCollar: ").append(lowerAuctionCollar).append("\n");
    sb.append("  upperAuctionCollar: ").append(upperAuctionCollar).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
