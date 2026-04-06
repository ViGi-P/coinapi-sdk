#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_timeseries_item.h"



static models_index_timeseries_item_t *models_index_timeseries_item_create_internal(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *value_open,
    double *value_high,
    double *value_low,
    double *value_close,
    long *value_count
    ) {
    models_index_timeseries_item_t *models_index_timeseries_item_local_var = malloc(sizeof(models_index_timeseries_item_t));
    if (!models_index_timeseries_item_local_var) {
        return NULL;
    }
    memset(models_index_timeseries_item_local_var, 0, sizeof(models_index_timeseries_item_t));
    models_index_timeseries_item_local_var->_library_owned = 1;
    models_index_timeseries_item_local_var->time_period_start = time_period_start;
    models_index_timeseries_item_local_var->time_period_end = time_period_end;
    models_index_timeseries_item_local_var->time_open = time_open;
    models_index_timeseries_item_local_var->time_close = time_close;
    models_index_timeseries_item_local_var->value_open = value_open;
    models_index_timeseries_item_local_var->value_high = value_high;
    models_index_timeseries_item_local_var->value_low = value_low;
    models_index_timeseries_item_local_var->value_close = value_close;
    models_index_timeseries_item_local_var->value_count = value_count;
    return models_index_timeseries_item_local_var;
}

__attribute__((deprecated)) models_index_timeseries_item_t *models_index_timeseries_item_create(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *value_open,
    double *value_high,
    double *value_low,
    double *value_close,
    long *value_count
    ) {
    double *value_open_copy = NULL;
    if (value_open) {
        value_open_copy = malloc(sizeof(double));
        if (value_open_copy) *value_open_copy = *value_open;
    }
    double *value_high_copy = NULL;
    if (value_high) {
        value_high_copy = malloc(sizeof(double));
        if (value_high_copy) *value_high_copy = *value_high;
    }
    double *value_low_copy = NULL;
    if (value_low) {
        value_low_copy = malloc(sizeof(double));
        if (value_low_copy) *value_low_copy = *value_low;
    }
    double *value_close_copy = NULL;
    if (value_close) {
        value_close_copy = malloc(sizeof(double));
        if (value_close_copy) *value_close_copy = *value_close;
    }
    long *value_count_copy = NULL;
    if (value_count) {
        value_count_copy = malloc(sizeof(long));
        if (value_count_copy) *value_count_copy = *value_count;
    }
    models_index_timeseries_item_t *result = models_index_timeseries_item_create_internal (
        time_period_start,
        time_period_end,
        time_open,
        time_close,
        value_open_copy,
        value_high_copy,
        value_low_copy,
        value_close_copy,
        value_count_copy
        );
    if (!result) {
        free(value_open_copy);
        free(value_high_copy);
        free(value_low_copy);
        free(value_close_copy);
        free(value_count_copy);
    }
    return result;
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
    if (models_index_timeseries_item->value_open) {
        free(models_index_timeseries_item->value_open);
        models_index_timeseries_item->value_open = NULL;
    }
    if (models_index_timeseries_item->value_high) {
        free(models_index_timeseries_item->value_high);
        models_index_timeseries_item->value_high = NULL;
    }
    if (models_index_timeseries_item->value_low) {
        free(models_index_timeseries_item->value_low);
        models_index_timeseries_item->value_low = NULL;
    }
    if (models_index_timeseries_item->value_close) {
        free(models_index_timeseries_item->value_close);
        models_index_timeseries_item->value_close = NULL;
    }
    if (models_index_timeseries_item->value_count) {
        free(models_index_timeseries_item->value_count);
        models_index_timeseries_item->value_count = NULL;
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
    if(cJSON_AddNumberToObject(item, "value_open", *models_index_timeseries_item->value_open) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_high
    if(models_index_timeseries_item->value_high) {
    if(cJSON_AddNumberToObject(item, "value_high", *models_index_timeseries_item->value_high) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_low
    if(models_index_timeseries_item->value_low) {
    if(cJSON_AddNumberToObject(item, "value_low", *models_index_timeseries_item->value_low) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_close
    if(models_index_timeseries_item->value_close) {
    if(cJSON_AddNumberToObject(item, "value_close", *models_index_timeseries_item->value_close) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_index_timeseries_item->value_count
    if(models_index_timeseries_item->value_count) {
    if(cJSON_AddNumberToObject(item, "value_count", *models_index_timeseries_item->value_count) == NULL) {
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

    char *time_period_start_local_str = NULL;

    char *time_period_end_local_str = NULL;

    char *time_open_local_str = NULL;

    char *time_close_local_str = NULL;

    // define the local variable for models_index_timeseries_item->value_open
    double *value_open_local_var = NULL;

    // define the local variable for models_index_timeseries_item->value_high
    double *value_high_local_var = NULL;

    // define the local variable for models_index_timeseries_item->value_low
    double *value_low_local_var = NULL;

    // define the local variable for models_index_timeseries_item->value_close
    double *value_close_local_var = NULL;

    // define the local variable for models_index_timeseries_item->value_count
    long *value_count_local_var = NULL;

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
    value_open_local_var = malloc(sizeof(double));
    if(!value_open_local_var)
    {
        goto end;
    }
    *value_open_local_var = value_open->valuedouble;
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
    value_high_local_var = malloc(sizeof(double));
    if(!value_high_local_var)
    {
        goto end;
    }
    *value_high_local_var = value_high->valuedouble;
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
    value_low_local_var = malloc(sizeof(double));
    if(!value_low_local_var)
    {
        goto end;
    }
    *value_low_local_var = value_low->valuedouble;
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
    value_close_local_var = malloc(sizeof(double));
    if(!value_close_local_var)
    {
        goto end;
    }
    *value_close_local_var = value_close->valuedouble;
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
    value_count_local_var = malloc(sizeof(long));
    if(!value_count_local_var)
    {
        goto end;
    }
    *value_count_local_var = value_count->valuedouble;
    }


    if (time_period_start && !cJSON_IsNull(time_period_start)) time_period_start_local_str = strdup(time_period_start->valuestring);
    if (time_period_end && !cJSON_IsNull(time_period_end)) time_period_end_local_str = strdup(time_period_end->valuestring);
    if (time_open && !cJSON_IsNull(time_open)) time_open_local_str = strdup(time_open->valuestring);
    if (time_close && !cJSON_IsNull(time_close)) time_close_local_str = strdup(time_close->valuestring);

    models_index_timeseries_item_local_var = models_index_timeseries_item_create_internal (
        time_period_start_local_str,
        time_period_end_local_str,
        time_open_local_str,
        time_close_local_str,
        value_open_local_var,
        value_high_local_var,
        value_low_local_var,
        value_close_local_var,
        value_count_local_var
        );

    if (!models_index_timeseries_item_local_var) {
        goto end;
    }

    return models_index_timeseries_item_local_var;
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
    if (value_open_local_var) {
        free(value_open_local_var);
        value_open_local_var = NULL;
    }
    if (value_high_local_var) {
        free(value_high_local_var);
        value_high_local_var = NULL;
    }
    if (value_low_local_var) {
        free(value_low_local_var);
        value_low_local_var = NULL;
    }
    if (value_close_local_var) {
        free(value_close_local_var);
        value_close_local_var = NULL;
    }
    if (value_count_local_var) {
        free(value_count_local_var);
        value_count_local_var = NULL;
    }
    return NULL;

}
