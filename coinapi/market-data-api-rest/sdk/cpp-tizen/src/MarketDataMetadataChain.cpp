#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MarketDataMetadata.Chain.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MarketDataMetadata.Chain::MarketDataMetadata.Chain()
{
	//__init();
}

MarketDataMetadata.Chain::~MarketDataMetadata.Chain()
{
	//__cleanup();
}

void
MarketDataMetadata.Chain::__init()
{
	//chain_id = std::string();
	//name = std::string();
}

void
MarketDataMetadata.Chain::__cleanup()
{
	//if(chain_id != NULL) {
	//
	//delete chain_id;
	//chain_id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
MarketDataMetadata.Chain::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *chain_idKey = "chain_id";
	node = json_object_get_member(pJsonObject, chain_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&chain_id, node, "std::string", "");
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

MarketDataMetadata.Chain::MarketDataMetadata.Chain(char* json)
{
	this->fromJson(json);
}

char*
MarketDataMetadata.Chain::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getChainId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *chain_idKey = "chain_id";
	json_object_set_member(pJsonObject, chain_idKey, node);
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
MarketDataMetadata.Chain::getChainId()
{
	return chain_id;
}

void
MarketDataMetadata.Chain::setChainId(std::string  chain_id)
{
	this->chain_id = chain_id;
}

std::string
MarketDataMetadata.Chain::getName()
{
	return name;
}

void
MarketDataMetadata.Chain::setName(std::string  name)
{
	this->name = name;
}


