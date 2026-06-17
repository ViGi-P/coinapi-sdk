#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "market_data_metadata_chain.h"



static market_data_metadata_chain_t *market_data_metadata_chain_create_internal(
    char *chain_id,
    char *name
    ) {
    market_data_metadata_chain_t *market_data_metadata_chain_local_var = malloc(sizeof(market_data_metadata_chain_t));
    if (!market_data_metadata_chain_local_var) {
        return NULL;
    }
    memset(market_data_metadata_chain_local_var, 0, sizeof(market_data_metadata_chain_t));
    market_data_metadata_chain_local_var->_library_owned = 1;
    market_data_metadata_chain_local_var->chain_id = chain_id;
    market_data_metadata_chain_local_var->name = name;
    return market_data_metadata_chain_local_var;
}

__attribute__((deprecated)) market_data_metadata_chain_t *market_data_metadata_chain_create(
    char *chain_id,
    char *name
    ) {
    market_data_metadata_chain_t *result = market_data_metadata_chain_create_internal (
        chain_id,
        name
        );
    if (!result) {
    }
    return result;
}

void market_data_metadata_chain_free(market_data_metadata_chain_t *market_data_metadata_chain) {
    if(NULL == market_data_metadata_chain){
        return ;
    }
    if(market_data_metadata_chain->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "market_data_metadata_chain_free");
        return ;
    }
    listEntry_t *listEntry;
    if (market_data_metadata_chain->chain_id) {
        free(market_data_metadata_chain->chain_id);
        market_data_metadata_chain->chain_id = NULL;
    }
    if (market_data_metadata_chain->name) {
        free(market_data_metadata_chain->name);
        market_data_metadata_chain->name = NULL;
    }
    free(market_data_metadata_chain);
}

cJSON *market_data_metadata_chain_convertToJSON(market_data_metadata_chain_t *market_data_metadata_chain) {
    cJSON *item = cJSON_CreateObject();

    // market_data_metadata_chain->chain_id
    if(market_data_metadata_chain->chain_id) {
    if(cJSON_AddStringToObject(item, "chain_id", market_data_metadata_chain->chain_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_chain->name
    if(market_data_metadata_chain->name) {
    if(cJSON_AddStringToObject(item, "name", market_data_metadata_chain->name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

market_data_metadata_chain_t *market_data_metadata_chain_parseFromJSON(cJSON *market_data_metadata_chainJSON){

    market_data_metadata_chain_t *market_data_metadata_chain_local_var = NULL;

    char *chain_id_local_str = NULL;

    char *name_local_str = NULL;

    // market_data_metadata_chain->chain_id
    cJSON *chain_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_chainJSON, "chain_id");
    if (cJSON_IsNull(chain_id)) {
        chain_id = NULL;
    }
    if (chain_id) { 
    if(!cJSON_IsString(chain_id) && !cJSON_IsNull(chain_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_chain->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(market_data_metadata_chainJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    if (chain_id && !cJSON_IsNull(chain_id)) chain_id_local_str = strdup(chain_id->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);

    market_data_metadata_chain_local_var = market_data_metadata_chain_create_internal (
        chain_id_local_str,
        name_local_str
        );

    if (!market_data_metadata_chain_local_var) {
        goto end;
    }

    return market_data_metadata_chain_local_var;
end:
    if (chain_id_local_str) {
        free(chain_id_local_str);
        chain_id_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    return NULL;

}
