#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ohlcv_timeseries_item.h"



static ohlcv_timeseries_item_t *ohlcv_timeseries_item_create_internal(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *price_open,
    double *price_high,
    double *price_low,
    double *price_close,
    double *volume_traded,
    long *trades_count
    ) {
    ohlcv_timeseries_item_t *ohlcv_timeseries_item_local_var = malloc(sizeof(ohlcv_timeseries_item_t));
    if (!ohlcv_timeseries_item_local_var) {
        return NULL;
    }
    memset(ohlcv_timeseries_item_local_var, 0, sizeof(ohlcv_timeseries_item_t));
    ohlcv_timeseries_item_local_var->_library_owned = 1;
    ohlcv_timeseries_item_local_var->time_period_start = time_period_start;
    ohlcv_timeseries_item_local_var->time_period_end = time_period_end;
    ohlcv_timeseries_item_local_var->time_open = time_open;
    ohlcv_timeseries_item_local_var->time_close = time_close;
    ohlcv_timeseries_item_local_var->price_open = price_open;
    ohlcv_timeseries_item_local_var->price_high = price_high;
    ohlcv_timeseries_item_local_var->price_low = price_low;
    ohlcv_timeseries_item_local_var->price_close = price_close;
    ohlcv_timeseries_item_local_var->volume_traded = volume_traded;
    ohlcv_timeseries_item_local_var->trades_count = trades_count;
    return ohlcv_timeseries_item_local_var;
}

__attribute__((deprecated)) ohlcv_timeseries_item_t *ohlcv_timeseries_item_create(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *price_open,
    double *price_high,
    double *price_low,
    double *price_close,
    double *volume_traded,
    long *trades_count
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
    ohlcv_timeseries_item_t *result = ohlcv_timeseries_item_create_internal (
        time_period_start,
        time_period_end,
        time_open,
        time_close,
        price_open_copy,
        price_high_copy,
        price_low_copy,
        price_close_copy,
        volume_traded_copy,
        trades_count_copy
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

void ohlcv_timeseries_item_free(ohlcv_timeseries_item_t *ohlcv_timeseries_item) {
    if(NULL == ohlcv_timeseries_item){
        return ;
    }
    if(ohlcv_timeseries_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ohlcv_timeseries_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ohlcv_timeseries_item->time_period_start) {
        free(ohlcv_timeseries_item->time_period_start);
        ohlcv_timeseries_item->time_period_start = NULL;
    }
    if (ohlcv_timeseries_item->time_period_end) {
        free(ohlcv_timeseries_item->time_period_end);
        ohlcv_timeseries_item->time_period_end = NULL;
    }
    if (ohlcv_timeseries_item->time_open) {
        free(ohlcv_timeseries_item->time_open);
        ohlcv_timeseries_item->time_open = NULL;
    }
    if (ohlcv_timeseries_item->time_close) {
        free(ohlcv_timeseries_item->time_close);
        ohlcv_timeseries_item->time_close = NULL;
    }
    if (ohlcv_timeseries_item->price_open) {
        free(ohlcv_timeseries_item->price_open);
        ohlcv_timeseries_item->price_open = NULL;
    }
    if (ohlcv_timeseries_item->price_high) {
        free(ohlcv_timeseries_item->price_high);
        ohlcv_timeseries_item->price_high = NULL;
    }
    if (ohlcv_timeseries_item->price_low) {
        free(ohlcv_timeseries_item->price_low);
        ohlcv_timeseries_item->price_low = NULL;
    }
    if (ohlcv_timeseries_item->price_close) {
        free(ohlcv_timeseries_item->price_close);
        ohlcv_timeseries_item->price_close = NULL;
    }
    if (ohlcv_timeseries_item->volume_traded) {
        free(ohlcv_timeseries_item->volume_traded);
        ohlcv_timeseries_item->volume_traded = NULL;
    }
    if (ohlcv_timeseries_item->trades_count) {
        free(ohlcv_timeseries_item->trades_count);
        ohlcv_timeseries_item->trades_count = NULL;
    }
    free(ohlcv_timeseries_item);
}

cJSON *ohlcv_timeseries_item_convertToJSON(ohlcv_timeseries_item_t *ohlcv_timeseries_item) {
    cJSON *item = cJSON_CreateObject();

    // ohlcv_timeseries_item->time_period_start
    if(ohlcv_timeseries_item->time_period_start) {
    if(cJSON_AddStringToObject(item, "time_period_start", ohlcv_timeseries_item->time_period_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ohlcv_timeseries_item->time_period_end
    if(ohlcv_timeseries_item->time_period_end) {
    if(cJSON_AddStringToObject(item, "time_period_end", ohlcv_timeseries_item->time_period_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ohlcv_timeseries_item->time_open
    if(ohlcv_timeseries_item->time_open) {
    if(cJSON_AddStringToObject(item, "time_open", ohlcv_timeseries_item->time_open) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ohlcv_timeseries_item->time_close
    if(ohlcv_timeseries_item->time_close) {
    if(cJSON_AddStringToObject(item, "time_close", ohlcv_timeseries_item->time_close) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ohlcv_timeseries_item->price_open
    if(ohlcv_timeseries_item->price_open) {
    if(cJSON_AddNumberToObject(item, "price_open", *ohlcv_timeseries_item->price_open) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_item->price_high
    if(ohlcv_timeseries_item->price_high) {
    if(cJSON_AddNumberToObject(item, "price_high", *ohlcv_timeseries_item->price_high) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_item->price_low
    if(ohlcv_timeseries_item->price_low) {
    if(cJSON_AddNumberToObject(item, "price_low", *ohlcv_timeseries_item->price_low) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_item->price_close
    if(ohlcv_timeseries_item->price_close) {
    if(cJSON_AddNumberToObject(item, "price_close", *ohlcv_timeseries_item->price_close) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_item->volume_traded
    if(ohlcv_timeseries_item->volume_traded) {
    if(cJSON_AddNumberToObject(item, "volume_traded", *ohlcv_timeseries_item->volume_traded) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_item->trades_count
    if(ohlcv_timeseries_item->trades_count) {
    if(cJSON_AddNumberToObject(item, "trades_count", *ohlcv_timeseries_item->trades_count) == NULL) {
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

ohlcv_timeseries_item_t *ohlcv_timeseries_item_parseFromJSON(cJSON *ohlcv_timeseries_itemJSON){

    ohlcv_timeseries_item_t *ohlcv_timeseries_item_local_var = NULL;

    char *time_period_start_local_str = NULL;

    char *time_period_end_local_str = NULL;

    char *time_open_local_str = NULL;

    char *time_close_local_str = NULL;

    // define the local variable for ohlcv_timeseries_item->price_open
    double *price_open_local_var = NULL;

    // define the local variable for ohlcv_timeseries_item->price_high
    double *price_high_local_var = NULL;

    // define the local variable for ohlcv_timeseries_item->price_low
    double *price_low_local_var = NULL;

    // define the local variable for ohlcv_timeseries_item->price_close
    double *price_close_local_var = NULL;

    // define the local variable for ohlcv_timeseries_item->volume_traded
    double *volume_traded_local_var = NULL;

    // define the local variable for ohlcv_timeseries_item->trades_count
    long *trades_count_local_var = NULL;

    // ohlcv_timeseries_item->time_period_start
    cJSON *time_period_start = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "time_period_start");
    if (cJSON_IsNull(time_period_start)) {
        time_period_start = NULL;
    }
    if (time_period_start) { 
    if(!cJSON_IsString(time_period_start) && !cJSON_IsNull(time_period_start))
    {
    goto end; //DateTime
    }
    }

    // ohlcv_timeseries_item->time_period_end
    cJSON *time_period_end = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "time_period_end");
    if (cJSON_IsNull(time_period_end)) {
        time_period_end = NULL;
    }
    if (time_period_end) { 
    if(!cJSON_IsString(time_period_end) && !cJSON_IsNull(time_period_end))
    {
    goto end; //DateTime
    }
    }

    // ohlcv_timeseries_item->time_open
    cJSON *time_open = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "time_open");
    if (cJSON_IsNull(time_open)) {
        time_open = NULL;
    }
    if (time_open) { 
    if(!cJSON_IsString(time_open) && !cJSON_IsNull(time_open))
    {
    goto end; //DateTime
    }
    }

    // ohlcv_timeseries_item->time_close
    cJSON *time_close = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "time_close");
    if (cJSON_IsNull(time_close)) {
        time_close = NULL;
    }
    if (time_close) { 
    if(!cJSON_IsString(time_close) && !cJSON_IsNull(time_close))
    {
    goto end; //DateTime
    }
    }

    // ohlcv_timeseries_item->price_open
    cJSON *price_open = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "price_open");
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

    // ohlcv_timeseries_item->price_high
    cJSON *price_high = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "price_high");
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

    // ohlcv_timeseries_item->price_low
    cJSON *price_low = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "price_low");
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

    // ohlcv_timeseries_item->price_close
    cJSON *price_close = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "price_close");
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

    // ohlcv_timeseries_item->volume_traded
    cJSON *volume_traded = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "volume_traded");
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

    // ohlcv_timeseries_item->trades_count
    cJSON *trades_count = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_itemJSON, "trades_count");
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


    if (time_period_start && !cJSON_IsNull(time_period_start)) time_period_start_local_str = strdup(time_period_start->valuestring);
    if (time_period_end && !cJSON_IsNull(time_period_end)) time_period_end_local_str = strdup(time_period_end->valuestring);
    if (time_open && !cJSON_IsNull(time_open)) time_open_local_str = strdup(time_open->valuestring);
    if (time_close && !cJSON_IsNull(time_close)) time_close_local_str = strdup(time_close->valuestring);

    ohlcv_timeseries_item_local_var = ohlcv_timeseries_item_create_internal (
        time_period_start_local_str,
        time_period_end_local_str,
        time_open_local_str,
        time_close_local_str,
        price_open_local_var,
        price_high_local_var,
        price_low_local_var,
        price_close_local_var,
        volume_traded_local_var,
        trades_count_local_var
        );

    if (!ohlcv_timeseries_item_local_var) {
        goto end;
    }

    return ohlcv_timeseries_item_local_var;
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
    return NULL;

}
