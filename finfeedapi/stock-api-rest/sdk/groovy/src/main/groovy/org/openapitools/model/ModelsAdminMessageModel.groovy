package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.IEXSystemEventSystemEventModel;
import org.openapitools.model.ModelsAuctionInformationModel;
import org.openapitools.model.ModelsOfficialPriceModel;
import org.openapitools.model.ModelsOperationalHaltStatusModel;
import org.openapitools.model.ModelsRetailLiquidityIndicatorModel;
import org.openapitools.model.ModelsSecurityDirectoryModel;
import org.openapitools.model.ModelsSecurityEventModel;
import org.openapitools.model.ModelsShortSalePriceTestStatusModel;
import org.openapitools.model.ModelsTradingStatusModel;

@Canonical
class ModelsAdminMessageModel {
    
    ModelsTradingStatusModel tradingStatus
    
    ModelsOfficialPriceModel officialPrice
    
    ModelsSecurityEventModel securityEvent
    
    ModelsAuctionInformationModel auctionInformation
    
    ModelsShortSalePriceTestStatusModel shortSalePriceTest
    
    ModelsOperationalHaltStatusModel operationalHaltStatus
    
    ModelsRetailLiquidityIndicatorModel retailLiquidityIndicator
    
    IEXSystemEventSystemEventModel systemEvent
    
    ModelsSecurityDirectoryModel securityDirectory
}
