#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_modify_order_model.h"



static models_modify_order_model_t *models_modify_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference,
    int *is_priority_reset,
    int *size,
    double *price
    ) {
    models_modify_order_model_t *models_modify_order_model_local_var = malloc(sizeof(models_modify_order_model_t));
    if (!models_modify_order_model_local_var) {
        return NULL;
    }
    memset(models_modify_order_model_local_var, 0, sizeof(models_modify_order_model_t));
    models_modify_order_model_local_var->_library_owned = 1;
    models_modify_order_model_local_var->symbol = symbol;
    models_modify_order_model_local_var->timestamp_nanos = timestamp_nanos;
    models_modify_order_model_local_var->timestamp = timestamp;
    models_modify_order_model_local_var->order_id_reference = order_id_reference;
    models_modify_order_model_local_var->is_priority_reset = is_priority_reset;
    models_modify_order_model_local_var->size = size;
    models_modify_order_model_local_var->price = price;
    return models_modify_order_model_local_var;
}

__attribute__((deprecated)) models_modify_order_model_t *models_modify_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference,
    int *is_priority_reset,
    int *size,
    double *price
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
    int *is_priority_reset_copy = NULL;
    if (is_priority_reset) {
        is_priority_reset_copy = malloc(sizeof(int));
        if (is_priority_reset_copy) *is_priority_reset_copy = *is_priority_reset;
    }
    int *size_copy = NULL;
    if (size) {
        size_copy = malloc(sizeof(int));
        if (size_copy) *size_copy = *size;
    }
    double *price_copy = NULL;
    if (price) {
        price_copy = malloc(sizeof(double));
        if (price_copy) *price_copy = *price;
    }
    models_modify_order_model_t *result = models_modify_order_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        order_id_reference_copy,
        is_priority_reset_copy,
        size_copy,
        price_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(order_id_reference_copy);
        free(is_priority_reset_copy);
        free(size_copy);
        free(price_copy);
    }
    return result;
}

void models_modify_order_model_free(models_modify_order_model_t *models_modify_order_model) {
    if(NULL == models_modify_order_model){
        return ;
    }
    if(models_modify_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_modify_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_modify_order_model->symbol) {
        free(models_modify_order_model->symbol);
        models_modify_order_model->symbol = NULL;
    }
    if (models_modify_order_model->timestamp_nanos) {
        free(models_modify_order_model->timestamp_nanos);
        models_modify_order_model->timestamp_nanos = NULL;
    }
    if (models_modify_order_model->timestamp) {
        free(models_modify_order_model->timestamp);
        models_modify_order_model->timestamp = NULL;
    }
    if (models_modify_order_model->order_id_reference) {
        free(models_modify_order_model->order_id_reference);
        models_modify_order_model->order_id_reference = NULL;
    }
    if (models_modify_order_model->is_priority_reset) {
        free(models_modify_order_model->is_priority_reset);
        models_modify_order_model->is_priority_reset = NULL;
    }
    if (models_modify_order_model->size) {
        free(models_modify_order_model->size);
        models_modify_order_model->size = NULL;
    }
    if (models_modify_order_model->price) {
        free(models_modify_order_model->price);
        models_modify_order_model->price = NULL;
    }
    free(models_modify_order_model);
}

cJSON *models_modify_order_model_convertToJSON(models_modify_order_model_t *models_modify_order_model) {
    cJSON *item = cJSON_CreateObject();

    // models_modify_order_model->symbol
    if(models_modify_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_modify_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_modify_order_model->timestamp_nanos
    if(models_modify_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_modify_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_modify_order_model->timestamp
    if(models_modify_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_modify_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_modify_order_model->order_id_reference
    if(models_modify_order_model->order_id_reference) {
    if(cJSON_AddNumberToObject(item, "order_id_reference", *models_modify_order_model->order_id_reference) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_modify_order_model->is_priority_reset
    if(models_modify_order_model->is_priority_reset) {
    if(cJSON_AddBoolToObject(item, "is_priority_reset", *models_modify_order_model->is_priority_reset) == NULL) {
    goto fail; //Bool
    }
    }


    // models_modify_order_model->size
    if(models_modify_order_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *models_modify_order_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_modify_order_model->price
    if(models_modify_order_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *models_modify_order_model->price) == NULL) {
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

models_modify_order_model_t *models_modify_order_model_parseFromJSON(cJSON *models_modify_order_modelJSON){

    models_modify_order_model_t *models_modify_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_modify_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_modify_order_model->order_id_reference
    long *order_id_reference_local_var = NULL;

    // define the local variable for models_modify_order_model->is_priority_reset
    int *is_priority_reset_local_var = NULL;

    // define the local variable for models_modify_order_model->size
    int *size_local_var = NULL;

    // define the local variable for models_modify_order_model->price
    double *price_local_var = NULL;

    // models_modify_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_modify_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "timestamp_nanos");
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

    // models_modify_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_modify_order_model->order_id_reference
    cJSON *order_id_reference = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "order_id_reference");
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

    // models_modify_order_model->is_priority_reset
    cJSON *is_priority_reset = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "is_priority_reset");
    if (cJSON_IsNull(is_priority_reset)) {
        is_priority_reset = NULL;
    }
    if (is_priority_reset) { 
    if(!cJSON_IsBool(is_priority_reset))
    {
    goto end; //Bool
    }
    is_priority_reset_local_var = malloc(sizeof(int));
    if(!is_priority_reset_local_var)
    {
        goto end;
    }
    *is_priority_reset_local_var = is_priority_reset->valueint;
    }

    // models_modify_order_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    size_local_var = malloc(sizeof(int));
    if(!size_local_var)
    {
        goto end;
    }
    *size_local_var = size->valuedouble;
    }

    // models_modify_order_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(models_modify_order_modelJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    price_local_var = malloc(sizeof(double));
    if(!price_local_var)
    {
        goto end;
    }
    *price_local_var = price->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_modify_order_model_local_var = models_modify_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        order_id_reference_local_var,
        is_priority_reset_local_var,
        size_local_var,
        price_local_var
        );

    if (!models_modify_order_model_local_var) {
        goto end;
    }

    return models_modify_order_model_local_var;
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
    if (is_priority_reset_local_var) {
        free(is_priority_reset_local_var);
        is_priority_reset_local_var = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (price_local_var) {
        free(price_local_var);
        price_local_var = NULL;
    }
    return NULL;

}
