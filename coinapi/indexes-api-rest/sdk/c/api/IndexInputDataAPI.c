#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "IndexInputDataAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Returns all data inputs for a specific index definition
//
list_t*
IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdAllGet(apiClient_t *apiClient, char *index_definition_id)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/v1/indexdef/input-data/{index_definition_id}/all");

    if(!index_definition_id)
        goto end;


    // Path Params
    long sizeOfPathParams_index_definition_id = strlen(index_definition_id)+3 + sizeof("{ index_definition_id }") - 1;
    if(index_definition_id == NULL) {
        goto end;
    }
    char* localVarToReplace_index_definition_id = malloc(sizeOfPathParams_index_definition_id);
    sprintf(localVarToReplace_index_definition_id, "{%s}", "index_definition_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_index_definition_id, index_definition_id);


    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"application/x-msgpack"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *IndexInputDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(IndexInputDataAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, IndexInputDataAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( IndexInputDataAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_index_definition_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Returns data inputs for certain index definition and time
//
list_t*
IndexInputDataAPI_v1IndexdefInputDataIndexDefinitionIdGet(apiClient_t *apiClient, char *index_definition_id, char time, int *enabled_only, int *pending_only, char *filter_asset_id, int *with_status_info)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/v1/indexdef/input-data/{index_definition_id}");

    if(!index_definition_id)
        goto end;


    // Path Params
    long sizeOfPathParams_index_definition_id = strlen(index_definition_id)+3 + sizeof("{ index_definition_id }") - 1;
    if(index_definition_id == NULL) {
        goto end;
    }
    char* localVarToReplace_index_definition_id = malloc(sizeOfPathParams_index_definition_id);
    sprintf(localVarToReplace_index_definition_id, "{%s}", "index_definition_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_index_definition_id, index_definition_id);



    // query parameters
    char *keyQuery_time = NULL;
    char valueQuery_time ;
    keyValuePair_t *keyPairQuery_time = 0;
    if (time)
    {
        keyQuery_time = strdup("time");
        valueQuery_time = (time);
        keyPairQuery_time = keyValuePair_create(keyQuery_time, &valueQuery_time);
        list_addElement(localVarQueryParameters,keyPairQuery_time);
    }

    // query parameters
    char *keyQuery_enabled_only = NULL;
    char * valueQuery_enabled_only = NULL;
    keyValuePair_t *keyPairQuery_enabled_only = 0;
    if (enabled_only)
    {
        keyQuery_enabled_only = strdup("enabled_only");
        valueQuery_enabled_only = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_enabled_only, MAX_NUMBER_LENGTH, "%d", *enabled_only);
        keyPairQuery_enabled_only = keyValuePair_create(keyQuery_enabled_only, valueQuery_enabled_only);
        list_addElement(localVarQueryParameters,keyPairQuery_enabled_only);
    }

    // query parameters
    char *keyQuery_pending_only = NULL;
    char * valueQuery_pending_only = NULL;
    keyValuePair_t *keyPairQuery_pending_only = 0;
    if (pending_only)
    {
        keyQuery_pending_only = strdup("pending_only");
        valueQuery_pending_only = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_pending_only, MAX_NUMBER_LENGTH, "%d", *pending_only);
        keyPairQuery_pending_only = keyValuePair_create(keyQuery_pending_only, valueQuery_pending_only);
        list_addElement(localVarQueryParameters,keyPairQuery_pending_only);
    }

    // query parameters
    char *keyQuery_filter_asset_id = NULL;
    char * valueQuery_filter_asset_id = NULL;
    keyValuePair_t *keyPairQuery_filter_asset_id = 0;
    if (filter_asset_id)
    {
        keyQuery_filter_asset_id = strdup("filter_asset_id");
        valueQuery_filter_asset_id = strdup((filter_asset_id));
        keyPairQuery_filter_asset_id = keyValuePair_create(keyQuery_filter_asset_id, valueQuery_filter_asset_id);
        list_addElement(localVarQueryParameters,keyPairQuery_filter_asset_id);
    }

    // query parameters
    char *keyQuery_with_status_info = NULL;
    char * valueQuery_with_status_info = NULL;
    keyValuePair_t *keyPairQuery_with_status_info = 0;
    if (with_status_info)
    {
        keyQuery_with_status_info = strdup("with_status_info");
        valueQuery_with_status_info = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_status_info, MAX_NUMBER_LENGTH, "%d", *with_status_info);
        keyPairQuery_with_status_info = keyValuePair_create(keyQuery_with_status_info, valueQuery_with_status_info);
        list_addElement(localVarQueryParameters,keyPairQuery_with_status_info);
    }
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"application/x-msgpack"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful operation");
    //}
    list_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *IndexInputDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        if(!cJSON_IsArray(IndexInputDataAPIlocalVarJSON)) {
            return 0;//nonprimitive container
        }
        elementToReturn = list_createList();
        cJSON *VarJSON;
        cJSON_ArrayForEach(VarJSON, IndexInputDataAPIlocalVarJSON)
        {
            if(!cJSON_IsObject(VarJSON))
            {
               // return 0;
            }
            char *localVarJSONToChar = cJSON_Print(VarJSON);
            list_addElement(elementToReturn , localVarJSONToChar);
        }

        cJSON_Delete( IndexInputDataAPIlocalVarJSON);
        cJSON_Delete( VarJSON);
    }
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_index_definition_id);
    if(keyQuery_time){
        free(keyQuery_time);
        keyQuery_time = NULL;
    }
    if(keyPairQuery_time){
        keyValuePair_free(keyPairQuery_time);
        keyPairQuery_time = NULL;
    }
    if(keyQuery_enabled_only){
        free(keyQuery_enabled_only);
        keyQuery_enabled_only = NULL;
    }
    if(valueQuery_enabled_only){
        free(valueQuery_enabled_only);
        valueQuery_enabled_only = NULL;
    }
    if(keyPairQuery_enabled_only){
        keyValuePair_free(keyPairQuery_enabled_only);
        keyPairQuery_enabled_only = NULL;
    }
    if(keyQuery_pending_only){
        free(keyQuery_pending_only);
        keyQuery_pending_only = NULL;
    }
    if(valueQuery_pending_only){
        free(valueQuery_pending_only);
        valueQuery_pending_only = NULL;
    }
    if(keyPairQuery_pending_only){
        keyValuePair_free(keyPairQuery_pending_only);
        keyPairQuery_pending_only = NULL;
    }
    if(keyQuery_filter_asset_id){
        free(keyQuery_filter_asset_id);
        keyQuery_filter_asset_id = NULL;
    }
    if(valueQuery_filter_asset_id){
        free(valueQuery_filter_asset_id);
        valueQuery_filter_asset_id = NULL;
    }
    if(keyPairQuery_filter_asset_id){
        keyValuePair_free(keyPairQuery_filter_asset_id);
        keyPairQuery_filter_asset_id = NULL;
    }
    if(keyQuery_with_status_info){
        free(keyQuery_with_status_info);
        keyQuery_with_status_info = NULL;
    }
    if(valueQuery_with_status_info){
        free(valueQuery_with_status_info);
        valueQuery_with_status_info = NULL;
    }
    if(keyPairQuery_with_status_info){
        keyValuePair_free(keyPairQuery_with_status_info);
        keyPairQuery_with_status_info = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

