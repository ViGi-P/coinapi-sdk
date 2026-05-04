#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_add_order_model.h"



static models_add_order_model_t *models_add_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *size,
    double *price,
    long *order_id
    ) {
    models_add_order_model_t *models_add_order_model_local_var = malloc(sizeof(models_add_order_model_t));
    if (!models_add_order_model_local_var) {
        return NULL;
    }
    memset(models_add_order_model_local_var, 0, sizeof(models_add_order_model_t));
    models_add_order_model_local_var->_library_owned = 1;
    models_add_order_model_local_var->symbol = symbol;
    models_add_order_model_local_var->timestamp_nanos = timestamp_nanos;
    models_add_order_model_local_var->timestamp = timestamp;
    models_add_order_model_local_var->is_side_buy = is_side_buy;
    models_add_order_model_local_var->size = size;
    models_add_order_model_local_var->price = price;
    models_add_order_model_local_var->order_id = order_id;
    return models_add_order_model_local_var;
}

__attribute__((deprecated)) models_add_order_model_t *models_add_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *size,
    double *price,
    long *order_id
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *is_side_buy_copy = NULL;
    if (is_side_buy) {
        is_side_buy_copy = malloc(sizeof(int));
        if (is_side_buy_copy) *is_side_buy_copy = *is_side_buy;
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
    long *order_id_copy = NULL;
    if (order_id) {
        order_id_copy = malloc(sizeof(long));
        if (order_id_copy) *order_id_copy = *order_id;
    }
    models_add_order_model_t *result = models_add_order_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        is_side_buy_copy,
        size_copy,
        price_copy,
        order_id_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(is_side_buy_copy);
        free(size_copy);
        free(price_copy);
        free(order_id_copy);
    }
    return result;
}

void models_add_order_model_free(models_add_order_model_t *models_add_order_model) {
    if(NULL == models_add_order_model){
        return ;
    }
    if(models_add_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_add_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_add_order_model->symbol) {
        free(models_add_order_model->symbol);
        models_add_order_model->symbol = NULL;
    }
    if (models_add_order_model->timestamp_nanos) {
        free(models_add_order_model->timestamp_nanos);
        models_add_order_model->timestamp_nanos = NULL;
    }
    if (models_add_order_model->timestamp) {
        free(models_add_order_model->timestamp);
        models_add_order_model->timestamp = NULL;
    }
    if (models_add_order_model->is_side_buy) {
        free(models_add_order_model->is_side_buy);
        models_add_order_model->is_side_buy = NULL;
    }
    if (models_add_order_model->size) {
        free(models_add_order_model->size);
        models_add_order_model->size = NULL;
    }
    if (models_add_order_model->price) {
        free(models_add_order_model->price);
        models_add_order_model->price = NULL;
    }
    if (models_add_order_model->order_id) {
        free(models_add_order_model->order_id);
        models_add_order_model->order_id = NULL;
    }
    free(models_add_order_model);
}

cJSON *models_add_order_model_convertToJSON(models_add_order_model_t *models_add_order_model) {
    cJSON *item = cJSON_CreateObject();

    // models_add_order_model->symbol
    if(models_add_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_add_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_add_order_model->timestamp_nanos
    if(models_add_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_add_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_add_order_model->timestamp
    if(models_add_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_add_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_add_order_model->is_side_buy
    if(models_add_order_model->is_side_buy) {
    if(cJSON_AddBoolToObject(item, "is_side_buy", *models_add_order_model->is_side_buy) == NULL) {
    goto fail; //Bool
    }
    }


    // models_add_order_model->size
    if(models_add_order_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *models_add_order_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_add_order_model->price
    if(models_add_order_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *models_add_order_model->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_add_order_model->order_id
    if(models_add_order_model->order_id) {
    if(cJSON_AddNumberToObject(item, "order_id", *models_add_order_model->order_id) == NULL) {
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

models_add_order_model_t *models_add_order_model_parseFromJSON(cJSON *models_add_order_modelJSON){

    models_add_order_model_t *models_add_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_add_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_add_order_model->is_side_buy
    int *is_side_buy_local_var = NULL;

    // define the local variable for models_add_order_model->size
    int *size_local_var = NULL;

    // define the local variable for models_add_order_model->price
    double *price_local_var = NULL;

    // define the local variable for models_add_order_model->order_id
    long *order_id_local_var = NULL;

    // models_add_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_add_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "timestamp_nanos");
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

    // models_add_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_add_order_model->is_side_buy
    cJSON *is_side_buy = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "is_side_buy");
    if (cJSON_IsNull(is_side_buy)) {
        is_side_buy = NULL;
    }
    if (is_side_buy) { 
    if(!cJSON_IsBool(is_side_buy))
    {
    goto end; //Bool
    }
    is_side_buy_local_var = malloc(sizeof(int));
    if(!is_side_buy_local_var)
    {
        goto end;
    }
    *is_side_buy_local_var = is_side_buy->valueint;
    }

    // models_add_order_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "size");
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

    // models_add_order_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "price");
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

    // models_add_order_model->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(models_add_order_modelJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (order_id) { 
    if(!cJSON_IsNumber(order_id))
    {
    goto end; //Numeric
    }
    order_id_local_var = malloc(sizeof(long));
    if(!order_id_local_var)
    {
        goto end;
    }
    *order_id_local_var = order_id->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_add_order_model_local_var = models_add_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        is_side_buy_local_var,
        size_local_var,
        price_local_var,
        order_id_local_var
        );

    if (!models_add_order_model_local_var) {
        goto end;
    }

    return models_add_order_model_local_var;
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
    if (is_side_buy_local_var) {
        free(is_side_buy_local_var);
        is_side_buy_local_var = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (price_local_var) {
        free(price_local_var);
        price_local_var = NULL;
    }
    if (order_id_local_var) {
        free(order_id_local_var);
        order_id_local_var = NULL;
    }
    return NULL;

}
