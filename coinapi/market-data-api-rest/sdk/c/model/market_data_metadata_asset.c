#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "market_data_metadata_asset.h"



static market_data_metadata_asset_t *market_data_metadata_asset_create_internal(
    char *asset_id,
    char *name,
    int *type_is_crypto,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    long *data_symbols_count,
    double *volume_1hrs_usd,
    double *volume_1day_usd,
    double *volume_1mth_usd,
    double *price_usd,
    char *id_icon,
    double *supply_current,
    double *supply_total,
    double *supply_max,
    list_t *chain_addresses,
    char *data_start,
    char *data_end
    ) {
    market_data_metadata_asset_t *market_data_metadata_asset_local_var = malloc(sizeof(market_data_metadata_asset_t));
    if (!market_data_metadata_asset_local_var) {
        return NULL;
    }
    memset(market_data_metadata_asset_local_var, 0, sizeof(market_data_metadata_asset_t));
    market_data_metadata_asset_local_var->_library_owned = 1;
    market_data_metadata_asset_local_var->asset_id = asset_id;
    market_data_metadata_asset_local_var->name = name;
    market_data_metadata_asset_local_var->type_is_crypto = type_is_crypto;
    market_data_metadata_asset_local_var->data_quote_start = data_quote_start;
    market_data_metadata_asset_local_var->data_quote_end = data_quote_end;
    market_data_metadata_asset_local_var->data_orderbook_start = data_orderbook_start;
    market_data_metadata_asset_local_var->data_orderbook_end = data_orderbook_end;
    market_data_metadata_asset_local_var->data_trade_start = data_trade_start;
    market_data_metadata_asset_local_var->data_trade_end = data_trade_end;
    market_data_metadata_asset_local_var->data_symbols_count = data_symbols_count;
    market_data_metadata_asset_local_var->volume_1hrs_usd = volume_1hrs_usd;
    market_data_metadata_asset_local_var->volume_1day_usd = volume_1day_usd;
    market_data_metadata_asset_local_var->volume_1mth_usd = volume_1mth_usd;
    market_data_metadata_asset_local_var->price_usd = price_usd;
    market_data_metadata_asset_local_var->id_icon = id_icon;
    market_data_metadata_asset_local_var->supply_current = supply_current;
    market_data_metadata_asset_local_var->supply_total = supply_total;
    market_data_metadata_asset_local_var->supply_max = supply_max;
    market_data_metadata_asset_local_var->chain_addresses = chain_addresses;
    market_data_metadata_asset_local_var->data_start = data_start;
    market_data_metadata_asset_local_var->data_end = data_end;
    return market_data_metadata_asset_local_var;
}

__attribute__((deprecated)) market_data_metadata_asset_t *market_data_metadata_asset_create(
    char *asset_id,
    char *name,
    int *type_is_crypto,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    long *data_symbols_count,
    double *volume_1hrs_usd,
    double *volume_1day_usd,
    double *volume_1mth_usd,
    double *price_usd,
    char *id_icon,
    double *supply_current,
    double *supply_total,
    double *supply_max,
    list_t *chain_addresses,
    char *data_start,
    char *data_end
    ) {
    int *type_is_crypto_copy = NULL;
    if (type_is_crypto) {
        type_is_crypto_copy = malloc(sizeof(int));
        if (type_is_crypto_copy) *type_is_crypto_copy = *type_is_crypto;
    }
    long *data_symbols_count_copy = NULL;
    if (data_symbols_count) {
        data_symbols_count_copy = malloc(sizeof(long));
        if (data_symbols_count_copy) *data_symbols_count_copy = *data_symbols_count;
    }
    double *volume_1hrs_usd_copy = NULL;
    if (volume_1hrs_usd) {
        volume_1hrs_usd_copy = malloc(sizeof(double));
        if (volume_1hrs_usd_copy) *volume_1hrs_usd_copy = *volume_1hrs_usd;
    }
    double *volume_1day_usd_copy = NULL;
    if (volume_1day_usd) {
        volume_1day_usd_copy = malloc(sizeof(double));
        if (volume_1day_usd_copy) *volume_1day_usd_copy = *volume_1day_usd;
    }
    double *volume_1mth_usd_copy = NULL;
    if (volume_1mth_usd) {
        volume_1mth_usd_copy = malloc(sizeof(double));
        if (volume_1mth_usd_copy) *volume_1mth_usd_copy = *volume_1mth_usd;
    }
    double *price_usd_copy = NULL;
    if (price_usd) {
        price_usd_copy = malloc(sizeof(double));
        if (price_usd_copy) *price_usd_copy = *price_usd;
    }
    double *supply_current_copy = NULL;
    if (supply_current) {
        supply_current_copy = malloc(sizeof(double));
        if (supply_current_copy) *supply_current_copy = *supply_current;
    }
    double *supply_total_copy = NULL;
    if (supply_total) {
        supply_total_copy = malloc(sizeof(double));
        if (supply_total_copy) *supply_total_copy = *supply_total;
    }
    double *supply_max_copy = NULL;
    if (supply_max) {
        supply_max_copy = malloc(sizeof(double));
        if (supply_max_copy) *supply_max_copy = *supply_max;
    }
    market_data_metadata_asset_t *result = market_data_metadata_asset_create_internal (
        asset_id,
        name,
        type_is_crypto_copy,
        data_quote_start,
        data_quote_end,
        data_orderbook_start,
        data_orderbook_end,
        data_trade_start,
        data_trade_end,
        data_symbols_count_copy,
        volume_1hrs_usd_copy,
        volume_1day_usd_copy,
        volume_1mth_usd_copy,
        price_usd_copy,
        id_icon,
        supply_current_copy,
        supply_total_copy,
        supply_max_copy,
        chain_addresses,
        data_start,
        data_end
        );
    if (!result) {
        free(type_is_crypto_copy);
        free(data_symbols_count_copy);
        free(volume_1hrs_usd_copy);
        free(volume_1day_usd_copy);
        free(volume_1mth_usd_copy);
        free(price_usd_copy);
        free(supply_current_copy);
        free(supply_total_copy);
        free(supply_max_copy);
    }
    return result;
}

void market_data_metadata_asset_free(market_data_metadata_asset_t *market_data_metadata_asset) {
    if(NULL == market_data_metadata_asset){
        return ;
    }
    if(market_data_metadata_asset->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "market_data_metadata_asset_free");
        return ;
    }
    listEntry_t *listEntry;
    if (market_data_metadata_asset->asset_id) {
        free(market_data_metadata_asset->asset_id);
        market_data_metadata_asset->asset_id = NULL;
    }
    if (market_data_metadata_asset->name) {
        free(market_data_metadata_asset->name);
        market_data_metadata_asset->name = NULL;
    }
    if (market_data_metadata_asset->type_is_crypto) {
        free(market_data_metadata_asset->type_is_crypto);
        market_data_metadata_asset->type_is_crypto = NULL;
    }
    if (market_data_metadata_asset->data_quote_start) {
        free(market_data_metadata_asset->data_quote_start);
        market_data_metadata_asset->data_quote_start = NULL;
    }
    if (market_data_metadata_asset->data_quote_end) {
        free(market_data_metadata_asset->data_quote_end);
        market_data_metadata_asset->data_quote_end = NULL;
    }
    if (market_data_metadata_asset->data_orderbook_start) {
        free(market_data_metadata_asset->data_orderbook_start);
        market_data_metadata_asset->data_orderbook_start = NULL;
    }
    if (market_data_metadata_asset->data_orderbook_end) {
        free(market_data_metadata_asset->data_orderbook_end);
        market_data_metadata_asset->data_orderbook_end = NULL;
    }
    if (market_data_metadata_asset->data_trade_start) {
        free(market_data_metadata_asset->data_trade_start);
        market_data_metadata_asset->data_trade_start = NULL;
    }
    if (market_data_metadata_asset->data_trade_end) {
        free(market_data_metadata_asset->data_trade_end);
        market_data_metadata_asset->data_trade_end = NULL;
    }
    if (market_data_metadata_asset->data_symbols_count) {
        free(market_data_metadata_asset->data_symbols_count);
        market_data_metadata_asset->data_symbols_count = NULL;
    }
    if (market_data_metadata_asset->volume_1hrs_usd) {
        free(market_data_metadata_asset->volume_1hrs_usd);
        market_data_metadata_asset->volume_1hrs_usd = NULL;
    }
    if (market_data_metadata_asset->volume_1day_usd) {
        free(market_data_metadata_asset->volume_1day_usd);
        market_data_metadata_asset->volume_1day_usd = NULL;
    }
    if (market_data_metadata_asset->volume_1mth_usd) {
        free(market_data_metadata_asset->volume_1mth_usd);
        market_data_metadata_asset->volume_1mth_usd = NULL;
    }
    if (market_data_metadata_asset->price_usd) {
        free(market_data_metadata_asset->price_usd);
        market_data_metadata_asset->price_usd = NULL;
    }
    if (market_data_metadata_asset->id_icon) {
        free(market_data_metadata_asset->id_icon);
        market_data_metadata_asset->id_icon = NULL;
    }
    if (market_data_metadata_asset->supply_current) {
        free(market_data_metadata_asset->supply_current);
        market_data_metadata_asset->supply_current = NULL;
    }
    if (market_data_metadata_asset->supply_total) {
        free(market_data_metadata_asset->supply_total);
        market_data_metadata_asset->supply_total = NULL;
    }
    if (market_data_metadata_asset->supply_max) {
        free(market_data_metadata_asset->supply_max);
        market_data_metadata_asset->supply_max = NULL;
    }
    if (market_data_metadata_asset->chain_addresses) {
        list_ForEach(listEntry, market_data_metadata_asset->chain_addresses) {
            v1_chain_network_address_free(listEntry->data);
        }
        list_freeList(market_data_metadata_asset->chain_addresses);
        market_data_metadata_asset->chain_addresses = NULL;
    }
    if (market_data_metadata_asset->data_start) {
        free(market_data_metadata_asset->data_start);
        market_data_metadata_asset->data_start = NULL;
    }
    if (market_data_metadata_asset->data_end) {
        free(market_data_metadata_asset->data_end);
        market_data_metadata_asset->data_end = NULL;
    }
    free(market_data_metadata_asset);
}

cJSON *market_data_metadata_asset_convertToJSON(market_data_metadata_asset_t *market_data_metadata_asset) {
    cJSON *item = cJSON_CreateObject();

    // market_data_metadata_asset->asset_id
    if(market_data_metadata_asset->asset_id) {
    if(cJSON_AddStringToObject(item, "asset_id", market_data_metadata_asset->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_asset->name
    if(market_data_metadata_asset->name) {
    if(cJSON_AddStringToObject(item, "name", market_data_metadata_asset->name) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_asset->type_is_crypto
    if(market_data_metadata_asset->type_is_crypto) {
    if(cJSON_AddNumberToObject(item, "type_is_crypto", *market_data_metadata_asset->type_is_crypto) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->data_quote_start
    if(market_data_metadata_asset->data_quote_start) {
    if(cJSON_AddStringToObject(item, "data_quote_start", market_data_metadata_asset->data_quote_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_quote_end
    if(market_data_metadata_asset->data_quote_end) {
    if(cJSON_AddStringToObject(item, "data_quote_end", market_data_metadata_asset->data_quote_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_orderbook_start
    if(market_data_metadata_asset->data_orderbook_start) {
    if(cJSON_AddStringToObject(item, "data_orderbook_start", market_data_metadata_asset->data_orderbook_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_orderbook_end
    if(market_data_metadata_asset->data_orderbook_end) {
    if(cJSON_AddStringToObject(item, "data_orderbook_end", market_data_metadata_asset->data_orderbook_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_trade_start
    if(market_data_metadata_asset->data_trade_start) {
    if(cJSON_AddStringToObject(item, "data_trade_start", market_data_metadata_asset->data_trade_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_trade_end
    if(market_data_metadata_asset->data_trade_end) {
    if(cJSON_AddStringToObject(item, "data_trade_end", market_data_metadata_asset->data_trade_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_asset->data_symbols_count
    if(market_data_metadata_asset->data_symbols_count) {
    if(cJSON_AddNumberToObject(item, "data_symbols_count", *market_data_metadata_asset->data_symbols_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->volume_1hrs_usd
    if(market_data_metadata_asset->volume_1hrs_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs_usd", *market_data_metadata_asset->volume_1hrs_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->volume_1day_usd
    if(market_data_metadata_asset->volume_1day_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1day_usd", *market_data_metadata_asset->volume_1day_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->volume_1mth_usd
    if(market_data_metadata_asset->volume_1mth_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1mth_usd", *market_data_metadata_asset->volume_1mth_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->price_usd
    if(market_data_metadata_asset->price_usd) {
    if(cJSON_AddNumberToObject(item, "price_usd", *market_data_metadata_asset->price_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->id_icon
    if(market_data_metadata_asset->id_icon) {
    if(cJSON_AddStringToObject(item, "id_icon", market_data_metadata_asset->id_icon) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_asset->supply_current
    if(market_data_metadata_asset->supply_current) {
    if(cJSON_AddNumberToObject(item, "supply_current", *market_data_metadata_asset->supply_current) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->supply_total
    if(market_data_metadata_asset->supply_total) {
    if(cJSON_AddNumberToObject(item, "supply_total", *market_data_metadata_asset->supply_total) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->supply_max
    if(market_data_metadata_asset->supply_max) {
    if(cJSON_AddNumberToObject(item, "supply_max", *market_data_metadata_asset->supply_max) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_asset->chain_addresses
    if(market_data_metadata_asset->chain_addresses) {
    cJSON *chain_addresses = cJSON_AddArrayToObject(item, "chain_addresses");
    if(chain_addresses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *chain_addressesListEntry;
    if (market_data_metadata_asset->chain_addresses) {
    list_ForEach(chain_addressesListEntry, market_data_metadata_asset->chain_addresses) {
    cJSON *itemLocal = v1_chain_network_address_convertToJSON(chain_addressesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(chain_addresses, itemLocal);
    }
    }
    }


    // market_data_metadata_asset->data_start
    if(market_data_metadata_asset->data_start) {
    if(cJSON_AddStringToObject(item, "data_start", market_data_metadata_asset->data_start) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_asset->data_end
    if(market_data_metadata_asset->data_end) {
    if(cJSON_AddStringToObject(item, "data_end", market_data_metadata_asset->data_end) == NULL) {
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

market_data_metadata_asset_t *market_data_metadata_asset_parseFromJSON(cJSON *market_data_metadata_assetJSON){

    market_data_metadata_asset_t *market_data_metadata_asset_local_var = NULL;

    char *asset_id_local_str = NULL;

    char *name_local_str = NULL;

    // define the local variable for market_data_metadata_asset->type_is_crypto
    int *type_is_crypto_local_var = NULL;

    char *data_quote_start_local_str = NULL;

    char *data_quote_end_local_str = NULL;

    char *data_orderbook_start_local_str = NULL;

    char *data_orderbook_end_local_str = NULL;

    char *data_trade_start_local_str = NULL;

    char *data_trade_end_local_str = NULL;

    // define the local variable for market_data_metadata_asset->data_symbols_count
    long *data_symbols_count_local_var = NULL;

    // define the local variable for market_data_metadata_asset->volume_1hrs_usd
    double *volume_1hrs_usd_local_var = NULL;

    // define the local variable for market_data_metadata_asset->volume_1day_usd
    double *volume_1day_usd_local_var = NULL;

    // define the local variable for market_data_metadata_asset->volume_1mth_usd
    double *volume_1mth_usd_local_var = NULL;

    // define the local variable for market_data_metadata_asset->price_usd
    double *price_usd_local_var = NULL;

    char *id_icon_local_str = NULL;

    // define the local variable for market_data_metadata_asset->supply_current
    double *supply_current_local_var = NULL;

    // define the local variable for market_data_metadata_asset->supply_total
    double *supply_total_local_var = NULL;

    // define the local variable for market_data_metadata_asset->supply_max
    double *supply_max_local_var = NULL;

    // define the local list for market_data_metadata_asset->chain_addresses
    list_t *chain_addressesList = NULL;

    char *data_start_local_str = NULL;

    char *data_end_local_str = NULL;

    // market_data_metadata_asset->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "asset_id");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_asset->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // market_data_metadata_asset->type_is_crypto
    cJSON *type_is_crypto = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "type_is_crypto");
    if (cJSON_IsNull(type_is_crypto)) {
        type_is_crypto = NULL;
    }
    if (type_is_crypto) { 
    if(!cJSON_IsNumber(type_is_crypto))
    {
    goto end; //Numeric
    }
    type_is_crypto_local_var = malloc(sizeof(int));
    if(!type_is_crypto_local_var)
    {
        goto end;
    }
    *type_is_crypto_local_var = type_is_crypto->valuedouble;
    }

    // market_data_metadata_asset->data_quote_start
    cJSON *data_quote_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_quote_start");
    if (cJSON_IsNull(data_quote_start)) {
        data_quote_start = NULL;
    }
    if (data_quote_start) { 
    if(!cJSON_IsString(data_quote_start) && !cJSON_IsNull(data_quote_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_quote_end
    cJSON *data_quote_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_quote_end");
    if (cJSON_IsNull(data_quote_end)) {
        data_quote_end = NULL;
    }
    if (data_quote_end) { 
    if(!cJSON_IsString(data_quote_end) && !cJSON_IsNull(data_quote_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_orderbook_start
    cJSON *data_orderbook_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_orderbook_start");
    if (cJSON_IsNull(data_orderbook_start)) {
        data_orderbook_start = NULL;
    }
    if (data_orderbook_start) { 
    if(!cJSON_IsString(data_orderbook_start) && !cJSON_IsNull(data_orderbook_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_orderbook_end
    cJSON *data_orderbook_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_orderbook_end");
    if (cJSON_IsNull(data_orderbook_end)) {
        data_orderbook_end = NULL;
    }
    if (data_orderbook_end) { 
    if(!cJSON_IsString(data_orderbook_end) && !cJSON_IsNull(data_orderbook_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_trade_start
    cJSON *data_trade_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_trade_start");
    if (cJSON_IsNull(data_trade_start)) {
        data_trade_start = NULL;
    }
    if (data_trade_start) { 
    if(!cJSON_IsString(data_trade_start) && !cJSON_IsNull(data_trade_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_trade_end
    cJSON *data_trade_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_trade_end");
    if (cJSON_IsNull(data_trade_end)) {
        data_trade_end = NULL;
    }
    if (data_trade_end) { 
    if(!cJSON_IsString(data_trade_end) && !cJSON_IsNull(data_trade_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_asset->data_symbols_count
    cJSON *data_symbols_count = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_symbols_count");
    if (cJSON_IsNull(data_symbols_count)) {
        data_symbols_count = NULL;
    }
    if (data_symbols_count) { 
    if(!cJSON_IsNumber(data_symbols_count))
    {
    goto end; //Numeric
    }
    data_symbols_count_local_var = malloc(sizeof(long));
    if(!data_symbols_count_local_var)
    {
        goto end;
    }
    *data_symbols_count_local_var = data_symbols_count->valuedouble;
    }

    // market_data_metadata_asset->volume_1hrs_usd
    cJSON *volume_1hrs_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "volume_1hrs_usd");
    if (cJSON_IsNull(volume_1hrs_usd)) {
        volume_1hrs_usd = NULL;
    }
    if (volume_1hrs_usd) { 
    if(!cJSON_IsNumber(volume_1hrs_usd))
    {
    goto end; //Numeric
    }
    volume_1hrs_usd_local_var = malloc(sizeof(double));
    if(!volume_1hrs_usd_local_var)
    {
        goto end;
    }
    *volume_1hrs_usd_local_var = volume_1hrs_usd->valuedouble;
    }

    // market_data_metadata_asset->volume_1day_usd
    cJSON *volume_1day_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "volume_1day_usd");
    if (cJSON_IsNull(volume_1day_usd)) {
        volume_1day_usd = NULL;
    }
    if (volume_1day_usd) { 
    if(!cJSON_IsNumber(volume_1day_usd))
    {
    goto end; //Numeric
    }
    volume_1day_usd_local_var = malloc(sizeof(double));
    if(!volume_1day_usd_local_var)
    {
        goto end;
    }
    *volume_1day_usd_local_var = volume_1day_usd->valuedouble;
    }

    // market_data_metadata_asset->volume_1mth_usd
    cJSON *volume_1mth_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "volume_1mth_usd");
    if (cJSON_IsNull(volume_1mth_usd)) {
        volume_1mth_usd = NULL;
    }
    if (volume_1mth_usd) { 
    if(!cJSON_IsNumber(volume_1mth_usd))
    {
    goto end; //Numeric
    }
    volume_1mth_usd_local_var = malloc(sizeof(double));
    if(!volume_1mth_usd_local_var)
    {
        goto end;
    }
    *volume_1mth_usd_local_var = volume_1mth_usd->valuedouble;
    }

    // market_data_metadata_asset->price_usd
    cJSON *price_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "price_usd");
    if (cJSON_IsNull(price_usd)) {
        price_usd = NULL;
    }
    if (price_usd) { 
    if(!cJSON_IsNumber(price_usd))
    {
    goto end; //Numeric
    }
    price_usd_local_var = malloc(sizeof(double));
    if(!price_usd_local_var)
    {
        goto end;
    }
    *price_usd_local_var = price_usd->valuedouble;
    }

    // market_data_metadata_asset->id_icon
    cJSON *id_icon = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "id_icon");
    if (cJSON_IsNull(id_icon)) {
        id_icon = NULL;
    }
    if (id_icon) { 
    if(!cJSON_IsString(id_icon) && !cJSON_IsNull(id_icon))
    {
    goto end; //String
    }
    }

    // market_data_metadata_asset->supply_current
    cJSON *supply_current = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "supply_current");
    if (cJSON_IsNull(supply_current)) {
        supply_current = NULL;
    }
    if (supply_current) { 
    if(!cJSON_IsNumber(supply_current))
    {
    goto end; //Numeric
    }
    supply_current_local_var = malloc(sizeof(double));
    if(!supply_current_local_var)
    {
        goto end;
    }
    *supply_current_local_var = supply_current->valuedouble;
    }

    // market_data_metadata_asset->supply_total
    cJSON *supply_total = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "supply_total");
    if (cJSON_IsNull(supply_total)) {
        supply_total = NULL;
    }
    if (supply_total) { 
    if(!cJSON_IsNumber(supply_total))
    {
    goto end; //Numeric
    }
    supply_total_local_var = malloc(sizeof(double));
    if(!supply_total_local_var)
    {
        goto end;
    }
    *supply_total_local_var = supply_total->valuedouble;
    }

    // market_data_metadata_asset->supply_max
    cJSON *supply_max = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "supply_max");
    if (cJSON_IsNull(supply_max)) {
        supply_max = NULL;
    }
    if (supply_max) { 
    if(!cJSON_IsNumber(supply_max))
    {
    goto end; //Numeric
    }
    supply_max_local_var = malloc(sizeof(double));
    if(!supply_max_local_var)
    {
        goto end;
    }
    *supply_max_local_var = supply_max->valuedouble;
    }

    // market_data_metadata_asset->chain_addresses
    cJSON *chain_addresses = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "chain_addresses");
    if (cJSON_IsNull(chain_addresses)) {
        chain_addresses = NULL;
    }
    if (chain_addresses) { 
    cJSON *chain_addresses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(chain_addresses)){
        goto end; //nonprimitive container
    }

    chain_addressesList = list_createList();

    cJSON_ArrayForEach(chain_addresses_local_nonprimitive,chain_addresses )
    {
        if(!cJSON_IsObject(chain_addresses_local_nonprimitive)){
            goto end;
        }
        v1_chain_network_address_t *chain_addressesItem = v1_chain_network_address_parseFromJSON(chain_addresses_local_nonprimitive);

        list_addElement(chain_addressesList, chain_addressesItem);
    }
    }

    // market_data_metadata_asset->data_start
    cJSON *data_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_start");
    if (cJSON_IsNull(data_start)) {
        data_start = NULL;
    }
    if (data_start) { 
    if(!cJSON_IsString(data_start) && !cJSON_IsNull(data_start))
    {
    goto end; //String
    }
    }

    // market_data_metadata_asset->data_end
    cJSON *data_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_assetJSON, "data_end");
    if (cJSON_IsNull(data_end)) {
        data_end = NULL;
    }
    if (data_end) { 
    if(!cJSON_IsString(data_end) && !cJSON_IsNull(data_end))
    {
    goto end; //String
    }
    }


    if (asset_id && !cJSON_IsNull(asset_id)) asset_id_local_str = strdup(asset_id->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (data_quote_start && !cJSON_IsNull(data_quote_start)) data_quote_start_local_str = strdup(data_quote_start->valuestring);
    if (data_quote_end && !cJSON_IsNull(data_quote_end)) data_quote_end_local_str = strdup(data_quote_end->valuestring);
    if (data_orderbook_start && !cJSON_IsNull(data_orderbook_start)) data_orderbook_start_local_str = strdup(data_orderbook_start->valuestring);
    if (data_orderbook_end && !cJSON_IsNull(data_orderbook_end)) data_orderbook_end_local_str = strdup(data_orderbook_end->valuestring);
    if (data_trade_start && !cJSON_IsNull(data_trade_start)) data_trade_start_local_str = strdup(data_trade_start->valuestring);
    if (data_trade_end && !cJSON_IsNull(data_trade_end)) data_trade_end_local_str = strdup(data_trade_end->valuestring);
    if (id_icon && !cJSON_IsNull(id_icon)) id_icon_local_str = strdup(id_icon->valuestring);
    if (data_start && !cJSON_IsNull(data_start)) data_start_local_str = strdup(data_start->valuestring);
    if (data_end && !cJSON_IsNull(data_end)) data_end_local_str = strdup(data_end->valuestring);

    market_data_metadata_asset_local_var = market_data_metadata_asset_create_internal (
        asset_id_local_str,
        name_local_str,
        type_is_crypto_local_var,
        data_quote_start_local_str,
        data_quote_end_local_str,
        data_orderbook_start_local_str,
        data_orderbook_end_local_str,
        data_trade_start_local_str,
        data_trade_end_local_str,
        data_symbols_count_local_var,
        volume_1hrs_usd_local_var,
        volume_1day_usd_local_var,
        volume_1mth_usd_local_var,
        price_usd_local_var,
        id_icon_local_str,
        supply_current_local_var,
        supply_total_local_var,
        supply_max_local_var,
        chain_addresses ? chain_addressesList : NULL,
        data_start_local_str,
        data_end_local_str
        );

    if (!market_data_metadata_asset_local_var) {
        goto end;
    }

    return market_data_metadata_asset_local_var;
end:
    if (asset_id_local_str) {
        free(asset_id_local_str);
        asset_id_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (type_is_crypto_local_var) {
        free(type_is_crypto_local_var);
        type_is_crypto_local_var = NULL;
    }
    if (data_quote_start_local_str) {
        free(data_quote_start_local_str);
        data_quote_start_local_str = NULL;
    }
    if (data_quote_end_local_str) {
        free(data_quote_end_local_str);
        data_quote_end_local_str = NULL;
    }
    if (data_orderbook_start_local_str) {
        free(data_orderbook_start_local_str);
        data_orderbook_start_local_str = NULL;
    }
    if (data_orderbook_end_local_str) {
        free(data_orderbook_end_local_str);
        data_orderbook_end_local_str = NULL;
    }
    if (data_trade_start_local_str) {
        free(data_trade_start_local_str);
        data_trade_start_local_str = NULL;
    }
    if (data_trade_end_local_str) {
        free(data_trade_end_local_str);
        data_trade_end_local_str = NULL;
    }
    if (data_symbols_count_local_var) {
        free(data_symbols_count_local_var);
        data_symbols_count_local_var = NULL;
    }
    if (volume_1hrs_usd_local_var) {
        free(volume_1hrs_usd_local_var);
        volume_1hrs_usd_local_var = NULL;
    }
    if (volume_1day_usd_local_var) {
        free(volume_1day_usd_local_var);
        volume_1day_usd_local_var = NULL;
    }
    if (volume_1mth_usd_local_var) {
        free(volume_1mth_usd_local_var);
        volume_1mth_usd_local_var = NULL;
    }
    if (price_usd_local_var) {
        free(price_usd_local_var);
        price_usd_local_var = NULL;
    }
    if (id_icon_local_str) {
        free(id_icon_local_str);
        id_icon_local_str = NULL;
    }
    if (supply_current_local_var) {
        free(supply_current_local_var);
        supply_current_local_var = NULL;
    }
    if (supply_total_local_var) {
        free(supply_total_local_var);
        supply_total_local_var = NULL;
    }
    if (supply_max_local_var) {
        free(supply_max_local_var);
        supply_max_local_var = NULL;
    }
    if (chain_addressesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, chain_addressesList) {
            v1_chain_network_address_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(chain_addressesList);
        chain_addressesList = NULL;
    }
    if (data_start_local_str) {
        free(data_start_local_str);
        data_start_local_str = NULL;
    }
    if (data_end_local_str) {
        free(data_end_local_str);
        data_end_local_str = NULL;
    }
    return NULL;

}
