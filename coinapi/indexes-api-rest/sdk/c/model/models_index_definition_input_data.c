#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_index_definition_input_data.h"



static models_index_definition_input_data_t *models_index_definition_input_data_create_internal(
    char *exchange_id,
    char *exchange_symbol_id,
    char *base_asset_id,
    char *quote_asset_id,
    char *begin_date,
    char *end_date,
    char *status,
    char *status_info,
    char *last_modification_time
    ) {
    models_index_definition_input_data_t *models_index_definition_input_data_local_var = malloc(sizeof(models_index_definition_input_data_t));
    if (!models_index_definition_input_data_local_var) {
        return NULL;
    }
    memset(models_index_definition_input_data_local_var, 0, sizeof(models_index_definition_input_data_t));
    models_index_definition_input_data_local_var->_library_owned = 1;
    models_index_definition_input_data_local_var->exchange_id = exchange_id;
    models_index_definition_input_data_local_var->exchange_symbol_id = exchange_symbol_id;
    models_index_definition_input_data_local_var->base_asset_id = base_asset_id;
    models_index_definition_input_data_local_var->quote_asset_id = quote_asset_id;
    models_index_definition_input_data_local_var->begin_date = begin_date;
    models_index_definition_input_data_local_var->end_date = end_date;
    models_index_definition_input_data_local_var->status = status;
    models_index_definition_input_data_local_var->status_info = status_info;
    models_index_definition_input_data_local_var->last_modification_time = last_modification_time;
    return models_index_definition_input_data_local_var;
}

__attribute__((deprecated)) models_index_definition_input_data_t *models_index_definition_input_data_create(
    char *exchange_id,
    char *exchange_symbol_id,
    char *base_asset_id,
    char *quote_asset_id,
    char *begin_date,
    char *end_date,
    char *status,
    char *status_info,
    char *last_modification_time
    ) {
    models_index_definition_input_data_t *result = models_index_definition_input_data_create_internal (
        exchange_id,
        exchange_symbol_id,
        base_asset_id,
        quote_asset_id,
        begin_date,
        end_date,
        status,
        status_info,
        last_modification_time
        );
    if (!result) {
    }
    return result;
}

void models_index_definition_input_data_free(models_index_definition_input_data_t *models_index_definition_input_data) {
    if(NULL == models_index_definition_input_data){
        return ;
    }
    if(models_index_definition_input_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_index_definition_input_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_index_definition_input_data->exchange_id) {
        free(models_index_definition_input_data->exchange_id);
        models_index_definition_input_data->exchange_id = NULL;
    }
    if (models_index_definition_input_data->exchange_symbol_id) {
        free(models_index_definition_input_data->exchange_symbol_id);
        models_index_definition_input_data->exchange_symbol_id = NULL;
    }
    if (models_index_definition_input_data->base_asset_id) {
        free(models_index_definition_input_data->base_asset_id);
        models_index_definition_input_data->base_asset_id = NULL;
    }
    if (models_index_definition_input_data->quote_asset_id) {
        free(models_index_definition_input_data->quote_asset_id);
        models_index_definition_input_data->quote_asset_id = NULL;
    }
    if (models_index_definition_input_data->begin_date) {
        free(models_index_definition_input_data->begin_date);
        models_index_definition_input_data->begin_date = NULL;
    }
    if (models_index_definition_input_data->end_date) {
        free(models_index_definition_input_data->end_date);
        models_index_definition_input_data->end_date = NULL;
    }
    if (models_index_definition_input_data->status) {
        free(models_index_definition_input_data->status);
        models_index_definition_input_data->status = NULL;
    }
    if (models_index_definition_input_data->status_info) {
        free(models_index_definition_input_data->status_info);
        models_index_definition_input_data->status_info = NULL;
    }
    if (models_index_definition_input_data->last_modification_time) {
        free(models_index_definition_input_data->last_modification_time);
        models_index_definition_input_data->last_modification_time = NULL;
    }
    free(models_index_definition_input_data);
}

cJSON *models_index_definition_input_data_convertToJSON(models_index_definition_input_data_t *models_index_definition_input_data) {
    cJSON *item = cJSON_CreateObject();

    // models_index_definition_input_data->exchange_id
    if(models_index_definition_input_data->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchangeId", models_index_definition_input_data->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->exchange_symbol_id
    if(models_index_definition_input_data->exchange_symbol_id) {
    if(cJSON_AddStringToObject(item, "exchangeSymbolId", models_index_definition_input_data->exchange_symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->base_asset_id
    if(models_index_definition_input_data->base_asset_id) {
    if(cJSON_AddStringToObject(item, "baseAssetId", models_index_definition_input_data->base_asset_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->quote_asset_id
    if(models_index_definition_input_data->quote_asset_id) {
    if(cJSON_AddStringToObject(item, "quoteAssetId", models_index_definition_input_data->quote_asset_id) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->begin_date
    if(models_index_definition_input_data->begin_date) {
    if(cJSON_AddStringToObject(item, "beginDate", models_index_definition_input_data->begin_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_definition_input_data->end_date
    if(models_index_definition_input_data->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", models_index_definition_input_data->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_index_definition_input_data->status
    if(models_index_definition_input_data->status) {
    if(cJSON_AddStringToObject(item, "status", models_index_definition_input_data->status) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->status_info
    if(models_index_definition_input_data->status_info) {
    if(cJSON_AddStringToObject(item, "statusInfo", models_index_definition_input_data->status_info) == NULL) {
    goto fail; //String
    }
    }


    // models_index_definition_input_data->last_modification_time
    if(models_index_definition_input_data->last_modification_time) {
    if(cJSON_AddStringToObject(item, "lastModificationTime", models_index_definition_input_data->last_modification_time) == NULL) {
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

models_index_definition_input_data_t *models_index_definition_input_data_parseFromJSON(cJSON *models_index_definition_input_dataJSON){

    models_index_definition_input_data_t *models_index_definition_input_data_local_var = NULL;

    char *exchange_id_local_str = NULL;

    char *exchange_symbol_id_local_str = NULL;

    char *base_asset_id_local_str = NULL;

    char *quote_asset_id_local_str = NULL;

    char *begin_date_local_str = NULL;

    char *end_date_local_str = NULL;

    char *status_local_str = NULL;

    char *status_info_local_str = NULL;

    char *last_modification_time_local_str = NULL;

    // models_index_definition_input_data->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "exchangeId");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->exchange_symbol_id
    cJSON *exchange_symbol_id = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "exchangeSymbolId");
    if (cJSON_IsNull(exchange_symbol_id)) {
        exchange_symbol_id = NULL;
    }
    if (exchange_symbol_id) { 
    if(!cJSON_IsString(exchange_symbol_id) && !cJSON_IsNull(exchange_symbol_id))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->base_asset_id
    cJSON *base_asset_id = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "baseAssetId");
    if (cJSON_IsNull(base_asset_id)) {
        base_asset_id = NULL;
    }
    if (base_asset_id) { 
    if(!cJSON_IsString(base_asset_id) && !cJSON_IsNull(base_asset_id))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->quote_asset_id
    cJSON *quote_asset_id = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "quoteAssetId");
    if (cJSON_IsNull(quote_asset_id)) {
        quote_asset_id = NULL;
    }
    if (quote_asset_id) { 
    if(!cJSON_IsString(quote_asset_id) && !cJSON_IsNull(quote_asset_id))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->begin_date
    cJSON *begin_date = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "beginDate");
    if (cJSON_IsNull(begin_date)) {
        begin_date = NULL;
    }
    if (begin_date) { 
    if(!cJSON_IsString(begin_date) && !cJSON_IsNull(begin_date))
    {
    goto end; //DateTime
    }
    }

    // models_index_definition_input_data->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "endDate");
    if (cJSON_IsNull(end_date)) {
        end_date = NULL;
    }
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // models_index_definition_input_data->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->status_info
    cJSON *status_info = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "statusInfo");
    if (cJSON_IsNull(status_info)) {
        status_info = NULL;
    }
    if (status_info) { 
    if(!cJSON_IsString(status_info) && !cJSON_IsNull(status_info))
    {
    goto end; //String
    }
    }

    // models_index_definition_input_data->last_modification_time
    cJSON *last_modification_time = cJSON_GetObjectItemCaseSensitive(models_index_definition_input_dataJSON, "lastModificationTime");
    if (cJSON_IsNull(last_modification_time)) {
        last_modification_time = NULL;
    }
    if (last_modification_time) { 
    if(!cJSON_IsString(last_modification_time) && !cJSON_IsNull(last_modification_time))
    {
    goto end; //DateTime
    }
    }


    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (exchange_symbol_id && !cJSON_IsNull(exchange_symbol_id)) exchange_symbol_id_local_str = strdup(exchange_symbol_id->valuestring);
    if (base_asset_id && !cJSON_IsNull(base_asset_id)) base_asset_id_local_str = strdup(base_asset_id->valuestring);
    if (quote_asset_id && !cJSON_IsNull(quote_asset_id)) quote_asset_id_local_str = strdup(quote_asset_id->valuestring);
    if (begin_date && !cJSON_IsNull(begin_date)) begin_date_local_str = strdup(begin_date->valuestring);
    if (end_date && !cJSON_IsNull(end_date)) end_date_local_str = strdup(end_date->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (status_info && !cJSON_IsNull(status_info)) status_info_local_str = strdup(status_info->valuestring);
    if (last_modification_time && !cJSON_IsNull(last_modification_time)) last_modification_time_local_str = strdup(last_modification_time->valuestring);

    models_index_definition_input_data_local_var = models_index_definition_input_data_create_internal (
        exchange_id_local_str,
        exchange_symbol_id_local_str,
        base_asset_id_local_str,
        quote_asset_id_local_str,
        begin_date_local_str,
        end_date_local_str,
        status_local_str,
        status_info_local_str,
        last_modification_time_local_str
        );

    if (!models_index_definition_input_data_local_var) {
        goto end;
    }

    return models_index_definition_input_data_local_var;
end:
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (exchange_symbol_id_local_str) {
        free(exchange_symbol_id_local_str);
        exchange_symbol_id_local_str = NULL;
    }
    if (base_asset_id_local_str) {
        free(base_asset_id_local_str);
        base_asset_id_local_str = NULL;
    }
    if (quote_asset_id_local_str) {
        free(quote_asset_id_local_str);
        quote_asset_id_local_str = NULL;
    }
    if (begin_date_local_str) {
        free(begin_date_local_str);
        begin_date_local_str = NULL;
    }
    if (end_date_local_str) {
        free(end_date_local_str);
        end_date_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (status_info_local_str) {
        free(status_info_local_str);
        status_info_local_str = NULL;
    }
    if (last_modification_time_local_str) {
        free(last_modification_time_local_str);
        last_modification_time_local_str = NULL;
    }
    return NULL;

}
