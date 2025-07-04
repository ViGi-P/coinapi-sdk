#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "V1.Chain.h"

using namespace std;
using namespace Tizen::ArtikCloud;

V1.Chain::V1.Chain()
{
	//__init();
}

V1.Chain::~V1.Chain()
{
	//__cleanup();
}

void
V1.Chain::__init()
{
	//chain_id = std::string();
	//name = std::string();
}

void
V1.Chain::__cleanup()
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
V1.Chain::fromJson(char* jsonStr)
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

V1.Chain::V1.Chain(char* json)
{
	this->fromJson(json);
}

char*
V1.Chain::toJson()
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
V1.Chain::getChainId()
{
	return chain_id;
}

void
V1.Chain::setChainId(std::string  chain_id)
{
	this->chain_id = chain_id;
}

std::string
V1.Chain::getName()
{
	return name;
}

void
V1.Chain::setName(std::string  name)
{
	this->name = name;
}


