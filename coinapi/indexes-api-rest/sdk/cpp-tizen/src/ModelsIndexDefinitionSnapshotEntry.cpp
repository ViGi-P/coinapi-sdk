#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.IndexDefinitionSnapshotEntry.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.IndexDefinitionSnapshotEntry::Models.IndexDefinitionSnapshotEntry()
{
	//__init();
}

Models.IndexDefinitionSnapshotEntry::~Models.IndexDefinitionSnapshotEntry()
{
	//__cleanup();
}

void
Models.IndexDefinitionSnapshotEntry::__init()
{
	//index_id = std::string();
	//timestamp = null;
	//value = double(0);
}

void
Models.IndexDefinitionSnapshotEntry::__cleanup()
{
	//if(index_id != NULL) {
	//
	//delete index_id;
	//index_id = NULL;
	//}
	//if(timestamp != NULL) {
	//
	//delete timestamp;
	//timestamp = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
Models.IndexDefinitionSnapshotEntry::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *index_idKey = "index_id";
	node = json_object_get_member(pJsonObject, index_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&index_id, node, "std::string", "");
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
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&value, node, "double", "");
		} else {
			
		}
	}
}

Models.IndexDefinitionSnapshotEntry::Models.IndexDefinitionSnapshotEntry(char* json)
{
	this->fromJson(json);
}

char*
Models.IndexDefinitionSnapshotEntry::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIndexId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *index_idKey = "index_id";
	json_object_set_member(pJsonObject, index_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTimestamp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *timestampKey = "timestamp";
	json_object_set_member(pJsonObject, timestampKey, node);
	if (isprimitive("double")) {
		double obj = getValue();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Models.IndexDefinitionSnapshotEntry::getIndexId()
{
	return index_id;
}

void
Models.IndexDefinitionSnapshotEntry::setIndexId(std::string  index_id)
{
	this->index_id = index_id;
}

std::string
Models.IndexDefinitionSnapshotEntry::getTimestamp()
{
	return timestamp;
}

void
Models.IndexDefinitionSnapshotEntry::setTimestamp(std::string  timestamp)
{
	this->timestamp = timestamp;
}

double
Models.IndexDefinitionSnapshotEntry::getValue()
{
	return value;
}

void
Models.IndexDefinitionSnapshotEntry::setValue(double  value)
{
	this->value = value;
}


