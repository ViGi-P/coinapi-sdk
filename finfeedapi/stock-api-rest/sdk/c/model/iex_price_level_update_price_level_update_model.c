#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "iex_price_level_update_price_level_update_model.h"



static iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *is_event_processing_complete,
    int *size,
    double *price
    ) {
    iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_local_var = malloc(sizeof(iex_price_level_update_price_level_update_model_t));
    if (!iex_price_level_update_price_level_update_model_local_var) {
        return NULL;
    }
    memset(iex_price_level_update_price_level_update_model_local_var, 0, sizeof(iex_price_level_update_price_level_update_model_t));
    iex_price_level_update_price_level_update_model_local_var->_library_owned = 1;
    iex_price_level_update_price_level_update_model_local_var->symbol = symbol;
    iex_price_level_update_price_level_update_model_local_var->timestamp_nanos = timestamp_nanos;
    iex_price_level_update_price_level_update_model_local_var->timestamp = timestamp;
    iex_price_level_update_price_level_update_model_local_var->is_side_buy = is_side_buy;
    iex_price_level_update_price_level_update_model_local_var->is_event_processing_complete = is_event_processing_complete;
    iex_price_level_update_price_level_update_model_local_var->size = size;
    iex_price_level_update_price_level_update_model_local_var->price = price;
    return iex_price_level_update_price_level_update_model_local_var;
}

__attribute__((deprecated)) iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *is_event_processing_complete,
    int *size,
    double *price
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
    int *is_event_processing_complete_copy = NULL;
    if (is_event_processing_complete) {
        is_event_processing_complete_copy = malloc(sizeof(int));
        if (is_event_processing_complete_copy) *is_event_processing_complete_copy = *is_event_processing_complete;
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
    iex_price_level_update_price_level_update_model_t *result = iex_price_level_update_price_level_update_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        is_side_buy_copy,
        is_event_processing_complete_copy,
        size_copy,
        price_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(is_side_buy_copy);
        free(is_event_processing_complete_copy);
        free(size_copy);
        free(price_copy);
    }
    return result;
}

void iex_price_level_update_price_level_update_model_free(iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model) {
    if(NULL == iex_price_level_update_price_level_update_model){
        return ;
    }
    if(iex_price_level_update_price_level_update_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "iex_price_level_update_price_level_update_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (iex_price_level_update_price_level_update_model->symbol) {
        free(iex_price_level_update_price_level_update_model->symbol);
        iex_price_level_update_price_level_update_model->symbol = NULL;
    }
    if (iex_price_level_update_price_level_update_model->timestamp_nanos) {
        free(iex_price_level_update_price_level_update_model->timestamp_nanos);
        iex_price_level_update_price_level_update_model->timestamp_nanos = NULL;
    }
    if (iex_price_level_update_price_level_update_model->timestamp) {
        free(iex_price_level_update_price_level_update_model->timestamp);
        iex_price_level_update_price_level_update_model->timestamp = NULL;
    }
    if (iex_price_level_update_price_level_update_model->is_side_buy) {
        free(iex_price_level_update_price_level_update_model->is_side_buy);
        iex_price_level_update_price_level_update_model->is_side_buy = NULL;
    }
    if (iex_price_level_update_price_level_update_model->is_event_processing_complete) {
        free(iex_price_level_update_price_level_update_model->is_event_processing_complete);
        iex_price_level_update_price_level_update_model->is_event_processing_complete = NULL;
    }
    if (iex_price_level_update_price_level_update_model->size) {
        free(iex_price_level_update_price_level_update_model->size);
        iex_price_level_update_price_level_update_model->size = NULL;
    }
    if (iex_price_level_update_price_level_update_model->price) {
        free(iex_price_level_update_price_level_update_model->price);
        iex_price_level_update_price_level_update_model->price = NULL;
    }
    free(iex_price_level_update_price_level_update_model);
}

cJSON *iex_price_level_update_price_level_update_model_convertToJSON(iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model) {
    cJSON *item = cJSON_CreateObject();

    // iex_price_level_update_price_level_update_model->symbol
    if(iex_price_level_update_price_level_update_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", iex_price_level_update_price_level_update_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // iex_price_level_update_price_level_update_model->timestamp_nanos
    if(iex_price_level_update_price_level_update_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *iex_price_level_update_price_level_update_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_price_level_update_price_level_update_model->timestamp
    if(iex_price_level_update_price_level_update_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", iex_price_level_update_price_level_update_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // iex_price_level_update_price_level_update_model->is_side_buy
    if(iex_price_level_update_price_level_update_model->is_side_buy) {
    if(cJSON_AddBoolToObject(item, "is_side_buy", *iex_price_level_update_price_level_update_model->is_side_buy) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_price_level_update_price_level_update_model->is_event_processing_complete
    if(iex_price_level_update_price_level_update_model->is_event_processing_complete) {
    if(cJSON_AddBoolToObject(item, "is_event_processing_complete", *iex_price_level_update_price_level_update_model->is_event_processing_complete) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_price_level_update_price_level_update_model->size
    if(iex_price_level_update_price_level_update_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *iex_price_level_update_price_level_update_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_price_level_update_price_level_update_model->price
    if(iex_price_level_update_price_level_update_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *iex_price_level_update_price_level_update_model->price) == NULL) {
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

iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_parseFromJSON(cJSON *iex_price_level_update_price_level_update_modelJSON){

    iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for iex_price_level_update_price_level_update_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for iex_price_level_update_price_level_update_model->is_side_buy
    int *is_side_buy_local_var = NULL;

    // define the local variable for iex_price_level_update_price_level_update_model->is_event_processing_complete
    int *is_event_processing_complete_local_var = NULL;

    // define the local variable for iex_price_level_update_price_level_update_model->size
    int *size_local_var = NULL;

    // define the local variable for iex_price_level_update_price_level_update_model->price
    double *price_local_var = NULL;

    // iex_price_level_update_price_level_update_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // iex_price_level_update_price_level_update_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "timestamp_nanos");
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

    // iex_price_level_update_price_level_update_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // iex_price_level_update_price_level_update_model->is_side_buy
    cJSON *is_side_buy = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "is_side_buy");
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

    // iex_price_level_update_price_level_update_model->is_event_processing_complete
    cJSON *is_event_processing_complete = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "is_event_processing_complete");
    if (cJSON_IsNull(is_event_processing_complete)) {
        is_event_processing_complete = NULL;
    }
    if (is_event_processing_complete) { 
    if(!cJSON_IsBool(is_event_processing_complete))
    {
    goto end; //Bool
    }
    is_event_processing_complete_local_var = malloc(sizeof(int));
    if(!is_event_processing_complete_local_var)
    {
        goto end;
    }
    *is_event_processing_complete_local_var = is_event_processing_complete->valueint;
    }

    // iex_price_level_update_price_level_update_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "size");
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

    // iex_price_level_update_price_level_update_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(iex_price_level_update_price_level_update_modelJSON, "price");
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

    iex_price_level_update_price_level_update_model_local_var = iex_price_level_update_price_level_update_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        is_side_buy_local_var,
        is_event_processing_complete_local_var,
        size_local_var,
        price_local_var
        );

    if (!iex_price_level_update_price_level_update_model_local_var) {
        goto end;
    }

    return iex_price_level_update_price_level_update_model_local_var;
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
    if (is_event_processing_complete_local_var) {
        free(is_event_processing_complete_local_var);
        is_event_processing_complete_local_var = NULL;
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
