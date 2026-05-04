#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Models.OrderBookModel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Models.OrderBookModel::Models.OrderBookModel()
{
	//__init();
}

Models.OrderBookModel::~Models.OrderBookModel()
{
	//__cleanup();
}

void
Models.OrderBookModel::__init()
{
	//add_order = new Models.AddOrderModel();
	//delete_order = new Models.DeleteOrderModel();
	//modify_order = new Models.ModifyOrderModel();
	//executed_order = new Models.ExecutedOrderModel();
	//clear_book = new Models.ClearBookModel();
}

void
Models.OrderBookModel::__cleanup()
{
	//if(add_order != NULL) {
	//
	//delete add_order;
	//add_order = NULL;
	//}
	//if(delete_order != NULL) {
	//
	//delete delete_order;
	//delete_order = NULL;
	//}
	//if(modify_order != NULL) {
	//
	//delete modify_order;
	//modify_order = NULL;
	//}
	//if(executed_order != NULL) {
	//
	//delete executed_order;
	//executed_order = NULL;
	//}
	//if(clear_book != NULL) {
	//
	//delete clear_book;
	//clear_book = NULL;
	//}
	//
}

void
Models.OrderBookModel::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *add_orderKey = "add_order";
	node = json_object_get_member(pJsonObject, add_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.AddOrderModel")) {
			jsonToValue(&add_order, node, "Models.AddOrderModel", "Models.AddOrderModel");
		} else {
			
			Models.AddOrderModel* obj = static_cast<Models.AddOrderModel*> (&add_order);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *delete_orderKey = "delete_order";
	node = json_object_get_member(pJsonObject, delete_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.DeleteOrderModel")) {
			jsonToValue(&delete_order, node, "Models.DeleteOrderModel", "Models.DeleteOrderModel");
		} else {
			
			Models.DeleteOrderModel* obj = static_cast<Models.DeleteOrderModel*> (&delete_order);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *modify_orderKey = "modify_order";
	node = json_object_get_member(pJsonObject, modify_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.ModifyOrderModel")) {
			jsonToValue(&modify_order, node, "Models.ModifyOrderModel", "Models.ModifyOrderModel");
		} else {
			
			Models.ModifyOrderModel* obj = static_cast<Models.ModifyOrderModel*> (&modify_order);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *executed_orderKey = "executed_order";
	node = json_object_get_member(pJsonObject, executed_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.ExecutedOrderModel")) {
			jsonToValue(&executed_order, node, "Models.ExecutedOrderModel", "Models.ExecutedOrderModel");
		} else {
			
			Models.ExecutedOrderModel* obj = static_cast<Models.ExecutedOrderModel*> (&executed_order);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *clear_bookKey = "clear_book";
	node = json_object_get_member(pJsonObject, clear_bookKey);
	if (node !=NULL) {
	

		if (isprimitive("Models.ClearBookModel")) {
			jsonToValue(&clear_book, node, "Models.ClearBookModel", "Models.ClearBookModel");
		} else {
			
			Models.ClearBookModel* obj = static_cast<Models.ClearBookModel*> (&clear_book);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Models.OrderBookModel::Models.OrderBookModel(char* json)
{
	this->fromJson(json);
}

char*
Models.OrderBookModel::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Models.AddOrderModel")) {
		Models.AddOrderModel obj = getAddOrder();
		node = converttoJson(&obj, "Models.AddOrderModel", "");
	}
	else {
		
		Models.AddOrderModel obj = static_cast<Models.AddOrderModel> (getAddOrder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *add_orderKey = "add_order";
	json_object_set_member(pJsonObject, add_orderKey, node);
	if (isprimitive("Models.DeleteOrderModel")) {
		Models.DeleteOrderModel obj = getDeleteOrder();
		node = converttoJson(&obj, "Models.DeleteOrderModel", "");
	}
	else {
		
		Models.DeleteOrderModel obj = static_cast<Models.DeleteOrderModel> (getDeleteOrder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *delete_orderKey = "delete_order";
	json_object_set_member(pJsonObject, delete_orderKey, node);
	if (isprimitive("Models.ModifyOrderModel")) {
		Models.ModifyOrderModel obj = getModifyOrder();
		node = converttoJson(&obj, "Models.ModifyOrderModel", "");
	}
	else {
		
		Models.ModifyOrderModel obj = static_cast<Models.ModifyOrderModel> (getModifyOrder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *modify_orderKey = "modify_order";
	json_object_set_member(pJsonObject, modify_orderKey, node);
	if (isprimitive("Models.ExecutedOrderModel")) {
		Models.ExecutedOrderModel obj = getExecutedOrder();
		node = converttoJson(&obj, "Models.ExecutedOrderModel", "");
	}
	else {
		
		Models.ExecutedOrderModel obj = static_cast<Models.ExecutedOrderModel> (getExecutedOrder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *executed_orderKey = "executed_order";
	json_object_set_member(pJsonObject, executed_orderKey, node);
	if (isprimitive("Models.ClearBookModel")) {
		Models.ClearBookModel obj = getClearBook();
		node = converttoJson(&obj, "Models.ClearBookModel", "");
	}
	else {
		
		Models.ClearBookModel obj = static_cast<Models.ClearBookModel> (getClearBook());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *clear_bookKey = "clear_book";
	json_object_set_member(pJsonObject, clear_bookKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Models.AddOrderModel
Models.OrderBookModel::getAddOrder()
{
	return add_order;
}

void
Models.OrderBookModel::setAddOrder(Models.AddOrderModel  add_order)
{
	this->add_order = add_order;
}

Models.DeleteOrderModel
Models.OrderBookModel::getDeleteOrder()
{
	return delete_order;
}

void
Models.OrderBookModel::setDeleteOrder(Models.DeleteOrderModel  delete_order)
{
	this->delete_order = delete_order;
}

Models.ModifyOrderModel
Models.OrderBookModel::getModifyOrder()
{
	return modify_order;
}

void
Models.OrderBookModel::setModifyOrder(Models.ModifyOrderModel  modify_order)
{
	this->modify_order = modify_order;
}

Models.ExecutedOrderModel
Models.OrderBookModel::getExecutedOrder()
{
	return executed_order;
}

void
Models.OrderBookModel::setExecutedOrder(Models.ExecutedOrderModel  executed_order)
{
	this->executed_order = executed_order;
}

Models.ClearBookModel
Models.OrderBookModel::getClearBook()
{
	return clear_book;
}

void
Models.OrderBookModel::setClearBook(Models.ClearBookModel  clear_book)
{
	this->clear_book = clear_book;
}


