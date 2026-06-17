#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "market_data_metadata_exchange.h"



static market_data_metadata_exchange_t *market_data_metadata_exchange_create_internal(
    char *exchange_id,
    char *website,
    char *name,
    char *data_start,
    char *data_end,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    long *data_trade_count,
    long *data_symbols_count,
    double *volume_1hrs_usd,
    double *volume_1day_usd,
    double *volume_1mth_usd,
    list_t *metric_id,
    list_t *icons,
    double *rank,
    char *integration_status
    ) {
    market_data_metadata_exchange_t *market_data_metadata_exchange_local_var = malloc(sizeof(market_data_metadata_exchange_t));
    if (!market_data_metadata_exchange_local_var) {
        return NULL;
    }
    memset(market_data_metadata_exchange_local_var, 0, sizeof(market_data_metadata_exchange_t));
    market_data_metadata_exchange_local_var->_library_owned = 1;
    market_data_metadata_exchange_local_var->exchange_id = exchange_id;
    market_data_metadata_exchange_local_var->website = website;
    market_data_metadata_exchange_local_var->name = name;
    market_data_metadata_exchange_local_var->data_start = data_start;
    market_data_metadata_exchange_local_var->data_end = data_end;
    market_data_metadata_exchange_local_var->data_quote_start = data_quote_start;
    market_data_metadata_exchange_local_var->data_quote_end = data_quote_end;
    market_data_metadata_exchange_local_var->data_orderbook_start = data_orderbook_start;
    market_data_metadata_exchange_local_var->data_orderbook_end = data_orderbook_end;
    market_data_metadata_exchange_local_var->data_trade_start = data_trade_start;
    market_data_metadata_exchange_local_var->data_trade_end = data_trade_end;
    market_data_metadata_exchange_local_var->data_trade_count = data_trade_count;
    market_data_metadata_exchange_local_var->data_symbols_count = data_symbols_count;
    market_data_metadata_exchange_local_var->volume_1hrs_usd = volume_1hrs_usd;
    market_data_metadata_exchange_local_var->volume_1day_usd = volume_1day_usd;
    market_data_metadata_exchange_local_var->volume_1mth_usd = volume_1mth_usd;
    market_data_metadata_exchange_local_var->metric_id = metric_id;
    market_data_metadata_exchange_local_var->icons = icons;
    market_data_metadata_exchange_local_var->rank = rank;
    market_data_metadata_exchange_local_var->integration_status = integration_status;
    return market_data_metadata_exchange_local_var;
}

__attribute__((deprecated)) market_data_metadata_exchange_t *market_data_metadata_exchange_create(
    char *exchange_id,
    char *website,
    char *name,
    char *data_start,
    char *data_end,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    long *data_trade_count,
    long *data_symbols_count,
    double *volume_1hrs_usd,
    double *volume_1day_usd,
    double *volume_1mth_usd,
    list_t *metric_id,
    list_t *icons,
    double *rank,
    char *integration_status
    ) {
    long *data_trade_count_copy = NULL;
    if (data_trade_count) {
        data_trade_count_copy = malloc(sizeof(long));
        if (data_trade_count_copy) *data_trade_count_copy = *data_trade_count;
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
    double *rank_copy = NULL;
    if (rank) {
        rank_copy = malloc(sizeof(double));
        if (rank_copy) *rank_copy = *rank;
    }
    market_data_metadata_exchange_t *result = market_data_metadata_exchange_create_internal (
        exchange_id,
        website,
        name,
        data_start,
        data_end,
        data_quote_start,
        data_quote_end,
        data_orderbook_start,
        data_orderbook_end,
        data_trade_start,
        data_trade_end,
        data_trade_count_copy,
        data_symbols_count_copy,
        volume_1hrs_usd_copy,
        volume_1day_usd_copy,
        volume_1mth_usd_copy,
        metric_id,
        icons,
        rank_copy,
        integration_status
        );
    if (!result) {
        free(data_trade_count_copy);
        free(data_symbols_count_copy);
        free(volume_1hrs_usd_copy);
        free(volume_1day_usd_copy);
        free(volume_1mth_usd_copy);
        free(rank_copy);
    }
    return result;
}

void market_data_metadata_exchange_free(market_data_metadata_exchange_t *market_data_metadata_exchange) {
    if(NULL == market_data_metadata_exchange){
        return ;
    }
    if(market_data_metadata_exchange->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "market_data_metadata_exchange_free");
        return ;
    }
    listEntry_t *listEntry;
    if (market_data_metadata_exchange->exchange_id) {
        free(market_data_metadata_exchange->exchange_id);
        market_data_metadata_exchange->exchange_id = NULL;
    }
    if (market_data_metadata_exchange->website) {
        free(market_data_metadata_exchange->website);
        market_data_metadata_exchange->website = NULL;
    }
    if (market_data_metadata_exchange->name) {
        free(market_data_metadata_exchange->name);
        market_data_metadata_exchange->name = NULL;
    }
    if (market_data_metadata_exchange->data_start) {
        free(market_data_metadata_exchange->data_start);
        market_data_metadata_exchange->data_start = NULL;
    }
    if (market_data_metadata_exchange->data_end) {
        free(market_data_metadata_exchange->data_end);
        market_data_metadata_exchange->data_end = NULL;
    }
    if (market_data_metadata_exchange->data_quote_start) {
        free(market_data_metadata_exchange->data_quote_start);
        market_data_metadata_exchange->data_quote_start = NULL;
    }
    if (market_data_metadata_exchange->data_quote_end) {
        free(market_data_metadata_exchange->data_quote_end);
        market_data_metadata_exchange->data_quote_end = NULL;
    }
    if (market_data_metadata_exchange->data_orderbook_start) {
        free(market_data_metadata_exchange->data_orderbook_start);
        market_data_metadata_exchange->data_orderbook_start = NULL;
    }
    if (market_data_metadata_exchange->data_orderbook_end) {
        free(market_data_metadata_exchange->data_orderbook_end);
        market_data_metadata_exchange->data_orderbook_end = NULL;
    }
    if (market_data_metadata_exchange->data_trade_start) {
        free(market_data_metadata_exchange->data_trade_start);
        market_data_metadata_exchange->data_trade_start = NULL;
    }
    if (market_data_metadata_exchange->data_trade_end) {
        free(market_data_metadata_exchange->data_trade_end);
        market_data_metadata_exchange->data_trade_end = NULL;
    }
    if (market_data_metadata_exchange->data_trade_count) {
        free(market_data_metadata_exchange->data_trade_count);
        market_data_metadata_exchange->data_trade_count = NULL;
    }
    if (market_data_metadata_exchange->data_symbols_count) {
        free(market_data_metadata_exchange->data_symbols_count);
        market_data_metadata_exchange->data_symbols_count = NULL;
    }
    if (market_data_metadata_exchange->volume_1hrs_usd) {
        free(market_data_metadata_exchange->volume_1hrs_usd);
        market_data_metadata_exchange->volume_1hrs_usd = NULL;
    }
    if (market_data_metadata_exchange->volume_1day_usd) {
        free(market_data_metadata_exchange->volume_1day_usd);
        market_data_metadata_exchange->volume_1day_usd = NULL;
    }
    if (market_data_metadata_exchange->volume_1mth_usd) {
        free(market_data_metadata_exchange->volume_1mth_usd);
        market_data_metadata_exchange->volume_1mth_usd = NULL;
    }
    if (market_data_metadata_exchange->metric_id) {
        list_ForEach(listEntry, market_data_metadata_exchange->metric_id) {
            free(listEntry->data);
        }
        list_freeList(market_data_metadata_exchange->metric_id);
        market_data_metadata_exchange->metric_id = NULL;
    }
    if (market_data_metadata_exchange->icons) {
        list_ForEach(listEntry, market_data_metadata_exchange->icons) {
            market_data_metadata_icon_free(listEntry->data);
        }
        list_freeList(market_data_metadata_exchange->icons);
        market_data_metadata_exchange->icons = NULL;
    }
    if (market_data_metadata_exchange->rank) {
        free(market_data_metadata_exchange->rank);
        market_data_metadata_exchange->rank = NULL;
    }
    if (market_data_metadata_exchange->integration_status) {
        free(market_data_metadata_exchange->integration_status);
        market_data_metadata_exchange->integration_status = NULL;
    }
    free(market_data_metadata_exchange);
}

cJSON *market_data_metadata_exchange_convertToJSON(market_data_metadata_exchange_t *market_data_metadata_exchange) {
    cJSON *item = cJSON_CreateObject();

    // market_data_metadata_exchange->exchange_id
    if(market_data_metadata_exchange->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", market_data_metadata_exchange->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_exchange->website
    if(market_data_metadata_exchange->website) {
    if(cJSON_AddStringToObject(item, "website", market_data_metadata_exchange->website) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_exchange->name
    if(market_data_metadata_exchange->name) {
    if(cJSON_AddStringToObject(item, "name", market_data_metadata_exchange->name) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_exchange->data_start
    if(market_data_metadata_exchange->data_start) {
    if(cJSON_AddStringToObject(item, "data_start", market_data_metadata_exchange->data_start) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_exchange->data_end
    if(market_data_metadata_exchange->data_end) {
    if(cJSON_AddStringToObject(item, "data_end", market_data_metadata_exchange->data_end) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_exchange->data_quote_start
    if(market_data_metadata_exchange->data_quote_start) {
    if(cJSON_AddStringToObject(item, "data_quote_start", market_data_metadata_exchange->data_quote_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_quote_end
    if(market_data_metadata_exchange->data_quote_end) {
    if(cJSON_AddStringToObject(item, "data_quote_end", market_data_metadata_exchange->data_quote_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_orderbook_start
    if(market_data_metadata_exchange->data_orderbook_start) {
    if(cJSON_AddStringToObject(item, "data_orderbook_start", market_data_metadata_exchange->data_orderbook_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_orderbook_end
    if(market_data_metadata_exchange->data_orderbook_end) {
    if(cJSON_AddStringToObject(item, "data_orderbook_end", market_data_metadata_exchange->data_orderbook_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_trade_start
    if(market_data_metadata_exchange->data_trade_start) {
    if(cJSON_AddStringToObject(item, "data_trade_start", market_data_metadata_exchange->data_trade_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_trade_end
    if(market_data_metadata_exchange->data_trade_end) {
    if(cJSON_AddStringToObject(item, "data_trade_end", market_data_metadata_exchange->data_trade_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_exchange->data_trade_count
    if(market_data_metadata_exchange->data_trade_count) {
    if(cJSON_AddNumberToObject(item, "data_trade_count", *market_data_metadata_exchange->data_trade_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->data_symbols_count
    if(market_data_metadata_exchange->data_symbols_count) {
    if(cJSON_AddNumberToObject(item, "data_symbols_count", *market_data_metadata_exchange->data_symbols_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->volume_1hrs_usd
    if(market_data_metadata_exchange->volume_1hrs_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs_usd", *market_data_metadata_exchange->volume_1hrs_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->volume_1day_usd
    if(market_data_metadata_exchange->volume_1day_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1day_usd", *market_data_metadata_exchange->volume_1day_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->volume_1mth_usd
    if(market_data_metadata_exchange->volume_1mth_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1mth_usd", *market_data_metadata_exchange->volume_1mth_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->metric_id
    if(market_data_metadata_exchange->metric_id) {
    cJSON *metric_id = cJSON_AddArrayToObject(item, "metric_id");
    if(metric_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *metric_idListEntry;
    list_ForEach(metric_idListEntry, market_data_metadata_exchange->metric_id) {
    if(cJSON_AddStringToObject(metric_id, "", metric_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // market_data_metadata_exchange->icons
    if(market_data_metadata_exchange->icons) {
    cJSON *icons = cJSON_AddArrayToObject(item, "icons");
    if(icons == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *iconsListEntry;
    if (market_data_metadata_exchange->icons) {
    list_ForEach(iconsListEntry, market_data_metadata_exchange->icons) {
    cJSON *itemLocal = market_data_metadata_icon_convertToJSON(iconsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(icons, itemLocal);
    }
    }
    }


    // market_data_metadata_exchange->rank
    if(market_data_metadata_exchange->rank) {
    if(cJSON_AddNumberToObject(item, "rank", *market_data_metadata_exchange->rank) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_exchange->integration_status
    if(market_data_metadata_exchange->integration_status) {
    if(cJSON_AddStringToObject(item, "integration_status", market_data_metadata_exchange->integration_status) == NULL) {
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

market_data_metadata_exchange_t *market_data_metadata_exchange_parseFromJSON(cJSON *market_data_metadata_exchangeJSON){

    market_data_metadata_exchange_t *market_data_metadata_exchange_local_var = NULL;

    char *exchange_id_local_str = NULL;

    char *website_local_str = NULL;

    char *name_local_str = NULL;

    char *data_start_local_str = NULL;

    char *data_end_local_str = NULL;

    char *data_quote_start_local_str = NULL;

    char *data_quote_end_local_str = NULL;

    char *data_orderbook_start_local_str = NULL;

    char *data_orderbook_end_local_str = NULL;

    char *data_trade_start_local_str = NULL;

    char *data_trade_end_local_str = NULL;

    // define the local variable for market_data_metadata_exchange->data_trade_count
    long *data_trade_count_local_var = NULL;

    // define the local variable for market_data_metadata_exchange->data_symbols_count
    long *data_symbols_count_local_var = NULL;

    // define the local variable for market_data_metadata_exchange->volume_1hrs_usd
    double *volume_1hrs_usd_local_var = NULL;

    // define the local variable for market_data_metadata_exchange->volume_1day_usd
    double *volume_1day_usd_local_var = NULL;

    // define the local variable for market_data_metadata_exchange->volume_1mth_usd
    double *volume_1mth_usd_local_var = NULL;

    // define the local list for market_data_metadata_exchange->metric_id
    list_t *metric_idList = NULL;

    // define the local list for market_data_metadata_exchange->icons
    list_t *iconsList = NULL;

    // define the local variable for market_data_metadata_exchange->rank
    double *rank_local_var = NULL;

    char *integration_status_local_str = NULL;

    // market_data_metadata_exchange->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_exchange->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsString(website) && !cJSON_IsNull(website))
    {
    goto end; //String
    }
    }

    // market_data_metadata_exchange->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // market_data_metadata_exchange->data_start
    cJSON *data_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_start");
    if (cJSON_IsNull(data_start)) {
        data_start = NULL;
    }
    if (data_start) { 
    if(!cJSON_IsString(data_start) && !cJSON_IsNull(data_start))
    {
    goto end; //String
    }
    }

    // market_data_metadata_exchange->data_end
    cJSON *data_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_end");
    if (cJSON_IsNull(data_end)) {
        data_end = NULL;
    }
    if (data_end) { 
    if(!cJSON_IsString(data_end) && !cJSON_IsNull(data_end))
    {
    goto end; //String
    }
    }

    // market_data_metadata_exchange->data_quote_start
    cJSON *data_quote_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_quote_start");
    if (cJSON_IsNull(data_quote_start)) {
        data_quote_start = NULL;
    }
    if (data_quote_start) { 
    if(!cJSON_IsString(data_quote_start) && !cJSON_IsNull(data_quote_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_quote_end
    cJSON *data_quote_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_quote_end");
    if (cJSON_IsNull(data_quote_end)) {
        data_quote_end = NULL;
    }
    if (data_quote_end) { 
    if(!cJSON_IsString(data_quote_end) && !cJSON_IsNull(data_quote_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_orderbook_start
    cJSON *data_orderbook_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_orderbook_start");
    if (cJSON_IsNull(data_orderbook_start)) {
        data_orderbook_start = NULL;
    }
    if (data_orderbook_start) { 
    if(!cJSON_IsString(data_orderbook_start) && !cJSON_IsNull(data_orderbook_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_orderbook_end
    cJSON *data_orderbook_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_orderbook_end");
    if (cJSON_IsNull(data_orderbook_end)) {
        data_orderbook_end = NULL;
    }
    if (data_orderbook_end) { 
    if(!cJSON_IsString(data_orderbook_end) && !cJSON_IsNull(data_orderbook_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_trade_start
    cJSON *data_trade_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_trade_start");
    if (cJSON_IsNull(data_trade_start)) {
        data_trade_start = NULL;
    }
    if (data_trade_start) { 
    if(!cJSON_IsString(data_trade_start) && !cJSON_IsNull(data_trade_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_trade_end
    cJSON *data_trade_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_trade_end");
    if (cJSON_IsNull(data_trade_end)) {
        data_trade_end = NULL;
    }
    if (data_trade_end) { 
    if(!cJSON_IsString(data_trade_end) && !cJSON_IsNull(data_trade_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_exchange->data_trade_count
    cJSON *data_trade_count = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_trade_count");
    if (cJSON_IsNull(data_trade_count)) {
        data_trade_count = NULL;
    }
    if (data_trade_count) { 
    if(!cJSON_IsNumber(data_trade_count))
    {
    goto end; //Numeric
    }
    data_trade_count_local_var = malloc(sizeof(long));
    if(!data_trade_count_local_var)
    {
        goto end;
    }
    *data_trade_count_local_var = data_trade_count->valuedouble;
    }

    // market_data_metadata_exchange->data_symbols_count
    cJSON *data_symbols_count = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "data_symbols_count");
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

    // market_data_metadata_exchange->volume_1hrs_usd
    cJSON *volume_1hrs_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "volume_1hrs_usd");
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

    // market_data_metadata_exchange->volume_1day_usd
    cJSON *volume_1day_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "volume_1day_usd");
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

    // market_data_metadata_exchange->volume_1mth_usd
    cJSON *volume_1mth_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "volume_1mth_usd");
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

    // market_data_metadata_exchange->metric_id
    cJSON *metric_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "metric_id");
    if (cJSON_IsNull(metric_id)) {
        metric_id = NULL;
    }
    if (metric_id) { 
    cJSON *metric_id_local = NULL;
    if(!cJSON_IsArray(metric_id)) {
        goto end;//primitive container
    }
    metric_idList = list_createList();

    cJSON_ArrayForEach(metric_id_local, metric_id)
    {
        if(!cJSON_IsString(metric_id_local))
        {
            goto end;
        }
        list_addElement(metric_idList , strdup(metric_id_local->valuestring));
    }
    }

    // market_data_metadata_exchange->icons
    cJSON *icons = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "icons");
    if (cJSON_IsNull(icons)) {
        icons = NULL;
    }
    if (icons) { 
    cJSON *icons_local_nonprimitive = NULL;
    if(!cJSON_IsArray(icons)){
        goto end; //nonprimitive container
    }

    iconsList = list_createList();

    cJSON_ArrayForEach(icons_local_nonprimitive,icons )
    {
        if(!cJSON_IsObject(icons_local_nonprimitive)){
            goto end;
        }
        market_data_metadata_icon_t *iconsItem = market_data_metadata_icon_parseFromJSON(icons_local_nonprimitive);

        list_addElement(iconsList, iconsItem);
    }
    }

    // market_data_metadata_exchange->rank
    cJSON *rank = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "rank");
    if (cJSON_IsNull(rank)) {
        rank = NULL;
    }
    if (rank) { 
    if(!cJSON_IsNumber(rank))
    {
    goto end; //Numeric
    }
    rank_local_var = malloc(sizeof(double));
    if(!rank_local_var)
    {
        goto end;
    }
    *rank_local_var = rank->valuedouble;
    }

    // market_data_metadata_exchange->integration_status
    cJSON *integration_status = cJSON_GetObjectItemCaseSensitive(market_data_metadata_exchangeJSON, "integration_status");
    if (cJSON_IsNull(integration_status)) {
        integration_status = NULL;
    }
    if (integration_status) { 
    if(!cJSON_IsString(integration_status) && !cJSON_IsNull(integration_status))
    {
    goto end; //String
    }
    }


    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (website && !cJSON_IsNull(website)) website_local_str = strdup(website->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (data_start && !cJSON_IsNull(data_start)) data_start_local_str = strdup(data_start->valuestring);
    if (data_end && !cJSON_IsNull(data_end)) data_end_local_str = strdup(data_end->valuestring);
    if (data_quote_start && !cJSON_IsNull(data_quote_start)) data_quote_start_local_str = strdup(data_quote_start->valuestring);
    if (data_quote_end && !cJSON_IsNull(data_quote_end)) data_quote_end_local_str = strdup(data_quote_end->valuestring);
    if (data_orderbook_start && !cJSON_IsNull(data_orderbook_start)) data_orderbook_start_local_str = strdup(data_orderbook_start->valuestring);
    if (data_orderbook_end && !cJSON_IsNull(data_orderbook_end)) data_orderbook_end_local_str = strdup(data_orderbook_end->valuestring);
    if (data_trade_start && !cJSON_IsNull(data_trade_start)) data_trade_start_local_str = strdup(data_trade_start->valuestring);
    if (data_trade_end && !cJSON_IsNull(data_trade_end)) data_trade_end_local_str = strdup(data_trade_end->valuestring);
    if (integration_status && !cJSON_IsNull(integration_status)) integration_status_local_str = strdup(integration_status->valuestring);

    market_data_metadata_exchange_local_var = market_data_metadata_exchange_create_internal (
        exchange_id_local_str,
        website_local_str,
        name_local_str,
        data_start_local_str,
        data_end_local_str,
        data_quote_start_local_str,
        data_quote_end_local_str,
        data_orderbook_start_local_str,
        data_orderbook_end_local_str,
        data_trade_start_local_str,
        data_trade_end_local_str,
        data_trade_count_local_var,
        data_symbols_count_local_var,
        volume_1hrs_usd_local_var,
        volume_1day_usd_local_var,
        volume_1mth_usd_local_var,
        metric_id ? metric_idList : NULL,
        icons ? iconsList : NULL,
        rank_local_var,
        integration_status_local_str
        );

    if (!market_data_metadata_exchange_local_var) {
        goto end;
    }

    return market_data_metadata_exchange_local_var;
end:
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (website_local_str) {
        free(website_local_str);
        website_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (data_start_local_str) {
        free(data_start_local_str);
        data_start_local_str = NULL;
    }
    if (data_end_local_str) {
        free(data_end_local_str);
        data_end_local_str = NULL;
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
    if (data_trade_count_local_var) {
        free(data_trade_count_local_var);
        data_trade_count_local_var = NULL;
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
    if (metric_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, metric_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(metric_idList);
        metric_idList = NULL;
    }
    if (iconsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, iconsList) {
            market_data_metadata_icon_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(iconsList);
        iconsList = NULL;
    }
    if (rank_local_var) {
        free(rank_local_var);
        rank_local_var = NULL;
    }
    if (integration_status_local_str) {
        free(integration_status_local_str);
        integration_status_local_str = NULL;
    }
    return NULL;

}
