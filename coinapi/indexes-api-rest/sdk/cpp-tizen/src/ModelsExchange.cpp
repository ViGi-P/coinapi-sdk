#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.Exchange.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.Exchange::Models.Exchange()
{
	//__init();
}

Models.Exchange::~Models.Exchange()
{
	//__cleanup();
}

void
Models.Exchange::__init()
{
	//exchange_id = std::string();
	//website = std::string();
	//name = std::string();
}

void
Models.Exchange::__cleanup()
{
	//if(exchange_id != NULL) {
	//
	//delete exchange_id;
	//exchange_id = NULL;
	//}
	//if(website != NULL) {
	//
	//delete website;
	//website = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
Models.Exchange::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *exchange_idKey = "exchange_id";
	node = json_object_get_member(pJsonObject, exchange_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&exchange_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *websiteKey = "website";
	node = json_object_get_member(pJsonObject, websiteKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
}

Models.Exchange::Models.Exchange(char* json)
{
	this->fromJson(json);
}

char*
Models.Exchange::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getExchangeId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *exchange_idKey = "exchange_id";
	json_object_set_member(pJsonObject, exchange_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsite();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *websiteKey = "website";
	json_object_set_member(pJsonObject, websiteKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Models.Exchange::getExchangeId()
{
	return exchange_id;
}

void
Models.Exchange::setExchangeId(std::string  exchange_id)
{
	this->exchange_id = exchange_id;
}

std::string
Models.Exchange::getWebsite()
{
	return website;
}

void
Models.Exchange::setWebsite(std::string  website)
{
	this->website = website;
}

std::string
Models.Exchange::getName()
{
	return name;
}

void
Models.Exchange::setName(std::string  name)
{
	this->name = name;
}


