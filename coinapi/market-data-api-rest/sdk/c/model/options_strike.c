#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "options_strike.h"



static options_strike_t *options_strike_create_internal(
    double *strike_price,
    v1_quote_trade_t *call,
    v1_quote_trade_t *put
    ) {
    options_strike_t *options_strike_local_var = malloc(sizeof(options_strike_t));
    if (!options_strike_local_var) {
        return NULL;
    }
    memset(options_strike_local_var, 0, sizeof(options_strike_t));
    options_strike_local_var->_library_owned = 1;
    options_strike_local_var->strike_price = strike_price;
    options_strike_local_var->call = call;
    options_strike_local_var->put = put;
    return options_strike_local_var;
}

__attribute__((deprecated)) options_strike_t *options_strike_create(
    double *strike_price,
    v1_quote_trade_t *call,
    v1_quote_trade_t *put
    ) {
    double *strike_price_copy = NULL;
    if (strike_price) {
        strike_price_copy = malloc(sizeof(double));
        if (strike_price_copy) *strike_price_copy = *strike_price;
    }
    options_strike_t *result = options_strike_create_internal (
        strike_price_copy,
        call,
        put
        );
    if (!result) {
        free(strike_price_copy);
    }
    return result;
}

void options_strike_free(options_strike_t *options_strike) {
    if(NULL == options_strike){
        return ;
    }
    if(options_strike->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "options_strike_free");
        return ;
    }
    listEntry_t *listEntry;
    if (options_strike->strike_price) {
        free(options_strike->strike_price);
        options_strike->strike_price = NULL;
    }
    if (options_strike->call) {
        v1_quote_trade_free(options_strike->call);
        options_strike->call = NULL;
    }
    if (options_strike->put) {
        v1_quote_trade_free(options_strike->put);
        options_strike->put = NULL;
    }
    free(options_strike);
}

cJSON *options_strike_convertToJSON(options_strike_t *options_strike) {
    cJSON *item = cJSON_CreateObject();

    // options_strike->strike_price
    if(options_strike->strike_price) {
    if(cJSON_AddNumberToObject(item, "strike_price", *options_strike->strike_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // options_strike->call
    if(options_strike->call) {
    cJSON *call_local_JSON = v1_quote_trade_convertToJSON(options_strike->call);
    if(call_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "call", call_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // options_strike->put
    if(options_strike->put) {
    cJSON *put_local_JSON = v1_quote_trade_convertToJSON(options_strike->put);
    if(put_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "put", put_local_JSON);
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

options_strike_t *options_strike_parseFromJSON(cJSON *options_strikeJSON){

    options_strike_t *options_strike_local_var = NULL;

    // define the local variable for options_strike->strike_price
    double *strike_price_local_var = NULL;

    // define the local variable for options_strike->call
    v1_quote_trade_t *call_local_nonprim = NULL;

    // define the local variable for options_strike->put
    v1_quote_trade_t *put_local_nonprim = NULL;

    // options_strike->strike_price
    cJSON *strike_price = cJSON_GetObjectItemCaseSensitive(options_strikeJSON, "strike_price");
    if (cJSON_IsNull(strike_price)) {
        strike_price = NULL;
    }
    if (strike_price) { 
    if(!cJSON_IsNumber(strike_price))
    {
    goto end; //Numeric
    }
    strike_price_local_var = malloc(sizeof(double));
    if(!strike_price_local_var)
    {
        goto end;
    }
    *strike_price_local_var = strike_price->valuedouble;
    }

    // options_strike->call
    cJSON *call = cJSON_GetObjectItemCaseSensitive(options_strikeJSON, "call");
    if (cJSON_IsNull(call)) {
        call = NULL;
    }
    if (call) { 
    call_local_nonprim = v1_quote_trade_parseFromJSON(call); //nonprimitive
    }

    // options_strike->put
    cJSON *put = cJSON_GetObjectItemCaseSensitive(options_strikeJSON, "put");
    if (cJSON_IsNull(put)) {
        put = NULL;
    }
    if (put) { 
    put_local_nonprim = v1_quote_trade_parseFromJSON(put); //nonprimitive
    }



    options_strike_local_var = options_strike_create_internal (
        strike_price_local_var,
        call ? call_local_nonprim : NULL,
        put ? put_local_nonprim : NULL
        );

    if (!options_strike_local_var) {
        goto end;
    }

    return options_strike_local_var;
end:
    if (strike_price_local_var) {
        free(strike_price_local_var);
        strike_price_local_var = NULL;
    }
    if (call_local_nonprim) {
        v1_quote_trade_free(call_local_nonprim);
        call_local_nonprim = NULL;
    }
    if (put_local_nonprim) {
        v1_quote_trade_free(put_local_nonprim);
        put_local_nonprim = NULL;
    }
    return NULL;

}
