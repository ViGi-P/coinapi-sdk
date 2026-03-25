#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_symbol_mapping.h"



static v1_symbol_mapping_t *v1_symbol_mapping_create_internal(
    char *symbol_id,
    char *symbol_id_exchange,
    int *coinapi_datainfo_id,
    char *asset_id_base_exchange,
    char *asset_id_quote_exchange,
    char *asset_id_base,
    char *asset_id_quote,
    double *price_precision,
    double *size_precision
    ) {
    v1_symbol_mapping_t *v1_symbol_mapping_local_var = malloc(sizeof(v1_symbol_mapping_t));
    if (!v1_symbol_mapping_local_var) {
        return NULL;
    }
    memset(v1_symbol_mapping_local_var, 0, sizeof(v1_symbol_mapping_t));
    v1_symbol_mapping_local_var->_library_owned = 1;
    v1_symbol_mapping_local_var->symbol_id = symbol_id;
    v1_symbol_mapping_local_var->symbol_id_exchange = symbol_id_exchange;
    v1_symbol_mapping_local_var->coinapi_datainfo_id = coinapi_datainfo_id;
    v1_symbol_mapping_local_var->asset_id_base_exchange = asset_id_base_exchange;
    v1_symbol_mapping_local_var->asset_id_quote_exchange = asset_id_quote_exchange;
    v1_symbol_mapping_local_var->asset_id_base = asset_id_base;
    v1_symbol_mapping_local_var->asset_id_quote = asset_id_quote;
    v1_symbol_mapping_local_var->price_precision = price_precision;
    v1_symbol_mapping_local_var->size_precision = size_precision;
    return v1_symbol_mapping_local_var;
}

__attribute__((deprecated)) v1_symbol_mapping_t *v1_symbol_mapping_create(
    char *symbol_id,
    char *symbol_id_exchange,
    int *coinapi_datainfo_id,
    char *asset_id_base_exchange,
    char *asset_id_quote_exchange,
    char *asset_id_base,
    char *asset_id_quote,
    double *price_precision,
    double *size_precision
    ) {
    int *coinapi_datainfo_id_copy = NULL;
    if (coinapi_datainfo_id) {
        coinapi_datainfo_id_copy = malloc(sizeof(int));
        if (coinapi_datainfo_id_copy) *coinapi_datainfo_id_copy = *coinapi_datainfo_id;
    }
    double *price_precision_copy = NULL;
    if (price_precision) {
        price_precision_copy = malloc(sizeof(double));
        if (price_precision_copy) *price_precision_copy = *price_precision;
    }
    double *size_precision_copy = NULL;
    if (size_precision) {
        size_precision_copy = malloc(sizeof(double));
        if (size_precision_copy) *size_precision_copy = *size_precision;
    }
    v1_symbol_mapping_t *result = v1_symbol_mapping_create_internal (
        symbol_id,
        symbol_id_exchange,
        coinapi_datainfo_id_copy,
        asset_id_base_exchange,
        asset_id_quote_exchange,
        asset_id_base,
        asset_id_quote,
        price_precision_copy,
        size_precision_copy
        );
    if (!result) {
        free(coinapi_datainfo_id_copy);
        free(price_precision_copy);
        free(size_precision_copy);
    }
    return result;
}

void v1_symbol_mapping_free(v1_symbol_mapping_t *v1_symbol_mapping) {
    if(NULL == v1_symbol_mapping){
        return ;
    }
    if(v1_symbol_mapping->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_symbol_mapping_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_symbol_mapping->symbol_id) {
        free(v1_symbol_mapping->symbol_id);
        v1_symbol_mapping->symbol_id = NULL;
    }
    if (v1_symbol_mapping->symbol_id_exchange) {
        free(v1_symbol_mapping->symbol_id_exchange);
        v1_symbol_mapping->symbol_id_exchange = NULL;
    }
    if (v1_symbol_mapping->coinapi_datainfo_id) {
        free(v1_symbol_mapping->coinapi_datainfo_id);
        v1_symbol_mapping->coinapi_datainfo_id = NULL;
    }
    if (v1_symbol_mapping->asset_id_base_exchange) {
        free(v1_symbol_mapping->asset_id_base_exchange);
        v1_symbol_mapping->asset_id_base_exchange = NULL;
    }
    if (v1_symbol_mapping->asset_id_quote_exchange) {
        free(v1_symbol_mapping->asset_id_quote_exchange);
        v1_symbol_mapping->asset_id_quote_exchange = NULL;
    }
    if (v1_symbol_mapping->asset_id_base) {
        free(v1_symbol_mapping->asset_id_base);
        v1_symbol_mapping->asset_id_base = NULL;
    }
    if (v1_symbol_mapping->asset_id_quote) {
        free(v1_symbol_mapping->asset_id_quote);
        v1_symbol_mapping->asset_id_quote = NULL;
    }
    if (v1_symbol_mapping->price_precision) {
        free(v1_symbol_mapping->price_precision);
        v1_symbol_mapping->price_precision = NULL;
    }
    if (v1_symbol_mapping->size_precision) {
        free(v1_symbol_mapping->size_precision);
        v1_symbol_mapping->size_precision = NULL;
    }
    free(v1_symbol_mapping);
}

cJSON *v1_symbol_mapping_convertToJSON(v1_symbol_mapping_t *v1_symbol_mapping) {
    cJSON *item = cJSON_CreateObject();

    // v1_symbol_mapping->symbol_id
    if(v1_symbol_mapping->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_symbol_mapping->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->symbol_id_exchange
    if(v1_symbol_mapping->symbol_id_exchange) {
    if(cJSON_AddStringToObject(item, "symbol_id_exchange", v1_symbol_mapping->symbol_id_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->coinapi_datainfo_id
    if(v1_symbol_mapping->coinapi_datainfo_id) {
    if(cJSON_AddNumberToObject(item, "coinapi_datainfo_id", *v1_symbol_mapping->coinapi_datainfo_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol_mapping->asset_id_base_exchange
    if(v1_symbol_mapping->asset_id_base_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_base_exchange", v1_symbol_mapping->asset_id_base_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->asset_id_quote_exchange
    if(v1_symbol_mapping->asset_id_quote_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_quote_exchange", v1_symbol_mapping->asset_id_quote_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->asset_id_base
    if(v1_symbol_mapping->asset_id_base) {
    if(cJSON_AddStringToObject(item, "asset_id_base", v1_symbol_mapping->asset_id_base) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->asset_id_quote
    if(v1_symbol_mapping->asset_id_quote) {
    if(cJSON_AddStringToObject(item, "asset_id_quote", v1_symbol_mapping->asset_id_quote) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol_mapping->price_precision
    if(v1_symbol_mapping->price_precision) {
    if(cJSON_AddNumberToObject(item, "price_precision", *v1_symbol_mapping->price_precision) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol_mapping->size_precision
    if(v1_symbol_mapping->size_precision) {
    if(cJSON_AddNumberToObject(item, "size_precision", *v1_symbol_mapping->size_precision) == NULL) {
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

v1_symbol_mapping_t *v1_symbol_mapping_parseFromJSON(cJSON *v1_symbol_mappingJSON){

    v1_symbol_mapping_t *v1_symbol_mapping_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *symbol_id_exchange_local_str = NULL;

    // define the local variable for v1_symbol_mapping->coinapi_datainfo_id
    int *coinapi_datainfo_id_local_var = NULL;

    char *asset_id_base_exchange_local_str = NULL;

    char *asset_id_quote_exchange_local_str = NULL;

    char *asset_id_base_local_str = NULL;

    char *asset_id_quote_local_str = NULL;

    // define the local variable for v1_symbol_mapping->price_precision
    double *price_precision_local_var = NULL;

    // define the local variable for v1_symbol_mapping->size_precision
    double *size_precision_local_var = NULL;

    // v1_symbol_mapping->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->symbol_id_exchange
    cJSON *symbol_id_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "symbol_id_exchange");
    if (cJSON_IsNull(symbol_id_exchange)) {
        symbol_id_exchange = NULL;
    }
    if (symbol_id_exchange) { 
    if(!cJSON_IsString(symbol_id_exchange) && !cJSON_IsNull(symbol_id_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->coinapi_datainfo_id
    cJSON *coinapi_datainfo_id = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "coinapi_datainfo_id");
    if (cJSON_IsNull(coinapi_datainfo_id)) {
        coinapi_datainfo_id = NULL;
    }
    if (coinapi_datainfo_id) { 
    if(!cJSON_IsNumber(coinapi_datainfo_id))
    {
    goto end; //Numeric
    }
    coinapi_datainfo_id_local_var = malloc(sizeof(int));
    if(!coinapi_datainfo_id_local_var)
    {
        goto end;
    }
    *coinapi_datainfo_id_local_var = coinapi_datainfo_id->valuedouble;
    }

    // v1_symbol_mapping->asset_id_base_exchange
    cJSON *asset_id_base_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "asset_id_base_exchange");
    if (cJSON_IsNull(asset_id_base_exchange)) {
        asset_id_base_exchange = NULL;
    }
    if (asset_id_base_exchange) { 
    if(!cJSON_IsString(asset_id_base_exchange) && !cJSON_IsNull(asset_id_base_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->asset_id_quote_exchange
    cJSON *asset_id_quote_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "asset_id_quote_exchange");
    if (cJSON_IsNull(asset_id_quote_exchange)) {
        asset_id_quote_exchange = NULL;
    }
    if (asset_id_quote_exchange) { 
    if(!cJSON_IsString(asset_id_quote_exchange) && !cJSON_IsNull(asset_id_quote_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->asset_id_base
    cJSON *asset_id_base = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "asset_id_base");
    if (cJSON_IsNull(asset_id_base)) {
        asset_id_base = NULL;
    }
    if (asset_id_base) { 
    if(!cJSON_IsString(asset_id_base) && !cJSON_IsNull(asset_id_base))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->asset_id_quote
    cJSON *asset_id_quote = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "asset_id_quote");
    if (cJSON_IsNull(asset_id_quote)) {
        asset_id_quote = NULL;
    }
    if (asset_id_quote) { 
    if(!cJSON_IsString(asset_id_quote) && !cJSON_IsNull(asset_id_quote))
    {
    goto end; //String
    }
    }

    // v1_symbol_mapping->price_precision
    cJSON *price_precision = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "price_precision");
    if (cJSON_IsNull(price_precision)) {
        price_precision = NULL;
    }
    if (price_precision) { 
    if(!cJSON_IsNumber(price_precision))
    {
    goto end; //Numeric
    }
    price_precision_local_var = malloc(sizeof(double));
    if(!price_precision_local_var)
    {
        goto end;
    }
    *price_precision_local_var = price_precision->valuedouble;
    }

    // v1_symbol_mapping->size_precision
    cJSON *size_precision = cJSON_GetObjectItemCaseSensitive(v1_symbol_mappingJSON, "size_precision");
    if (cJSON_IsNull(size_precision)) {
        size_precision = NULL;
    }
    if (size_precision) { 
    if(!cJSON_IsNumber(size_precision))
    {
    goto end; //Numeric
    }
    size_precision_local_var = malloc(sizeof(double));
    if(!size_precision_local_var)
    {
        goto end;
    }
    *size_precision_local_var = size_precision->valuedouble;
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (symbol_id_exchange && !cJSON_IsNull(symbol_id_exchange)) symbol_id_exchange_local_str = strdup(symbol_id_exchange->valuestring);
    if (asset_id_base_exchange && !cJSON_IsNull(asset_id_base_exchange)) asset_id_base_exchange_local_str = strdup(asset_id_base_exchange->valuestring);
    if (asset_id_quote_exchange && !cJSON_IsNull(asset_id_quote_exchange)) asset_id_quote_exchange_local_str = strdup(asset_id_quote_exchange->valuestring);
    if (asset_id_base && !cJSON_IsNull(asset_id_base)) asset_id_base_local_str = strdup(asset_id_base->valuestring);
    if (asset_id_quote && !cJSON_IsNull(asset_id_quote)) asset_id_quote_local_str = strdup(asset_id_quote->valuestring);

    v1_symbol_mapping_local_var = v1_symbol_mapping_create_internal (
        symbol_id_local_str,
        symbol_id_exchange_local_str,
        coinapi_datainfo_id_local_var,
        asset_id_base_exchange_local_str,
        asset_id_quote_exchange_local_str,
        asset_id_base_local_str,
        asset_id_quote_local_str,
        price_precision_local_var,
        size_precision_local_var
        );

    if (!v1_symbol_mapping_local_var) {
        goto end;
    }

    return v1_symbol_mapping_local_var;
end:
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (symbol_id_exchange_local_str) {
        free(symbol_id_exchange_local_str);
        symbol_id_exchange_local_str = NULL;
    }
    if (coinapi_datainfo_id_local_var) {
        free(coinapi_datainfo_id_local_var);
        coinapi_datainfo_id_local_var = NULL;
    }
    if (asset_id_base_exchange_local_str) {
        free(asset_id_base_exchange_local_str);
        asset_id_base_exchange_local_str = NULL;
    }
    if (asset_id_quote_exchange_local_str) {
        free(asset_id_quote_exchange_local_str);
        asset_id_quote_exchange_local_str = NULL;
    }
    if (asset_id_base_local_str) {
        free(asset_id_base_local_str);
        asset_id_base_local_str = NULL;
    }
    if (asset_id_quote_local_str) {
        free(asset_id_quote_local_str);
        asset_id_quote_local_str = NULL;
    }
    if (price_precision_local_var) {
        free(price_precision_local_var);
        price_precision_local_var = NULL;
    }
    if (size_precision_local_var) {
        free(size_precision_local_var);
        size_precision_local_var = NULL;
    }
    return NULL;

}
