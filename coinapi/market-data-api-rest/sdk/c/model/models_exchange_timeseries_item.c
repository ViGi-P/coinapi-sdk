#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_exchange_timeseries_item.h"



static models_exchange_timeseries_item_t *models_exchange_timeseries_item_create_internal(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *price_open,
    double *price_high,
    double *price_low,
    double *price_close,
    double *volume_traded,
    long *trades_count,
    char *symbol_id_exchange,
    char *symbol_id_coinapi
    ) {
    models_exchange_timeseries_item_t *models_exchange_timeseries_item_local_var = malloc(sizeof(models_exchange_timeseries_item_t));
    if (!models_exchange_timeseries_item_local_var) {
        return NULL;
    }
    memset(models_exchange_timeseries_item_local_var, 0, sizeof(models_exchange_timeseries_item_t));
    models_exchange_timeseries_item_local_var->_library_owned = 1;
    models_exchange_timeseries_item_local_var->time_period_start = time_period_start;
    models_exchange_timeseries_item_local_var->time_period_end = time_period_end;
    models_exchange_timeseries_item_local_var->time_open = time_open;
    models_exchange_timeseries_item_local_var->time_close = time_close;
    models_exchange_timeseries_item_local_var->price_open = price_open;
    models_exchange_timeseries_item_local_var->price_high = price_high;
    models_exchange_timeseries_item_local_var->price_low = price_low;
    models_exchange_timeseries_item_local_var->price_close = price_close;
    models_exchange_timeseries_item_local_var->volume_traded = volume_traded;
    models_exchange_timeseries_item_local_var->trades_count = trades_count;
    models_exchange_timeseries_item_local_var->symbol_id_exchange = symbol_id_exchange;
    models_exchange_timeseries_item_local_var->symbol_id_coinapi = symbol_id_coinapi;
    return models_exchange_timeseries_item_local_var;
}

__attribute__((deprecated)) models_exchange_timeseries_item_t *models_exchange_timeseries_item_create(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *price_open,
    double *price_high,
    double *price_low,
    double *price_close,
    double *volume_traded,
    long *trades_count,
    char *symbol_id_exchange,
    char *symbol_id_coinapi
    ) {
    double *price_open_copy = NULL;
    if (price_open) {
        price_open_copy = malloc(sizeof(double));
        if (price_open_copy) *price_open_copy = *price_open;
    }
    double *price_high_copy = NULL;
    if (price_high) {
        price_high_copy = malloc(sizeof(double));
        if (price_high_copy) *price_high_copy = *price_high;
    }
    double *price_low_copy = NULL;
    if (price_low) {
        price_low_copy = malloc(sizeof(double));
        if (price_low_copy) *price_low_copy = *price_low;
    }
    double *price_close_copy = NULL;
    if (price_close) {
        price_close_copy = malloc(sizeof(double));
        if (price_close_copy) *price_close_copy = *price_close;
    }
    double *volume_traded_copy = NULL;
    if (volume_traded) {
        volume_traded_copy = malloc(sizeof(double));
        if (volume_traded_copy) *volume_traded_copy = *volume_traded;
    }
    long *trades_count_copy = NULL;
    if (trades_count) {
        trades_count_copy = malloc(sizeof(long));
        if (trades_count_copy) *trades_count_copy = *trades_count;
    }
    models_exchange_timeseries_item_t *result = models_exchange_timeseries_item_create_internal (
        time_period_start,
        time_period_end,
        time_open,
        time_close,
        price_open_copy,
        price_high_copy,
        price_low_copy,
        price_close_copy,
        volume_traded_copy,
        trades_count_copy,
        symbol_id_exchange,
        symbol_id_coinapi
        );
    if (!result) {
        free(price_open_copy);
        free(price_high_copy);
        free(price_low_copy);
        free(price_close_copy);
        free(volume_traded_copy);
        free(trades_count_copy);
    }
    return result;
}

void models_exchange_timeseries_item_free(models_exchange_timeseries_item_t *models_exchange_timeseries_item) {
    if(NULL == models_exchange_timeseries_item){
        return ;
    }
    if(models_exchange_timeseries_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_exchange_timeseries_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_exchange_timeseries_item->time_period_start) {
        free(models_exchange_timeseries_item->time_period_start);
        models_exchange_timeseries_item->time_period_start = NULL;
    }
    if (models_exchange_timeseries_item->time_period_end) {
        free(models_exchange_timeseries_item->time_period_end);
        models_exchange_timeseries_item->time_period_end = NULL;
    }
    if (models_exchange_timeseries_item->time_open) {
        free(models_exchange_timeseries_item->time_open);
        models_exchange_timeseries_item->time_open = NULL;
    }
    if (models_exchange_timeseries_item->time_close) {
        free(models_exchange_timeseries_item->time_close);
        models_exchange_timeseries_item->time_close = NULL;
    }
    if (models_exchange_timeseries_item->price_open) {
        free(models_exchange_timeseries_item->price_open);
        models_exchange_timeseries_item->price_open = NULL;
    }
    if (models_exchange_timeseries_item->price_high) {
        free(models_exchange_timeseries_item->price_high);
        models_exchange_timeseries_item->price_high = NULL;
    }
    if (models_exchange_timeseries_item->price_low) {
        free(models_exchange_timeseries_item->price_low);
        models_exchange_timeseries_item->price_low = NULL;
    }
    if (models_exchange_timeseries_item->price_close) {
        free(models_exchange_timeseries_item->price_close);
        models_exchange_timeseries_item->price_close = NULL;
    }
    if (models_exchange_timeseries_item->volume_traded) {
        free(models_exchange_timeseries_item->volume_traded);
        models_exchange_timeseries_item->volume_traded = NULL;
    }
    if (models_exchange_timeseries_item->trades_count) {
        free(models_exchange_timeseries_item->trades_count);
        models_exchange_timeseries_item->trades_count = NULL;
    }
    if (models_exchange_timeseries_item->symbol_id_exchange) {
        free(models_exchange_timeseries_item->symbol_id_exchange);
        models_exchange_timeseries_item->symbol_id_exchange = NULL;
    }
    if (models_exchange_timeseries_item->symbol_id_coinapi) {
        free(models_exchange_timeseries_item->symbol_id_coinapi);
        models_exchange_timeseries_item->symbol_id_coinapi = NULL;
    }
    free(models_exchange_timeseries_item);
}

cJSON *models_exchange_timeseries_item_convertToJSON(models_exchange_timeseries_item_t *models_exchange_timeseries_item) {
    cJSON *item = cJSON_CreateObject();

    // models_exchange_timeseries_item->time_period_start
    if(models_exchange_timeseries_item->time_period_start) {
    if(cJSON_AddStringToObject(item, "time_period_start", models_exchange_timeseries_item->time_period_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_exchange_timeseries_item->time_period_end
    if(models_exchange_timeseries_item->time_period_end) {
    if(cJSON_AddStringToObject(item, "time_period_end", models_exchange_timeseries_item->time_period_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_exchange_timeseries_item->time_open
    if(models_exchange_timeseries_item->time_open) {
    if(cJSON_AddStringToObject(item, "time_open", models_exchange_timeseries_item->time_open) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_exchange_timeseries_item->time_close
    if(models_exchange_timeseries_item->time_close) {
    if(cJSON_AddStringToObject(item, "time_close", models_exchange_timeseries_item->time_close) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_exchange_timeseries_item->price_open
    if(models_exchange_timeseries_item->price_open) {
    if(cJSON_AddNumberToObject(item, "price_open", *models_exchange_timeseries_item->price_open) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->price_high
    if(models_exchange_timeseries_item->price_high) {
    if(cJSON_AddNumberToObject(item, "price_high", *models_exchange_timeseries_item->price_high) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->price_low
    if(models_exchange_timeseries_item->price_low) {
    if(cJSON_AddNumberToObject(item, "price_low", *models_exchange_timeseries_item->price_low) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->price_close
    if(models_exchange_timeseries_item->price_close) {
    if(cJSON_AddNumberToObject(item, "price_close", *models_exchange_timeseries_item->price_close) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->volume_traded
    if(models_exchange_timeseries_item->volume_traded) {
    if(cJSON_AddNumberToObject(item, "volume_traded", *models_exchange_timeseries_item->volume_traded) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->trades_count
    if(models_exchange_timeseries_item->trades_count) {
    if(cJSON_AddNumberToObject(item, "trades_count", *models_exchange_timeseries_item->trades_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_exchange_timeseries_item->symbol_id_exchange
    if(models_exchange_timeseries_item->symbol_id_exchange) {
    if(cJSON_AddStringToObject(item, "symbol_id_exchange", models_exchange_timeseries_item->symbol_id_exchange) == NULL) {
    goto fail; //String
    }
    }


    // models_exchange_timeseries_item->symbol_id_coinapi
    if(models_exchange_timeseries_item->symbol_id_coinapi) {
    if(cJSON_AddStringToObject(item, "symbol_id_coinapi", models_exchange_timeseries_item->symbol_id_coinapi) == NULL) {
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

models_exchange_timeseries_item_t *models_exchange_timeseries_item_parseFromJSON(cJSON *models_exchange_timeseries_itemJSON){

    models_exchange_timeseries_item_t *models_exchange_timeseries_item_local_var = NULL;

    char *time_period_start_local_str = NULL;

    char *time_period_end_local_str = NULL;

    char *time_open_local_str = NULL;

    char *time_close_local_str = NULL;

    // define the local variable for models_exchange_timeseries_item->price_open
    double *price_open_local_var = NULL;

    // define the local variable for models_exchange_timeseries_item->price_high
    double *price_high_local_var = NULL;

    // define the local variable for models_exchange_timeseries_item->price_low
    double *price_low_local_var = NULL;

    // define the local variable for models_exchange_timeseries_item->price_close
    double *price_close_local_var = NULL;

    // define the local variable for models_exchange_timeseries_item->volume_traded
    double *volume_traded_local_var = NULL;

    // define the local variable for models_exchange_timeseries_item->trades_count
    long *trades_count_local_var = NULL;

    char *symbol_id_exchange_local_str = NULL;

    char *symbol_id_coinapi_local_str = NULL;

    // models_exchange_timeseries_item->time_period_start
    cJSON *time_period_start = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "time_period_start");
    if (cJSON_IsNull(time_period_start)) {
        time_period_start = NULL;
    }
    if (time_period_start) { 
    if(!cJSON_IsString(time_period_start) && !cJSON_IsNull(time_period_start))
    {
    goto end; //DateTime
    }
    }

    // models_exchange_timeseries_item->time_period_end
    cJSON *time_period_end = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "time_period_end");
    if (cJSON_IsNull(time_period_end)) {
        time_period_end = NULL;
    }
    if (time_period_end) { 
    if(!cJSON_IsString(time_period_end) && !cJSON_IsNull(time_period_end))
    {
    goto end; //DateTime
    }
    }

    // models_exchange_timeseries_item->time_open
    cJSON *time_open = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "time_open");
    if (cJSON_IsNull(time_open)) {
        time_open = NULL;
    }
    if (time_open) { 
    if(!cJSON_IsString(time_open) && !cJSON_IsNull(time_open))
    {
    goto end; //DateTime
    }
    }

    // models_exchange_timeseries_item->time_close
    cJSON *time_close = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "time_close");
    if (cJSON_IsNull(time_close)) {
        time_close = NULL;
    }
    if (time_close) { 
    if(!cJSON_IsString(time_close) && !cJSON_IsNull(time_close))
    {
    goto end; //DateTime
    }
    }

    // models_exchange_timeseries_item->price_open
    cJSON *price_open = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "price_open");
    if (cJSON_IsNull(price_open)) {
        price_open = NULL;
    }
    if (price_open) { 
    if(!cJSON_IsNumber(price_open))
    {
    goto end; //Numeric
    }
    price_open_local_var = malloc(sizeof(double));
    if(!price_open_local_var)
    {
        goto end;
    }
    *price_open_local_var = price_open->valuedouble;
    }

    // models_exchange_timeseries_item->price_high
    cJSON *price_high = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "price_high");
    if (cJSON_IsNull(price_high)) {
        price_high = NULL;
    }
    if (price_high) { 
    if(!cJSON_IsNumber(price_high))
    {
    goto end; //Numeric
    }
    price_high_local_var = malloc(sizeof(double));
    if(!price_high_local_var)
    {
        goto end;
    }
    *price_high_local_var = price_high->valuedouble;
    }

    // models_exchange_timeseries_item->price_low
    cJSON *price_low = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "price_low");
    if (cJSON_IsNull(price_low)) {
        price_low = NULL;
    }
    if (price_low) { 
    if(!cJSON_IsNumber(price_low))
    {
    goto end; //Numeric
    }
    price_low_local_var = malloc(sizeof(double));
    if(!price_low_local_var)
    {
        goto end;
    }
    *price_low_local_var = price_low->valuedouble;
    }

    // models_exchange_timeseries_item->price_close
    cJSON *price_close = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "price_close");
    if (cJSON_IsNull(price_close)) {
        price_close = NULL;
    }
    if (price_close) { 
    if(!cJSON_IsNumber(price_close))
    {
    goto end; //Numeric
    }
    price_close_local_var = malloc(sizeof(double));
    if(!price_close_local_var)
    {
        goto end;
    }
    *price_close_local_var = price_close->valuedouble;
    }

    // models_exchange_timeseries_item->volume_traded
    cJSON *volume_traded = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "volume_traded");
    if (cJSON_IsNull(volume_traded)) {
        volume_traded = NULL;
    }
    if (volume_traded) { 
    if(!cJSON_IsNumber(volume_traded))
    {
    goto end; //Numeric
    }
    volume_traded_local_var = malloc(sizeof(double));
    if(!volume_traded_local_var)
    {
        goto end;
    }
    *volume_traded_local_var = volume_traded->valuedouble;
    }

    // models_exchange_timeseries_item->trades_count
    cJSON *trades_count = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "trades_count");
    if (cJSON_IsNull(trades_count)) {
        trades_count = NULL;
    }
    if (trades_count) { 
    if(!cJSON_IsNumber(trades_count))
    {
    goto end; //Numeric
    }
    trades_count_local_var = malloc(sizeof(long));
    if(!trades_count_local_var)
    {
        goto end;
    }
    *trades_count_local_var = trades_count->valuedouble;
    }

    // models_exchange_timeseries_item->symbol_id_exchange
    cJSON *symbol_id_exchange = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "symbol_id_exchange");
    if (cJSON_IsNull(symbol_id_exchange)) {
        symbol_id_exchange = NULL;
    }
    if (symbol_id_exchange) { 
    if(!cJSON_IsString(symbol_id_exchange) && !cJSON_IsNull(symbol_id_exchange))
    {
    goto end; //String
    }
    }

    // models_exchange_timeseries_item->symbol_id_coinapi
    cJSON *symbol_id_coinapi = cJSON_GetObjectItemCaseSensitive(models_exchange_timeseries_itemJSON, "symbol_id_coinapi");
    if (cJSON_IsNull(symbol_id_coinapi)) {
        symbol_id_coinapi = NULL;
    }
    if (symbol_id_coinapi) { 
    if(!cJSON_IsString(symbol_id_coinapi) && !cJSON_IsNull(symbol_id_coinapi))
    {
    goto end; //String
    }
    }


    if (time_period_start && !cJSON_IsNull(time_period_start)) time_period_start_local_str = strdup(time_period_start->valuestring);
    if (time_period_end && !cJSON_IsNull(time_period_end)) time_period_end_local_str = strdup(time_period_end->valuestring);
    if (time_open && !cJSON_IsNull(time_open)) time_open_local_str = strdup(time_open->valuestring);
    if (time_close && !cJSON_IsNull(time_close)) time_close_local_str = strdup(time_close->valuestring);
    if (symbol_id_exchange && !cJSON_IsNull(symbol_id_exchange)) symbol_id_exchange_local_str = strdup(symbol_id_exchange->valuestring);
    if (symbol_id_coinapi && !cJSON_IsNull(symbol_id_coinapi)) symbol_id_coinapi_local_str = strdup(symbol_id_coinapi->valuestring);

    models_exchange_timeseries_item_local_var = models_exchange_timeseries_item_create_internal (
        time_period_start_local_str,
        time_period_end_local_str,
        time_open_local_str,
        time_close_local_str,
        price_open_local_var,
        price_high_local_var,
        price_low_local_var,
        price_close_local_var,
        volume_traded_local_var,
        trades_count_local_var,
        symbol_id_exchange_local_str,
        symbol_id_coinapi_local_str
        );

    if (!models_exchange_timeseries_item_local_var) {
        goto end;
    }

    return models_exchange_timeseries_item_local_var;
end:
    if (time_period_start_local_str) {
        free(time_period_start_local_str);
        time_period_start_local_str = NULL;
    }
    if (time_period_end_local_str) {
        free(time_period_end_local_str);
        time_period_end_local_str = NULL;
    }
    if (time_open_local_str) {
        free(time_open_local_str);
        time_open_local_str = NULL;
    }
    if (time_close_local_str) {
        free(time_close_local_str);
        time_close_local_str = NULL;
    }
    if (price_open_local_var) {
        free(price_open_local_var);
        price_open_local_var = NULL;
    }
    if (price_high_local_var) {
        free(price_high_local_var);
        price_high_local_var = NULL;
    }
    if (price_low_local_var) {
        free(price_low_local_var);
        price_low_local_var = NULL;
    }
    if (price_close_local_var) {
        free(price_close_local_var);
        price_close_local_var = NULL;
    }
    if (volume_traded_local_var) {
        free(volume_traded_local_var);
        volume_traded_local_var = NULL;
    }
    if (trades_count_local_var) {
        free(trades_count_local_var);
        trades_count_local_var = NULL;
    }
    if (symbol_id_exchange_local_str) {
        free(symbol_id_exchange_local_str);
        symbol_id_exchange_local_str = NULL;
    }
    if (symbol_id_coinapi_local_str) {
        free(symbol_id_coinapi_local_str);
        symbol_id_coinapi_local_str = NULL;
    }
    return NULL;

}
