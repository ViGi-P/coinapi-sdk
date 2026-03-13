#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_timeseries_item.h"



static models_index_timeseries_item_t *models_index_timeseries_item_create_internal(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double value_open,
    double value_high,
    double value_low,
    double value_close,
    long value_count
    ) {
    models_index_timeseries_item_t *models_index_timeseries_item_local_var = malloc(sizeof(models_index_timeseries_item_t));
    if (!models_index_timeseries_item_local_var) {
        return NULL;
    }
    models_index_timeseries_item_local_var->time_period_start = time_period_start;
    models_index_timeseries_item_local_var->time_period_end = time_period_end;
    models_index_timeseries_item_local_var->time_open = time_open;
    models_index_timeseries_item_local_var->time_close = time_close;
    models_index_timeseries_item_local_var->value_open = value_open;
    models_index_timeseries_item_local_var->value_high = value_high;
    models_index_timeseries_item_local_var->value_low = value_low;
    models_index_timeseries_item_local_var->value_close = value_close;
    models_index_timeseries_item_local_var->value_count = value_count;

    models_index_timeseries_item_local_var->_library_owned = 1;
    return models_index_timeseries_item_local_var;
}

__attribute__((deprecated)) models_index_timeseries_item_t *models_index_timeseries_item_create(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double value_open,
    double value_high,
    double value_low,
    double value_close,
    long value_count
    ) {
    return models_index_timeseries_item_create_internal (
        time_period_start,
        time_period_end,
        time_open,
        time_close,
        value_open,
        value_high,
        value_low,
        value_close,
        value_count
        );
}

void models_index_timeseries_item_free(models_index_timeseries_item_t *models_index_timeseries_item) {
    if(NULL == models_index_timeseries_item){
        return ;
    }
    if(models_index_timeseries_item->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_timeseries_item_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_timeseries_item->time_period_start) {
        free(models_index_timeseries_item->time_period_start);
        models_index_timeseries_item->time_period_start = NULL;
    }
    if (models_index_timeseries_item->time_period_end) {
        free(models_index_timeseries_item->time_period_end);
        models_index_timeseries_item->time_period_end = NULL;
    }
    if (models_index_timeseries_item->time_open) {
        free(models_index_timeseries_item->time_open);
        models_index_timeseries_item->time_open = NULL;
    }
    if (models_index_timeseries_item->time_close) {
        free(models_index_timeseries_item->time_close);
        models_index_timeseries_item->time_close = NULL;
    }
    free(models_index_timeseries_item);
}

cJSON *models_index_timeseries_item_convertToJSON(models_index_timeseries_item_t *models_index_timeseries_item) {
    cJSON *item = cJSON_CreateObject();

    // models_index_timeseries_item->time_period_start
    if(models_index_timeseries_item->time_period_start) {
    if(cJSON_AddStringToObject(item, "time_period_start", models_index_timeseries_item->time_period_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_timeseries_item->time_period_end
    if(models_index_timeseries_item->time_period_end) {
    if(cJSON_AddStringToObject(item, "time_period_end", models_index_timeseries_item->time_period_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_timeseries_item->time_open
    if(models_index_timeseries_item->time_open) {
    if(cJSON_AddStringToObject(item, "time_open", models_index_timeseries_item->time_open) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_timeseries_item->time_close
    if(models_index_timeseries_item->time_close) {
    if(cJSON_AddStringToObject(item, "time_close", models_index_timeseries_item->time_close) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_timeseries_item->value_open
    if(models_index_timeseries_item->value_open) {
    if(cJSON_AddNumberToObject(item, "value_open", models_index_timeseries_item->value_open) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_high
    if(models_index_timeseries_item->value_high) {
    if(cJSON_AddNumberToObject(item, "value_high", models_index_timeseries_item->value_high) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_low
    if(models_index_timeseries_item->value_low) {
    if(cJSON_AddNumberToObject(item, "value_low", models_index_timeseries_item->value_low) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_close
    if(models_index_timeseries_item->value_close) {
    if(cJSON_AddNumberToObject(item, "value_close", models_index_timeseries_item->value_close) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_count
    if(models_index_timeseries_item->value_count) {
    if(cJSON_AddNumberToObject(item, "value_count", models_index_timeseries_item->value_count) == NULL) {
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

models_index_timeseries_item_t *models_index_timeseries_item_parseFromJSON(cJSON *models_index_timeseries_itemJSON){

    models_index_timeseries_item_t *models_index_timeseries_item_local_var = NULL;

    // models_index_timeseries_item->time_period_start
    cJSON *time_period_start = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "time_period_start");
    if (cJSON_IsNull(time_period_start)) {
        time_period_start = NULL;
    }
    if (time_period_start) { 
    if(!cJSON_IsString(time_period_start) && !cJSON_IsNull(time_period_start))
    {
    goto end; //DateTime
    }
    }

    // models_index_timeseries_item->time_period_end
    cJSON *time_period_end = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "time_period_end");
    if (cJSON_IsNull(time_period_end)) {
        time_period_end = NULL;
    }
    if (time_period_end) { 
    if(!cJSON_IsString(time_period_end) && !cJSON_IsNull(time_period_end))
    {
    goto end; //DateTime
    }
    }

    // models_index_timeseries_item->time_open
    cJSON *time_open = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "time_open");
    if (cJSON_IsNull(time_open)) {
        time_open = NULL;
    }
    if (time_open) { 
    if(!cJSON_IsString(time_open) && !cJSON_IsNull(time_open))
    {
    goto end; //DateTime
    }
    }

    // models_index_timeseries_item->time_close
    cJSON *time_close = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "time_close");
    if (cJSON_IsNull(time_close)) {
        time_close = NULL;
    }
    if (time_close) { 
    if(!cJSON_IsString(time_close) && !cJSON_IsNull(time_close))
    {
    goto end; //DateTime
    }
    }

    // models_index_timeseries_item->value_open
    cJSON *value_open = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "value_open");
    if (cJSON_IsNull(value_open)) {
        value_open = NULL;
    }
    if (value_open) { 
    if(!cJSON_IsNumber(value_open))
    {
    goto end; //Numeric
    }
    }

    // models_index_timeseries_item->value_high
    cJSON *value_high = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "value_high");
    if (cJSON_IsNull(value_high)) {
        value_high = NULL;
    }
    if (value_high) { 
    if(!cJSON_IsNumber(value_high))
    {
    goto end; //Numeric
    }
    }

    // models_index_timeseries_item->value_low
    cJSON *value_low = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "value_low");
    if (cJSON_IsNull(value_low)) {
        value_low = NULL;
    }
    if (value_low) { 
    if(!cJSON_IsNumber(value_low))
    {
    goto end; //Numeric
    }
    }

    // models_index_timeseries_item->value_close
    cJSON *value_close = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "value_close");
    if (cJSON_IsNull(value_close)) {
        value_close = NULL;
    }
    if (value_close) { 
    if(!cJSON_IsNumber(value_close))
    {
    goto end; //Numeric
    }
    }

    // models_index_timeseries_item->value_count
    cJSON *value_count = cJSON_GetObjectItemCaseSensitive(models_index_timeseries_itemJSON, "value_count");
    if (cJSON_IsNull(value_count)) {
        value_count = NULL;
    }
    if (value_count) { 
    if(!cJSON_IsNumber(value_count))
    {
    goto end; //Numeric
    }
    }


    models_index_timeseries_item_local_var = models_index_timeseries_item_create_internal (
        time_period_start && !cJSON_IsNull(time_period_start) ? strdup(time_period_start->valuestring) : NULL,
        time_period_end && !cJSON_IsNull(time_period_end) ? strdup(time_period_end->valuestring) : NULL,
        time_open && !cJSON_IsNull(time_open) ? strdup(time_open->valuestring) : NULL,
        time_close && !cJSON_IsNull(time_close) ? strdup(time_close->valuestring) : NULL,
        value_open ? value_open->valuedouble : 0,
        value_high ? value_high->valuedouble : 0,
        value_low ? value_low->valuedouble : 0,
        value_close ? value_close->valuedouble : 0,
        value_count ? value_count->valuedouble : 0
        );

    return models_index_timeseries_item_local_var;
end:
    return NULL;

}
