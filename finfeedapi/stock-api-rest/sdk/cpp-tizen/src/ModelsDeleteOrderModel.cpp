#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.DeleteOrderModel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.DeleteOrderModel::Models.DeleteOrderModel()
{
	//__init();
}

Models.DeleteOrderModel::~Models.DeleteOrderModel()
{
	//__cleanup();
}

void
Models.DeleteOrderModel::__init()
{
	//symbol = std::string();
	//timestamp_nanos = long(0);
	//timestamp = null;
	//order_id_reference = long(0);
}

void
Models.DeleteOrderModel::__cleanup()
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
	//if(order_id_reference != NULL) {
	//
	//delete order_id_reference;
	//order_id_reference = NULL;
	//}
	//
}

void
Models.DeleteOrderModel::fromJson(char* jsonStr)
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
	const gchar *order_id_referenceKey = "order_id_reference";
	node = json_object_get_member(pJsonObject, order_id_referenceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&order_id_reference, node, "long long", "");
		} else {
			
		}
	}
}

Models.DeleteOrderModel::Models.DeleteOrderModel(char* json)
{
	this->fromJson(json);
}

char*
Models.DeleteOrderModel::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getOrderIdReference();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *order_id_referenceKey = "order_id_reference";
	json_object_set_member(pJsonObject, order_id_referenceKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Models.DeleteOrderModel::getSymbol()
{
	return symbol;
}

void
Models.DeleteOrderModel::setSymbol(std::string  symbol)
{
	this->symbol = symbol;
}

long long
Models.DeleteOrderModel::getTimestampNanos()
{
	return timestamp_nanos;
}

void
Models.DeleteOrderModel::setTimestampNanos(long long  timestamp_nanos)
{
	this->timestamp_nanos = timestamp_nanos;
}

std::string
Models.DeleteOrderModel::getTimestamp()
{
	return timestamp;
}

void
Models.DeleteOrderModel::setTimestamp(std::string  timestamp)
{
	this->timestamp = timestamp;
}

long long
Models.DeleteOrderModel::getOrderIdReference()
{
	return order_id_reference;
}

void
Models.DeleteOrderModel::setOrderIdReference(long long  order_id_reference)
{
	this->order_id_reference = order_id_reference;
}


