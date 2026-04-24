#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_option_exchange_group.h"



static v1_option_exchange_group_t *v1_option_exchange_group_create_internal(
    char *asset_id_base,
    char *asset_id_quote,
    double *underlying_price,
    char *time_expiration,
    list_t *strikes
    ) {
    v1_option_exchange_group_t *v1_option_exchange_group_local_var = malloc(sizeof(v1_option_exchange_group_t));
    if (!v1_option_exchange_group_local_var) {
        return NULL;
    }
    memset(v1_option_exchange_group_local_var, 0, sizeof(v1_option_exchange_group_t));
    v1_option_exchange_group_local_var->_library_owned = 1;
    v1_option_exchange_group_local_var->asset_id_base = asset_id_base;
    v1_option_exchange_group_local_var->asset_id_quote = asset_id_quote;
    v1_option_exchange_group_local_var->underlying_price = underlying_price;
    v1_option_exchange_group_local_var->time_expiration = time_expiration;
    v1_option_exchange_group_local_var->strikes = strikes;
    return v1_option_exchange_group_local_var;
}

__attribute__((deprecated)) v1_option_exchange_group_t *v1_option_exchange_group_create(
    char *asset_id_base,
    char *asset_id_quote,
    double *underlying_price,
    char *time_expiration,
    list_t *strikes
    ) {
    double *underlying_price_copy = NULL;
    if (underlying_price) {
        underlying_price_copy = malloc(sizeof(double));
        if (underlying_price_copy) *underlying_price_copy = *underlying_price;
    }
    v1_option_exchange_group_t *result = v1_option_exchange_group_create_internal (
        asset_id_base,
        asset_id_quote,
        underlying_price_copy,
        time_expiration,
        strikes
        );
    if (!result) {
        free(underlying_price_copy);
    }
    return result;
}

void v1_option_exchange_group_free(v1_option_exchange_group_t *v1_option_exchange_group) {
    if(NULL == v1_option_exchange_group){
        return ;
    }
    if(v1_option_exchange_group->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_option_exchange_group_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_option_exchange_group->asset_id_base) {
        free(v1_option_exchange_group->asset_id_base);
        v1_option_exchange_group->asset_id_base = NULL;
    }
    if (v1_option_exchange_group->asset_id_quote) {
        free(v1_option_exchange_group->asset_id_quote);
        v1_option_exchange_group->asset_id_quote = NULL;
    }
    if (v1_option_exchange_group->underlying_price) {
        free(v1_option_exchange_group->underlying_price);
        v1_option_exchange_group->underlying_price = NULL;
    }
    if (v1_option_exchange_group->time_expiration) {
        free(v1_option_exchange_group->time_expiration);
        v1_option_exchange_group->time_expiration = NULL;
    }
    if (v1_option_exchange_group->strikes) {
        list_ForEach(listEntry, v1_option_exchange_group->strikes) {
            v1_strike_free(listEntry->data);
        }
        list_freeList(v1_option_exchange_group->strikes);
        v1_option_exchange_group->strikes = NULL;
    }
    free(v1_option_exchange_group);
}

cJSON *v1_option_exchange_group_convertToJSON(v1_option_exchange_group_t *v1_option_exchange_group) {
    cJSON *item = cJSON_CreateObject();

    // v1_option_exchange_group->asset_id_base
    if(v1_option_exchange_group->asset_id_base) {
    if(cJSON_AddStringToObject(item, "asset_id_base", v1_option_exchange_group->asset_id_base) == NULL) {
    goto fail; //String
    }
    }


    // v1_option_exchange_group->asset_id_quote
    if(v1_option_exchange_group->asset_id_quote) {
    if(cJSON_AddStringToObject(item, "asset_id_quote", v1_option_exchange_group->asset_id_quote) == NULL) {
    goto fail; //String
    }
    }


    // v1_option_exchange_group->underlying_price
    if(v1_option_exchange_group->underlying_price) {
    if(cJSON_AddNumberToObject(item, "underlying_price", *v1_option_exchange_group->underlying_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_option_exchange_group->time_expiration
    if(v1_option_exchange_group->time_expiration) {
    if(cJSON_AddStringToObject(item, "time_expiration", v1_option_exchange_group->time_expiration) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_option_exchange_group->strikes
    if(v1_option_exchange_group->strikes) {
    cJSON *strikes = cJSON_AddArrayToObject(item, "strikes");
    if(strikes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *strikesListEntry;
    if (v1_option_exchange_group->strikes) {
    list_ForEach(strikesListEntry, v1_option_exchange_group->strikes) {
    cJSON *itemLocal = v1_strike_convertToJSON(strikesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(strikes, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_option_exchange_group_t *v1_option_exchange_group_parseFromJSON(cJSON *v1_option_exchange_groupJSON){

    v1_option_exchange_group_t *v1_option_exchange_group_local_var = NULL;

    char *asset_id_base_local_str = NULL;

    char *asset_id_quote_local_str = NULL;

    // define the local variable for v1_option_exchange_group->underlying_price
    double *underlying_price_local_var = NULL;

    char *time_expiration_local_str = NULL;

    // define the local list for v1_option_exchange_group->strikes
    list_t *strikesList = NULL;

    // v1_option_exchange_group->asset_id_base
    cJSON *asset_id_base = cJSON_GetObjectItemCaseSensitive(v1_option_exchange_groupJSON, "asset_id_base");
    if (cJSON_IsNull(asset_id_base)) {
        asset_id_base = NULL;
    }
    if (asset_id_base) { 
    if(!cJSON_IsString(asset_id_base) && !cJSON_IsNull(asset_id_base))
    {
    goto end; //String
    }
    }

    // v1_option_exchange_group->asset_id_quote
    cJSON *asset_id_quote = cJSON_GetObjectItemCaseSensitive(v1_option_exchange_groupJSON, "asset_id_quote");
    if (cJSON_IsNull(asset_id_quote)) {
        asset_id_quote = NULL;
    }
    if (asset_id_quote) { 
    if(!cJSON_IsString(asset_id_quote) && !cJSON_IsNull(asset_id_quote))
    {
    goto end; //String
    }
    }

    // v1_option_exchange_group->underlying_price
    cJSON *underlying_price = cJSON_GetObjectItemCaseSensitive(v1_option_exchange_groupJSON, "underlying_price");
    if (cJSON_IsNull(underlying_price)) {
        underlying_price = NULL;
    }
    if (underlying_price) { 
    if(!cJSON_IsNumber(underlying_price))
    {
    goto end; //Numeric
    }
    underlying_price_local_var = malloc(sizeof(double));
    if(!underlying_price_local_var)
    {
        goto end;
    }
    *underlying_price_local_var = underlying_price->valuedouble;
    }

    // v1_option_exchange_group->time_expiration
    cJSON *time_expiration = cJSON_GetObjectItemCaseSensitive(v1_option_exchange_groupJSON, "time_expiration");
    if (cJSON_IsNull(time_expiration)) {
        time_expiration = NULL;
    }
    if (time_expiration) { 
    if(!cJSON_IsString(time_expiration) && !cJSON_IsNull(time_expiration))
    {
    goto end; //DateTime
    }
    }

    // v1_option_exchange_group->strikes
    cJSON *strikes = cJSON_GetObjectItemCaseSensitive(v1_option_exchange_groupJSON, "strikes");
    if (cJSON_IsNull(strikes)) {
        strikes = NULL;
    }
    if (strikes) { 
    cJSON *strikes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(strikes)){
        goto end; //nonprimitive container
    }

    strikesList = list_createList();

    cJSON_ArrayForEach(strikes_local_nonprimitive,strikes )
    {
        if(!cJSON_IsObject(strikes_local_nonprimitive)){
            goto end;
        }
        v1_strike_t *strikesItem = v1_strike_parseFromJSON(strikes_local_nonprimitive);

        list_addElement(strikesList, strikesItem);
    }
    }


    if (asset_id_base && !cJSON_IsNull(asset_id_base)) asset_id_base_local_str = strdup(asset_id_base->valuestring);
    if (asset_id_quote && !cJSON_IsNull(asset_id_quote)) asset_id_quote_local_str = strdup(asset_id_quote->valuestring);
    if (time_expiration && !cJSON_IsNull(time_expiration)) time_expiration_local_str = strdup(time_expiration->valuestring);

    v1_option_exchange_group_local_var = v1_option_exchange_group_create_internal (
        asset_id_base_local_str,
        asset_id_quote_local_str,
        underlying_price_local_var,
        time_expiration_local_str,
        strikes ? strikesList : NULL
        );

    if (!v1_option_exchange_group_local_var) {
        goto end;
    }

    return v1_option_exchange_group_local_var;
end:
    if (asset_id_base_local_str) {
        free(asset_id_base_local_str);
        asset_id_base_local_str = NULL;
    }
    if (asset_id_quote_local_str) {
        free(asset_id_quote_local_str);
        asset_id_quote_local_str = NULL;
    }
    if (underlying_price_local_var) {
        free(underlying_price_local_var);
        underlying_price_local_var = NULL;
    }
    if (time_expiration_local_str) {
        free(time_expiration_local_str);
        time_expiration_local_str = NULL;
    }
    if (strikesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, strikesList) {
            v1_strike_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(strikesList);
        strikesList = NULL;
    }
    return NULL;

}
