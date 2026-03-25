#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "level3_add_order_model.h"



static level3_add_order_model_t *level3_add_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *size,
    double *price,
    long *order_id
    ) {
    level3_add_order_model_t *level3_add_order_model_local_var = malloc(sizeof(level3_add_order_model_t));
    if (!level3_add_order_model_local_var) {
        return NULL;
    }
    memset(level3_add_order_model_local_var, 0, sizeof(level3_add_order_model_t));
    level3_add_order_model_local_var->_library_owned = 1;
    level3_add_order_model_local_var->symbol = symbol;
    level3_add_order_model_local_var->timestamp_nanos = timestamp_nanos;
    level3_add_order_model_local_var->timestamp = timestamp;
    level3_add_order_model_local_var->is_side_buy = is_side_buy;
    level3_add_order_model_local_var->size = size;
    level3_add_order_model_local_var->price = price;
    level3_add_order_model_local_var->order_id = order_id;
    return level3_add_order_model_local_var;
}

__attribute__((deprecated)) level3_add_order_model_t *level3_add_order_model_create(
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
    level3_add_order_model_t *result = level3_add_order_model_create_internal (
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

void level3_add_order_model_free(level3_add_order_model_t *level3_add_order_model) {
    if(NULL == level3_add_order_model){
        return ;
    }
    if(level3_add_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "level3_add_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (level3_add_order_model->symbol) {
        free(level3_add_order_model->symbol);
        level3_add_order_model->symbol = NULL;
    }
    if (level3_add_order_model->timestamp_nanos) {
        free(level3_add_order_model->timestamp_nanos);
        level3_add_order_model->timestamp_nanos = NULL;
    }
    if (level3_add_order_model->timestamp) {
        free(level3_add_order_model->timestamp);
        level3_add_order_model->timestamp = NULL;
    }
    if (level3_add_order_model->is_side_buy) {
        free(level3_add_order_model->is_side_buy);
        level3_add_order_model->is_side_buy = NULL;
    }
    if (level3_add_order_model->size) {
        free(level3_add_order_model->size);
        level3_add_order_model->size = NULL;
    }
    if (level3_add_order_model->price) {
        free(level3_add_order_model->price);
        level3_add_order_model->price = NULL;
    }
    if (level3_add_order_model->order_id) {
        free(level3_add_order_model->order_id);
        level3_add_order_model->order_id = NULL;
    }
    free(level3_add_order_model);
}

cJSON *level3_add_order_model_convertToJSON(level3_add_order_model_t *level3_add_order_model) {
    cJSON *item = cJSON_CreateObject();

    // level3_add_order_model->symbol
    if(level3_add_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", level3_add_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // level3_add_order_model->timestamp_nanos
    if(level3_add_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *level3_add_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_add_order_model->timestamp
    if(level3_add_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", level3_add_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // level3_add_order_model->is_side_buy
    if(level3_add_order_model->is_side_buy) {
    if(cJSON_AddBoolToObject(item, "is_side_buy", *level3_add_order_model->is_side_buy) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_add_order_model->size
    if(level3_add_order_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *level3_add_order_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_add_order_model->price
    if(level3_add_order_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *level3_add_order_model->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_add_order_model->order_id
    if(level3_add_order_model->order_id) {
    if(cJSON_AddNumberToObject(item, "order_id", *level3_add_order_model->order_id) == NULL) {
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

level3_add_order_model_t *level3_add_order_model_parseFromJSON(cJSON *level3_add_order_modelJSON){

    level3_add_order_model_t *level3_add_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for level3_add_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for level3_add_order_model->is_side_buy
    int *is_side_buy_local_var = NULL;

    // define the local variable for level3_add_order_model->size
    int *size_local_var = NULL;

    // define the local variable for level3_add_order_model->price
    double *price_local_var = NULL;

    // define the local variable for level3_add_order_model->order_id
    long *order_id_local_var = NULL;

    // level3_add_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // level3_add_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "timestamp_nanos");
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

    // level3_add_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // level3_add_order_model->is_side_buy
    cJSON *is_side_buy = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "is_side_buy");
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

    // level3_add_order_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "size");
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

    // level3_add_order_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "price");
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

    // level3_add_order_model->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(level3_add_order_modelJSON, "order_id");
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

    level3_add_order_model_local_var = level3_add_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        is_side_buy_local_var,
        size_local_var,
        price_local_var,
        order_id_local_var
        );

    if (!level3_add_order_model_local_var) {
        goto end;
    }

    return level3_add_order_model_local_var;
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
