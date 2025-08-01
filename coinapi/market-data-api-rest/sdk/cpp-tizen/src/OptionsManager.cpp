#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "OptionsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


OptionsManager::OptionsManager()
{

}

OptionsManager::~OptionsManager()
{

}

static gboolean __OptionsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __OptionsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__OptionsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool v1OptionsExchangeIdCurrentGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<Options.OptionExchangeGroup>, Error, void* )
	= reinterpret_cast<void(*)(std::list<Options.OptionExchangeGroup>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<Options.OptionExchangeGroup> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			Options.OptionExchangeGroup singlemodel;
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

static bool v1OptionsExchangeIdCurrentGetHelper(char * accessToken,
	std::string exchangeId, 
	void(* handler)(std::list<Options.OptionExchangeGroup>, Error, void* )
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

	string url("/v1/options/{exchange_id}/current");
	int pos;

	string s_exchangeId("{");
	s_exchangeId.append("exchange_id");
	s_exchangeId.append("}");
	pos = url.find(s_exchangeId);
	url.erase(pos, s_exchangeId.length());
	url.insert(pos, stringify(&exchangeId, "std::string"));

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
		NetClient::easycurl(OptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1OptionsExchangeIdCurrentGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (OptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1OptionsExchangeIdCurrentGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __OptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool OptionsManager::v1OptionsExchangeIdCurrentGetAsync(char * accessToken,
	std::string exchangeId, 
	void(* handler)(std::list<Options.OptionExchangeGroup>, Error, void* )
	, void* userData)
{
	return v1OptionsExchangeIdCurrentGetHelper(accessToken,
	exchangeId, 
	handler, userData, true);
}

bool OptionsManager::v1OptionsExchangeIdCurrentGetSync(char * accessToken,
	std::string exchangeId, 
	void(* handler)(std::list<Options.OptionExchangeGroup>, Error, void* )
	, void* userData)
{
	return v1OptionsExchangeIdCurrentGetHelper(accessToken,
	exchangeId, 
	handler, userData, false);
}

