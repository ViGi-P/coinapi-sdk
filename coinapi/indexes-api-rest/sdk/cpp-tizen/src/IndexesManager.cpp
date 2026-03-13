#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "IndexesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


IndexesManager::IndexesManager()
{

}

IndexesManager::~IndexesManager()
{

}

static gboolean __IndexesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __IndexesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__IndexesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool v1IndexdefMultiassetGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexMultiAssetWeight>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexMultiAssetWeight> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexMultiAssetWeight singlemodel;
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

static bool v1IndexdefMultiassetGetHelper(char * accessToken,
	
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
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

	string url("/v1/indexdef/multiasset");
	int pos;


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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexdefMultiassetGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexdefMultiassetGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexdefMultiassetGetAsync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData)
{
	return v1IndexdefMultiassetGetHelper(accessToken,
	
	handler, userData, true);
}

bool IndexesManager::v1IndexdefMultiassetGetSync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData)
{
	return v1IndexdefMultiassetGetHelper(accessToken,
	
	handler, userData, false);
}

static bool v1IndexdefMultiassetIndexIdGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexMultiAssetWeight>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexMultiAssetWeight> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexMultiAssetWeight singlemodel;
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

static bool v1IndexdefMultiassetIndexIdGetHelper(char * accessToken,
	std::string indexId, 
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
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

	string url("/v1/indexdef/multiasset/{index_id}");
	int pos;

	string s_indexId("{");
	s_indexId.append("index_id");
	s_indexId.append("}");
	pos = url.find(s_indexId);
	url.erase(pos, s_indexId.length());
	url.insert(pos, stringify(&indexId, "std::string"));

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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexdefMultiassetIndexIdGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexdefMultiassetIndexIdGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexdefMultiassetIndexIdGetAsync(char * accessToken,
	std::string indexId, 
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData)
{
	return v1IndexdefMultiassetIndexIdGetHelper(accessToken,
	indexId, 
	handler, userData, true);
}

bool IndexesManager::v1IndexdefMultiassetIndexIdGetSync(char * accessToken,
	std::string indexId, 
	void(* handler)(std::list<Models.IndexMultiAssetWeight>, Error, void* )
	, void* userData)
{
	return v1IndexdefMultiassetIndexIdGetHelper(accessToken,
	indexId, 
	handler, userData, false);
}

static bool v1IndexesGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexIdentifier>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexIdentifier>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexIdentifier> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexIdentifier singlemodel;
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

static bool v1IndexesGetHelper(char * accessToken,
	
	void(* handler)(std::list<Models.IndexIdentifier>, Error, void* )
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

	string url("/v1/indexes");
	int pos;


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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesGetAsync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexIdentifier>, Error, void* )
	, void* userData)
{
	return v1IndexesGetHelper(accessToken,
	
	handler, userData, true);
}

bool IndexesManager::v1IndexesGetSync(char * accessToken,
	
	void(* handler)(std::list<Models.IndexIdentifier>, Error, void* )
	, void* userData)
{
	return v1IndexesGetHelper(accessToken,
	
	handler, userData, false);
}

static bool v1IndexesIndexDefinitionIdCurrentSnapshotGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool v1IndexesIndexDefinitionIdCurrentSnapshotGetHelper(char * accessToken,
	std::string indexDefinitionId, 
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
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexes/{index_definition_id}/currentSnapshot");
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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesIndexDefinitionIdCurrentSnapshotGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesIndexDefinitionIdCurrentSnapshotGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesIndexDefinitionIdCurrentSnapshotGetAsync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexDefinitionIdCurrentSnapshotGetHelper(accessToken,
	indexDefinitionId, 
	handler, userData, true);
}

bool IndexesManager::v1IndexesIndexDefinitionIdCurrentSnapshotGetSync(char * accessToken,
	std::string indexDefinitionId, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexDefinitionIdCurrentSnapshotGetHelper(accessToken,
	indexDefinitionId, 
	handler, userData, false);
}

static bool v1IndexesIndexDefinitionIdHistorySnapshotGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool v1IndexesIndexDefinitionIdHistorySnapshotGetHelper(char * accessToken,
	std::string indexDefinitionId, std::string time, 
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexes/{index_definition_id}/historySnapshot");
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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesIndexDefinitionIdHistorySnapshotGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesIndexDefinitionIdHistorySnapshotGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesIndexDefinitionIdHistorySnapshotGetAsync(char * accessToken,
	std::string indexDefinitionId, std::string time, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexDefinitionIdHistorySnapshotGetHelper(accessToken,
	indexDefinitionId, time, 
	handler, userData, true);
}

bool IndexesManager::v1IndexesIndexDefinitionIdHistorySnapshotGetSync(char * accessToken,
	std::string indexDefinitionId, std::string time, 
	void(* handler)(std::list<Models.IndexDefinitionSnapshotEntry>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexDefinitionIdHistorySnapshotGetHelper(accessToken,
	indexDefinitionId, time, 
	handler, userData, false);
}

static bool v1IndexesIndexIdCurrentGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Models.IndexValue, Error, void* )
	= reinterpret_cast<void(*)(Models.IndexValue, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Models.IndexValue out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Models.IndexValue")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Models.IndexValue", "Models.IndexValue");
			json_node_free(pJson);

			if ("Models.IndexValue" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

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

static bool v1IndexesIndexIdCurrentGetHelper(char * accessToken,
	std::string indexId, 
	void(* handler)(Models.IndexValue, Error, void* )
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

	string url("/v1/indexes/{index_id}/current");
	int pos;

	string s_indexId("{");
	s_indexId.append("index_id");
	s_indexId.append("}");
	pos = url.find(s_indexId);
	url.erase(pos, s_indexId.length());
	url.insert(pos, stringify(&indexId, "std::string"));

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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesIndexIdCurrentGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesIndexIdCurrentGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesIndexIdCurrentGetAsync(char * accessToken,
	std::string indexId, 
	void(* handler)(Models.IndexValue, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdCurrentGetHelper(accessToken,
	indexId, 
	handler, userData, true);
}

bool IndexesManager::v1IndexesIndexIdCurrentGetSync(char * accessToken,
	std::string indexId, 
	void(* handler)(Models.IndexValue, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdCurrentGetHelper(accessToken,
	indexId, 
	handler, userData, false);
}

static bool v1IndexesIndexIdHistoryGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexValue>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexValue>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexValue> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexValue singlemodel;
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

static bool v1IndexesIndexIdHistoryGetHelper(char * accessToken,
	std::string indexId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexValue>, Error, void* )
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
	

	itemAtq = stringify(&timeStart, "std::string");
	queryParams.insert(pair<string, string>("time_start", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("time_start");
	}


	itemAtq = stringify(&timeEnd, "std::string");
	queryParams.insert(pair<string, string>("time_end", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("time_end");
	}


	itemAtq = stringify(&limit, "int");
	queryParams.insert(pair<string, string>("limit", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("limit");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexes/{index_id}/history");
	int pos;

	string s_indexId("{");
	s_indexId.append("index_id");
	s_indexId.append("}");
	pos = url.find(s_indexId);
	url.erase(pos, s_indexId.length());
	url.insert(pos, stringify(&indexId, "std::string"));

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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesIndexIdHistoryGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesIndexIdHistoryGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesIndexIdHistoryGetAsync(char * accessToken,
	std::string indexId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexValue>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdHistoryGetHelper(accessToken,
	indexId, timeStart, timeEnd, limit, 
	handler, userData, true);
}

bool IndexesManager::v1IndexesIndexIdHistoryGetSync(char * accessToken,
	std::string indexId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexValue>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdHistoryGetHelper(accessToken,
	indexId, timeStart, timeEnd, limit, 
	handler, userData, false);
}

static bool v1IndexesIndexIdTimeseriesGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Models.IndexTimeseriesItem>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Models.IndexTimeseriesItem>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Models.IndexTimeseriesItem> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Models.IndexTimeseriesItem singlemodel;
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

static bool v1IndexesIndexIdTimeseriesGetHelper(char * accessToken,
	std::string indexId, std::string periodId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexTimeseriesItem>, Error, void* )
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
	

	itemAtq = stringify(&periodId, "std::string");
	queryParams.insert(pair<string, string>("period_id", itemAtq));


	itemAtq = stringify(&timeStart, "std::string");
	queryParams.insert(pair<string, string>("time_start", itemAtq));


	itemAtq = stringify(&timeEnd, "std::string");
	queryParams.insert(pair<string, string>("time_end", itemAtq));


	itemAtq = stringify(&limit, "int");
	queryParams.insert(pair<string, string>("limit", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("limit");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/indexes/{index_id}/timeseries");
	int pos;

	string s_indexId("{");
	s_indexId.append("index_id");
	s_indexId.append("}");
	pos = url.find(s_indexId);
	url.erase(pos, s_indexId.length());
	url.insert(pos, stringify(&indexId, "std::string"));

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
		NetClient::easycurl(IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1IndexesIndexIdTimeseriesGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (IndexesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1IndexesIndexIdTimeseriesGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __IndexesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool IndexesManager::v1IndexesIndexIdTimeseriesGetAsync(char * accessToken,
	std::string indexId, std::string periodId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexTimeseriesItem>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdTimeseriesGetHelper(accessToken,
	indexId, periodId, timeStart, timeEnd, limit, 
	handler, userData, true);
}

bool IndexesManager::v1IndexesIndexIdTimeseriesGetSync(char * accessToken,
	std::string indexId, std::string periodId, std::string timeStart, std::string timeEnd, int limit, 
	void(* handler)(std::list<Models.IndexTimeseriesItem>, Error, void* )
	, void* userData)
{
	return v1IndexesIndexIdTimeseriesGetHelper(accessToken,
	indexId, periodId, timeStart, timeEnd, limit, 
	handler, userData, false);
}

