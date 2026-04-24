#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_strike.h"



static v1_strike_t *v1_strike_create_internal(
    double *strike_price,
    v1_quote_trade_t *call,
    v1_quote_trade_t *put
    ) {
    v1_strike_t *v1_strike_local_var = malloc(sizeof(v1_strike_t));
    if (!v1_strike_local_var) {
        return NULL;
    }
    memset(v1_strike_local_var, 0, sizeof(v1_strike_t));
    v1_strike_local_var->_library_owned = 1;
    v1_strike_local_var->strike_price = strike_price;
    v1_strike_local_var->call = call;
    v1_strike_local_var->put = put;
    return v1_strike_local_var;
}

__attribute__((deprecated)) v1_strike_t *v1_strike_create(
    double *strike_price,
    v1_quote_trade_t *call,
    v1_quote_trade_t *put
    ) {
    double *strike_price_copy = NULL;
    if (strike_price) {
        strike_price_copy = malloc(sizeof(double));
        if (strike_price_copy) *strike_price_copy = *strike_price;
    }
    v1_strike_t *result = v1_strike_create_internal (
        strike_price_copy,
        call,
        put
        );
    if (!result) {
        free(strike_price_copy);
    }
    return result;
}

void v1_strike_free(v1_strike_t *v1_strike) {
    if(NULL == v1_strike){
        return ;
    }
    if(v1_strike->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_strike_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_strike->strike_price) {
        free(v1_strike->strike_price);
        v1_strike->strike_price = NULL;
    }
    if (v1_strike->call) {
        v1_quote_trade_free(v1_strike->call);
        v1_strike->call = NULL;
    }
    if (v1_strike->put) {
        v1_quote_trade_free(v1_strike->put);
        v1_strike->put = NULL;
    }
    free(v1_strike);
}

cJSON *v1_strike_convertToJSON(v1_strike_t *v1_strike) {
    cJSON *item = cJSON_CreateObject();

    // v1_strike->strike_price
    if(v1_strike->strike_price) {
    if(cJSON_AddNumberToObject(item, "strike_price", *v1_strike->strike_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_strike->call
    if(v1_strike->call) {
    cJSON *call_local_JSON = v1_quote_trade_convertToJSON(v1_strike->call);
    if(call_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "call", call_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v1_strike->put
    if(v1_strike->put) {
    cJSON *put_local_JSON = v1_quote_trade_convertToJSON(v1_strike->put);
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

v1_strike_t *v1_strike_parseFromJSON(cJSON *v1_strikeJSON){

    v1_strike_t *v1_strike_local_var = NULL;

    // define the local variable for v1_strike->strike_price
    double *strike_price_local_var = NULL;

    // define the local variable for v1_strike->call
    v1_quote_trade_t *call_local_nonprim = NULL;

    // define the local variable for v1_strike->put
    v1_quote_trade_t *put_local_nonprim = NULL;

    // v1_strike->strike_price
    cJSON *strike_price = cJSON_GetObjectItemCaseSensitive(v1_strikeJSON, "strike_price");
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

    // v1_strike->call
    cJSON *call = cJSON_GetObjectItemCaseSensitive(v1_strikeJSON, "call");
    if (cJSON_IsNull(call)) {
        call = NULL;
    }
    if (call) { 
    call_local_nonprim = v1_quote_trade_parseFromJSON(call); //nonprimitive
    }

    // v1_strike->put
    cJSON *put = cJSON_GetObjectItemCaseSensitive(v1_strikeJSON, "put");
    if (cJSON_IsNull(put)) {
        put = NULL;
    }
    if (put) { 
    put_local_nonprim = v1_quote_trade_parseFromJSON(put); //nonprimitive
    }



    v1_strike_local_var = v1_strike_create_internal (
        strike_price_local_var,
        call ? call_local_nonprim : NULL,
        put ? put_local_nonprim : NULL
        );

    if (!v1_strike_local_var) {
        goto end;
    }

    return v1_strike_local_var;
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
