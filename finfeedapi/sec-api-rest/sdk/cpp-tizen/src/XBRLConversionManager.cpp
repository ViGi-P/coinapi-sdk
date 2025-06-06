#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "XBRLConversionManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


XBRLConversionManager::XBRLConversionManager()
{

}

XBRLConversionManager::~XBRLConversionManager()
{

}

static gboolean __XBRLConversionManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __XBRLConversionManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__XBRLConversionManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool v1XbrlConverterGetProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::map<string,string>, Error, void* )
	= reinterpret_cast<void(*)(std::map<string,string>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::map<string,string> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));





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

static bool v1XbrlConverterGetHelper(char * accessToken,
	std::string htmUrl, std::string xbrlUrl, std::string accessionNo, 
	void(* handler)(std::map<string,string>, Error, void* )
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
	

	itemAtq = stringify(&htmUrl, "std::string");
	queryParams.insert(pair<string, string>("htm-url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("htm-url");
	}


	itemAtq = stringify(&xbrlUrl, "std::string");
	queryParams.insert(pair<string, string>("xbrl-url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("xbrl-url");
	}


	itemAtq = stringify(&accessionNo, "std::string");
	queryParams.insert(pair<string, string>("accession-no", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("accession-no");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/v1/xbrl-converter");
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
		NetClient::easycurl(XBRLConversionManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = v1XbrlConverterGetProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (XBRLConversionManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), v1XbrlConverterGetProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __XBRLConversionManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool XBRLConversionManager::v1XbrlConverterGetAsync(char * accessToken,
	std::string htmUrl, std::string xbrlUrl, std::string accessionNo, 
	void(* handler)(std::map<string,string>, Error, void* )
	, void* userData)
{
	return v1XbrlConverterGetHelper(accessToken,
	htmUrl, xbrlUrl, accessionNo, 
	handler, userData, true);
}

bool XBRLConversionManager::v1XbrlConverterGetSync(char * accessToken,
	std::string htmUrl, std::string xbrlUrl, std::string accessionNo, 
	void(* handler)(std::map<string,string>, Error, void* )
	, void* userData)
{
	return v1XbrlConverterGetHelper(accessToken,
	htmUrl, xbrlUrl, accessionNo, 
	handler, userData, false);
}

