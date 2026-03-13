#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.IndexMultiAssetWeight.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.IndexMultiAssetWeight::Models.IndexMultiAssetWeight()
{
	//__init();
}

Models.IndexMultiAssetWeight::~Models.IndexMultiAssetWeight()
{
	//__cleanup();
}

void
Models.IndexMultiAssetWeight::__init()
{
	//indexId = std::string();
	//assetId = std::string();
	//weight = double(0);
}

void
Models.IndexMultiAssetWeight::__cleanup()
{
	//if(indexId != NULL) {
	//
	//delete indexId;
	//indexId = NULL;
	//}
	//if(assetId != NULL) {
	//
	//delete assetId;
	//assetId = NULL;
	//}
	//if(weight != NULL) {
	//
	//delete weight;
	//weight = NULL;
	//}
	//
}

void
Models.IndexMultiAssetWeight::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *indexIdKey = "indexId";
	node = json_object_get_member(pJsonObject, indexIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&indexId, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *assetIdKey = "assetId";
	node = json_object_get_member(pJsonObject, assetIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&assetId, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *weightKey = "weight";
	node = json_object_get_member(pJsonObject, weightKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&weight, node, "double", "");
		} else {
			
		}
	}
}

Models.IndexMultiAssetWeight::Models.IndexMultiAssetWeight(char* json)
{
	this->fromJson(json);
}

char*
Models.IndexMultiAssetWeight::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIndexId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *indexIdKey = "indexId";
	json_object_set_member(pJsonObject, indexIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAssetId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *assetIdKey = "assetId";
	json_object_set_member(pJsonObject, assetIdKey, node);
	if (isprimitive("double")) {
		double obj = getWeight();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *weightKey = "weight";
	json_object_set_member(pJsonObject, weightKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Models.IndexMultiAssetWeight::getIndexId()
{
	return indexId;
}

void
Models.IndexMultiAssetWeight::setIndexId(std::string  indexId)
{
	this->indexId = indexId;
}

std::string
Models.IndexMultiAssetWeight::getAssetId()
{
	return assetId;
}

void
Models.IndexMultiAssetWeight::setAssetId(std::string  assetId)
{
	this->assetId = assetId;
}

double
Models.IndexMultiAssetWeight::getWeight()
{
	return weight;
}

void
Models.IndexMultiAssetWeight::setWeight(double  weight)
{
	this->weight = weight;
}


