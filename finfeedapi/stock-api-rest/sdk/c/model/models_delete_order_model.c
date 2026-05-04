#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_delete_order_model.h"



static models_delete_order_model_t *models_delete_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference
    ) {
    models_delete_order_model_t *models_delete_order_model_local_var = malloc(sizeof(models_delete_order_model_t));
    if (!models_delete_order_model_local_var) {
        return NULL;
    }
    memset(models_delete_order_model_local_var, 0, sizeof(models_delete_order_model_t));
    models_delete_order_model_local_var->_library_owned = 1;
    models_delete_order_model_local_var->symbol = symbol;
    models_delete_order_model_local_var->timestamp_nanos = timestamp_nanos;
    models_delete_order_model_local_var->timestamp = timestamp;
    models_delete_order_model_local_var->order_id_reference = order_id_reference;
    return models_delete_order_model_local_var;
}

__attribute__((deprecated)) models_delete_order_model_t *models_delete_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    long *order_id_reference_copy = NULL;
    if (order_id_reference) {
        order_id_reference_copy = malloc(sizeof(long));
        if (order_id_reference_copy) *order_id_reference_copy = *order_id_reference;
    }
    models_delete_order_model_t *result = models_delete_order_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        order_id_reference_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(order_id_reference_copy);
    }
    return result;
}

void models_delete_order_model_free(models_delete_order_model_t *models_delete_order_model) {
    if(NULL == models_delete_order_model){
        return ;
    }
    if(models_delete_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_delete_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_delete_order_model->symbol) {
        free(models_delete_order_model->symbol);
        models_delete_order_model->symbol = NULL;
    }
    if (models_delete_order_model->timestamp_nanos) {
        free(models_delete_order_model->timestamp_nanos);
        models_delete_order_model->timestamp_nanos = NULL;
    }
    if (models_delete_order_model->timestamp) {
        free(models_delete_order_model->timestamp);
        models_delete_order_model->timestamp = NULL;
    }
    if (models_delete_order_model->order_id_reference) {
        free(models_delete_order_model->order_id_reference);
        models_delete_order_model->order_id_reference = NULL;
    }
    free(models_delete_order_model);
}

cJSON *models_delete_order_model_convertToJSON(models_delete_order_model_t *models_delete_order_model) {
    cJSON *item = cJSON_CreateObject();

    // models_delete_order_model->symbol
    if(models_delete_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_delete_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_delete_order_model->timestamp_nanos
    if(models_delete_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_delete_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_delete_order_model->timestamp
    if(models_delete_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_delete_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_delete_order_model->order_id_reference
    if(models_delete_order_model->order_id_reference) {
    if(cJSON_AddNumberToObject(item, "order_id_reference", *models_delete_order_model->order_id_reference) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

models_delete_order_model_t *models_delete_order_model_parseFromJSON(cJSON *models_delete_order_modelJSON){

    models_delete_order_model_t *models_delete_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_delete_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_delete_order_model->order_id_reference
    long *order_id_reference_local_var = NULL;

    // models_delete_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_delete_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_delete_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_delete_order_modelJSON, "timestamp_nanos");
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

    // models_delete_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_delete_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_delete_order_model->order_id_reference
    cJSON *order_id_reference = cJSON_GetObjectItemCaseSensitive(models_delete_order_modelJSON, "order_id_reference");
    if (cJSON_IsNull(order_id_reference)) {
        order_id_reference = NULL;
    }
    if (order_id_reference) { 
    if(!cJSON_IsNumber(order_id_reference))
    {
    goto end; //Numeric
    }
    order_id_reference_local_var = malloc(sizeof(long));
    if(!order_id_reference_local_var)
    {
        goto end;
    }
    *order_id_reference_local_var = order_id_reference->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_delete_order_model_local_var = models_delete_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        order_id_reference_local_var
        );

    if (!models_delete_order_model_local_var) {
        goto end;
    }

    return models_delete_order_model_local_var;
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
    if (order_id_reference_local_var) {
        free(order_id_reference_local_var);
        order_id_reference_local_var = NULL;
    }
    return NULL;

}
