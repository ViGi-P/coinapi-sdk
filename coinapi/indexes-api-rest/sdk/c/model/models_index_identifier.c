#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_identifier.h"



static models_index_identifier_t *models_index_identifier_create_internal(
    char *id
    ) {
    models_index_identifier_t *models_index_identifier_local_var = malloc(sizeof(models_index_identifier_t));
    if (!models_index_identifier_local_var) {
        return NULL;
    }
    memset(models_index_identifier_local_var, 0, sizeof(models_index_identifier_t));
    models_index_identifier_local_var->_library_owned = 1;
    models_index_identifier_local_var->id = id;
    return models_index_identifier_local_var;
}

__attribute__((deprecated)) models_index_identifier_t *models_index_identifier_create(
    char *id
    ) {
    models_index_identifier_t *result = models_index_identifier_create_internal (
        id
        );
    if (!result) {
    }
    return result;
}

void models_index_identifier_free(models_index_identifier_t *models_index_identifier) {
    if(NULL == models_index_identifier){
        return ;
    }
    if(models_index_identifier->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_identifier_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_identifier->id) {
        free(models_index_identifier->id);
        models_index_identifier->id = NULL;
    }
    free(models_index_identifier);
}

cJSON *models_index_identifier_convertToJSON(models_index_identifier_t *models_index_identifier) {
    cJSON *item = cJSON_CreateObject();

    // models_index_identifier->id
    if(models_index_identifier->id) {
    if(cJSON_AddStringToObject(item, "id", models_index_identifier->id) == NULL) {
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

models_index_identifier_t *models_index_identifier_parseFromJSON(cJSON *models_index_identifierJSON){

    models_index_identifier_t *models_index_identifier_local_var = NULL;

    char *id_local_str = NULL;

    // models_index_identifier->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(models_index_identifierJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);

    models_index_identifier_local_var = models_index_identifier_create_internal (
        id_local_str
        );

    if (!models_index_identifier_local_var) {
        goto end;
    }

    return models_index_identifier_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    return NULL;

}
