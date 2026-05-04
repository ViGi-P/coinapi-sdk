package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ModelsAddOrderModel;
import org.openapitools.model.ModelsClearBookModel;
import org.openapitools.model.ModelsDeleteOrderModel;
import org.openapitools.model.ModelsExecutedOrderModel;
import org.openapitools.model.ModelsModifyOrderModel;

@Canonical
class ModelsOrderBookModel {
    
    ModelsAddOrderModel addOrder
    
    ModelsDeleteOrderModel deleteOrder
    
    ModelsModifyOrderModel modifyOrder
    
    ModelsExecutedOrderModel executedOrder
    
    ModelsClearBookModel clearBook
}
