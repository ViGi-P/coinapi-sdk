#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ohlcv_timeseries_period.h"



static ohlcv_timeseries_period_t *ohlcv_timeseries_period_create_internal(
    char *period_id,
    int *length_seconds,
    int *length_months,
    int *unit_count,
    char *unit_name,
    char *display_name
    ) {
    ohlcv_timeseries_period_t *ohlcv_timeseries_period_local_var = malloc(sizeof(ohlcv_timeseries_period_t));
    if (!ohlcv_timeseries_period_local_var) {
        return NULL;
    }
    memset(ohlcv_timeseries_period_local_var, 0, sizeof(ohlcv_timeseries_period_t));
    ohlcv_timeseries_period_local_var->_library_owned = 1;
    ohlcv_timeseries_period_local_var->period_id = period_id;
    ohlcv_timeseries_period_local_var->length_seconds = length_seconds;
    ohlcv_timeseries_period_local_var->length_months = length_months;
    ohlcv_timeseries_period_local_var->unit_count = unit_count;
    ohlcv_timeseries_period_local_var->unit_name = unit_name;
    ohlcv_timeseries_period_local_var->display_name = display_name;
    return ohlcv_timeseries_period_local_var;
}

__attribute__((deprecated)) ohlcv_timeseries_period_t *ohlcv_timeseries_period_create(
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
    ohlcv_timeseries_period_t *result = ohlcv_timeseries_period_create_internal (
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

void ohlcv_timeseries_period_free(ohlcv_timeseries_period_t *ohlcv_timeseries_period) {
    if(NULL == ohlcv_timeseries_period){
        return ;
    }
    if(ohlcv_timeseries_period->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ohlcv_timeseries_period_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ohlcv_timeseries_period->period_id) {
        free(ohlcv_timeseries_period->period_id);
        ohlcv_timeseries_period->period_id = NULL;
    }
    if (ohlcv_timeseries_period->length_seconds) {
        free(ohlcv_timeseries_period->length_seconds);
        ohlcv_timeseries_period->length_seconds = NULL;
    }
    if (ohlcv_timeseries_period->length_months) {
        free(ohlcv_timeseries_period->length_months);
        ohlcv_timeseries_period->length_months = NULL;
    }
    if (ohlcv_timeseries_period->unit_count) {
        free(ohlcv_timeseries_period->unit_count);
        ohlcv_timeseries_period->unit_count = NULL;
    }
    if (ohlcv_timeseries_period->unit_name) {
        free(ohlcv_timeseries_period->unit_name);
        ohlcv_timeseries_period->unit_name = NULL;
    }
    if (ohlcv_timeseries_period->display_name) {
        free(ohlcv_timeseries_period->display_name);
        ohlcv_timeseries_period->display_name = NULL;
    }
    free(ohlcv_timeseries_period);
}

cJSON *ohlcv_timeseries_period_convertToJSON(ohlcv_timeseries_period_t *ohlcv_timeseries_period) {
    cJSON *item = cJSON_CreateObject();

    // ohlcv_timeseries_period->period_id
    if(ohlcv_timeseries_period->period_id) {
    if(cJSON_AddStringToObject(item, "period_id", ohlcv_timeseries_period->period_id) == NULL) {
    goto fail; //String
    }
    }


    // ohlcv_timeseries_period->length_seconds
    if(ohlcv_timeseries_period->length_seconds) {
    if(cJSON_AddNumberToObject(item, "length_seconds", *ohlcv_timeseries_period->length_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_period->length_months
    if(ohlcv_timeseries_period->length_months) {
    if(cJSON_AddNumberToObject(item, "length_months", *ohlcv_timeseries_period->length_months) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_period->unit_count
    if(ohlcv_timeseries_period->unit_count) {
    if(cJSON_AddNumberToObject(item, "unit_count", *ohlcv_timeseries_period->unit_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // ohlcv_timeseries_period->unit_name
    if(ohlcv_timeseries_period->unit_name) {
    if(cJSON_AddStringToObject(item, "unit_name", ohlcv_timeseries_period->unit_name) == NULL) {
    goto fail; //String
    }
    }


    // ohlcv_timeseries_period->display_name
    if(ohlcv_timeseries_period->display_name) {
    if(cJSON_AddStringToObject(item, "display_name", ohlcv_timeseries_period->display_name) == NULL) {
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

ohlcv_timeseries_period_t *ohlcv_timeseries_period_parseFromJSON(cJSON *ohlcv_timeseries_periodJSON){

    ohlcv_timeseries_period_t *ohlcv_timeseries_period_local_var = NULL;

    char *period_id_local_str = NULL;

    // define the local variable for ohlcv_timeseries_period->length_seconds
    int *length_seconds_local_var = NULL;

    // define the local variable for ohlcv_timeseries_period->length_months
    int *length_months_local_var = NULL;

    // define the local variable for ohlcv_timeseries_period->unit_count
    int *unit_count_local_var = NULL;

    char *unit_name_local_str = NULL;

    char *display_name_local_str = NULL;

    // ohlcv_timeseries_period->period_id
    cJSON *period_id = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "period_id");
    if (cJSON_IsNull(period_id)) {
        period_id = NULL;
    }
    if (period_id) { 
    if(!cJSON_IsString(period_id) && !cJSON_IsNull(period_id))
    {
    goto end; //String
    }
    }

    // ohlcv_timeseries_period->length_seconds
    cJSON *length_seconds = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "length_seconds");
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

    // ohlcv_timeseries_period->length_months
    cJSON *length_months = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "length_months");
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

    // ohlcv_timeseries_period->unit_count
    cJSON *unit_count = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "unit_count");
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

    // ohlcv_timeseries_period->unit_name
    cJSON *unit_name = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "unit_name");
    if (cJSON_IsNull(unit_name)) {
        unit_name = NULL;
    }
    if (unit_name) { 
    if(!cJSON_IsString(unit_name) && !cJSON_IsNull(unit_name))
    {
    goto end; //String
    }
    }

    // ohlcv_timeseries_period->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(ohlcv_timeseries_periodJSON, "display_name");
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

    ohlcv_timeseries_period_local_var = ohlcv_timeseries_period_create_internal (
        period_id_local_str,
        length_seconds_local_var,
        length_months_local_var,
        unit_count_local_var,
        unit_name_local_str,
        display_name_local_str
        );

    if (!ohlcv_timeseries_period_local_var) {
        goto end;
    }

    return ohlcv_timeseries_period_local_var;
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
