#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_general_data.h"



static v1_general_data_t *v1_general_data_create_internal(
    char *entry_time,
    char *recv_time,
    char *exchange_id,
    char *asset_id,
    char *symbol_id,
    char *metric_id,
    double *value_decimal,
    char *value_text,
    char *value_time
    ) {
    v1_general_data_t *v1_general_data_local_var = malloc(sizeof(v1_general_data_t));
    if (!v1_general_data_local_var) {
        return NULL;
    }
    memset(v1_general_data_local_var, 0, sizeof(v1_general_data_t));
    v1_general_data_local_var->_library_owned = 1;
    v1_general_data_local_var->entry_time = entry_time;
    v1_general_data_local_var->recv_time = recv_time;
    v1_general_data_local_var->exchange_id = exchange_id;
    v1_general_data_local_var->asset_id = asset_id;
    v1_general_data_local_var->symbol_id = symbol_id;
    v1_general_data_local_var->metric_id = metric_id;
    v1_general_data_local_var->value_decimal = value_decimal;
    v1_general_data_local_var->value_text = value_text;
    v1_general_data_local_var->value_time = value_time;
    return v1_general_data_local_var;
}

__attribute__((deprecated)) v1_general_data_t *v1_general_data_create(
    char *entry_time,
    char *recv_time,
    char *exchange_id,
    char *asset_id,
    char *symbol_id,
    char *metric_id,
    double *value_decimal,
    char *value_text,
    char *value_time
    ) {
    double *value_decimal_copy = NULL;
    if (value_decimal) {
        value_decimal_copy = malloc(sizeof(double));
        if (value_decimal_copy) *value_decimal_copy = *value_decimal;
    }
    v1_general_data_t *result = v1_general_data_create_internal (
        entry_time,
        recv_time,
        exchange_id,
        asset_id,
        symbol_id,
        metric_id,
        value_decimal_copy,
        value_text,
        value_time
        );
    if (!result) {
        free(value_decimal_copy);
    }
    return result;
}

void v1_general_data_free(v1_general_data_t *v1_general_data) {
    if(NULL == v1_general_data){
        return ;
    }
    if(v1_general_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_general_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_general_data->entry_time) {
        free(v1_general_data->entry_time);
        v1_general_data->entry_time = NULL;
    }
    if (v1_general_data->recv_time) {
        free(v1_general_data->recv_time);
        v1_general_data->recv_time = NULL;
    }
    if (v1_general_data->exchange_id) {
        free(v1_general_data->exchange_id);
        v1_general_data->exchange_id = NULL;
    }
    if (v1_general_data->asset_id) {
        free(v1_general_data->asset_id);
        v1_general_data->asset_id = NULL;
    }
    if (v1_general_data->symbol_id) {
        free(v1_general_data->symbol_id);
        v1_general_data->symbol_id = NULL;
    }
    if (v1_general_data->metric_id) {
        free(v1_general_data->metric_id);
        v1_general_data->metric_id = NULL;
    }
    if (v1_general_data->value_decimal) {
        free(v1_general_data->value_decimal);
        v1_general_data->value_decimal = NULL;
    }
    if (v1_general_data->value_text) {
        free(v1_general_data->value_text);
        v1_general_data->value_text = NULL;
    }
    if (v1_general_data->value_time) {
        free(v1_general_data->value_time);
        v1_general_data->value_time = NULL;
    }
    free(v1_general_data);
}

cJSON *v1_general_data_convertToJSON(v1_general_data_t *v1_general_data) {
    cJSON *item = cJSON_CreateObject();

    // v1_general_data->entry_time
    if(v1_general_data->entry_time) {
    if(cJSON_AddStringToObject(item, "entry_time", v1_general_data->entry_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_general_data->recv_time
    if(v1_general_data->recv_time) {
    if(cJSON_AddStringToObject(item, "recv_time", v1_general_data->recv_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_general_data->exchange_id
    if(v1_general_data->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", v1_general_data->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_general_data->asset_id
    if(v1_general_data->asset_id) {
    if(cJSON_AddStringToObject(item, "asset_id", v1_general_data->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_general_data->symbol_id
    if(v1_general_data->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_general_data->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_general_data->metric_id
    if(v1_general_data->metric_id) {
    if(cJSON_AddStringToObject(item, "metric_id", v1_general_data->metric_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_general_data->value_decimal
    if(v1_general_data->value_decimal) {
    if(cJSON_AddNumberToObject(item, "value_decimal", *v1_general_data->value_decimal) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_general_data->value_text
    if(v1_general_data->value_text) {
    if(cJSON_AddStringToObject(item, "value_text", v1_general_data->value_text) == NULL) {
    goto fail; //String
    }
    }


    // v1_general_data->value_time
    if(v1_general_data->value_time) {
    if(cJSON_AddStringToObject(item, "value_time", v1_general_data->value_time) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_general_data_t *v1_general_data_parseFromJSON(cJSON *v1_general_dataJSON){

    v1_general_data_t *v1_general_data_local_var = NULL;

    char *entry_time_local_str = NULL;

    char *recv_time_local_str = NULL;

    char *exchange_id_local_str = NULL;

    char *asset_id_local_str = NULL;

    char *symbol_id_local_str = NULL;

    char *metric_id_local_str = NULL;

    // define the local variable for v1_general_data->value_decimal
    double *value_decimal_local_var = NULL;

    char *value_text_local_str = NULL;

    char *value_time_local_str = NULL;

    // v1_general_data->entry_time
    cJSON *entry_time = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "entry_time");
    if (cJSON_IsNull(entry_time)) {
        entry_time = NULL;
    }
    if (entry_time) { 
    if(!cJSON_IsString(entry_time) && !cJSON_IsNull(entry_time))
    {
    goto end; //DateTime
    }
    }

    // v1_general_data->recv_time
    cJSON *recv_time = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "recv_time");
    if (cJSON_IsNull(recv_time)) {
        recv_time = NULL;
    }
    if (recv_time) { 
    if(!cJSON_IsString(recv_time) && !cJSON_IsNull(recv_time))
    {
    goto end; //DateTime
    }
    }

    // v1_general_data->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // v1_general_data->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "asset_id");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // v1_general_data->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_general_data->metric_id
    cJSON *metric_id = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "metric_id");
    if (cJSON_IsNull(metric_id)) {
        metric_id = NULL;
    }
    if (metric_id) { 
    if(!cJSON_IsString(metric_id) && !cJSON_IsNull(metric_id))
    {
    goto end; //String
    }
    }

    // v1_general_data->value_decimal
    cJSON *value_decimal = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "value_decimal");
    if (cJSON_IsNull(value_decimal)) {
        value_decimal = NULL;
    }
    if (value_decimal) { 
    if(!cJSON_IsNumber(value_decimal))
    {
    goto end; //Numeric
    }
    value_decimal_local_var = malloc(sizeof(double));
    if(!value_decimal_local_var)
    {
        goto end;
    }
    *value_decimal_local_var = value_decimal->valuedouble;
    }

    // v1_general_data->value_text
    cJSON *value_text = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "value_text");
    if (cJSON_IsNull(value_text)) {
        value_text = NULL;
    }
    if (value_text) { 
    if(!cJSON_IsString(value_text) && !cJSON_IsNull(value_text))
    {
    goto end; //String
    }
    }

    // v1_general_data->value_time
    cJSON *value_time = cJSON_GetObjectItemCaseSensitive(v1_general_dataJSON, "value_time");
    if (cJSON_IsNull(value_time)) {
        value_time = NULL;
    }
    if (value_time) { 
    if(!cJSON_IsString(value_time) && !cJSON_IsNull(value_time))
    {
    goto end; //DateTime
    }
    }


    if (entry_time && !cJSON_IsNull(entry_time)) entry_time_local_str = strdup(entry_time->valuestring);
    if (recv_time && !cJSON_IsNull(recv_time)) recv_time_local_str = strdup(recv_time->valuestring);
    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (asset_id && !cJSON_IsNull(asset_id)) asset_id_local_str = strdup(asset_id->valuestring);
    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (metric_id && !cJSON_IsNull(metric_id)) metric_id_local_str = strdup(metric_id->valuestring);
    if (value_text && !cJSON_IsNull(value_text)) value_text_local_str = strdup(value_text->valuestring);
    if (value_time && !cJSON_IsNull(value_time)) value_time_local_str = strdup(value_time->valuestring);

    v1_general_data_local_var = v1_general_data_create_internal (
        entry_time_local_str,
        recv_time_local_str,
        exchange_id_local_str,
        asset_id_local_str,
        symbol_id_local_str,
        metric_id_local_str,
        value_decimal_local_var,
        value_text_local_str,
        value_time_local_str
        );

    if (!v1_general_data_local_var) {
        goto end;
    }

    return v1_general_data_local_var;
end:
    if (entry_time_local_str) {
        free(entry_time_local_str);
        entry_time_local_str = NULL;
    }
    if (recv_time_local_str) {
        free(recv_time_local_str);
        recv_time_local_str = NULL;
    }
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (asset_id_local_str) {
        free(asset_id_local_str);
        asset_id_local_str = NULL;
    }
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (metric_id_local_str) {
        free(metric_id_local_str);
        metric_id_local_str = NULL;
    }
    if (value_decimal_local_var) {
        free(value_decimal_local_var);
        value_decimal_local_var = NULL;
    }
    if (value_text_local_str) {
        free(value_text_local_str);
        value_text_local_str = NULL;
    }
    if (value_time_local_str) {
        free(value_time_local_str);
        value_time_local_str = NULL;
    }
    return NULL;

}
