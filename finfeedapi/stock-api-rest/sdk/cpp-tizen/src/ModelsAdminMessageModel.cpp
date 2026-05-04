#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.AdminMessageModel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.AdminMessageModel::Models.AdminMessageModel()
{
	//__init();
}

Models.AdminMessageModel::~Models.AdminMessageModel()
{
	//__cleanup();
}

void
Models.AdminMessageModel::__init()
{
	//trading_status = new Models.TradingStatusModel();
	//official_price = new Models.OfficialPriceModel();
	//security_event = new Models.SecurityEventModel();
	//auction_information = new Models.AuctionInformationModel();
	//short_sale_price_test = new Models.ShortSalePriceTestStatusModel();
	//operational_halt_status = new Models.OperationalHaltStatusModel();
	//retail_liquidity_indicator = new Models.RetailLiquidityIndicatorModel();
	//system_event = new IEXSystemEvent.SystemEventModel();
	//security_directory = new Models.SecurityDirectoryModel();
}

void
Models.AdminMessageModel::__cleanup()
{
	//if(trading_status != NULL) {
	//
	//delete trading_status;
	//trading_status = NULL;
	//}
	//if(official_price != NULL) {
	//
	//delete official_price;
	//official_price = NULL;
	//}
	//if(security_event != NULL) {
	//
	//delete security_event;
	//security_event = NULL;
	//}
	//if(auction_information != NULL) {
	//
	//delete auction_information;
	//auction_information = NULL;
	//}
	//if(short_sale_price_test != NULL) {
	//
	//delete short_sale_price_test;
	//short_sale_price_test = NULL;
	//}
	//if(operational_halt_status != NULL) {
	//
	//delete operational_halt_status;
	//operational_halt_status = NULL;
	//}
	//if(retail_liquidity_indicator != NULL) {
	//
	//delete retail_liquidity_indicator;
	//retail_liquidity_indicator = NULL;
	//}
	//if(system_event != NULL) {
	//
	//delete system_event;
	//system_event = NULL;
	//}
	//if(security_directory != NULL) {
	//
	//delete security_directory;
	//security_directory = NULL;
	//}
	//
}

void
Models.AdminMessageModel::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *trading_statusKey = "trading_status";
	node = json_object_get_member(pJsonObject, trading_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.TradingStatusModel")) {
			jsonToValue(&trading_status, node, "Models.TradingStatusModel", "Models.TradingStatusModel");
		} else {
			
			Models.TradingStatusModel* obj = static_cast<Models.TradingStatusModel*> (&trading_status);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *official_priceKey = "official_price";
	node = json_object_get_member(pJsonObject, official_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.OfficialPriceModel")) {
			jsonToValue(&official_price, node, "Models.OfficialPriceModel", "Models.OfficialPriceModel");
		} else {
			
			Models.OfficialPriceModel* obj = static_cast<Models.OfficialPriceModel*> (&official_price);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *security_eventKey = "security_event";
	node = json_object_get_member(pJsonObject, security_eventKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.SecurityEventModel")) {
			jsonToValue(&security_event, node, "Models.SecurityEventModel", "Models.SecurityEventModel");
		} else {
			
			Models.SecurityEventModel* obj = static_cast<Models.SecurityEventModel*> (&security_event);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *auction_informationKey = "auction_information";
	node = json_object_get_member(pJsonObject, auction_informationKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.AuctionInformationModel")) {
			jsonToValue(&auction_information, node, "Models.AuctionInformationModel", "Models.AuctionInformationModel");
		} else {
			
			Models.AuctionInformationModel* obj = static_cast<Models.AuctionInformationModel*> (&auction_information);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *short_sale_price_testKey = "short_sale_price_test";
	node = json_object_get_member(pJsonObject, short_sale_price_testKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.ShortSalePriceTestStatusModel")) {
			jsonToValue(&short_sale_price_test, node, "Models.ShortSalePriceTestStatusModel", "Models.ShortSalePriceTestStatusModel");
		} else {
			
			Models.ShortSalePriceTestStatusModel* obj = static_cast<Models.ShortSalePriceTestStatusModel*> (&short_sale_price_test);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *operational_halt_statusKey = "operational_halt_status";
	node = json_object_get_member(pJsonObject, operational_halt_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.OperationalHaltStatusModel")) {
			jsonToValue(&operational_halt_status, node, "Models.OperationalHaltStatusModel", "Models.OperationalHaltStatusModel");
		} else {
			
			Models.OperationalHaltStatusModel* obj = static_cast<Models.OperationalHaltStatusModel*> (&operational_halt_status);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *retail_liquidity_indicatorKey = "retail_liquidity_indicator";
	node = json_object_get_member(pJsonObject, retail_liquidity_indicatorKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.RetailLiquidityIndicatorModel")) {
			jsonToValue(&retail_liquidity_indicator, node, "Models.RetailLiquidityIndicatorModel", "Models.RetailLiquidityIndicatorModel");
		} else {
			
			Models.RetailLiquidityIndicatorModel* obj = static_cast<Models.RetailLiquidityIndicatorModel*> (&retail_liquidity_indicator);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *system_eventKey = "system_event";
	node = json_object_get_member(pJsonObject, system_eventKey);
	if (node !=NULL) {
	

		if (isprimitive("IEXSystemEvent.SystemEventModel")) {
			jsonToValue(&system_event, node, "IEXSystemEvent.SystemEventModel", "IEXSystemEvent.SystemEventModel");
		} else {
			
			IEXSystemEvent.SystemEventModel* obj = static_cast<IEXSystemEvent.SystemEventModel*> (&system_event);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *security_directoryKey = "security_directory";
	node = json_object_get_member(pJsonObject, security_directoryKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.SecurityDirectoryModel")) {
			jsonToValue(&security_directory, node, "Models.SecurityDirectoryModel", "Models.SecurityDirectoryModel");
		} else {
			
			Models.SecurityDirectoryModel* obj = static_cast<Models.SecurityDirectoryModel*> (&security_directory);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Models.AdminMessageModel::Models.AdminMessageModel(char* json)
{
	this->fromJson(json);
}

char*
Models.AdminMessageModel::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Models.TradingStatusModel")) {
		Models.TradingStatusModel obj = getTradingStatus();
		node = converttoJson(&obj, "Models.TradingStatusModel", "");
	}
	else {
		
		Models.TradingStatusModel obj = static_cast<Models.TradingStatusModel> (getTradingStatus());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *trading_statusKey = "trading_status";
	json_object_set_member(pJsonObject, trading_statusKey, node);
	if (isprimitive("Models.OfficialPriceModel")) {
		Models.OfficialPriceModel obj = getOfficialPrice();
		node = converttoJson(&obj, "Models.OfficialPriceModel", "");
	}
	else {
		
		Models.OfficialPriceModel obj = static_cast<Models.OfficialPriceModel> (getOfficialPrice());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *official_priceKey = "official_price";
	json_object_set_member(pJsonObject, official_priceKey, node);
	if (isprimitive("Models.SecurityEventModel")) {
		Models.SecurityEventModel obj = getSecurityEvent();
		node = converttoJson(&obj, "Models.SecurityEventModel", "");
	}
	else {
		
		Models.SecurityEventModel obj = static_cast<Models.SecurityEventModel> (getSecurityEvent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *security_eventKey = "security_event";
	json_object_set_member(pJsonObject, security_eventKey, node);
	if (isprimitive("Models.AuctionInformationModel")) {
		Models.AuctionInformationModel obj = getAuctionInformation();
		node = converttoJson(&obj, "Models.AuctionInformationModel", "");
	}
	else {
		
		Models.AuctionInformationModel obj = static_cast<Models.AuctionInformationModel> (getAuctionInformation());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *auction_informationKey = "auction_information";
	json_object_set_member(pJsonObject, auction_informationKey, node);
	if (isprimitive("Models.ShortSalePriceTestStatusModel")) {
		Models.ShortSalePriceTestStatusModel obj = getShortSalePriceTest();
		node = converttoJson(&obj, "Models.ShortSalePriceTestStatusModel", "");
	}
	else {
		
		Models.ShortSalePriceTestStatusModel obj = static_cast<Models.ShortSalePriceTestStatusModel> (getShortSalePriceTest());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *short_sale_price_testKey = "short_sale_price_test";
	json_object_set_member(pJsonObject, short_sale_price_testKey, node);
	if (isprimitive("Models.OperationalHaltStatusModel")) {
		Models.OperationalHaltStatusModel obj = getOperationalHaltStatus();
		node = converttoJson(&obj, "Models.OperationalHaltStatusModel", "");
	}
	else {
		
		Models.OperationalHaltStatusModel obj = static_cast<Models.OperationalHaltStatusModel> (getOperationalHaltStatus());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *operational_halt_statusKey = "operational_halt_status";
	json_object_set_member(pJsonObject, operational_halt_statusKey, node);
	if (isprimitive("Models.RetailLiquidityIndicatorModel")) {
		Models.RetailLiquidityIndicatorModel obj = getRetailLiquidityIndicator();
		node = converttoJson(&obj, "Models.RetailLiquidityIndicatorModel", "");
	}
	else {
		
		Models.RetailLiquidityIndicatorModel obj = static_cast<Models.RetailLiquidityIndicatorModel> (getRetailLiquidityIndicator());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *retail_liquidity_indicatorKey = "retail_liquidity_indicator";
	json_object_set_member(pJsonObject, retail_liquidity_indicatorKey, node);
	if (isprimitive("IEXSystemEvent.SystemEventModel")) {
		IEXSystemEvent.SystemEventModel obj = getSystemEvent();
		node = converttoJson(&obj, "IEXSystemEvent.SystemEventModel", "");
	}
	else {
		
		IEXSystemEvent.SystemEventModel obj = static_cast<IEXSystemEvent.SystemEventModel> (getSystemEvent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *system_eventKey = "system_event";
	json_object_set_member(pJsonObject, system_eventKey, node);
	if (isprimitive("Models.SecurityDirectoryModel")) {
		Models.SecurityDirectoryModel obj = getSecurityDirectory();
		node = converttoJson(&obj, "Models.SecurityDirectoryModel", "");
	}
	else {
		
		Models.SecurityDirectoryModel obj = static_cast<Models.SecurityDirectoryModel> (getSecurityDirectory());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *security_directoryKey = "security_directory";
	json_object_set_member(pJsonObject, security_directoryKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Models.TradingStatusModel
Models.AdminMessageModel::getTradingStatus()
{
	return trading_status;
}

void
Models.AdminMessageModel::setTradingStatus(Models.TradingStatusModel  trading_status)
{
	this->trading_status = trading_status;
}

Models.OfficialPriceModel
Models.AdminMessageModel::getOfficialPrice()
{
	return official_price;
}

void
Models.AdminMessageModel::setOfficialPrice(Models.OfficialPriceModel  official_price)
{
	this->official_price = official_price;
}

Models.SecurityEventModel
Models.AdminMessageModel::getSecurityEvent()
{
	return security_event;
}

void
Models.AdminMessageModel::setSecurityEvent(Models.SecurityEventModel  security_event)
{
	this->security_event = security_event;
}

Models.AuctionInformationModel
Models.AdminMessageModel::getAuctionInformation()
{
	return auction_information;
}

void
Models.AdminMessageModel::setAuctionInformation(Models.AuctionInformationModel  auction_information)
{
	this->auction_information = auction_information;
}

Models.ShortSalePriceTestStatusModel
Models.AdminMessageModel::getShortSalePriceTest()
{
	return short_sale_price_test;
}

void
Models.AdminMessageModel::setShortSalePriceTest(Models.ShortSalePriceTestStatusModel  short_sale_price_test)
{
	this->short_sale_price_test = short_sale_price_test;
}

Models.OperationalHaltStatusModel
Models.AdminMessageModel::getOperationalHaltStatus()
{
	return operational_halt_status;
}

void
Models.AdminMessageModel::setOperationalHaltStatus(Models.OperationalHaltStatusModel  operational_halt_status)
{
	this->operational_halt_status = operational_halt_status;
}

Models.RetailLiquidityIndicatorModel
Models.AdminMessageModel::getRetailLiquidityIndicator()
{
	return retail_liquidity_indicator;
}

void
Models.AdminMessageModel::setRetailLiquidityIndicator(Models.RetailLiquidityIndicatorModel  retail_liquidity_indicator)
{
	this->retail_liquidity_indicator = retail_liquidity_indicator;
}

IEXSystemEvent.SystemEventModel
Models.AdminMessageModel::getSystemEvent()
{
	return system_event;
}

void
Models.AdminMessageModel::setSystemEvent(IEXSystemEvent.SystemEventModel  system_event)
{
	this->system_event = system_event;
}

Models.SecurityDirectoryModel
Models.AdminMessageModel::getSecurityDirectory()
{
	return security_directory;
}

void
Models.AdminMessageModel::setSecurityDirectory(Models.SecurityDirectoryModel  security_directory)
{
	this->security_directory = security_directory;
}


