#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "market_data_metadata_icon.h"



static market_data_metadata_icon_t *market_data_metadata_icon_create_internal(
    char *exchange_id,
    char *asset_id,
    char *url
    ) {
    market_data_metadata_icon_t *market_data_metadata_icon_local_var = malloc(sizeof(market_data_metadata_icon_t));
    if (!market_data_metadata_icon_local_var) {
        return NULL;
    }
    memset(market_data_metadata_icon_local_var, 0, sizeof(market_data_metadata_icon_t));
    market_data_metadata_icon_local_var->_library_owned = 1;
    market_data_metadata_icon_local_var->exchange_id = exchange_id;
    market_data_metadata_icon_local_var->asset_id = asset_id;
    market_data_metadata_icon_local_var->url = url;
    return market_data_metadata_icon_local_var;
}

__attribute__((deprecated)) market_data_metadata_icon_t *market_data_metadata_icon_create(
    char *exchange_id,
    char *asset_id,
    char *url
    ) {
    market_data_metadata_icon_t *result = market_data_metadata_icon_create_internal (
        exchange_id,
        asset_id,
        url
        );
    if (!result) {
    }
    return result;
}

void market_data_metadata_icon_free(market_data_metadata_icon_t *market_data_metadata_icon) {
    if(NULL == market_data_metadata_icon){
        return ;
    }
    if(market_data_metadata_icon->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "market_data_metadata_icon_free");
        return ;
    }
    listEntry_t *listEntry;
    if (market_data_metadata_icon->exchange_id) {
        free(market_data_metadata_icon->exchange_id);
        market_data_metadata_icon->exchange_id = NULL;
    }
    if (market_data_metadata_icon->asset_id) {
        free(market_data_metadata_icon->asset_id);
        market_data_metadata_icon->asset_id = NULL;
    }
    if (market_data_metadata_icon->url) {
        free(market_data_metadata_icon->url);
        market_data_metadata_icon->url = NULL;
    }
    free(market_data_metadata_icon);
}

cJSON *market_data_metadata_icon_convertToJSON(market_data_metadata_icon_t *market_data_metadata_icon) {
    cJSON *item = cJSON_CreateObject();

    // market_data_metadata_icon->exchange_id
    if(market_data_metadata_icon->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", market_data_metadata_icon->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_icon->asset_id
    if(market_data_metadata_icon->asset_id) {
    if(cJSON_AddStringToObject(item, "asset_id", market_data_metadata_icon->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_icon->url
    if(market_data_metadata_icon->url) {
    if(cJSON_AddStringToObject(item, "url", market_data_metadata_icon->url) == NULL) {
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

market_data_metadata_icon_t *market_data_metadata_icon_parseFromJSON(cJSON *market_data_metadata_iconJSON){

    market_data_metadata_icon_t *market_data_metadata_icon_local_var = NULL;

    char *exchange_id_local_str = NULL;

    char *asset_id_local_str = NULL;

    char *url_local_str = NULL;

    // market_data_metadata_icon->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_iconJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_icon->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_iconJSON, "asset_id");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_icon->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(market_data_metadata_iconJSON, "url");
    if (cJSON_IsNull(url)) {
        url = NULL;
    }
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }


    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (asset_id && !cJSON_IsNull(asset_id)) asset_id_local_str = strdup(asset_id->valuestring);
    if (url && !cJSON_IsNull(url)) url_local_str = strdup(url->valuestring);

    market_data_metadata_icon_local_var = market_data_metadata_icon_create_internal (
        exchange_id_local_str,
        asset_id_local_str,
        url_local_str
        );

    if (!market_data_metadata_icon_local_var) {
        goto end;
    }

    return market_data_metadata_icon_local_var;
end:
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (asset_id_local_str) {
        free(asset_id_local_str);
        asset_id_local_str = NULL;
    }
    if (url_local_str) {
        free(url_local_str);
        url_local_str = NULL;
    }
    return NULL;

}
