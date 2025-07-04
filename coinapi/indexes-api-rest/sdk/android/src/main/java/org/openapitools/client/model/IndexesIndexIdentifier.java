/**
 * CoinAPI Indexes REST API
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
 * Represents an index id
 **/
@ApiModel(description = "Represents an index id")
public class IndexesIndexIdentifier {
  
  @SerializedName("id")
  private String id = null;

  /**
   * Index ID
   **/
  @ApiModelProperty(value = "Index ID")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IndexesIndexIdentifier indexesIndexIdentifier = (IndexesIndexIdentifier) o;
    return (this.id == null ? indexesIndexIdentifier.id == null : this.id.equals(indexesIndexIdentifier.id));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IndexesIndexIdentifier {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
