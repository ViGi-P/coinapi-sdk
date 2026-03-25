#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_metric_data.h"



static v1_metric_data_t *v1_metric_data_create_internal(
    char *symbol_id,
    char *time,
    double *value
    ) {
    v1_metric_data_t *v1_metric_data_local_var = malloc(sizeof(v1_metric_data_t));
    if (!v1_metric_data_local_var) {
        return NULL;
    }
    memset(v1_metric_data_local_var, 0, sizeof(v1_metric_data_t));
    v1_metric_data_local_var->_library_owned = 1;
    v1_metric_data_local_var->symbol_id = symbol_id;
    v1_metric_data_local_var->time = time;
    v1_metric_data_local_var->value = value;
    return v1_metric_data_local_var;
}

__attribute__((deprecated)) v1_metric_data_t *v1_metric_data_create(
    char *symbol_id,
    char *time,
    double *value
    ) {
    double *value_copy = NULL;
    if (value) {
        value_copy = malloc(sizeof(double));
        if (value_copy) *value_copy = *value;
    }
    v1_metric_data_t *result = v1_metric_data_create_internal (
        symbol_id,
        time,
        value_copy
        );
    if (!result) {
        free(value_copy);
    }
    return result;
}

void v1_metric_data_free(v1_metric_data_t *v1_metric_data) {
    if(NULL == v1_metric_data){
        return ;
    }
    if(v1_metric_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_metric_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_metric_data->symbol_id) {
        free(v1_metric_data->symbol_id);
        v1_metric_data->symbol_id = NULL;
    }
    if (v1_metric_data->time) {
        free(v1_metric_data->time);
        v1_metric_data->time = NULL;
    }
    if (v1_metric_data->value) {
        free(v1_metric_data->value);
        v1_metric_data->value = NULL;
    }
    free(v1_metric_data);
}

cJSON *v1_metric_data_convertToJSON(v1_metric_data_t *v1_metric_data) {
    cJSON *item = cJSON_CreateObject();

    // v1_metric_data->symbol_id
    if(v1_metric_data->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_metric_data->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_metric_data->time
    if(v1_metric_data->time) {
    if(cJSON_AddStringToObject(item, "time", v1_metric_data->time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_metric_data->value
    if(v1_metric_data->value) {
    if(cJSON_AddNumberToObject(item, "value", *v1_metric_data->value) == NULL) {
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

v1_metric_data_t *v1_metric_data_parseFromJSON(cJSON *v1_metric_dataJSON){

    v1_metric_data_t *v1_metric_data_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *time_local_str = NULL;

    // define the local variable for v1_metric_data->value
    double *value_local_var = NULL;

    // v1_metric_data->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_metric_dataJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_metric_data->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v1_metric_dataJSON, "time");
    if (cJSON_IsNull(time)) {
        time = NULL;
    }
    if (time) { 
    if(!cJSON_IsString(time) && !cJSON_IsNull(time))
    {
    goto end; //DateTime
    }
    }

    // v1_metric_data->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(v1_metric_dataJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    value_local_var = malloc(sizeof(double));
    if(!value_local_var)
    {
        goto end;
    }
    *value_local_var = value->valuedouble;
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (time && !cJSON_IsNull(time)) time_local_str = strdup(time->valuestring);

    v1_metric_data_local_var = v1_metric_data_create_internal (
        symbol_id_local_str,
        time_local_str,
        value_local_var
        );

    if (!v1_metric_data_local_var) {
        goto end;
    }

    return v1_metric_data_local_var;
end:
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (time_local_str) {
        free(time_local_str);
        time_local_str = NULL;
    }
    if (value_local_var) {
        free(value_local_var);
        value_local_var = NULL;
    }
    return NULL;

}
