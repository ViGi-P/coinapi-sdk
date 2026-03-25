#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_quote_trade.h"



static v1_quote_trade_t *v1_quote_trade_create_internal(
    char *symbol_id,
    char *time_exchange,
    char *time_coinapi,
    double *ask_price,
    double *ask_size,
    double *bid_price,
    double *bid_size,
    v1_last_trade_t *last_trade
    ) {
    v1_quote_trade_t *v1_quote_trade_local_var = malloc(sizeof(v1_quote_trade_t));
    if (!v1_quote_trade_local_var) {
        return NULL;
    }
    memset(v1_quote_trade_local_var, 0, sizeof(v1_quote_trade_t));
    v1_quote_trade_local_var->_library_owned = 1;
    v1_quote_trade_local_var->symbol_id = symbol_id;
    v1_quote_trade_local_var->time_exchange = time_exchange;
    v1_quote_trade_local_var->time_coinapi = time_coinapi;
    v1_quote_trade_local_var->ask_price = ask_price;
    v1_quote_trade_local_var->ask_size = ask_size;
    v1_quote_trade_local_var->bid_price = bid_price;
    v1_quote_trade_local_var->bid_size = bid_size;
    v1_quote_trade_local_var->last_trade = last_trade;
    return v1_quote_trade_local_var;
}

__attribute__((deprecated)) v1_quote_trade_t *v1_quote_trade_create(
    char *symbol_id,
    char *time_exchange,
    char *time_coinapi,
    double *ask_price,
    double *ask_size,
    double *bid_price,
    double *bid_size,
    v1_last_trade_t *last_trade
    ) {
    double *ask_price_copy = NULL;
    if (ask_price) {
        ask_price_copy = malloc(sizeof(double));
        if (ask_price_copy) *ask_price_copy = *ask_price;
    }
    double *ask_size_copy = NULL;
    if (ask_size) {
        ask_size_copy = malloc(sizeof(double));
        if (ask_size_copy) *ask_size_copy = *ask_size;
    }
    double *bid_price_copy = NULL;
    if (bid_price) {
        bid_price_copy = malloc(sizeof(double));
        if (bid_price_copy) *bid_price_copy = *bid_price;
    }
    double *bid_size_copy = NULL;
    if (bid_size) {
        bid_size_copy = malloc(sizeof(double));
        if (bid_size_copy) *bid_size_copy = *bid_size;
    }
    v1_quote_trade_t *result = v1_quote_trade_create_internal (
        symbol_id,
        time_exchange,
        time_coinapi,
        ask_price_copy,
        ask_size_copy,
        bid_price_copy,
        bid_size_copy,
        last_trade
        );
    if (!result) {
        free(ask_price_copy);
        free(ask_size_copy);
        free(bid_price_copy);
        free(bid_size_copy);
    }
    return result;
}

void v1_quote_trade_free(v1_quote_trade_t *v1_quote_trade) {
    if(NULL == v1_quote_trade){
        return ;
    }
    if(v1_quote_trade->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_quote_trade_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_quote_trade->symbol_id) {
        free(v1_quote_trade->symbol_id);
        v1_quote_trade->symbol_id = NULL;
    }
    if (v1_quote_trade->time_exchange) {
        free(v1_quote_trade->time_exchange);
        v1_quote_trade->time_exchange = NULL;
    }
    if (v1_quote_trade->time_coinapi) {
        free(v1_quote_trade->time_coinapi);
        v1_quote_trade->time_coinapi = NULL;
    }
    if (v1_quote_trade->ask_price) {
        free(v1_quote_trade->ask_price);
        v1_quote_trade->ask_price = NULL;
    }
    if (v1_quote_trade->ask_size) {
        free(v1_quote_trade->ask_size);
        v1_quote_trade->ask_size = NULL;
    }
    if (v1_quote_trade->bid_price) {
        free(v1_quote_trade->bid_price);
        v1_quote_trade->bid_price = NULL;
    }
    if (v1_quote_trade->bid_size) {
        free(v1_quote_trade->bid_size);
        v1_quote_trade->bid_size = NULL;
    }
    if (v1_quote_trade->last_trade) {
        v1_last_trade_free(v1_quote_trade->last_trade);
        v1_quote_trade->last_trade = NULL;
    }
    free(v1_quote_trade);
}

cJSON *v1_quote_trade_convertToJSON(v1_quote_trade_t *v1_quote_trade) {
    cJSON *item = cJSON_CreateObject();

    // v1_quote_trade->symbol_id
    if(v1_quote_trade->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_quote_trade->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_quote_trade->time_exchange
    if(v1_quote_trade->time_exchange) {
    if(cJSON_AddStringToObject(item, "time_exchange", v1_quote_trade->time_exchange) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_quote_trade->time_coinapi
    if(v1_quote_trade->time_coinapi) {
    if(cJSON_AddStringToObject(item, "time_coinapi", v1_quote_trade->time_coinapi) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_quote_trade->ask_price
    if(v1_quote_trade->ask_price) {
    if(cJSON_AddNumberToObject(item, "ask_price", *v1_quote_trade->ask_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_quote_trade->ask_size
    if(v1_quote_trade->ask_size) {
    if(cJSON_AddNumberToObject(item, "ask_size", *v1_quote_trade->ask_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_quote_trade->bid_price
    if(v1_quote_trade->bid_price) {
    if(cJSON_AddNumberToObject(item, "bid_price", *v1_quote_trade->bid_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_quote_trade->bid_size
    if(v1_quote_trade->bid_size) {
    if(cJSON_AddNumberToObject(item, "bid_size", *v1_quote_trade->bid_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_quote_trade->last_trade
    if(v1_quote_trade->last_trade) {
    cJSON *last_trade_local_JSON = v1_last_trade_convertToJSON(v1_quote_trade->last_trade);
    if(last_trade_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "last_trade", last_trade_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_quote_trade_t *v1_quote_trade_parseFromJSON(cJSON *v1_quote_tradeJSON){

    v1_quote_trade_t *v1_quote_trade_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *time_exchange_local_str = NULL;

    char *time_coinapi_local_str = NULL;

    // define the local variable for v1_quote_trade->ask_price
    double *ask_price_local_var = NULL;

    // define the local variable for v1_quote_trade->ask_size
    double *ask_size_local_var = NULL;

    // define the local variable for v1_quote_trade->bid_price
    double *bid_price_local_var = NULL;

    // define the local variable for v1_quote_trade->bid_size
    double *bid_size_local_var = NULL;

    // define the local variable for v1_quote_trade->last_trade
    v1_last_trade_t *last_trade_local_nonprim = NULL;

    // v1_quote_trade->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_quote_trade->time_exchange
    cJSON *time_exchange = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "time_exchange");
    if (cJSON_IsNull(time_exchange)) {
        time_exchange = NULL;
    }
    if (time_exchange) { 
    if(!cJSON_IsString(time_exchange) && !cJSON_IsNull(time_exchange))
    {
    goto end; //DateTime
    }
    }

    // v1_quote_trade->time_coinapi
    cJSON *time_coinapi = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "time_coinapi");
    if (cJSON_IsNull(time_coinapi)) {
        time_coinapi = NULL;
    }
    if (time_coinapi) { 
    if(!cJSON_IsString(time_coinapi) && !cJSON_IsNull(time_coinapi))
    {
    goto end; //DateTime
    }
    }

    // v1_quote_trade->ask_price
    cJSON *ask_price = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "ask_price");
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

    // v1_quote_trade->ask_size
    cJSON *ask_size = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "ask_size");
    if (cJSON_IsNull(ask_size)) {
        ask_size = NULL;
    }
    if (ask_size) { 
    if(!cJSON_IsNumber(ask_size))
    {
    goto end; //Numeric
    }
    ask_size_local_var = malloc(sizeof(double));
    if(!ask_size_local_var)
    {
        goto end;
    }
    *ask_size_local_var = ask_size->valuedouble;
    }

    // v1_quote_trade->bid_price
    cJSON *bid_price = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "bid_price");
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

    // v1_quote_trade->bid_size
    cJSON *bid_size = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "bid_size");
    if (cJSON_IsNull(bid_size)) {
        bid_size = NULL;
    }
    if (bid_size) { 
    if(!cJSON_IsNumber(bid_size))
    {
    goto end; //Numeric
    }
    bid_size_local_var = malloc(sizeof(double));
    if(!bid_size_local_var)
    {
        goto end;
    }
    *bid_size_local_var = bid_size->valuedouble;
    }

    // v1_quote_trade->last_trade
    cJSON *last_trade = cJSON_GetObjectItemCaseSensitive(v1_quote_tradeJSON, "last_trade");
    if (cJSON_IsNull(last_trade)) {
        last_trade = NULL;
    }
    if (last_trade) { 
    last_trade_local_nonprim = v1_last_trade_parseFromJSON(last_trade); //nonprimitive
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (time_exchange && !cJSON_IsNull(time_exchange)) time_exchange_local_str = strdup(time_exchange->valuestring);
    if (time_coinapi && !cJSON_IsNull(time_coinapi)) time_coinapi_local_str = strdup(time_coinapi->valuestring);

    v1_quote_trade_local_var = v1_quote_trade_create_internal (
        symbol_id_local_str,
        time_exchange_local_str,
        time_coinapi_local_str,
        ask_price_local_var,
        ask_size_local_var,
        bid_price_local_var,
        bid_size_local_var,
        last_trade ? last_trade_local_nonprim : NULL
        );

    if (!v1_quote_trade_local_var) {
        goto end;
    }

    return v1_quote_trade_local_var;
end:
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (time_exchange_local_str) {
        free(time_exchange_local_str);
        time_exchange_local_str = NULL;
    }
    if (time_coinapi_local_str) {
        free(time_coinapi_local_str);
        time_coinapi_local_str = NULL;
    }
    if (ask_price_local_var) {
        free(ask_price_local_var);
        ask_price_local_var = NULL;
    }
    if (ask_size_local_var) {
        free(ask_size_local_var);
        ask_size_local_var = NULL;
    }
    if (bid_price_local_var) {
        free(bid_price_local_var);
        bid_price_local_var = NULL;
    }
    if (bid_size_local_var) {
        free(bid_size_local_var);
        bid_size_local_var = NULL;
    }
    if (last_trade_local_nonprim) {
        v1_last_trade_free(last_trade_local_nonprim);
        last_trade_local_nonprim = NULL;
    }
    return NULL;

}
