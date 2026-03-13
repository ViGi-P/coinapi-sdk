#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.IndexValue.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.IndexValue::Models.IndexValue()
{
	//__init();
}

Models.IndexValue::~Models.IndexValue()
{
	//__cleanup();
}

void
Models.IndexValue::__init()
{
	//timestamp = null;
	//value = double(0);
	//new std::list()std::list> composition;
}

void
Models.IndexValue::__cleanup()
{
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
	//if(composition != NULL) {
	//composition.RemoveAll(true);
	//delete composition;
	//composition = NULL;
	//}
	//
}

void
Models.IndexValue::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	const gchar *compositionKey = "composition";
	node = json_object_get_member(pJsonObject, compositionKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Models.IndexValueComponent> new_list;
			Models.IndexValueComponent inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Models.IndexValueComponent")) {
					jsonToValue(&inst, temp_json, "Models.IndexValueComponent", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			composition = new_list;
		}
		
	}
}

Models.IndexValue::Models.IndexValue(char* json)
{
	this->fromJson(json);
}

char*
Models.IndexValue::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
	if (isprimitive("Models.IndexValueComponent")) {
		list<Models.IndexValueComponent> new_list = static_cast<list <Models.IndexValueComponent> > (getComposition());
		node = converttoJson(&new_list, "Models.IndexValueComponent", "array");
	} else {
		node = json_node_alloc();
		list<Models.IndexValueComponent> new_list = static_cast<list <Models.IndexValueComponent> > (getComposition());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Models.IndexValueComponent>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Models.IndexValueComponent obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *compositionKey = "composition";
	json_object_set_member(pJsonObject, compositionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Models.IndexValue::getTimestamp()
{
	return timestamp;
}

void
Models.IndexValue::setTimestamp(std::string  timestamp)
{
	this->timestamp = timestamp;
}

double
Models.IndexValue::getValue()
{
	return value;
}

void
Models.IndexValue::setValue(double  value)
{
	this->value = value;
}

std::list<Models.IndexValueComponent>
Models.IndexValue::getComposition()
{
	return composition;
}

void
Models.IndexValue::setComposition(std::list <Models.IndexValueComponent> composition)
{
	this->composition = composition;
}


