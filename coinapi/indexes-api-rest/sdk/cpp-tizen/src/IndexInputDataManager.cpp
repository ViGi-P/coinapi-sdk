#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "IndexInputDataManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


IndexInputDataManager::IndexInputDataManager()
{

}

IndexInputDataManager::~IndexInputDataManager()
{

}

static gboolean __IndexInputDataManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __IndexInputDataManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__IndexInputDataManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool v1IndexdefInputDataIndexDefinitionIdAllGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexDefinitionInputData>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexDefinitionInputData> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexDefinitionInputData singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool v1IndexdefInputDataIndexDefinitionIdAllGetHelper(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexdef/input-data/{index_definition_id}/all");
	int pos;

	string s_indexDefinitionId("{");
	s_indexDefinitionId.append("index_definition_id");
	s_indexDefinitionId.append("}");
	pos = url.find(s_indexDefinitionId);
	url.erase(pos, s_indexDefinitionId.length());
	url.insert(pos, stringify(&indexDefinitionId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(IndexInputDataManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexdefInputDataIndexDefinitionIdAllGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (IndexInputDataManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexdefInputDataIndexDefinitionIdAllGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexInputDataManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexInputDataManager::v1IndexdefInputDataIndexDefinitionIdAllGetAsync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	, void* userData)
{
	return v1IndexdefInputDataIndexDefinitionIdAllGetHelper(accessToken,
	indexDefinitionId, 
	handler, userData, true);
}

bool IndexInputDataManager::v1IndexdefInputDataIndexDefinitionIdAllGetSync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionInputData>, Error, void* )
	, void* userData)
{
	return v1IndexdefInputDataIndexDefinitionIdAllGetHelper(accessToken,
	indexDefinitionId, 
	handler, userData, false);
}

static bool v1IndexdefInputDataIndexDefinitionIdGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexDefinitionSnapshotEntry> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexDefinitionSnapshotEntry singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool v1IndexdefInputDataIndexDefinitionIdGetHelper(char * accessToken,
	std::string indexDefinitionId, std::string time, bool enabledOnly, bool pendingOnly, std::string filterAssetId, bool withStatusInfo, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&time, "std::string");
	queryParams.insert(pair<string, string>("time", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("time");
	}


	itemAtq = stringify(&enabledOnly, "bool");
	queryParams.insert(pair<string, string>("enabled_only", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("enabled_only");
	}


	itemAtq = stringify(&pendingOnly, "bool");
	queryParams.insert(pair<string, string>("pending_only", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("pending_only");
	}


	itemAtq = stringify(&filterAssetId, "std::string");
	queryParams.insert(pair<string, string>("filter_asset_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_asset_id");
	}


	itemAtq = stringify(&withStatusInfo, "bool");
	queryParams.insert(pair<string, string>("with_status_info", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("with_status_info");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexdef/input-data/{index_definition_id}");
	int pos;

	string s_indexDefinitionId("{");
	s_indexDefinitionId.append("index_definition_id");
	s_indexDefinitionId.append("}");
	pos = url.find(s_indexDefinitionId);
	url.erase(pos, s_indexDefinitionId.length());
	url.insert(pos, stringify(&indexDefinitionId, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(IndexInputDataManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexdefInputDataIndexDefinitionIdGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (IndexInputDataManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexdefInputDataIndexDefinitionIdGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexInputDataManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexInputDataManager::v1IndexdefInputDataIndexDefinitionIdGetAsync(char * accessToken,
	std::string indexDefinitionId, std::string time, bool enabledOnly, bool pendingOnly, std::string filterAssetId, bool withStatusInfo, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexdefInputDataIndexDefinitionIdGetHelper(accessToken,
	indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo, 
	handler, userData, true);
}

bool IndexInputDataManager::v1IndexdefInputDataIndexDefinitionIdGetSync(char * accessToken,
	std::string indexDefinitionId, std::string time, bool enabledOnly, bool pendingOnly, std::string filterAssetId, bool withStatusInfo, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexdefInputDataIndexDefinitionIdGetHelper(accessToken,
	indexDefinitionId, time, enabledOnly, pendingOnly, filterAssetId, withStatusInfo, 
	handler, userData, false);
}

