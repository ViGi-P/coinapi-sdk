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

package org.openapitools.client.auth;

import org.openapitools.client.Pair;

import android.util.Base64;

import java.util.Map;
import java.util.List;

public class HttpBasicAuth implements Authentication {
  private String username;
  private String password;

  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }

  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  @Override
  public void applyToParams(List<Pair> queryParams, Map<String, String> headerParams) {
    String str = (username == null ? "" : username) + ":" + (password == null ? "" : password);
    headerParams.put("Authorization", "Basic " + Base64.encodeToString(str.getBytes(), Base64.DEFAULT));
  }
}
