#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_trade.h"



static v1_trade_t *v1_trade_create_internal(
    char *symbol_id,
    char *time_exchange,
    char *time_coinapi,
    char *uuid,
    double *price,
    double *size,
    char *taker_side,
    char *id_trade,
    char *id_order_maker,
    char *id_order_taker
    ) {
    v1_trade_t *v1_trade_local_var = malloc(sizeof(v1_trade_t));
    if (!v1_trade_local_var) {
        return NULL;
    }
    memset(v1_trade_local_var, 0, sizeof(v1_trade_t));
    v1_trade_local_var->_library_owned = 1;
    v1_trade_local_var->symbol_id = symbol_id;
    v1_trade_local_var->time_exchange = time_exchange;
    v1_trade_local_var->time_coinapi = time_coinapi;
    v1_trade_local_var->uuid = uuid;
    v1_trade_local_var->price = price;
    v1_trade_local_var->size = size;
    v1_trade_local_var->taker_side = taker_side;
    v1_trade_local_var->id_trade = id_trade;
    v1_trade_local_var->id_order_maker = id_order_maker;
    v1_trade_local_var->id_order_taker = id_order_taker;
    return v1_trade_local_var;
}

__attribute__((deprecated)) v1_trade_t *v1_trade_create(
    char *symbol_id,
    char *time_exchange,
    char *time_coinapi,
    char *uuid,
    double *price,
    double *size,
    char *taker_side,
    char *id_trade,
    char *id_order_maker,
    char *id_order_taker
    ) {
    double *price_copy = NULL;
    if (price) {
        price_copy = malloc(sizeof(double));
        if (price_copy) *price_copy = *price;
    }
    double *size_copy = NULL;
    if (size) {
        size_copy = malloc(sizeof(double));
        if (size_copy) *size_copy = *size;
    }
    v1_trade_t *result = v1_trade_create_internal (
        symbol_id,
        time_exchange,
        time_coinapi,
        uuid,
        price_copy,
        size_copy,
        taker_side,
        id_trade,
        id_order_maker,
        id_order_taker
        );
    if (!result) {
        free(price_copy);
        free(size_copy);
    }
    return result;
}

void v1_trade_free(v1_trade_t *v1_trade) {
    if(NULL == v1_trade){
        return ;
    }
    if(v1_trade->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_trade_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_trade->symbol_id) {
        free(v1_trade->symbol_id);
        v1_trade->symbol_id = NULL;
    }
    if (v1_trade->time_exchange) {
        free(v1_trade->time_exchange);
        v1_trade->time_exchange = NULL;
    }
    if (v1_trade->time_coinapi) {
        free(v1_trade->time_coinapi);
        v1_trade->time_coinapi = NULL;
    }
    if (v1_trade->uuid) {
        free(v1_trade->uuid);
        v1_trade->uuid = NULL;
    }
    if (v1_trade->price) {
        free(v1_trade->price);
        v1_trade->price = NULL;
    }
    if (v1_trade->size) {
        free(v1_trade->size);
        v1_trade->size = NULL;
    }
    if (v1_trade->taker_side) {
        free(v1_trade->taker_side);
        v1_trade->taker_side = NULL;
    }
    if (v1_trade->id_trade) {
        free(v1_trade->id_trade);
        v1_trade->id_trade = NULL;
    }
    if (v1_trade->id_order_maker) {
        free(v1_trade->id_order_maker);
        v1_trade->id_order_maker = NULL;
    }
    if (v1_trade->id_order_taker) {
        free(v1_trade->id_order_taker);
        v1_trade->id_order_taker = NULL;
    }
    free(v1_trade);
}

cJSON *v1_trade_convertToJSON(v1_trade_t *v1_trade) {
    cJSON *item = cJSON_CreateObject();

    // v1_trade->symbol_id
    if(v1_trade->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_trade->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_trade->time_exchange
    if(v1_trade->time_exchange) {
    if(cJSON_AddStringToObject(item, "time_exchange", v1_trade->time_exchange) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_trade->time_coinapi
    if(v1_trade->time_coinapi) {
    if(cJSON_AddStringToObject(item, "time_coinapi", v1_trade->time_coinapi) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_trade->uuid
    if(v1_trade->uuid) {
    if(cJSON_AddStringToObject(item, "uuid", v1_trade->uuid) == NULL) {
    goto fail; //String
    }
    }


    // v1_trade->price
    if(v1_trade->price) {
    if(cJSON_AddNumberToObject(item, "price", *v1_trade->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_trade->size
    if(v1_trade->size) {
    if(cJSON_AddNumberToObject(item, "size", *v1_trade->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_trade->taker_side
    if(v1_trade->taker_side) {
    if(cJSON_AddStringToObject(item, "taker_side", v1_trade->taker_side) == NULL) {
    goto fail; //String
    }
    }


    // v1_trade->id_trade
    if(v1_trade->id_trade) {
    if(cJSON_AddStringToObject(item, "id_trade", v1_trade->id_trade) == NULL) {
    goto fail; //String
    }
    }


    // v1_trade->id_order_maker
    if(v1_trade->id_order_maker) {
    if(cJSON_AddStringToObject(item, "id_order_maker", v1_trade->id_order_maker) == NULL) {
    goto fail; //String
    }
    }


    // v1_trade->id_order_taker
    if(v1_trade->id_order_taker) {
    if(cJSON_AddStringToObject(item, "id_order_taker", v1_trade->id_order_taker) == NULL) {
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

v1_trade_t *v1_trade_parseFromJSON(cJSON *v1_tradeJSON){

    v1_trade_t *v1_trade_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *time_exchange_local_str = NULL;

    char *time_coinapi_local_str = NULL;

    char *uuid_local_str = NULL;

    // define the local variable for v1_trade->price
    double *price_local_var = NULL;

    // define the local variable for v1_trade->size
    double *size_local_var = NULL;

    char *taker_side_local_str = NULL;

    char *id_trade_local_str = NULL;

    char *id_order_maker_local_str = NULL;

    char *id_order_taker_local_str = NULL;

    // v1_trade->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_trade->time_exchange
    cJSON *time_exchange = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "time_exchange");
    if (cJSON_IsNull(time_exchange)) {
        time_exchange = NULL;
    }
    if (time_exchange) { 
    if(!cJSON_IsString(time_exchange) && !cJSON_IsNull(time_exchange))
    {
    goto end; //DateTime
    }
    }

    // v1_trade->time_coinapi
    cJSON *time_coinapi = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "time_coinapi");
    if (cJSON_IsNull(time_coinapi)) {
        time_coinapi = NULL;
    }
    if (time_coinapi) { 
    if(!cJSON_IsString(time_coinapi) && !cJSON_IsNull(time_coinapi))
    {
    goto end; //DateTime
    }
    }

    // v1_trade->uuid
    cJSON *uuid = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "uuid");
    if (cJSON_IsNull(uuid)) {
        uuid = NULL;
    }
    if (uuid) { 
    if(!cJSON_IsString(uuid) && !cJSON_IsNull(uuid))
    {
    goto end; //String
    }
    }

    // v1_trade->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "price");
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

    // v1_trade->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    size_local_var = malloc(sizeof(double));
    if(!size_local_var)
    {
        goto end;
    }
    *size_local_var = size->valuedouble;
    }

    // v1_trade->taker_side
    cJSON *taker_side = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "taker_side");
    if (cJSON_IsNull(taker_side)) {
        taker_side = NULL;
    }
    if (taker_side) { 
    if(!cJSON_IsString(taker_side) && !cJSON_IsNull(taker_side))
    {
    goto end; //String
    }
    }

    // v1_trade->id_trade
    cJSON *id_trade = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "id_trade");
    if (cJSON_IsNull(id_trade)) {
        id_trade = NULL;
    }
    if (id_trade) { 
    if(!cJSON_IsString(id_trade) && !cJSON_IsNull(id_trade))
    {
    goto end; //String
    }
    }

    // v1_trade->id_order_maker
    cJSON *id_order_maker = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "id_order_maker");
    if (cJSON_IsNull(id_order_maker)) {
        id_order_maker = NULL;
    }
    if (id_order_maker) { 
    if(!cJSON_IsString(id_order_maker) && !cJSON_IsNull(id_order_maker))
    {
    goto end; //String
    }
    }

    // v1_trade->id_order_taker
    cJSON *id_order_taker = cJSON_GetObjectItemCaseSensitive(v1_tradeJSON, "id_order_taker");
    if (cJSON_IsNull(id_order_taker)) {
        id_order_taker = NULL;
    }
    if (id_order_taker) { 
    if(!cJSON_IsString(id_order_taker) && !cJSON_IsNull(id_order_taker))
    {
    goto end; //String
    }
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (time_exchange && !cJSON_IsNull(time_exchange)) time_exchange_local_str = strdup(time_exchange->valuestring);
    if (time_coinapi && !cJSON_IsNull(time_coinapi)) time_coinapi_local_str = strdup(time_coinapi->valuestring);
    if (uuid && !cJSON_IsNull(uuid)) uuid_local_str = strdup(uuid->valuestring);
    if (taker_side && !cJSON_IsNull(taker_side)) taker_side_local_str = strdup(taker_side->valuestring);
    if (id_trade && !cJSON_IsNull(id_trade)) id_trade_local_str = strdup(id_trade->valuestring);
    if (id_order_maker && !cJSON_IsNull(id_order_maker)) id_order_maker_local_str = strdup(id_order_maker->valuestring);
    if (id_order_taker && !cJSON_IsNull(id_order_taker)) id_order_taker_local_str = strdup(id_order_taker->valuestring);

    v1_trade_local_var = v1_trade_create_internal (
        symbol_id_local_str,
        time_exchange_local_str,
        time_coinapi_local_str,
        uuid_local_str,
        price_local_var,
        size_local_var,
        taker_side_local_str,
        id_trade_local_str,
        id_order_maker_local_str,
        id_order_taker_local_str
        );

    if (!v1_trade_local_var) {
        goto end;
    }

    return v1_trade_local_var;
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
    if (uuid_local_str) {
        free(uuid_local_str);
        uuid_local_str = NULL;
    }
    if (price_local_var) {
        free(price_local_var);
        price_local_var = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (taker_side_local_str) {
        free(taker_side_local_str);
        taker_side_local_str = NULL;
    }
    if (id_trade_local_str) {
        free(id_trade_local_str);
        id_trade_local_str = NULL;
    }
    if (id_order_maker_local_str) {
        free(id_order_maker_local_str);
        id_order_maker_local_str = NULL;
    }
    if (id_order_taker_local_str) {
        free(id_order_taker_local_str);
        id_order_taker_local_str = NULL;
    }
    return NULL;

}
