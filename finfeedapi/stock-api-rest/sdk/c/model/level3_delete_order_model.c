#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "level3_delete_order_model.h"



static level3_delete_order_model_t *level3_delete_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference
    ) {
    level3_delete_order_model_t *level3_delete_order_model_local_var = malloc(sizeof(level3_delete_order_model_t));
    if (!level3_delete_order_model_local_var) {
        return NULL;
    }
    memset(level3_delete_order_model_local_var, 0, sizeof(level3_delete_order_model_t));
    level3_delete_order_model_local_var->_library_owned = 1;
    level3_delete_order_model_local_var->symbol = symbol;
    level3_delete_order_model_local_var->timestamp_nanos = timestamp_nanos;
    level3_delete_order_model_local_var->timestamp = timestamp;
    level3_delete_order_model_local_var->order_id_reference = order_id_reference;
    return level3_delete_order_model_local_var;
}

__attribute__((deprecated)) level3_delete_order_model_t *level3_delete_order_model_create(
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
    level3_delete_order_model_t *result = level3_delete_order_model_create_internal (
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

void level3_delete_order_model_free(level3_delete_order_model_t *level3_delete_order_model) {
    if(NULL == level3_delete_order_model){
        return ;
    }
    if(level3_delete_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "level3_delete_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (level3_delete_order_model->symbol) {
        free(level3_delete_order_model->symbol);
        level3_delete_order_model->symbol = NULL;
    }
    if (level3_delete_order_model->timestamp_nanos) {
        free(level3_delete_order_model->timestamp_nanos);
        level3_delete_order_model->timestamp_nanos = NULL;
    }
    if (level3_delete_order_model->timestamp) {
        free(level3_delete_order_model->timestamp);
        level3_delete_order_model->timestamp = NULL;
    }
    if (level3_delete_order_model->order_id_reference) {
        free(level3_delete_order_model->order_id_reference);
        level3_delete_order_model->order_id_reference = NULL;
    }
    free(level3_delete_order_model);
}

cJSON *level3_delete_order_model_convertToJSON(level3_delete_order_model_t *level3_delete_order_model) {
    cJSON *item = cJSON_CreateObject();

    // level3_delete_order_model->symbol
    if(level3_delete_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", level3_delete_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // level3_delete_order_model->timestamp_nanos
    if(level3_delete_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *level3_delete_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_delete_order_model->timestamp
    if(level3_delete_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", level3_delete_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // level3_delete_order_model->order_id_reference
    if(level3_delete_order_model->order_id_reference) {
    if(cJSON_AddNumberToObject(item, "order_id_reference", *level3_delete_order_model->order_id_reference) == NULL) {
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

level3_delete_order_model_t *level3_delete_order_model_parseFromJSON(cJSON *level3_delete_order_modelJSON){

    level3_delete_order_model_t *level3_delete_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for level3_delete_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for level3_delete_order_model->order_id_reference
    long *order_id_reference_local_var = NULL;

    // level3_delete_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(level3_delete_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // level3_delete_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(level3_delete_order_modelJSON, "timestamp_nanos");
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

    // level3_delete_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(level3_delete_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // level3_delete_order_model->order_id_reference
    cJSON *order_id_reference = cJSON_GetObjectItemCaseSensitive(level3_delete_order_modelJSON, "order_id_reference");
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

    level3_delete_order_model_local_var = level3_delete_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        order_id_reference_local_var
        );

    if (!level3_delete_order_model_local_var) {
        goto end;
    }

    return level3_delete_order_model_local_var;
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
