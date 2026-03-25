#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_chain.h"



static v1_chain_t *v1_chain_create_internal(
    char *chain_id,
    char *name
    ) {
    v1_chain_t *v1_chain_local_var = malloc(sizeof(v1_chain_t));
    if (!v1_chain_local_var) {
        return NULL;
    }
    memset(v1_chain_local_var, 0, sizeof(v1_chain_t));
    v1_chain_local_var->_library_owned = 1;
    v1_chain_local_var->chain_id = chain_id;
    v1_chain_local_var->name = name;
    return v1_chain_local_var;
}

__attribute__((deprecated)) v1_chain_t *v1_chain_create(
    char *chain_id,
    char *name
    ) {
    v1_chain_t *result = v1_chain_create_internal (
        chain_id,
        name
        );
    if (!result) {
    }
    return result;
}

void v1_chain_free(v1_chain_t *v1_chain) {
    if(NULL == v1_chain){
        return ;
    }
    if(v1_chain->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_chain_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_chain->chain_id) {
        free(v1_chain->chain_id);
        v1_chain->chain_id = NULL;
    }
    if (v1_chain->name) {
        free(v1_chain->name);
        v1_chain->name = NULL;
    }
    free(v1_chain);
}

cJSON *v1_chain_convertToJSON(v1_chain_t *v1_chain) {
    cJSON *item = cJSON_CreateObject();

    // v1_chain->chain_id
    if(v1_chain->chain_id) {
    if(cJSON_AddStringToObject(item, "chain_id", v1_chain->chain_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_chain->name
    if(v1_chain->name) {
    if(cJSON_AddStringToObject(item, "name", v1_chain->name) == NULL) {
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

v1_chain_t *v1_chain_parseFromJSON(cJSON *v1_chainJSON){

    v1_chain_t *v1_chain_local_var = NULL;

    char *chain_id_local_str = NULL;

    char *name_local_str = NULL;

    // v1_chain->chain_id
    cJSON *chain_id = cJSON_GetObjectItemCaseSensitive(v1_chainJSON, "chain_id");
    if (cJSON_IsNull(chain_id)) {
        chain_id = NULL;
    }
    if (chain_id) { 
    if(!cJSON_IsString(chain_id) && !cJSON_IsNull(chain_id))
    {
    goto end; //String
    }
    }

    // v1_chain->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v1_chainJSON, "name");
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

    v1_chain_local_var = v1_chain_create_internal (
        chain_id_local_str,
        name_local_str
        );

    if (!v1_chain_local_var) {
        goto end;
    }

    return v1_chain_local_var;
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
