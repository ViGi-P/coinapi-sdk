/*
 * Models.AdminMessageModel.h
 *
 * Represents the response DTO for IEX admin information, combining all symbol-based admin message types
 */

#ifndef _Models.AdminMessageModel_H_
#define _Models.AdminMessageModel_H_


#include <string>
#include "IEXSystemEvent.SystemEventModel.h"
#include "Models.AuctionInformationModel.h"
#include "Models.OfficialPriceModel.h"
#include "Models.OperationalHaltStatusModel.h"
#include "Models.RetailLiquidityIndicatorModel.h"
#include "Models.SecurityDirectoryModel.h"
#include "Models.SecurityEventModel.h"
#include "Models.ShortSalePriceTestStatusModel.h"
#include "Models.TradingStatusModel.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Represents the response DTO for IEX admin information, combining all symbol-based admin message types
 *
 *  \ingroup Models
 *
 */

class Models.AdminMessageModel : public Object {
public:
	/*! \brief Constructor.
	 */
	Models.AdminMessageModel();
	Models.AdminMessageModel(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Models.AdminMessageModel();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Models.TradingStatusModel getTradingStatus();

	/*! \brief Set 
	 */
	void setTradingStatus(Models.TradingStatusModel  trading_status);
	/*! \brief Get 
	 */
	Models.OfficialPriceModel getOfficialPrice();

	/*! \brief Set 
	 */
	void setOfficialPrice(Models.OfficialPriceModel  official_price);
	/*! \brief Get 
	 */
	Models.SecurityEventModel getSecurityEvent();

	/*! \brief Set 
	 */
	void setSecurityEvent(Models.SecurityEventModel  security_event);
	/*! \brief Get 
	 */
	Models.AuctionInformationModel getAuctionInformation();

	/*! \brief Set 
	 */
	void setAuctionInformation(Models.AuctionInformationModel  auction_information);
	/*! \brief Get 
	 */
	Models.ShortSalePriceTestStatusModel getShortSalePriceTest();

	/*! \brief Set 
	 */
	void setShortSalePriceTest(Models.ShortSalePriceTestStatusModel  short_sale_price_test);
	/*! \brief Get 
	 */
	Models.OperationalHaltStatusModel getOperationalHaltStatus();

	/*! \brief Set 
	 */
	void setOperationalHaltStatus(Models.OperationalHaltStatusModel  operational_halt_status);
	/*! \brief Get 
	 */
	Models.RetailLiquidityIndicatorModel getRetailLiquidityIndicator();

	/*! \brief Set 
	 */
	void setRetailLiquidityIndicator(Models.RetailLiquidityIndicatorModel  retail_liquidity_indicator);
	/*! \brief Get 
	 */
	IEXSystemEvent.SystemEventModel getSystemEvent();

	/*! \brief Set 
	 */
	void setSystemEvent(IEXSystemEvent.SystemEventModel  system_event);
	/*! \brief Get 
	 */
	Models.SecurityDirectoryModel getSecurityDirectory();

	/*! \brief Set 
	 */
	void setSecurityDirectory(Models.SecurityDirectoryModel  security_directory);

private:
	Models.TradingStatusModel trading_status;
	Models.OfficialPriceModel official_price;
	Models.SecurityEventModel security_event;
	Models.AuctionInformationModel auction_information;
	Models.ShortSalePriceTestStatusModel short_sale_price_test;
	Models.OperationalHaltStatusModel operational_halt_status;
	Models.RetailLiquidityIndicatorModel retail_liquidity_indicator;
	IEXSystemEvent.SystemEventModel system_event;
	Models.SecurityDirectoryModel security_directory;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Models.AdminMessageModel_H_ */
