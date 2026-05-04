#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "IEXQuoteUpdate.QuoteUpdateModel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

IEXQuoteUpdate.QuoteUpdateModel::IEXQuoteUpdate.QuoteUpdateModel()
{
	//__init();
}

IEXQuoteUpdate.QuoteUpdateModel::~IEXQuoteUpdate.QuoteUpdateModel()
{
	//__cleanup();
}

void
IEXQuoteUpdate.QuoteUpdateModel::__init()
{
	//symbol = std::string();
	//timestamp_nanos = long(0);
	//timestamp = null;
	//is_symbol_available = bool(false);
	//is_pre_post_market_session = bool(false);
	//ask_size = int(0);
	//ask_price = double(0);
	//bid_price = double(0);
	//bid_size = int(0);
}

void
IEXQuoteUpdate.QuoteUpdateModel::__cleanup()
{
	//if(symbol != NULL) {
	//
	//delete symbol;
	//symbol = NULL;
	//}
	//if(timestamp_nanos != NULL) {
	//
	//delete timestamp_nanos;
	//timestamp_nanos = NULL;
	//}
	//if(timestamp != NULL) {
	//
	//delete timestamp;
	//timestamp = NULL;
	//}
	//if(is_symbol_available != NULL) {
	//
	//delete is_symbol_available;
	//is_symbol_available = NULL;
	//}
	//if(is_pre_post_market_session != NULL) {
	//
	//delete is_pre_post_market_session;
	//is_pre_post_market_session = NULL;
	//}
	//if(ask_size != NULL) {
	//
	//delete ask_size;
	//ask_size = NULL;
	//}
	//if(ask_price != NULL) {
	//
	//delete ask_price;
	//ask_price = NULL;
	//}
	//if(bid_price != NULL) {
	//
	//delete bid_price;
	//bid_price = NULL;
	//}
	//if(bid_size != NULL) {
	//
	//delete bid_size;
	//bid_size = NULL;
	//}
	//
}

void
IEXQuoteUpdate.QuoteUpdateModel::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *symbolKey = "symbol";
	node = json_object_get_member(pJsonObject, symbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&symbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *timestamp_nanosKey = "timestamp_nanos";
	node = json_object_get_member(pJsonObject, timestamp_nanosKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&timestamp_nanos, node, "long long", "");
		} else {
			
		}
	}
	const gchar *timestampKey = "timestamp";
	node = json_object_get_member(pJsonObject, timestampKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&timestamp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *is_symbol_availableKey = "is_symbol_available";
	node = json_object_get_member(pJsonObject, is_symbol_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&is_symbol_available, node, "bool", "");
		} else {
			
		}
	}
	const gchar *is_pre_post_market_sessionKey = "is_pre_post_market_session";
	node = json_object_get_member(pJsonObject, is_pre_post_market_sessionKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&is_pre_post_market_session, node, "bool", "");
		} else {
			
		}
	}
	const gchar *ask_sizeKey = "ask_size";
	node = json_object_get_member(pJsonObject, ask_sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ask_size, node, "int", "");
		} else {
			
		}
	}
	const gchar *ask_priceKey = "ask_price";
	node = json_object_get_member(pJsonObject, ask_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&ask_price, node, "double", "");
		} else {
			
		}
	}
	const gchar *bid_priceKey = "bid_price";
	node = json_object_get_member(pJsonObject, bid_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&bid_price, node, "double", "");
		} else {
			
		}
	}
	const gchar *bid_sizeKey = "bid_size";
	node = json_object_get_member(pJsonObject, bid_sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&bid_size, node, "int", "");
		} else {
			
		}
	}
}

IEXQuoteUpdate.QuoteUpdateModel::IEXQuoteUpdate.QuoteUpdateModel(char* json)
{
	this->fromJson(json);
}

char*
IEXQuoteUpdate.QuoteUpdateModel::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *symbolKey = "symbol";
	json_object_set_member(pJsonObject, symbolKey, node);
	if (isprimitive("long long")) {
		long long obj = getTimestampNanos();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *timestamp_nanosKey = "timestamp_nanos";
	json_object_set_member(pJsonObject, timestamp_nanosKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTimestamp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *timestampKey = "timestamp";
	json_object_set_member(pJsonObject, timestampKey, node);
	if (isprimitive("bool")) {
		bool obj = getIsSymbolAvailable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *is_symbol_availableKey = "is_symbol_available";
	json_object_set_member(pJsonObject, is_symbol_availableKey, node);
	if (isprimitive("bool")) {
		bool obj = getIsPrePostMarketSession();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *is_pre_post_market_sessionKey = "is_pre_post_market_session";
	json_object_set_member(pJsonObject, is_pre_post_market_sessionKey, node);
	if (isprimitive("int")) {
		int obj = getAskSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ask_sizeKey = "ask_size";
	json_object_set_member(pJsonObject, ask_sizeKey, node);
	if (isprimitive("double")) {
		double obj = getAskPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *ask_priceKey = "ask_price";
	json_object_set_member(pJsonObject, ask_priceKey, node);
	if (isprimitive("double")) {
		double obj = getBidPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *bid_priceKey = "bid_price";
	json_object_set_member(pJsonObject, bid_priceKey, node);
	if (isprimitive("int")) {
		int obj = getBidSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bid_sizeKey = "bid_size";
	json_object_set_member(pJsonObject, bid_sizeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
IEXQuoteUpdate.QuoteUpdateModel::getSymbol()
{
	return symbol;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setSymbol(std::string  symbol)
{
	this->symbol = symbol;
}

long long
IEXQuoteUpdate.QuoteUpdateModel::getTimestampNanos()
{
	return timestamp_nanos;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setTimestampNanos(long long  timestamp_nanos)
{
	this->timestamp_nanos = timestamp_nanos;
}

std::string
IEXQuoteUpdate.QuoteUpdateModel::getTimestamp()
{
	return timestamp;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setTimestamp(std::string  timestamp)
{
	this->timestamp = timestamp;
}

bool
IEXQuoteUpdate.QuoteUpdateModel::getIsSymbolAvailable()
{
	return is_symbol_available;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setIsSymbolAvailable(bool  is_symbol_available)
{
	this->is_symbol_available = is_symbol_available;
}

bool
IEXQuoteUpdate.QuoteUpdateModel::getIsPrePostMarketSession()
{
	return is_pre_post_market_session;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setIsPrePostMarketSession(bool  is_pre_post_market_session)
{
	this->is_pre_post_market_session = is_pre_post_market_session;
}

int
IEXQuoteUpdate.QuoteUpdateModel::getAskSize()
{
	return ask_size;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setAskSize(int  ask_size)
{
	this->ask_size = ask_size;
}

double
IEXQuoteUpdate.QuoteUpdateModel::getAskPrice()
{
	return ask_price;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setAskPrice(double  ask_price)
{
	this->ask_price = ask_price;
}

double
IEXQuoteUpdate.QuoteUpdateModel::getBidPrice()
{
	return bid_price;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setBidPrice(double  bid_price)
{
	this->bid_price = bid_price;
}

int
IEXQuoteUpdate.QuoteUpdateModel::getBidSize()
{
	return bid_size;
}

void
IEXQuoteUpdate.QuoteUpdateModel::setBidSize(int  bid_size)
{
	this->bid_size = bid_size;
}


