package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class IndexesIndexMultiAssetWeight {
    
    String indexId
    
    String assetId
    
    Double weight
}
