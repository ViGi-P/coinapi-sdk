#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_exchange.h"



static models_exchange_t *models_exchange_create_internal(
    char *exchange_id,
    char *website,
    char *name
    ) {
    models_exchange_t *models_exchange_local_var = malloc(sizeof(models_exchange_t));
    if (!models_exchange_local_var) {
        return NULL;
    }
    memset(models_exchange_local_var, 0, sizeof(models_exchange_t));
    models_exchange_local_var->_library_owned = 1;
    models_exchange_local_var->exchange_id = exchange_id;
    models_exchange_local_var->website = website;
    models_exchange_local_var->name = name;
    return models_exchange_local_var;
}

__attribute__((deprecated)) models_exchange_t *models_exchange_create(
    char *exchange_id,
    char *website,
    char *name
    ) {
    models_exchange_t *result = models_exchange_create_internal (
        exchange_id,
        website,
        name
        );
    if (!result) {
    }
    return result;
}

void models_exchange_free(models_exchange_t *models_exchange) {
    if(NULL == models_exchange){
        return ;
    }
    if(models_exchange->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_exchange_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_exchange->exchange_id) {
        free(models_exchange->exchange_id);
        models_exchange->exchange_id = NULL;
    }
    if (models_exchange->website) {
        free(models_exchange->website);
        models_exchange->website = NULL;
    }
    if (models_exchange->name) {
        free(models_exchange->name);
        models_exchange->name = NULL;
    }
    free(models_exchange);
}

cJSON *models_exchange_convertToJSON(models_exchange_t *models_exchange) {
    cJSON *item = cJSON_CreateObject();

    // models_exchange->exchange_id
    if(models_exchange->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", models_exchange->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // models_exchange->website
    if(models_exchange->website) {
    if(cJSON_AddStringToObject(item, "website", models_exchange->website) == NULL) {
    goto fail; //String
    }
    }


    // models_exchange->name
    if(models_exchange->name) {
    if(cJSON_AddStringToObject(item, "name", models_exchange->name) == NULL) {
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

models_exchange_t *models_exchange_parseFromJSON(cJSON *models_exchangeJSON){

    models_exchange_t *models_exchange_local_var = NULL;

    char *exchange_id_local_str = NULL;

    char *website_local_str = NULL;

    char *name_local_str = NULL;

    // models_exchange->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(models_exchangeJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // models_exchange->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(models_exchangeJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // models_exchange->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(models_exchangeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (website && !cJSON_IsNull(website)) website_local_str = strdup(website->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);

    models_exchange_local_var = models_exchange_create_internal (
        exchange_id_local_str,
        website_local_str,
        name_local_str
        );

    if (!models_exchange_local_var) {
        goto end;
    }

    return models_exchange_local_var;
end:
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (website_local_str) {
        free(website_local_str);
        website_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    return NULL;

}
