#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_short_sale_price_test_status_model.h"



static admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *short_sale_price_test_status,
    char *short_sale_price_test_status_code,
    char *short_sale_price_test_status_text,
    int *is_short_sale_price_test_not_in_effect,
    int *is_short_sale_price_test_in_effect,
    int *detail,
    char *detail_code,
    char *detail_text,
    int *is_detail_no_price_test,
    int *is_detail_activated,
    int *is_detail_continued,
    int *is_detail_deactivated,
    int *is_detail_not_available
    ) {
    admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model_local_var = malloc(sizeof(admin_short_sale_price_test_status_model_t));
    if (!admin_short_sale_price_test_status_model_local_var) {
        return NULL;
    }
    memset(admin_short_sale_price_test_status_model_local_var, 0, sizeof(admin_short_sale_price_test_status_model_t));
    admin_short_sale_price_test_status_model_local_var->_library_owned = 1;
    admin_short_sale_price_test_status_model_local_var->symbol = symbol;
    admin_short_sale_price_test_status_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_short_sale_price_test_status_model_local_var->timestamp = timestamp;
    admin_short_sale_price_test_status_model_local_var->short_sale_price_test_status = short_sale_price_test_status;
    admin_short_sale_price_test_status_model_local_var->short_sale_price_test_status_code = short_sale_price_test_status_code;
    admin_short_sale_price_test_status_model_local_var->short_sale_price_test_status_text = short_sale_price_test_status_text;
    admin_short_sale_price_test_status_model_local_var->is_short_sale_price_test_not_in_effect = is_short_sale_price_test_not_in_effect;
    admin_short_sale_price_test_status_model_local_var->is_short_sale_price_test_in_effect = is_short_sale_price_test_in_effect;
    admin_short_sale_price_test_status_model_local_var->detail = detail;
    admin_short_sale_price_test_status_model_local_var->detail_code = detail_code;
    admin_short_sale_price_test_status_model_local_var->detail_text = detail_text;
    admin_short_sale_price_test_status_model_local_var->is_detail_no_price_test = is_detail_no_price_test;
    admin_short_sale_price_test_status_model_local_var->is_detail_activated = is_detail_activated;
    admin_short_sale_price_test_status_model_local_var->is_detail_continued = is_detail_continued;
    admin_short_sale_price_test_status_model_local_var->is_detail_deactivated = is_detail_deactivated;
    admin_short_sale_price_test_status_model_local_var->is_detail_not_available = is_detail_not_available;
    return admin_short_sale_price_test_status_model_local_var;
}

__attribute__((deprecated)) admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *short_sale_price_test_status,
    char *short_sale_price_test_status_code,
    char *short_sale_price_test_status_text,
    int *is_short_sale_price_test_not_in_effect,
    int *is_short_sale_price_test_in_effect,
    int *detail,
    char *detail_code,
    char *detail_text,
    int *is_detail_no_price_test,
    int *is_detail_activated,
    int *is_detail_continued,
    int *is_detail_deactivated,
    int *is_detail_not_available
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *short_sale_price_test_status_copy = NULL;
    if (short_sale_price_test_status) {
        short_sale_price_test_status_copy = malloc(sizeof(int));
        if (short_sale_price_test_status_copy) *short_sale_price_test_status_copy = *short_sale_price_test_status;
    }
    int *is_short_sale_price_test_not_in_effect_copy = NULL;
    if (is_short_sale_price_test_not_in_effect) {
        is_short_sale_price_test_not_in_effect_copy = malloc(sizeof(int));
        if (is_short_sale_price_test_not_in_effect_copy) *is_short_sale_price_test_not_in_effect_copy = *is_short_sale_price_test_not_in_effect;
    }
    int *is_short_sale_price_test_in_effect_copy = NULL;
    if (is_short_sale_price_test_in_effect) {
        is_short_sale_price_test_in_effect_copy = malloc(sizeof(int));
        if (is_short_sale_price_test_in_effect_copy) *is_short_sale_price_test_in_effect_copy = *is_short_sale_price_test_in_effect;
    }
    int *detail_copy = NULL;
    if (detail) {
        detail_copy = malloc(sizeof(int));
        if (detail_copy) *detail_copy = *detail;
    }
    int *is_detail_no_price_test_copy = NULL;
    if (is_detail_no_price_test) {
        is_detail_no_price_test_copy = malloc(sizeof(int));
        if (is_detail_no_price_test_copy) *is_detail_no_price_test_copy = *is_detail_no_price_test;
    }
    int *is_detail_activated_copy = NULL;
    if (is_detail_activated) {
        is_detail_activated_copy = malloc(sizeof(int));
        if (is_detail_activated_copy) *is_detail_activated_copy = *is_detail_activated;
    }
    int *is_detail_continued_copy = NULL;
    if (is_detail_continued) {
        is_detail_continued_copy = malloc(sizeof(int));
        if (is_detail_continued_copy) *is_detail_continued_copy = *is_detail_continued;
    }
    int *is_detail_deactivated_copy = NULL;
    if (is_detail_deactivated) {
        is_detail_deactivated_copy = malloc(sizeof(int));
        if (is_detail_deactivated_copy) *is_detail_deactivated_copy = *is_detail_deactivated;
    }
    int *is_detail_not_available_copy = NULL;
    if (is_detail_not_available) {
        is_detail_not_available_copy = malloc(sizeof(int));
        if (is_detail_not_available_copy) *is_detail_not_available_copy = *is_detail_not_available;
    }
    admin_short_sale_price_test_status_model_t *result = admin_short_sale_price_test_status_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        short_sale_price_test_status_copy,
        short_sale_price_test_status_code,
        short_sale_price_test_status_text,
        is_short_sale_price_test_not_in_effect_copy,
        is_short_sale_price_test_in_effect_copy,
        detail_copy,
        detail_code,
        detail_text,
        is_detail_no_price_test_copy,
        is_detail_activated_copy,
        is_detail_continued_copy,
        is_detail_deactivated_copy,
        is_detail_not_available_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(short_sale_price_test_status_copy);
        free(is_short_sale_price_test_not_in_effect_copy);
        free(is_short_sale_price_test_in_effect_copy);
        free(detail_copy);
        free(is_detail_no_price_test_copy);
        free(is_detail_activated_copy);
        free(is_detail_continued_copy);
        free(is_detail_deactivated_copy);
        free(is_detail_not_available_copy);
    }
    return result;
}

void admin_short_sale_price_test_status_model_free(admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model) {
    if(NULL == admin_short_sale_price_test_status_model){
        return ;
    }
    if(admin_short_sale_price_test_status_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_short_sale_price_test_status_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_short_sale_price_test_status_model->symbol) {
        free(admin_short_sale_price_test_status_model->symbol);
        admin_short_sale_price_test_status_model->symbol = NULL;
    }
    if (admin_short_sale_price_test_status_model->timestamp_nanos) {
        free(admin_short_sale_price_test_status_model->timestamp_nanos);
        admin_short_sale_price_test_status_model->timestamp_nanos = NULL;
    }
    if (admin_short_sale_price_test_status_model->timestamp) {
        free(admin_short_sale_price_test_status_model->timestamp);
        admin_short_sale_price_test_status_model->timestamp = NULL;
    }
    if (admin_short_sale_price_test_status_model->short_sale_price_test_status) {
        free(admin_short_sale_price_test_status_model->short_sale_price_test_status);
        admin_short_sale_price_test_status_model->short_sale_price_test_status = NULL;
    }
    if (admin_short_sale_price_test_status_model->short_sale_price_test_status_code) {
        free(admin_short_sale_price_test_status_model->short_sale_price_test_status_code);
        admin_short_sale_price_test_status_model->short_sale_price_test_status_code = NULL;
    }
    if (admin_short_sale_price_test_status_model->short_sale_price_test_status_text) {
        free(admin_short_sale_price_test_status_model->short_sale_price_test_status_text);
        admin_short_sale_price_test_status_model->short_sale_price_test_status_text = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect) {
        free(admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect);
        admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect) {
        free(admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect);
        admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect = NULL;
    }
    if (admin_short_sale_price_test_status_model->detail) {
        free(admin_short_sale_price_test_status_model->detail);
        admin_short_sale_price_test_status_model->detail = NULL;
    }
    if (admin_short_sale_price_test_status_model->detail_code) {
        free(admin_short_sale_price_test_status_model->detail_code);
        admin_short_sale_price_test_status_model->detail_code = NULL;
    }
    if (admin_short_sale_price_test_status_model->detail_text) {
        free(admin_short_sale_price_test_status_model->detail_text);
        admin_short_sale_price_test_status_model->detail_text = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_detail_no_price_test) {
        free(admin_short_sale_price_test_status_model->is_detail_no_price_test);
        admin_short_sale_price_test_status_model->is_detail_no_price_test = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_detail_activated) {
        free(admin_short_sale_price_test_status_model->is_detail_activated);
        admin_short_sale_price_test_status_model->is_detail_activated = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_detail_continued) {
        free(admin_short_sale_price_test_status_model->is_detail_continued);
        admin_short_sale_price_test_status_model->is_detail_continued = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_detail_deactivated) {
        free(admin_short_sale_price_test_status_model->is_detail_deactivated);
        admin_short_sale_price_test_status_model->is_detail_deactivated = NULL;
    }
    if (admin_short_sale_price_test_status_model->is_detail_not_available) {
        free(admin_short_sale_price_test_status_model->is_detail_not_available);
        admin_short_sale_price_test_status_model->is_detail_not_available = NULL;
    }
    free(admin_short_sale_price_test_status_model);
}

cJSON *admin_short_sale_price_test_status_model_convertToJSON(admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_short_sale_price_test_status_model->symbol
    if(admin_short_sale_price_test_status_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_short_sale_price_test_status_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_short_sale_price_test_status_model->timestamp_nanos
    if(admin_short_sale_price_test_status_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_short_sale_price_test_status_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_short_sale_price_test_status_model->timestamp
    if(admin_short_sale_price_test_status_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_short_sale_price_test_status_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_short_sale_price_test_status_model->short_sale_price_test_status
    if(admin_short_sale_price_test_status_model->short_sale_price_test_status) {
    if(cJSON_AddNumberToObject(item, "short_sale_price_test_status", *admin_short_sale_price_test_status_model->short_sale_price_test_status) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_short_sale_price_test_status_model->short_sale_price_test_status_code
    if(admin_short_sale_price_test_status_model->short_sale_price_test_status_code) {
    if(cJSON_AddStringToObject(item, "short_sale_price_test_status_code", admin_short_sale_price_test_status_model->short_sale_price_test_status_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_short_sale_price_test_status_model->short_sale_price_test_status_text
    if(admin_short_sale_price_test_status_model->short_sale_price_test_status_text) {
    if(cJSON_AddStringToObject(item, "short_sale_price_test_status_text", admin_short_sale_price_test_status_model->short_sale_price_test_status_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect
    if(admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect) {
    if(cJSON_AddBoolToObject(item, "is_short_sale_price_test_not_in_effect", *admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect
    if(admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect) {
    if(cJSON_AddBoolToObject(item, "is_short_sale_price_test_in_effect", *admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->detail
    if(admin_short_sale_price_test_status_model->detail) {
    if(cJSON_AddNumberToObject(item, "detail", *admin_short_sale_price_test_status_model->detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_short_sale_price_test_status_model->detail_code
    if(admin_short_sale_price_test_status_model->detail_code) {
    if(cJSON_AddStringToObject(item, "detail_code", admin_short_sale_price_test_status_model->detail_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_short_sale_price_test_status_model->detail_text
    if(admin_short_sale_price_test_status_model->detail_text) {
    if(cJSON_AddStringToObject(item, "detail_text", admin_short_sale_price_test_status_model->detail_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_short_sale_price_test_status_model->is_detail_no_price_test
    if(admin_short_sale_price_test_status_model->is_detail_no_price_test) {
    if(cJSON_AddBoolToObject(item, "is_detail_no_price_test", *admin_short_sale_price_test_status_model->is_detail_no_price_test) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->is_detail_activated
    if(admin_short_sale_price_test_status_model->is_detail_activated) {
    if(cJSON_AddBoolToObject(item, "is_detail_activated", *admin_short_sale_price_test_status_model->is_detail_activated) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->is_detail_continued
    if(admin_short_sale_price_test_status_model->is_detail_continued) {
    if(cJSON_AddBoolToObject(item, "is_detail_continued", *admin_short_sale_price_test_status_model->is_detail_continued) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->is_detail_deactivated
    if(admin_short_sale_price_test_status_model->is_detail_deactivated) {
    if(cJSON_AddBoolToObject(item, "is_detail_deactivated", *admin_short_sale_price_test_status_model->is_detail_deactivated) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_short_sale_price_test_status_model->is_detail_not_available
    if(admin_short_sale_price_test_status_model->is_detail_not_available) {
    if(cJSON_AddBoolToObject(item, "is_detail_not_available", *admin_short_sale_price_test_status_model->is_detail_not_available) == NULL) {
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

admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model_parseFromJSON(cJSON *admin_short_sale_price_test_status_modelJSON){

    admin_short_sale_price_test_status_model_t *admin_short_sale_price_test_status_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->short_sale_price_test_status
    int *short_sale_price_test_status_local_var = NULL;

    char *short_sale_price_test_status_code_local_str = NULL;

    char *short_sale_price_test_status_text_local_str = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect
    int *is_short_sale_price_test_not_in_effect_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect
    int *is_short_sale_price_test_in_effect_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->detail
    int *detail_local_var = NULL;

    char *detail_code_local_str = NULL;

    char *detail_text_local_str = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_detail_no_price_test
    int *is_detail_no_price_test_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_detail_activated
    int *is_detail_activated_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_detail_continued
    int *is_detail_continued_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_detail_deactivated
    int *is_detail_deactivated_local_var = NULL;

    // define the local variable for admin_short_sale_price_test_status_model->is_detail_not_available
    int *is_detail_not_available_local_var = NULL;

    // admin_short_sale_price_test_status_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_short_sale_price_test_status_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "timestamp_nanos");
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

    // admin_short_sale_price_test_status_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_short_sale_price_test_status_model->short_sale_price_test_status
    cJSON *short_sale_price_test_status = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "short_sale_price_test_status");
    if (cJSON_IsNull(short_sale_price_test_status)) {
        short_sale_price_test_status = NULL;
    }
    if (short_sale_price_test_status) { 
    if(!cJSON_IsNumber(short_sale_price_test_status))
    {
    goto end; //Numeric
    }
    short_sale_price_test_status_local_var = malloc(sizeof(int));
    if(!short_sale_price_test_status_local_var)
    {
        goto end;
    }
    *short_sale_price_test_status_local_var = short_sale_price_test_status->valuedouble;
    }

    // admin_short_sale_price_test_status_model->short_sale_price_test_status_code
    cJSON *short_sale_price_test_status_code = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "short_sale_price_test_status_code");
    if (cJSON_IsNull(short_sale_price_test_status_code)) {
        short_sale_price_test_status_code = NULL;
    }
    if (short_sale_price_test_status_code) { 
    if(!cJSON_IsString(short_sale_price_test_status_code) && !cJSON_IsNull(short_sale_price_test_status_code))
    {
    goto end; //String
    }
    }

    // admin_short_sale_price_test_status_model->short_sale_price_test_status_text
    cJSON *short_sale_price_test_status_text = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "short_sale_price_test_status_text");
    if (cJSON_IsNull(short_sale_price_test_status_text)) {
        short_sale_price_test_status_text = NULL;
    }
    if (short_sale_price_test_status_text) { 
    if(!cJSON_IsString(short_sale_price_test_status_text) && !cJSON_IsNull(short_sale_price_test_status_text))
    {
    goto end; //String
    }
    }

    // admin_short_sale_price_test_status_model->is_short_sale_price_test_not_in_effect
    cJSON *is_short_sale_price_test_not_in_effect = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_short_sale_price_test_not_in_effect");
    if (cJSON_IsNull(is_short_sale_price_test_not_in_effect)) {
        is_short_sale_price_test_not_in_effect = NULL;
    }
    if (is_short_sale_price_test_not_in_effect) { 
    if(!cJSON_IsBool(is_short_sale_price_test_not_in_effect))
    {
    goto end; //Bool
    }
    is_short_sale_price_test_not_in_effect_local_var = malloc(sizeof(int));
    if(!is_short_sale_price_test_not_in_effect_local_var)
    {
        goto end;
    }
    *is_short_sale_price_test_not_in_effect_local_var = is_short_sale_price_test_not_in_effect->valueint;
    }

    // admin_short_sale_price_test_status_model->is_short_sale_price_test_in_effect
    cJSON *is_short_sale_price_test_in_effect = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_short_sale_price_test_in_effect");
    if (cJSON_IsNull(is_short_sale_price_test_in_effect)) {
        is_short_sale_price_test_in_effect = NULL;
    }
    if (is_short_sale_price_test_in_effect) { 
    if(!cJSON_IsBool(is_short_sale_price_test_in_effect))
    {
    goto end; //Bool
    }
    is_short_sale_price_test_in_effect_local_var = malloc(sizeof(int));
    if(!is_short_sale_price_test_in_effect_local_var)
    {
        goto end;
    }
    *is_short_sale_price_test_in_effect_local_var = is_short_sale_price_test_in_effect->valueint;
    }

    // admin_short_sale_price_test_status_model->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "detail");
    if (cJSON_IsNull(detail)) {
        detail = NULL;
    }
    if (detail) { 
    if(!cJSON_IsNumber(detail))
    {
    goto end; //Numeric
    }
    detail_local_var = malloc(sizeof(int));
    if(!detail_local_var)
    {
        goto end;
    }
    *detail_local_var = detail->valuedouble;
    }

    // admin_short_sale_price_test_status_model->detail_code
    cJSON *detail_code = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "detail_code");
    if (cJSON_IsNull(detail_code)) {
        detail_code = NULL;
    }
    if (detail_code) { 
    if(!cJSON_IsString(detail_code) && !cJSON_IsNull(detail_code))
    {
    goto end; //String
    }
    }

    // admin_short_sale_price_test_status_model->detail_text
    cJSON *detail_text = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "detail_text");
    if (cJSON_IsNull(detail_text)) {
        detail_text = NULL;
    }
    if (detail_text) { 
    if(!cJSON_IsString(detail_text) && !cJSON_IsNull(detail_text))
    {
    goto end; //String
    }
    }

    // admin_short_sale_price_test_status_model->is_detail_no_price_test
    cJSON *is_detail_no_price_test = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_detail_no_price_test");
    if (cJSON_IsNull(is_detail_no_price_test)) {
        is_detail_no_price_test = NULL;
    }
    if (is_detail_no_price_test) { 
    if(!cJSON_IsBool(is_detail_no_price_test))
    {
    goto end; //Bool
    }
    is_detail_no_price_test_local_var = malloc(sizeof(int));
    if(!is_detail_no_price_test_local_var)
    {
        goto end;
    }
    *is_detail_no_price_test_local_var = is_detail_no_price_test->valueint;
    }

    // admin_short_sale_price_test_status_model->is_detail_activated
    cJSON *is_detail_activated = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_detail_activated");
    if (cJSON_IsNull(is_detail_activated)) {
        is_detail_activated = NULL;
    }
    if (is_detail_activated) { 
    if(!cJSON_IsBool(is_detail_activated))
    {
    goto end; //Bool
    }
    is_detail_activated_local_var = malloc(sizeof(int));
    if(!is_detail_activated_local_var)
    {
        goto end;
    }
    *is_detail_activated_local_var = is_detail_activated->valueint;
    }

    // admin_short_sale_price_test_status_model->is_detail_continued
    cJSON *is_detail_continued = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_detail_continued");
    if (cJSON_IsNull(is_detail_continued)) {
        is_detail_continued = NULL;
    }
    if (is_detail_continued) { 
    if(!cJSON_IsBool(is_detail_continued))
    {
    goto end; //Bool
    }
    is_detail_continued_local_var = malloc(sizeof(int));
    if(!is_detail_continued_local_var)
    {
        goto end;
    }
    *is_detail_continued_local_var = is_detail_continued->valueint;
    }

    // admin_short_sale_price_test_status_model->is_detail_deactivated
    cJSON *is_detail_deactivated = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_detail_deactivated");
    if (cJSON_IsNull(is_detail_deactivated)) {
        is_detail_deactivated = NULL;
    }
    if (is_detail_deactivated) { 
    if(!cJSON_IsBool(is_detail_deactivated))
    {
    goto end; //Bool
    }
    is_detail_deactivated_local_var = malloc(sizeof(int));
    if(!is_detail_deactivated_local_var)
    {
        goto end;
    }
    *is_detail_deactivated_local_var = is_detail_deactivated->valueint;
    }

    // admin_short_sale_price_test_status_model->is_detail_not_available
    cJSON *is_detail_not_available = cJSON_GetObjectItemCaseSensitive(admin_short_sale_price_test_status_modelJSON, "is_detail_not_available");
    if (cJSON_IsNull(is_detail_not_available)) {
        is_detail_not_available = NULL;
    }
    if (is_detail_not_available) { 
    if(!cJSON_IsBool(is_detail_not_available))
    {
    goto end; //Bool
    }
    is_detail_not_available_local_var = malloc(sizeof(int));
    if(!is_detail_not_available_local_var)
    {
        goto end;
    }
    *is_detail_not_available_local_var = is_detail_not_available->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (short_sale_price_test_status_code && !cJSON_IsNull(short_sale_price_test_status_code)) short_sale_price_test_status_code_local_str = strdup(short_sale_price_test_status_code->valuestring);
    if (short_sale_price_test_status_text && !cJSON_IsNull(short_sale_price_test_status_text)) short_sale_price_test_status_text_local_str = strdup(short_sale_price_test_status_text->valuestring);
    if (detail_code && !cJSON_IsNull(detail_code)) detail_code_local_str = strdup(detail_code->valuestring);
    if (detail_text && !cJSON_IsNull(detail_text)) detail_text_local_str = strdup(detail_text->valuestring);

    admin_short_sale_price_test_status_model_local_var = admin_short_sale_price_test_status_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        short_sale_price_test_status_local_var,
        short_sale_price_test_status_code_local_str,
        short_sale_price_test_status_text_local_str,
        is_short_sale_price_test_not_in_effect_local_var,
        is_short_sale_price_test_in_effect_local_var,
        detail_local_var,
        detail_code_local_str,
        detail_text_local_str,
        is_detail_no_price_test_local_var,
        is_detail_activated_local_var,
        is_detail_continued_local_var,
        is_detail_deactivated_local_var,
        is_detail_not_available_local_var
        );

    if (!admin_short_sale_price_test_status_model_local_var) {
        goto end;
    }

    return admin_short_sale_price_test_status_model_local_var;
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
    if (short_sale_price_test_status_local_var) {
        free(short_sale_price_test_status_local_var);
        short_sale_price_test_status_local_var = NULL;
    }
    if (short_sale_price_test_status_code_local_str) {
        free(short_sale_price_test_status_code_local_str);
        short_sale_price_test_status_code_local_str = NULL;
    }
    if (short_sale_price_test_status_text_local_str) {
        free(short_sale_price_test_status_text_local_str);
        short_sale_price_test_status_text_local_str = NULL;
    }
    if (is_short_sale_price_test_not_in_effect_local_var) {
        free(is_short_sale_price_test_not_in_effect_local_var);
        is_short_sale_price_test_not_in_effect_local_var = NULL;
    }
    if (is_short_sale_price_test_in_effect_local_var) {
        free(is_short_sale_price_test_in_effect_local_var);
        is_short_sale_price_test_in_effect_local_var = NULL;
    }
    if (detail_local_var) {
        free(detail_local_var);
        detail_local_var = NULL;
    }
    if (detail_code_local_str) {
        free(detail_code_local_str);
        detail_code_local_str = NULL;
    }
    if (detail_text_local_str) {
        free(detail_text_local_str);
        detail_text_local_str = NULL;
    }
    if (is_detail_no_price_test_local_var) {
        free(is_detail_no_price_test_local_var);
        is_detail_no_price_test_local_var = NULL;
    }
    if (is_detail_activated_local_var) {
        free(is_detail_activated_local_var);
        is_detail_activated_local_var = NULL;
    }
    if (is_detail_continued_local_var) {
        free(is_detail_continued_local_var);
        is_detail_continued_local_var = NULL;
    }
    if (is_detail_deactivated_local_var) {
        free(is_detail_deactivated_local_var);
        is_detail_deactivated_local_var = NULL;
    }
    if (is_detail_not_available_local_var) {
        free(is_detail_not_available_local_var);
        is_detail_not_available_local_var = NULL;
    }
    return NULL;

}
