#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "iex_quote_update_quote_update_model.h"



static iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_symbol_available,
    int *is_pre_post_market_session,
    int *ask_size,
    double *ask_price,
    double *bid_price,
    int *bid_size
    ) {
    iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_local_var = malloc(sizeof(iex_quote_update_quote_update_model_t));
    if (!iex_quote_update_quote_update_model_local_var) {
        return NULL;
    }
    memset(iex_quote_update_quote_update_model_local_var, 0, sizeof(iex_quote_update_quote_update_model_t));
    iex_quote_update_quote_update_model_local_var->_library_owned = 1;
    iex_quote_update_quote_update_model_local_var->symbol = symbol;
    iex_quote_update_quote_update_model_local_var->timestamp_nanos = timestamp_nanos;
    iex_quote_update_quote_update_model_local_var->timestamp = timestamp;
    iex_quote_update_quote_update_model_local_var->is_symbol_available = is_symbol_available;
    iex_quote_update_quote_update_model_local_var->is_pre_post_market_session = is_pre_post_market_session;
    iex_quote_update_quote_update_model_local_var->ask_size = ask_size;
    iex_quote_update_quote_update_model_local_var->ask_price = ask_price;
    iex_quote_update_quote_update_model_local_var->bid_price = bid_price;
    iex_quote_update_quote_update_model_local_var->bid_size = bid_size;
    return iex_quote_update_quote_update_model_local_var;
}

__attribute__((deprecated)) iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_symbol_available,
    int *is_pre_post_market_session,
    int *ask_size,
    double *ask_price,
    double *bid_price,
    int *bid_size
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *is_symbol_available_copy = NULL;
    if (is_symbol_available) {
        is_symbol_available_copy = malloc(sizeof(int));
        if (is_symbol_available_copy) *is_symbol_available_copy = *is_symbol_available;
    }
    int *is_pre_post_market_session_copy = NULL;
    if (is_pre_post_market_session) {
        is_pre_post_market_session_copy = malloc(sizeof(int));
        if (is_pre_post_market_session_copy) *is_pre_post_market_session_copy = *is_pre_post_market_session;
    }
    int *ask_size_copy = NULL;
    if (ask_size) {
        ask_size_copy = malloc(sizeof(int));
        if (ask_size_copy) *ask_size_copy = *ask_size;
    }
    double *ask_price_copy = NULL;
    if (ask_price) {
        ask_price_copy = malloc(sizeof(double));
        if (ask_price_copy) *ask_price_copy = *ask_price;
    }
    double *bid_price_copy = NULL;
    if (bid_price) {
        bid_price_copy = malloc(sizeof(double));
        if (bid_price_copy) *bid_price_copy = *bid_price;
    }
    int *bid_size_copy = NULL;
    if (bid_size) {
        bid_size_copy = malloc(sizeof(int));
        if (bid_size_copy) *bid_size_copy = *bid_size;
    }
    iex_quote_update_quote_update_model_t *result = iex_quote_update_quote_update_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        is_symbol_available_copy,
        is_pre_post_market_session_copy,
        ask_size_copy,
        ask_price_copy,
        bid_price_copy,
        bid_size_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(is_symbol_available_copy);
        free(is_pre_post_market_session_copy);
        free(ask_size_copy);
        free(ask_price_copy);
        free(bid_price_copy);
        free(bid_size_copy);
    }
    return result;
}

void iex_quote_update_quote_update_model_free(iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model) {
    if(NULL == iex_quote_update_quote_update_model){
        return ;
    }
    if(iex_quote_update_quote_update_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "iex_quote_update_quote_update_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (iex_quote_update_quote_update_model->symbol) {
        free(iex_quote_update_quote_update_model->symbol);
        iex_quote_update_quote_update_model->symbol = NULL;
    }
    if (iex_quote_update_quote_update_model->timestamp_nanos) {
        free(iex_quote_update_quote_update_model->timestamp_nanos);
        iex_quote_update_quote_update_model->timestamp_nanos = NULL;
    }
    if (iex_quote_update_quote_update_model->timestamp) {
        free(iex_quote_update_quote_update_model->timestamp);
        iex_quote_update_quote_update_model->timestamp = NULL;
    }
    if (iex_quote_update_quote_update_model->is_symbol_available) {
        free(iex_quote_update_quote_update_model->is_symbol_available);
        iex_quote_update_quote_update_model->is_symbol_available = NULL;
    }
    if (iex_quote_update_quote_update_model->is_pre_post_market_session) {
        free(iex_quote_update_quote_update_model->is_pre_post_market_session);
        iex_quote_update_quote_update_model->is_pre_post_market_session = NULL;
    }
    if (iex_quote_update_quote_update_model->ask_size) {
        free(iex_quote_update_quote_update_model->ask_size);
        iex_quote_update_quote_update_model->ask_size = NULL;
    }
    if (iex_quote_update_quote_update_model->ask_price) {
        free(iex_quote_update_quote_update_model->ask_price);
        iex_quote_update_quote_update_model->ask_price = NULL;
    }
    if (iex_quote_update_quote_update_model->bid_price) {
        free(iex_quote_update_quote_update_model->bid_price);
        iex_quote_update_quote_update_model->bid_price = NULL;
    }
    if (iex_quote_update_quote_update_model->bid_size) {
        free(iex_quote_update_quote_update_model->bid_size);
        iex_quote_update_quote_update_model->bid_size = NULL;
    }
    free(iex_quote_update_quote_update_model);
}

cJSON *iex_quote_update_quote_update_model_convertToJSON(iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model) {
    cJSON *item = cJSON_CreateObject();

    // iex_quote_update_quote_update_model->symbol
    if(iex_quote_update_quote_update_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", iex_quote_update_quote_update_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // iex_quote_update_quote_update_model->timestamp_nanos
    if(iex_quote_update_quote_update_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *iex_quote_update_quote_update_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_quote_update_quote_update_model->timestamp
    if(iex_quote_update_quote_update_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", iex_quote_update_quote_update_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // iex_quote_update_quote_update_model->is_symbol_available
    if(iex_quote_update_quote_update_model->is_symbol_available) {
    if(cJSON_AddBoolToObject(item, "is_symbol_available", *iex_quote_update_quote_update_model->is_symbol_available) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_quote_update_quote_update_model->is_pre_post_market_session
    if(iex_quote_update_quote_update_model->is_pre_post_market_session) {
    if(cJSON_AddBoolToObject(item, "is_pre_post_market_session", *iex_quote_update_quote_update_model->is_pre_post_market_session) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_quote_update_quote_update_model->ask_size
    if(iex_quote_update_quote_update_model->ask_size) {
    if(cJSON_AddNumberToObject(item, "ask_size", *iex_quote_update_quote_update_model->ask_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_quote_update_quote_update_model->ask_price
    if(iex_quote_update_quote_update_model->ask_price) {
    if(cJSON_AddNumberToObject(item, "ask_price", *iex_quote_update_quote_update_model->ask_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_quote_update_quote_update_model->bid_price
    if(iex_quote_update_quote_update_model->bid_price) {
    if(cJSON_AddNumberToObject(item, "bid_price", *iex_quote_update_quote_update_model->bid_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_quote_update_quote_update_model->bid_size
    if(iex_quote_update_quote_update_model->bid_size) {
    if(cJSON_AddNumberToObject(item, "bid_size", *iex_quote_update_quote_update_model->bid_size) == NULL) {
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

iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_parseFromJSON(cJSON *iex_quote_update_quote_update_modelJSON){

    iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for iex_quote_update_quote_update_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for iex_quote_update_quote_update_model->is_symbol_available
    int *is_symbol_available_local_var = NULL;

    // define the local variable for iex_quote_update_quote_update_model->is_pre_post_market_session
    int *is_pre_post_market_session_local_var = NULL;

    // define the local variable for iex_quote_update_quote_update_model->ask_size
    int *ask_size_local_var = NULL;

    // define the local variable for iex_quote_update_quote_update_model->ask_price
    double *ask_price_local_var = NULL;

    // define the local variable for iex_quote_update_quote_update_model->bid_price
    double *bid_price_local_var = NULL;

    // define the local variable for iex_quote_update_quote_update_model->bid_size
    int *bid_size_local_var = NULL;

    // iex_quote_update_quote_update_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // iex_quote_update_quote_update_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "timestamp_nanos");
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

    // iex_quote_update_quote_update_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // iex_quote_update_quote_update_model->is_symbol_available
    cJSON *is_symbol_available = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "is_symbol_available");
    if (cJSON_IsNull(is_symbol_available)) {
        is_symbol_available = NULL;
    }
    if (is_symbol_available) { 
    if(!cJSON_IsBool(is_symbol_available))
    {
    goto end; //Bool
    }
    is_symbol_available_local_var = malloc(sizeof(int));
    if(!is_symbol_available_local_var)
    {
        goto end;
    }
    *is_symbol_available_local_var = is_symbol_available->valueint;
    }

    // iex_quote_update_quote_update_model->is_pre_post_market_session
    cJSON *is_pre_post_market_session = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "is_pre_post_market_session");
    if (cJSON_IsNull(is_pre_post_market_session)) {
        is_pre_post_market_session = NULL;
    }
    if (is_pre_post_market_session) { 
    if(!cJSON_IsBool(is_pre_post_market_session))
    {
    goto end; //Bool
    }
    is_pre_post_market_session_local_var = malloc(sizeof(int));
    if(!is_pre_post_market_session_local_var)
    {
        goto end;
    }
    *is_pre_post_market_session_local_var = is_pre_post_market_session->valueint;
    }

    // iex_quote_update_quote_update_model->ask_size
    cJSON *ask_size = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "ask_size");
    if (cJSON_IsNull(ask_size)) {
        ask_size = NULL;
    }
    if (ask_size) { 
    if(!cJSON_IsNumber(ask_size))
    {
    goto end; //Numeric
    }
    ask_size_local_var = malloc(sizeof(int));
    if(!ask_size_local_var)
    {
        goto end;
    }
    *ask_size_local_var = ask_size->valuedouble;
    }

    // iex_quote_update_quote_update_model->ask_price
    cJSON *ask_price = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "ask_price");
    if (cJSON_IsNull(ask_price)) {
        ask_price = NULL;
    }
    if (ask_price) { 
    if(!cJSON_IsNumber(ask_price))
    {
    goto end; //Numeric
    }
    ask_price_local_var = malloc(sizeof(double));
    if(!ask_price_local_var)
    {
        goto end;
    }
    *ask_price_local_var = ask_price->valuedouble;
    }

    // iex_quote_update_quote_update_model->bid_price
    cJSON *bid_price = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "bid_price");
    if (cJSON_IsNull(bid_price)) {
        bid_price = NULL;
    }
    if (bid_price) { 
    if(!cJSON_IsNumber(bid_price))
    {
    goto end; //Numeric
    }
    bid_price_local_var = malloc(sizeof(double));
    if(!bid_price_local_var)
    {
        goto end;
    }
    *bid_price_local_var = bid_price->valuedouble;
    }

    // iex_quote_update_quote_update_model->bid_size
    cJSON *bid_size = cJSON_GetObjectItemCaseSensitive(iex_quote_update_quote_update_modelJSON, "bid_size");
    if (cJSON_IsNull(bid_size)) {
        bid_size = NULL;
    }
    if (bid_size) { 
    if(!cJSON_IsNumber(bid_size))
    {
    goto end; //Numeric
    }
    bid_size_local_var = malloc(sizeof(int));
    if(!bid_size_local_var)
    {
        goto end;
    }
    *bid_size_local_var = bid_size->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    iex_quote_update_quote_update_model_local_var = iex_quote_update_quote_update_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        is_symbol_available_local_var,
        is_pre_post_market_session_local_var,
        ask_size_local_var,
        ask_price_local_var,
        bid_price_local_var,
        bid_size_local_var
        );

    if (!iex_quote_update_quote_update_model_local_var) {
        goto end;
    }

    return iex_quote_update_quote_update_model_local_var;
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
    if (is_symbol_available_local_var) {
        free(is_symbol_available_local_var);
        is_symbol_available_local_var = NULL;
    }
    if (is_pre_post_market_session_local_var) {
        free(is_pre_post_market_session_local_var);
        is_pre_post_market_session_local_var = NULL;
    }
    if (ask_size_local_var) {
        free(ask_size_local_var);
        ask_size_local_var = NULL;
    }
    if (ask_price_local_var) {
        free(ask_price_local_var);
        ask_price_local_var = NULL;
    }
    if (bid_price_local_var) {
        free(bid_price_local_var);
        bid_price_local_var = NULL;
    }
    if (bid_size_local_var) {
        free(bid_size_local_var);
        bid_size_local_var = NULL;
    }
    return NULL;

}
