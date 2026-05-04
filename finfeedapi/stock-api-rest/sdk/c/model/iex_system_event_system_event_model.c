#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "iex_system_event_system_event_model.h"



static iex_system_event_system_event_model_t *iex_system_event_system_event_model_create_internal(
    long *timestamp_nanos,
    char *timestamp,
    int *system_event,
    char *system_event_code,
    char *system_event_text,
    int *is_system_event_start_of_messages,
    int *is_system_event_start_of_system_hours,
    int *is_system_event_start_of_regular_market_hours,
    int *is_system_event_end_of_regular_market_hours,
    int *is_system_event_end_of_system_hours,
    int *is_system_event_end_of_messages
    ) {
    iex_system_event_system_event_model_t *iex_system_event_system_event_model_local_var = malloc(sizeof(iex_system_event_system_event_model_t));
    if (!iex_system_event_system_event_model_local_var) {
        return NULL;
    }
    memset(iex_system_event_system_event_model_local_var, 0, sizeof(iex_system_event_system_event_model_t));
    iex_system_event_system_event_model_local_var->_library_owned = 1;
    iex_system_event_system_event_model_local_var->timestamp_nanos = timestamp_nanos;
    iex_system_event_system_event_model_local_var->timestamp = timestamp;
    iex_system_event_system_event_model_local_var->system_event = system_event;
    iex_system_event_system_event_model_local_var->system_event_code = system_event_code;
    iex_system_event_system_event_model_local_var->system_event_text = system_event_text;
    iex_system_event_system_event_model_local_var->is_system_event_start_of_messages = is_system_event_start_of_messages;
    iex_system_event_system_event_model_local_var->is_system_event_start_of_system_hours = is_system_event_start_of_system_hours;
    iex_system_event_system_event_model_local_var->is_system_event_start_of_regular_market_hours = is_system_event_start_of_regular_market_hours;
    iex_system_event_system_event_model_local_var->is_system_event_end_of_regular_market_hours = is_system_event_end_of_regular_market_hours;
    iex_system_event_system_event_model_local_var->is_system_event_end_of_system_hours = is_system_event_end_of_system_hours;
    iex_system_event_system_event_model_local_var->is_system_event_end_of_messages = is_system_event_end_of_messages;
    return iex_system_event_system_event_model_local_var;
}

__attribute__((deprecated)) iex_system_event_system_event_model_t *iex_system_event_system_event_model_create(
    long *timestamp_nanos,
    char *timestamp,
    int *system_event,
    char *system_event_code,
    char *system_event_text,
    int *is_system_event_start_of_messages,
    int *is_system_event_start_of_system_hours,
    int *is_system_event_start_of_regular_market_hours,
    int *is_system_event_end_of_regular_market_hours,
    int *is_system_event_end_of_system_hours,
    int *is_system_event_end_of_messages
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *system_event_copy = NULL;
    if (system_event) {
        system_event_copy = malloc(sizeof(int));
        if (system_event_copy) *system_event_copy = *system_event;
    }
    int *is_system_event_start_of_messages_copy = NULL;
    if (is_system_event_start_of_messages) {
        is_system_event_start_of_messages_copy = malloc(sizeof(int));
        if (is_system_event_start_of_messages_copy) *is_system_event_start_of_messages_copy = *is_system_event_start_of_messages;
    }
    int *is_system_event_start_of_system_hours_copy = NULL;
    if (is_system_event_start_of_system_hours) {
        is_system_event_start_of_system_hours_copy = malloc(sizeof(int));
        if (is_system_event_start_of_system_hours_copy) *is_system_event_start_of_system_hours_copy = *is_system_event_start_of_system_hours;
    }
    int *is_system_event_start_of_regular_market_hours_copy = NULL;
    if (is_system_event_start_of_regular_market_hours) {
        is_system_event_start_of_regular_market_hours_copy = malloc(sizeof(int));
        if (is_system_event_start_of_regular_market_hours_copy) *is_system_event_start_of_regular_market_hours_copy = *is_system_event_start_of_regular_market_hours;
    }
    int *is_system_event_end_of_regular_market_hours_copy = NULL;
    if (is_system_event_end_of_regular_market_hours) {
        is_system_event_end_of_regular_market_hours_copy = malloc(sizeof(int));
        if (is_system_event_end_of_regular_market_hours_copy) *is_system_event_end_of_regular_market_hours_copy = *is_system_event_end_of_regular_market_hours;
    }
    int *is_system_event_end_of_system_hours_copy = NULL;
    if (is_system_event_end_of_system_hours) {
        is_system_event_end_of_system_hours_copy = malloc(sizeof(int));
        if (is_system_event_end_of_system_hours_copy) *is_system_event_end_of_system_hours_copy = *is_system_event_end_of_system_hours;
    }
    int *is_system_event_end_of_messages_copy = NULL;
    if (is_system_event_end_of_messages) {
        is_system_event_end_of_messages_copy = malloc(sizeof(int));
        if (is_system_event_end_of_messages_copy) *is_system_event_end_of_messages_copy = *is_system_event_end_of_messages;
    }
    iex_system_event_system_event_model_t *result = iex_system_event_system_event_model_create_internal (
        timestamp_nanos_copy,
        timestamp,
        system_event_copy,
        system_event_code,
        system_event_text,
        is_system_event_start_of_messages_copy,
        is_system_event_start_of_system_hours_copy,
        is_system_event_start_of_regular_market_hours_copy,
        is_system_event_end_of_regular_market_hours_copy,
        is_system_event_end_of_system_hours_copy,
        is_system_event_end_of_messages_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(system_event_copy);
        free(is_system_event_start_of_messages_copy);
        free(is_system_event_start_of_system_hours_copy);
        free(is_system_event_start_of_regular_market_hours_copy);
        free(is_system_event_end_of_regular_market_hours_copy);
        free(is_system_event_end_of_system_hours_copy);
        free(is_system_event_end_of_messages_copy);
    }
    return result;
}

void iex_system_event_system_event_model_free(iex_system_event_system_event_model_t *iex_system_event_system_event_model) {
    if(NULL == iex_system_event_system_event_model){
        return ;
    }
    if(iex_system_event_system_event_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "iex_system_event_system_event_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (iex_system_event_system_event_model->timestamp_nanos) {
        free(iex_system_event_system_event_model->timestamp_nanos);
        iex_system_event_system_event_model->timestamp_nanos = NULL;
    }
    if (iex_system_event_system_event_model->timestamp) {
        free(iex_system_event_system_event_model->timestamp);
        iex_system_event_system_event_model->timestamp = NULL;
    }
    if (iex_system_event_system_event_model->system_event) {
        free(iex_system_event_system_event_model->system_event);
        iex_system_event_system_event_model->system_event = NULL;
    }
    if (iex_system_event_system_event_model->system_event_code) {
        free(iex_system_event_system_event_model->system_event_code);
        iex_system_event_system_event_model->system_event_code = NULL;
    }
    if (iex_system_event_system_event_model->system_event_text) {
        free(iex_system_event_system_event_model->system_event_text);
        iex_system_event_system_event_model->system_event_text = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_start_of_messages) {
        free(iex_system_event_system_event_model->is_system_event_start_of_messages);
        iex_system_event_system_event_model->is_system_event_start_of_messages = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_start_of_system_hours) {
        free(iex_system_event_system_event_model->is_system_event_start_of_system_hours);
        iex_system_event_system_event_model->is_system_event_start_of_system_hours = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours) {
        free(iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours);
        iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours) {
        free(iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours);
        iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_end_of_system_hours) {
        free(iex_system_event_system_event_model->is_system_event_end_of_system_hours);
        iex_system_event_system_event_model->is_system_event_end_of_system_hours = NULL;
    }
    if (iex_system_event_system_event_model->is_system_event_end_of_messages) {
        free(iex_system_event_system_event_model->is_system_event_end_of_messages);
        iex_system_event_system_event_model->is_system_event_end_of_messages = NULL;
    }
    free(iex_system_event_system_event_model);
}

cJSON *iex_system_event_system_event_model_convertToJSON(iex_system_event_system_event_model_t *iex_system_event_system_event_model) {
    cJSON *item = cJSON_CreateObject();

    // iex_system_event_system_event_model->timestamp_nanos
    if(iex_system_event_system_event_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *iex_system_event_system_event_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_system_event_system_event_model->timestamp
    if(iex_system_event_system_event_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", iex_system_event_system_event_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // iex_system_event_system_event_model->system_event
    if(iex_system_event_system_event_model->system_event) {
    if(cJSON_AddNumberToObject(item, "system_event", *iex_system_event_system_event_model->system_event) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_system_event_system_event_model->system_event_code
    if(iex_system_event_system_event_model->system_event_code) {
    if(cJSON_AddStringToObject(item, "system_event_code", iex_system_event_system_event_model->system_event_code) == NULL) {
    goto fail; //String
    }
    }


    // iex_system_event_system_event_model->system_event_text
    if(iex_system_event_system_event_model->system_event_text) {
    if(cJSON_AddStringToObject(item, "system_event_text", iex_system_event_system_event_model->system_event_text) == NULL) {
    goto fail; //String
    }
    }


    // iex_system_event_system_event_model->is_system_event_start_of_messages
    if(iex_system_event_system_event_model->is_system_event_start_of_messages) {
    if(cJSON_AddBoolToObject(item, "is_system_event_start_of_messages", *iex_system_event_system_event_model->is_system_event_start_of_messages) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_system_event_system_event_model->is_system_event_start_of_system_hours
    if(iex_system_event_system_event_model->is_system_event_start_of_system_hours) {
    if(cJSON_AddBoolToObject(item, "is_system_event_start_of_system_hours", *iex_system_event_system_event_model->is_system_event_start_of_system_hours) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours
    if(iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours) {
    if(cJSON_AddBoolToObject(item, "is_system_event_start_of_regular_market_hours", *iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours
    if(iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours) {
    if(cJSON_AddBoolToObject(item, "is_system_event_end_of_regular_market_hours", *iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_system_event_system_event_model->is_system_event_end_of_system_hours
    if(iex_system_event_system_event_model->is_system_event_end_of_system_hours) {
    if(cJSON_AddBoolToObject(item, "is_system_event_end_of_system_hours", *iex_system_event_system_event_model->is_system_event_end_of_system_hours) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_system_event_system_event_model->is_system_event_end_of_messages
    if(iex_system_event_system_event_model->is_system_event_end_of_messages) {
    if(cJSON_AddBoolToObject(item, "is_system_event_end_of_messages", *iex_system_event_system_event_model->is_system_event_end_of_messages) == NULL) {
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

iex_system_event_system_event_model_t *iex_system_event_system_event_model_parseFromJSON(cJSON *iex_system_event_system_event_modelJSON){

    iex_system_event_system_event_model_t *iex_system_event_system_event_model_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for iex_system_event_system_event_model->system_event
    int *system_event_local_var = NULL;

    char *system_event_code_local_str = NULL;

    char *system_event_text_local_str = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_start_of_messages
    int *is_system_event_start_of_messages_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_start_of_system_hours
    int *is_system_event_start_of_system_hours_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours
    int *is_system_event_start_of_regular_market_hours_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours
    int *is_system_event_end_of_regular_market_hours_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_end_of_system_hours
    int *is_system_event_end_of_system_hours_local_var = NULL;

    // define the local variable for iex_system_event_system_event_model->is_system_event_end_of_messages
    int *is_system_event_end_of_messages_local_var = NULL;

    // iex_system_event_system_event_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "timestamp_nanos");
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

    // iex_system_event_system_event_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // iex_system_event_system_event_model->system_event
    cJSON *system_event = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "system_event");
    if (cJSON_IsNull(system_event)) {
        system_event = NULL;
    }
    if (system_event) { 
    if(!cJSON_IsNumber(system_event))
    {
    goto end; //Numeric
    }
    system_event_local_var = malloc(sizeof(int));
    if(!system_event_local_var)
    {
        goto end;
    }
    *system_event_local_var = system_event->valuedouble;
    }

    // iex_system_event_system_event_model->system_event_code
    cJSON *system_event_code = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "system_event_code");
    if (cJSON_IsNull(system_event_code)) {
        system_event_code = NULL;
    }
    if (system_event_code) { 
    if(!cJSON_IsString(system_event_code) && !cJSON_IsNull(system_event_code))
    {
    goto end; //String
    }
    }

    // iex_system_event_system_event_model->system_event_text
    cJSON *system_event_text = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "system_event_text");
    if (cJSON_IsNull(system_event_text)) {
        system_event_text = NULL;
    }
    if (system_event_text) { 
    if(!cJSON_IsString(system_event_text) && !cJSON_IsNull(system_event_text))
    {
    goto end; //String
    }
    }

    // iex_system_event_system_event_model->is_system_event_start_of_messages
    cJSON *is_system_event_start_of_messages = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_start_of_messages");
    if (cJSON_IsNull(is_system_event_start_of_messages)) {
        is_system_event_start_of_messages = NULL;
    }
    if (is_system_event_start_of_messages) { 
    if(!cJSON_IsBool(is_system_event_start_of_messages))
    {
    goto end; //Bool
    }
    is_system_event_start_of_messages_local_var = malloc(sizeof(int));
    if(!is_system_event_start_of_messages_local_var)
    {
        goto end;
    }
    *is_system_event_start_of_messages_local_var = is_system_event_start_of_messages->valueint;
    }

    // iex_system_event_system_event_model->is_system_event_start_of_system_hours
    cJSON *is_system_event_start_of_system_hours = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_start_of_system_hours");
    if (cJSON_IsNull(is_system_event_start_of_system_hours)) {
        is_system_event_start_of_system_hours = NULL;
    }
    if (is_system_event_start_of_system_hours) { 
    if(!cJSON_IsBool(is_system_event_start_of_system_hours))
    {
    goto end; //Bool
    }
    is_system_event_start_of_system_hours_local_var = malloc(sizeof(int));
    if(!is_system_event_start_of_system_hours_local_var)
    {
        goto end;
    }
    *is_system_event_start_of_system_hours_local_var = is_system_event_start_of_system_hours->valueint;
    }

    // iex_system_event_system_event_model->is_system_event_start_of_regular_market_hours
    cJSON *is_system_event_start_of_regular_market_hours = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_start_of_regular_market_hours");
    if (cJSON_IsNull(is_system_event_start_of_regular_market_hours)) {
        is_system_event_start_of_regular_market_hours = NULL;
    }
    if (is_system_event_start_of_regular_market_hours) { 
    if(!cJSON_IsBool(is_system_event_start_of_regular_market_hours))
    {
    goto end; //Bool
    }
    is_system_event_start_of_regular_market_hours_local_var = malloc(sizeof(int));
    if(!is_system_event_start_of_regular_market_hours_local_var)
    {
        goto end;
    }
    *is_system_event_start_of_regular_market_hours_local_var = is_system_event_start_of_regular_market_hours->valueint;
    }

    // iex_system_event_system_event_model->is_system_event_end_of_regular_market_hours
    cJSON *is_system_event_end_of_regular_market_hours = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_end_of_regular_market_hours");
    if (cJSON_IsNull(is_system_event_end_of_regular_market_hours)) {
        is_system_event_end_of_regular_market_hours = NULL;
    }
    if (is_system_event_end_of_regular_market_hours) { 
    if(!cJSON_IsBool(is_system_event_end_of_regular_market_hours))
    {
    goto end; //Bool
    }
    is_system_event_end_of_regular_market_hours_local_var = malloc(sizeof(int));
    if(!is_system_event_end_of_regular_market_hours_local_var)
    {
        goto end;
    }
    *is_system_event_end_of_regular_market_hours_local_var = is_system_event_end_of_regular_market_hours->valueint;
    }

    // iex_system_event_system_event_model->is_system_event_end_of_system_hours
    cJSON *is_system_event_end_of_system_hours = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_end_of_system_hours");
    if (cJSON_IsNull(is_system_event_end_of_system_hours)) {
        is_system_event_end_of_system_hours = NULL;
    }
    if (is_system_event_end_of_system_hours) { 
    if(!cJSON_IsBool(is_system_event_end_of_system_hours))
    {
    goto end; //Bool
    }
    is_system_event_end_of_system_hours_local_var = malloc(sizeof(int));
    if(!is_system_event_end_of_system_hours_local_var)
    {
        goto end;
    }
    *is_system_event_end_of_system_hours_local_var = is_system_event_end_of_system_hours->valueint;
    }

    // iex_system_event_system_event_model->is_system_event_end_of_messages
    cJSON *is_system_event_end_of_messages = cJSON_GetObjectItemCaseSensitive(iex_system_event_system_event_modelJSON, "is_system_event_end_of_messages");
    if (cJSON_IsNull(is_system_event_end_of_messages)) {
        is_system_event_end_of_messages = NULL;
    }
    if (is_system_event_end_of_messages) { 
    if(!cJSON_IsBool(is_system_event_end_of_messages))
    {
    goto end; //Bool
    }
    is_system_event_end_of_messages_local_var = malloc(sizeof(int));
    if(!is_system_event_end_of_messages_local_var)
    {
        goto end;
    }
    *is_system_event_end_of_messages_local_var = is_system_event_end_of_messages->valueint;
    }


    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (system_event_code && !cJSON_IsNull(system_event_code)) system_event_code_local_str = strdup(system_event_code->valuestring);
    if (system_event_text && !cJSON_IsNull(system_event_text)) system_event_text_local_str = strdup(system_event_text->valuestring);

    iex_system_event_system_event_model_local_var = iex_system_event_system_event_model_create_internal (
        timestamp_nanos_local_var,
        timestamp_local_str,
        system_event_local_var,
        system_event_code_local_str,
        system_event_text_local_str,
        is_system_event_start_of_messages_local_var,
        is_system_event_start_of_system_hours_local_var,
        is_system_event_start_of_regular_market_hours_local_var,
        is_system_event_end_of_regular_market_hours_local_var,
        is_system_event_end_of_system_hours_local_var,
        is_system_event_end_of_messages_local_var
        );

    if (!iex_system_event_system_event_model_local_var) {
        goto end;
    }

    return iex_system_event_system_event_model_local_var;
end:
    if (timestamp_nanos_local_var) {
        free(timestamp_nanos_local_var);
        timestamp_nanos_local_var = NULL;
    }
    if (timestamp_local_str) {
        free(timestamp_local_str);
        timestamp_local_str = NULL;
    }
    if (system_event_local_var) {
        free(system_event_local_var);
        system_event_local_var = NULL;
    }
    if (system_event_code_local_str) {
        free(system_event_code_local_str);
        system_event_code_local_str = NULL;
    }
    if (system_event_text_local_str) {
        free(system_event_text_local_str);
        system_event_text_local_str = NULL;
    }
    if (is_system_event_start_of_messages_local_var) {
        free(is_system_event_start_of_messages_local_var);
        is_system_event_start_of_messages_local_var = NULL;
    }
    if (is_system_event_start_of_system_hours_local_var) {
        free(is_system_event_start_of_system_hours_local_var);
        is_system_event_start_of_system_hours_local_var = NULL;
    }
    if (is_system_event_start_of_regular_market_hours_local_var) {
        free(is_system_event_start_of_regular_market_hours_local_var);
        is_system_event_start_of_regular_market_hours_local_var = NULL;
    }
    if (is_system_event_end_of_regular_market_hours_local_var) {
        free(is_system_event_end_of_regular_market_hours_local_var);
        is_system_event_end_of_regular_market_hours_local_var = NULL;
    }
    if (is_system_event_end_of_system_hours_local_var) {
        free(is_system_event_end_of_system_hours_local_var);
        is_system_event_end_of_system_hours_local_var = NULL;
    }
    if (is_system_event_end_of_messages_local_var) {
        free(is_system_event_end_of_messages_local_var);
        is_system_event_end_of_messages_local_var = NULL;
    }
    return NULL;

}
