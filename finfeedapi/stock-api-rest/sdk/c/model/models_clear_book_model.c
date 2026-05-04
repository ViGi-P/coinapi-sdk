#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_clear_book_model.h"



static models_clear_book_model_t *models_clear_book_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp
    ) {
    models_clear_book_model_t *models_clear_book_model_local_var = malloc(sizeof(models_clear_book_model_t));
    if (!models_clear_book_model_local_var) {
        return NULL;
    }
    memset(models_clear_book_model_local_var, 0, sizeof(models_clear_book_model_t));
    models_clear_book_model_local_var->_library_owned = 1;
    models_clear_book_model_local_var->symbol = symbol;
    models_clear_book_model_local_var->timestamp_nanos = timestamp_nanos;
    models_clear_book_model_local_var->timestamp = timestamp;
    return models_clear_book_model_local_var;
}

__attribute__((deprecated)) models_clear_book_model_t *models_clear_book_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    models_clear_book_model_t *result = models_clear_book_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp
        );
    if (!result) {
        free(timestamp_nanos_copy);
    }
    return result;
}

void models_clear_book_model_free(models_clear_book_model_t *models_clear_book_model) {
    if(NULL == models_clear_book_model){
        return ;
    }
    if(models_clear_book_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_clear_book_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_clear_book_model->symbol) {
        free(models_clear_book_model->symbol);
        models_clear_book_model->symbol = NULL;
    }
    if (models_clear_book_model->timestamp_nanos) {
        free(models_clear_book_model->timestamp_nanos);
        models_clear_book_model->timestamp_nanos = NULL;
    }
    if (models_clear_book_model->timestamp) {
        free(models_clear_book_model->timestamp);
        models_clear_book_model->timestamp = NULL;
    }
    free(models_clear_book_model);
}

cJSON *models_clear_book_model_convertToJSON(models_clear_book_model_t *models_clear_book_model) {
    cJSON *item = cJSON_CreateObject();

    // models_clear_book_model->symbol
    if(models_clear_book_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_clear_book_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_clear_book_model->timestamp_nanos
    if(models_clear_book_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_clear_book_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_clear_book_model->timestamp
    if(models_clear_book_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_clear_book_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

models_clear_book_model_t *models_clear_book_model_parseFromJSON(cJSON *models_clear_book_modelJSON){

    models_clear_book_model_t *models_clear_book_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_clear_book_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // models_clear_book_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_clear_book_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_clear_book_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_clear_book_modelJSON, "timestamp_nanos");
    if (cJSON_IsNull(timestamp_nanos)) {
        timestamp_nanos = NULL;
    }
    if (timestamp_nanos) { 
    if(!cJSON_IsNumber(timestamp_nanos))
    {
    goto end; //Numeric
    }
    timestamp_nanos_local_var = malloc(sizeof(long));
    if(!timestamp_nanos_local_var)
    {
        goto end;
    }
    *timestamp_nanos_local_var = timestamp_nanos->valuedouble;
    }

    // models_clear_book_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_clear_book_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_clear_book_model_local_var = models_clear_book_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str
        );

    if (!models_clear_book_model_local_var) {
        goto end;
    }

    return models_clear_book_model_local_var;
end:
    if (symbol_local_str) {
        free(symbol_local_str);
        symbol_local_str = NULL;
    }
    if (timestamp_nanos_local_var) {
        free(timestamp_nanos_local_var);
        timestamp_nanos_local_var = NULL;
    }
    if (timestamp_local_str) {
        free(timestamp_local_str);
        timestamp_local_str = NULL;
    }
    return NULL;

}
