#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_security_event_model.h"



static admin_security_event_model_t *admin_security_event_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *security_event,
    char *security_event_code,
    char *security_event_text,
    int *is_opening_process_complete,
    int *is_closing_process_complete
    ) {
    admin_security_event_model_t *admin_security_event_model_local_var = malloc(sizeof(admin_security_event_model_t));
    if (!admin_security_event_model_local_var) {
        return NULL;
    }
    memset(admin_security_event_model_local_var, 0, sizeof(admin_security_event_model_t));
    admin_security_event_model_local_var->_library_owned = 1;
    admin_security_event_model_local_var->symbol = symbol;
    admin_security_event_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_security_event_model_local_var->timestamp = timestamp;
    admin_security_event_model_local_var->security_event = security_event;
    admin_security_event_model_local_var->security_event_code = security_event_code;
    admin_security_event_model_local_var->security_event_text = security_event_text;
    admin_security_event_model_local_var->is_opening_process_complete = is_opening_process_complete;
    admin_security_event_model_local_var->is_closing_process_complete = is_closing_process_complete;
    return admin_security_event_model_local_var;
}

__attribute__((deprecated)) admin_security_event_model_t *admin_security_event_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *security_event,
    char *security_event_code,
    char *security_event_text,
    int *is_opening_process_complete,
    int *is_closing_process_complete
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *security_event_copy = NULL;
    if (security_event) {
        security_event_copy = malloc(sizeof(int));
        if (security_event_copy) *security_event_copy = *security_event;
    }
    int *is_opening_process_complete_copy = NULL;
    if (is_opening_process_complete) {
        is_opening_process_complete_copy = malloc(sizeof(int));
        if (is_opening_process_complete_copy) *is_opening_process_complete_copy = *is_opening_process_complete;
    }
    int *is_closing_process_complete_copy = NULL;
    if (is_closing_process_complete) {
        is_closing_process_complete_copy = malloc(sizeof(int));
        if (is_closing_process_complete_copy) *is_closing_process_complete_copy = *is_closing_process_complete;
    }
    admin_security_event_model_t *result = admin_security_event_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        security_event_copy,
        security_event_code,
        security_event_text,
        is_opening_process_complete_copy,
        is_closing_process_complete_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(security_event_copy);
        free(is_opening_process_complete_copy);
        free(is_closing_process_complete_copy);
    }
    return result;
}

void admin_security_event_model_free(admin_security_event_model_t *admin_security_event_model) {
    if(NULL == admin_security_event_model){
        return ;
    }
    if(admin_security_event_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_security_event_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_security_event_model->symbol) {
        free(admin_security_event_model->symbol);
        admin_security_event_model->symbol = NULL;
    }
    if (admin_security_event_model->timestamp_nanos) {
        free(admin_security_event_model->timestamp_nanos);
        admin_security_event_model->timestamp_nanos = NULL;
    }
    if (admin_security_event_model->timestamp) {
        free(admin_security_event_model->timestamp);
        admin_security_event_model->timestamp = NULL;
    }
    if (admin_security_event_model->security_event) {
        free(admin_security_event_model->security_event);
        admin_security_event_model->security_event = NULL;
    }
    if (admin_security_event_model->security_event_code) {
        free(admin_security_event_model->security_event_code);
        admin_security_event_model->security_event_code = NULL;
    }
    if (admin_security_event_model->security_event_text) {
        free(admin_security_event_model->security_event_text);
        admin_security_event_model->security_event_text = NULL;
    }
    if (admin_security_event_model->is_opening_process_complete) {
        free(admin_security_event_model->is_opening_process_complete);
        admin_security_event_model->is_opening_process_complete = NULL;
    }
    if (admin_security_event_model->is_closing_process_complete) {
        free(admin_security_event_model->is_closing_process_complete);
        admin_security_event_model->is_closing_process_complete = NULL;
    }
    free(admin_security_event_model);
}

cJSON *admin_security_event_model_convertToJSON(admin_security_event_model_t *admin_security_event_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_security_event_model->symbol
    if(admin_security_event_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_security_event_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_event_model->timestamp_nanos
    if(admin_security_event_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_security_event_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_event_model->timestamp
    if(admin_security_event_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_security_event_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_security_event_model->security_event
    if(admin_security_event_model->security_event) {
    if(cJSON_AddNumberToObject(item, "security_event", *admin_security_event_model->security_event) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_event_model->security_event_code
    if(admin_security_event_model->security_event_code) {
    if(cJSON_AddStringToObject(item, "security_event_code", admin_security_event_model->security_event_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_event_model->security_event_text
    if(admin_security_event_model->security_event_text) {
    if(cJSON_AddStringToObject(item, "security_event_text", admin_security_event_model->security_event_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_event_model->is_opening_process_complete
    if(admin_security_event_model->is_opening_process_complete) {
    if(cJSON_AddBoolToObject(item, "is_opening_process_complete", *admin_security_event_model->is_opening_process_complete) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_security_event_model->is_closing_process_complete
    if(admin_security_event_model->is_closing_process_complete) {
    if(cJSON_AddBoolToObject(item, "is_closing_process_complete", *admin_security_event_model->is_closing_process_complete) == NULL) {
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

admin_security_event_model_t *admin_security_event_model_parseFromJSON(cJSON *admin_security_event_modelJSON){

    admin_security_event_model_t *admin_security_event_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_security_event_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_security_event_model->security_event
    int *security_event_local_var = NULL;

    char *security_event_code_local_str = NULL;

    char *security_event_text_local_str = NULL;

    // define the local variable for admin_security_event_model->is_opening_process_complete
    int *is_opening_process_complete_local_var = NULL;

    // define the local variable for admin_security_event_model->is_closing_process_complete
    int *is_closing_process_complete_local_var = NULL;

    // admin_security_event_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_security_event_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "timestamp_nanos");
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

    // admin_security_event_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_security_event_model->security_event
    cJSON *security_event = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "security_event");
    if (cJSON_IsNull(security_event)) {
        security_event = NULL;
    }
    if (security_event) { 
    if(!cJSON_IsNumber(security_event))
    {
    goto end; //Numeric
    }
    security_event_local_var = malloc(sizeof(int));
    if(!security_event_local_var)
    {
        goto end;
    }
    *security_event_local_var = security_event->valuedouble;
    }

    // admin_security_event_model->security_event_code
    cJSON *security_event_code = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "security_event_code");
    if (cJSON_IsNull(security_event_code)) {
        security_event_code = NULL;
    }
    if (security_event_code) { 
    if(!cJSON_IsString(security_event_code) && !cJSON_IsNull(security_event_code))
    {
    goto end; //String
    }
    }

    // admin_security_event_model->security_event_text
    cJSON *security_event_text = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "security_event_text");
    if (cJSON_IsNull(security_event_text)) {
        security_event_text = NULL;
    }
    if (security_event_text) { 
    if(!cJSON_IsString(security_event_text) && !cJSON_IsNull(security_event_text))
    {
    goto end; //String
    }
    }

    // admin_security_event_model->is_opening_process_complete
    cJSON *is_opening_process_complete = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "is_opening_process_complete");
    if (cJSON_IsNull(is_opening_process_complete)) {
        is_opening_process_complete = NULL;
    }
    if (is_opening_process_complete) { 
    if(!cJSON_IsBool(is_opening_process_complete))
    {
    goto end; //Bool
    }
    is_opening_process_complete_local_var = malloc(sizeof(int));
    if(!is_opening_process_complete_local_var)
    {
        goto end;
    }
    *is_opening_process_complete_local_var = is_opening_process_complete->valueint;
    }

    // admin_security_event_model->is_closing_process_complete
    cJSON *is_closing_process_complete = cJSON_GetObjectItemCaseSensitive(admin_security_event_modelJSON, "is_closing_process_complete");
    if (cJSON_IsNull(is_closing_process_complete)) {
        is_closing_process_complete = NULL;
    }
    if (is_closing_process_complete) { 
    if(!cJSON_IsBool(is_closing_process_complete))
    {
    goto end; //Bool
    }
    is_closing_process_complete_local_var = malloc(sizeof(int));
    if(!is_closing_process_complete_local_var)
    {
        goto end;
    }
    *is_closing_process_complete_local_var = is_closing_process_complete->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (security_event_code && !cJSON_IsNull(security_event_code)) security_event_code_local_str = strdup(security_event_code->valuestring);
    if (security_event_text && !cJSON_IsNull(security_event_text)) security_event_text_local_str = strdup(security_event_text->valuestring);

    admin_security_event_model_local_var = admin_security_event_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        security_event_local_var,
        security_event_code_local_str,
        security_event_text_local_str,
        is_opening_process_complete_local_var,
        is_closing_process_complete_local_var
        );

    if (!admin_security_event_model_local_var) {
        goto end;
    }

    return admin_security_event_model_local_var;
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
    if (security_event_local_var) {
        free(security_event_local_var);
        security_event_local_var = NULL;
    }
    if (security_event_code_local_str) {
        free(security_event_code_local_str);
        security_event_code_local_str = NULL;
    }
    if (security_event_text_local_str) {
        free(security_event_text_local_str);
        security_event_text_local_str = NULL;
    }
    if (is_opening_process_complete_local_var) {
        free(is_opening_process_complete_local_var);
        is_opening_process_complete_local_var = NULL;
    }
    if (is_closing_process_complete_local_var) {
        free(is_closing_process_complete_local_var);
        is_closing_process_complete_local_var = NULL;
    }
    return NULL;

}
