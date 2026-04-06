#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_timeseries_period.h"



static models_timeseries_period_t *models_timeseries_period_create_internal(
    char *period_id,
    int *length_seconds,
    int *length_months,
    int *unit_count,
    char *unit_name,
    char *display_name
    ) {
    models_timeseries_period_t *models_timeseries_period_local_var = malloc(sizeof(models_timeseries_period_t));
    if (!models_timeseries_period_local_var) {
        return NULL;
    }
    memset(models_timeseries_period_local_var, 0, sizeof(models_timeseries_period_t));
    models_timeseries_period_local_var->_library_owned = 1;
    models_timeseries_period_local_var->period_id = period_id;
    models_timeseries_period_local_var->length_seconds = length_seconds;
    models_timeseries_period_local_var->length_months = length_months;
    models_timeseries_period_local_var->unit_count = unit_count;
    models_timeseries_period_local_var->unit_name = unit_name;
    models_timeseries_period_local_var->display_name = display_name;
    return models_timeseries_period_local_var;
}

__attribute__((deprecated)) models_timeseries_period_t *models_timeseries_period_create(
    char *period_id,
    int *length_seconds,
    int *length_months,
    int *unit_count,
    char *unit_name,
    char *display_name
    ) {
    int *length_seconds_copy = NULL;
    if (length_seconds) {
        length_seconds_copy = malloc(sizeof(int));
        if (length_seconds_copy) *length_seconds_copy = *length_seconds;
    }
    int *length_months_copy = NULL;
    if (length_months) {
        length_months_copy = malloc(sizeof(int));
        if (length_months_copy) *length_months_copy = *length_months;
    }
    int *unit_count_copy = NULL;
    if (unit_count) {
        unit_count_copy = malloc(sizeof(int));
        if (unit_count_copy) *unit_count_copy = *unit_count;
    }
    models_timeseries_period_t *result = models_timeseries_period_create_internal (
        period_id,
        length_seconds_copy,
        length_months_copy,
        unit_count_copy,
        unit_name,
        display_name
        );
    if (!result) {
        free(length_seconds_copy);
        free(length_months_copy);
        free(unit_count_copy);
    }
    return result;
}

void models_timeseries_period_free(models_timeseries_period_t *models_timeseries_period) {
    if(NULL == models_timeseries_period){
        return ;
    }
    if(models_timeseries_period->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_timeseries_period_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_timeseries_period->period_id) {
        free(models_timeseries_period->period_id);
        models_timeseries_period->period_id = NULL;
    }
    if (models_timeseries_period->length_seconds) {
        free(models_timeseries_period->length_seconds);
        models_timeseries_period->length_seconds = NULL;
    }
    if (models_timeseries_period->length_months) {
        free(models_timeseries_period->length_months);
        models_timeseries_period->length_months = NULL;
    }
    if (models_timeseries_period->unit_count) {
        free(models_timeseries_period->unit_count);
        models_timeseries_period->unit_count = NULL;
    }
    if (models_timeseries_period->unit_name) {
        free(models_timeseries_period->unit_name);
        models_timeseries_period->unit_name = NULL;
    }
    if (models_timeseries_period->display_name) {
        free(models_timeseries_period->display_name);
        models_timeseries_period->display_name = NULL;
    }
    free(models_timeseries_period);
}

cJSON *models_timeseries_period_convertToJSON(models_timeseries_period_t *models_timeseries_period) {
    cJSON *item = cJSON_CreateObject();

    // models_timeseries_period->period_id
    if(models_timeseries_period->period_id) {
    if(cJSON_AddStringToObject(item, "period_id", models_timeseries_period->period_id) == NULL) {
    goto fail; //String
    }
    }


    // models_timeseries_period->length_seconds
    if(models_timeseries_period->length_seconds) {
    if(cJSON_AddNumberToObject(item, "length_seconds", *models_timeseries_period->length_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_timeseries_period->length_months
    if(models_timeseries_period->length_months) {
    if(cJSON_AddNumberToObject(item, "length_months", *models_timeseries_period->length_months) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_timeseries_period->unit_count
    if(models_timeseries_period->unit_count) {
    if(cJSON_AddNumberToObject(item, "unit_count", *models_timeseries_period->unit_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_timeseries_period->unit_name
    if(models_timeseries_period->unit_name) {
    if(cJSON_AddStringToObject(item, "unit_name", models_timeseries_period->unit_name) == NULL) {
    goto fail; //String
    }
    }


    // models_timeseries_period->display_name
    if(models_timeseries_period->display_name) {
    if(cJSON_AddStringToObject(item, "display_name", models_timeseries_period->display_name) == NULL) {
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

models_timeseries_period_t *models_timeseries_period_parseFromJSON(cJSON *models_timeseries_periodJSON){

    models_timeseries_period_t *models_timeseries_period_local_var = NULL;

    char *period_id_local_str = NULL;

    // define the local variable for models_timeseries_period->length_seconds
    int *length_seconds_local_var = NULL;

    // define the local variable for models_timeseries_period->length_months
    int *length_months_local_var = NULL;

    // define the local variable for models_timeseries_period->unit_count
    int *unit_count_local_var = NULL;

    char *unit_name_local_str = NULL;

    char *display_name_local_str = NULL;

    // models_timeseries_period->period_id
    cJSON *period_id = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "period_id");
    if (cJSON_IsNull(period_id)) {
        period_id = NULL;
    }
    if (period_id) { 
    if(!cJSON_IsString(period_id) && !cJSON_IsNull(period_id))
    {
    goto end; //String
    }
    }

    // models_timeseries_period->length_seconds
    cJSON *length_seconds = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "length_seconds");
    if (cJSON_IsNull(length_seconds)) {
        length_seconds = NULL;
    }
    if (length_seconds) { 
    if(!cJSON_IsNumber(length_seconds))
    {
    goto end; //Numeric
    }
    length_seconds_local_var = malloc(sizeof(int));
    if(!length_seconds_local_var)
    {
        goto end;
    }
    *length_seconds_local_var = length_seconds->valuedouble;
    }

    // models_timeseries_period->length_months
    cJSON *length_months = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "length_months");
    if (cJSON_IsNull(length_months)) {
        length_months = NULL;
    }
    if (length_months) { 
    if(!cJSON_IsNumber(length_months))
    {
    goto end; //Numeric
    }
    length_months_local_var = malloc(sizeof(int));
    if(!length_months_local_var)
    {
        goto end;
    }
    *length_months_local_var = length_months->valuedouble;
    }

    // models_timeseries_period->unit_count
    cJSON *unit_count = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "unit_count");
    if (cJSON_IsNull(unit_count)) {
        unit_count = NULL;
    }
    if (unit_count) { 
    if(!cJSON_IsNumber(unit_count))
    {
    goto end; //Numeric
    }
    unit_count_local_var = malloc(sizeof(int));
    if(!unit_count_local_var)
    {
        goto end;
    }
    *unit_count_local_var = unit_count->valuedouble;
    }

    // models_timeseries_period->unit_name
    cJSON *unit_name = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "unit_name");
    if (cJSON_IsNull(unit_name)) {
        unit_name = NULL;
    }
    if (unit_name) { 
    if(!cJSON_IsString(unit_name) && !cJSON_IsNull(unit_name))
    {
    goto end; //String
    }
    }

    // models_timeseries_period->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(models_timeseries_periodJSON, "display_name");
    if (cJSON_IsNull(display_name)) {
        display_name = NULL;
    }
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }


    if (period_id && !cJSON_IsNull(period_id)) period_id_local_str = strdup(period_id->valuestring);
    if (unit_name && !cJSON_IsNull(unit_name)) unit_name_local_str = strdup(unit_name->valuestring);
    if (display_name && !cJSON_IsNull(display_name)) display_name_local_str = strdup(display_name->valuestring);

    models_timeseries_period_local_var = models_timeseries_period_create_internal (
        period_id_local_str,
        length_seconds_local_var,
        length_months_local_var,
        unit_count_local_var,
        unit_name_local_str,
        display_name_local_str
        );

    if (!models_timeseries_period_local_var) {
        goto end;
    }

    return models_timeseries_period_local_var;
end:
    if (period_id_local_str) {
        free(period_id_local_str);
        period_id_local_str = NULL;
    }
    if (length_seconds_local_var) {
        free(length_seconds_local_var);
        length_seconds_local_var = NULL;
    }
    if (length_months_local_var) {
        free(length_months_local_var);
        length_months_local_var = NULL;
    }
    if (unit_count_local_var) {
        free(unit_count_local_var);
        unit_count_local_var = NULL;
    }
    if (unit_name_local_str) {
        free(unit_name_local_str);
        unit_name_local_str = NULL;
    }
    if (display_name_local_str) {
        free(display_name_local_str);
        display_name_local_str = NULL;
    }
    return NULL;

}
