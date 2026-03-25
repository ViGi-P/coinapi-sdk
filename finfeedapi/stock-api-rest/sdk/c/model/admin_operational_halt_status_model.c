#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_operational_halt_status_model.h"



static admin_operational_halt_status_model_t *admin_operational_halt_status_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *operational_halt_status,
    char *operational_halt_status_code,
    char *operational_halt_status_text,
    int *is_operationally_halted,
    int *is_not_operationally_halted
    ) {
    admin_operational_halt_status_model_t *admin_operational_halt_status_model_local_var = malloc(sizeof(admin_operational_halt_status_model_t));
    if (!admin_operational_halt_status_model_local_var) {
        return NULL;
    }
    memset(admin_operational_halt_status_model_local_var, 0, sizeof(admin_operational_halt_status_model_t));
    admin_operational_halt_status_model_local_var->_library_owned = 1;
    admin_operational_halt_status_model_local_var->symbol = symbol;
    admin_operational_halt_status_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_operational_halt_status_model_local_var->timestamp = timestamp;
    admin_operational_halt_status_model_local_var->operational_halt_status = operational_halt_status;
    admin_operational_halt_status_model_local_var->operational_halt_status_code = operational_halt_status_code;
    admin_operational_halt_status_model_local_var->operational_halt_status_text = operational_halt_status_text;
    admin_operational_halt_status_model_local_var->is_operationally_halted = is_operationally_halted;
    admin_operational_halt_status_model_local_var->is_not_operationally_halted = is_not_operationally_halted;
    return admin_operational_halt_status_model_local_var;
}

__attribute__((deprecated)) admin_operational_halt_status_model_t *admin_operational_halt_status_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *operational_halt_status,
    char *operational_halt_status_code,
    char *operational_halt_status_text,
    int *is_operationally_halted,
    int *is_not_operationally_halted
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *operational_halt_status_copy = NULL;
    if (operational_halt_status) {
        operational_halt_status_copy = malloc(sizeof(int));
        if (operational_halt_status_copy) *operational_halt_status_copy = *operational_halt_status;
    }
    int *is_operationally_halted_copy = NULL;
    if (is_operationally_halted) {
        is_operationally_halted_copy = malloc(sizeof(int));
        if (is_operationally_halted_copy) *is_operationally_halted_copy = *is_operationally_halted;
    }
    int *is_not_operationally_halted_copy = NULL;
    if (is_not_operationally_halted) {
        is_not_operationally_halted_copy = malloc(sizeof(int));
        if (is_not_operationally_halted_copy) *is_not_operationally_halted_copy = *is_not_operationally_halted;
    }
    admin_operational_halt_status_model_t *result = admin_operational_halt_status_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        operational_halt_status_copy,
        operational_halt_status_code,
        operational_halt_status_text,
        is_operationally_halted_copy,
        is_not_operationally_halted_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(operational_halt_status_copy);
        free(is_operationally_halted_copy);
        free(is_not_operationally_halted_copy);
    }
    return result;
}

void admin_operational_halt_status_model_free(admin_operational_halt_status_model_t *admin_operational_halt_status_model) {
    if(NULL == admin_operational_halt_status_model){
        return ;
    }
    if(admin_operational_halt_status_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_operational_halt_status_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_operational_halt_status_model->symbol) {
        free(admin_operational_halt_status_model->symbol);
        admin_operational_halt_status_model->symbol = NULL;
    }
    if (admin_operational_halt_status_model->timestamp_nanos) {
        free(admin_operational_halt_status_model->timestamp_nanos);
        admin_operational_halt_status_model->timestamp_nanos = NULL;
    }
    if (admin_operational_halt_status_model->timestamp) {
        free(admin_operational_halt_status_model->timestamp);
        admin_operational_halt_status_model->timestamp = NULL;
    }
    if (admin_operational_halt_status_model->operational_halt_status) {
        free(admin_operational_halt_status_model->operational_halt_status);
        admin_operational_halt_status_model->operational_halt_status = NULL;
    }
    if (admin_operational_halt_status_model->operational_halt_status_code) {
        free(admin_operational_halt_status_model->operational_halt_status_code);
        admin_operational_halt_status_model->operational_halt_status_code = NULL;
    }
    if (admin_operational_halt_status_model->operational_halt_status_text) {
        free(admin_operational_halt_status_model->operational_halt_status_text);
        admin_operational_halt_status_model->operational_halt_status_text = NULL;
    }
    if (admin_operational_halt_status_model->is_operationally_halted) {
        free(admin_operational_halt_status_model->is_operationally_halted);
        admin_operational_halt_status_model->is_operationally_halted = NULL;
    }
    if (admin_operational_halt_status_model->is_not_operationally_halted) {
        free(admin_operational_halt_status_model->is_not_operationally_halted);
        admin_operational_halt_status_model->is_not_operationally_halted = NULL;
    }
    free(admin_operational_halt_status_model);
}

cJSON *admin_operational_halt_status_model_convertToJSON(admin_operational_halt_status_model_t *admin_operational_halt_status_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_operational_halt_status_model->symbol
    if(admin_operational_halt_status_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_operational_halt_status_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_operational_halt_status_model->timestamp_nanos
    if(admin_operational_halt_status_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_operational_halt_status_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_operational_halt_status_model->timestamp
    if(admin_operational_halt_status_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_operational_halt_status_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_operational_halt_status_model->operational_halt_status
    if(admin_operational_halt_status_model->operational_halt_status) {
    if(cJSON_AddNumberToObject(item, "operational_halt_status", *admin_operational_halt_status_model->operational_halt_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_operational_halt_status_model->operational_halt_status_code
    if(admin_operational_halt_status_model->operational_halt_status_code) {
    if(cJSON_AddStringToObject(item, "operational_halt_status_code", admin_operational_halt_status_model->operational_halt_status_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_operational_halt_status_model->operational_halt_status_text
    if(admin_operational_halt_status_model->operational_halt_status_text) {
    if(cJSON_AddStringToObject(item, "operational_halt_status_text", admin_operational_halt_status_model->operational_halt_status_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_operational_halt_status_model->is_operationally_halted
    if(admin_operational_halt_status_model->is_operationally_halted) {
    if(cJSON_AddBoolToObject(item, "is_operationally_halted", *admin_operational_halt_status_model->is_operationally_halted) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_operational_halt_status_model->is_not_operationally_halted
    if(admin_operational_halt_status_model->is_not_operationally_halted) {
    if(cJSON_AddBoolToObject(item, "is_not_operationally_halted", *admin_operational_halt_status_model->is_not_operationally_halted) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

admin_operational_halt_status_model_t *admin_operational_halt_status_model_parseFromJSON(cJSON *admin_operational_halt_status_modelJSON){

    admin_operational_halt_status_model_t *admin_operational_halt_status_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_operational_halt_status_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_operational_halt_status_model->operational_halt_status
    int *operational_halt_status_local_var = NULL;

    char *operational_halt_status_code_local_str = NULL;

    char *operational_halt_status_text_local_str = NULL;

    // define the local variable for admin_operational_halt_status_model->is_operationally_halted
    int *is_operationally_halted_local_var = NULL;

    // define the local variable for admin_operational_halt_status_model->is_not_operationally_halted
    int *is_not_operationally_halted_local_var = NULL;

    // admin_operational_halt_status_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_operational_halt_status_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "timestamp_nanos");
    if (cJSON_IsNull(timestamp_nanos)) {
        timestamp_nanos = NULL;
    }
    if (timestamp_nanos) { 
    if(!cJSON_IsNumber(timestamp_nanos))
    {
    goto end; //Numeric
    }
    timestamp_nanos_local_var = malloc(sizeof(long));
    if(!timestamp_nanos_local_var)
    {
        goto end;
    }
    *timestamp_nanos_local_var = timestamp_nanos->valuedouble;
    }

    // admin_operational_halt_status_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_operational_halt_status_model->operational_halt_status
    cJSON *operational_halt_status = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "operational_halt_status");
    if (cJSON_IsNull(operational_halt_status)) {
        operational_halt_status = NULL;
    }
    if (operational_halt_status) { 
    if(!cJSON_IsNumber(operational_halt_status))
    {
    goto end; //Numeric
    }
    operational_halt_status_local_var = malloc(sizeof(int));
    if(!operational_halt_status_local_var)
    {
        goto end;
    }
    *operational_halt_status_local_var = operational_halt_status->valuedouble;
    }

    // admin_operational_halt_status_model->operational_halt_status_code
    cJSON *operational_halt_status_code = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "operational_halt_status_code");
    if (cJSON_IsNull(operational_halt_status_code)) {
        operational_halt_status_code = NULL;
    }
    if (operational_halt_status_code) { 
    if(!cJSON_IsString(operational_halt_status_code) && !cJSON_IsNull(operational_halt_status_code))
    {
    goto end; //String
    }
    }

    // admin_operational_halt_status_model->operational_halt_status_text
    cJSON *operational_halt_status_text = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "operational_halt_status_text");
    if (cJSON_IsNull(operational_halt_status_text)) {
        operational_halt_status_text = NULL;
    }
    if (operational_halt_status_text) { 
    if(!cJSON_IsString(operational_halt_status_text) && !cJSON_IsNull(operational_halt_status_text))
    {
    goto end; //String
    }
    }

    // admin_operational_halt_status_model->is_operationally_halted
    cJSON *is_operationally_halted = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "is_operationally_halted");
    if (cJSON_IsNull(is_operationally_halted)) {
        is_operationally_halted = NULL;
    }
    if (is_operationally_halted) { 
    if(!cJSON_IsBool(is_operationally_halted))
    {
    goto end; //Bool
    }
    is_operationally_halted_local_var = malloc(sizeof(int));
    if(!is_operationally_halted_local_var)
    {
        goto end;
    }
    *is_operationally_halted_local_var = is_operationally_halted->valueint;
    }

    // admin_operational_halt_status_model->is_not_operationally_halted
    cJSON *is_not_operationally_halted = cJSON_GetObjectItemCaseSensitive(admin_operational_halt_status_modelJSON, "is_not_operationally_halted");
    if (cJSON_IsNull(is_not_operationally_halted)) {
        is_not_operationally_halted = NULL;
    }
    if (is_not_operationally_halted) { 
    if(!cJSON_IsBool(is_not_operationally_halted))
    {
    goto end; //Bool
    }
    is_not_operationally_halted_local_var = malloc(sizeof(int));
    if(!is_not_operationally_halted_local_var)
    {
        goto end;
    }
    *is_not_operationally_halted_local_var = is_not_operationally_halted->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (operational_halt_status_code && !cJSON_IsNull(operational_halt_status_code)) operational_halt_status_code_local_str = strdup(operational_halt_status_code->valuestring);
    if (operational_halt_status_text && !cJSON_IsNull(operational_halt_status_text)) operational_halt_status_text_local_str = strdup(operational_halt_status_text->valuestring);

    admin_operational_halt_status_model_local_var = admin_operational_halt_status_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        operational_halt_status_local_var,
        operational_halt_status_code_local_str,
        operational_halt_status_text_local_str,
        is_operationally_halted_local_var,
        is_not_operationally_halted_local_var
        );

    if (!admin_operational_halt_status_model_local_var) {
        goto end;
    }

    return admin_operational_halt_status_model_local_var;
end:
    if (symbol_local_str) {
        free(symbol_local_str);
        symbol_local_str = NULL;
    }
    if (timestamp_nanos_local_var) {
        free(timestamp_nanos_local_var);
        timestamp_nanos_local_var = NULL;
    }
    if (timestamp_local_str) {
        free(timestamp_local_str);
        timestamp_local_str = NULL;
    }
    if (operational_halt_status_local_var) {
        free(operational_halt_status_local_var);
        operational_halt_status_local_var = NULL;
    }
    if (operational_halt_status_code_local_str) {
        free(operational_halt_status_code_local_str);
        operational_halt_status_code_local_str = NULL;
    }
    if (operational_halt_status_text_local_str) {
        free(operational_halt_status_text_local_str);
        operational_halt_status_text_local_str = NULL;
    }
    if (is_operationally_halted_local_var) {
        free(is_operationally_halted_local_var);
        is_operationally_halted_local_var = NULL;
    }
    if (is_not_operationally_halted_local_var) {
        free(is_not_operationally_halted_local_var);
        is_not_operationally_halted_local_var = NULL;
    }
    return NULL;

}
