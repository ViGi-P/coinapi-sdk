#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_retail_liquidity_indicator_model.h"



static admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *retail_liquidity_indicator,
    char *retail_liquidity_indicator_code,
    char *retail_liquidity_indicator_text,
    int *is_retail_indicator_not_applicable,
    int *is_retail_indicator_buy_interest,
    int *is_retail_indicator_sell_interest,
    int *is_retail_indicator_buy_and_sell_interest
    ) {
    admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model_local_var = malloc(sizeof(admin_retail_liquidity_indicator_model_t));
    if (!admin_retail_liquidity_indicator_model_local_var) {
        return NULL;
    }
    memset(admin_retail_liquidity_indicator_model_local_var, 0, sizeof(admin_retail_liquidity_indicator_model_t));
    admin_retail_liquidity_indicator_model_local_var->_library_owned = 1;
    admin_retail_liquidity_indicator_model_local_var->symbol = symbol;
    admin_retail_liquidity_indicator_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_retail_liquidity_indicator_model_local_var->timestamp = timestamp;
    admin_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator = retail_liquidity_indicator;
    admin_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator_code = retail_liquidity_indicator_code;
    admin_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator_text = retail_liquidity_indicator_text;
    admin_retail_liquidity_indicator_model_local_var->is_retail_indicator_not_applicable = is_retail_indicator_not_applicable;
    admin_retail_liquidity_indicator_model_local_var->is_retail_indicator_buy_interest = is_retail_indicator_buy_interest;
    admin_retail_liquidity_indicator_model_local_var->is_retail_indicator_sell_interest = is_retail_indicator_sell_interest;
    admin_retail_liquidity_indicator_model_local_var->is_retail_indicator_buy_and_sell_interest = is_retail_indicator_buy_and_sell_interest;
    return admin_retail_liquidity_indicator_model_local_var;
}

__attribute__((deprecated)) admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *retail_liquidity_indicator,
    char *retail_liquidity_indicator_code,
    char *retail_liquidity_indicator_text,
    int *is_retail_indicator_not_applicable,
    int *is_retail_indicator_buy_interest,
    int *is_retail_indicator_sell_interest,
    int *is_retail_indicator_buy_and_sell_interest
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *retail_liquidity_indicator_copy = NULL;
    if (retail_liquidity_indicator) {
        retail_liquidity_indicator_copy = malloc(sizeof(int));
        if (retail_liquidity_indicator_copy) *retail_liquidity_indicator_copy = *retail_liquidity_indicator;
    }
    int *is_retail_indicator_not_applicable_copy = NULL;
    if (is_retail_indicator_not_applicable) {
        is_retail_indicator_not_applicable_copy = malloc(sizeof(int));
        if (is_retail_indicator_not_applicable_copy) *is_retail_indicator_not_applicable_copy = *is_retail_indicator_not_applicable;
    }
    int *is_retail_indicator_buy_interest_copy = NULL;
    if (is_retail_indicator_buy_interest) {
        is_retail_indicator_buy_interest_copy = malloc(sizeof(int));
        if (is_retail_indicator_buy_interest_copy) *is_retail_indicator_buy_interest_copy = *is_retail_indicator_buy_interest;
    }
    int *is_retail_indicator_sell_interest_copy = NULL;
    if (is_retail_indicator_sell_interest) {
        is_retail_indicator_sell_interest_copy = malloc(sizeof(int));
        if (is_retail_indicator_sell_interest_copy) *is_retail_indicator_sell_interest_copy = *is_retail_indicator_sell_interest;
    }
    int *is_retail_indicator_buy_and_sell_interest_copy = NULL;
    if (is_retail_indicator_buy_and_sell_interest) {
        is_retail_indicator_buy_and_sell_interest_copy = malloc(sizeof(int));
        if (is_retail_indicator_buy_and_sell_interest_copy) *is_retail_indicator_buy_and_sell_interest_copy = *is_retail_indicator_buy_and_sell_interest;
    }
    admin_retail_liquidity_indicator_model_t *result = admin_retail_liquidity_indicator_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        retail_liquidity_indicator_copy,
        retail_liquidity_indicator_code,
        retail_liquidity_indicator_text,
        is_retail_indicator_not_applicable_copy,
        is_retail_indicator_buy_interest_copy,
        is_retail_indicator_sell_interest_copy,
        is_retail_indicator_buy_and_sell_interest_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(retail_liquidity_indicator_copy);
        free(is_retail_indicator_not_applicable_copy);
        free(is_retail_indicator_buy_interest_copy);
        free(is_retail_indicator_sell_interest_copy);
        free(is_retail_indicator_buy_and_sell_interest_copy);
    }
    return result;
}

void admin_retail_liquidity_indicator_model_free(admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model) {
    if(NULL == admin_retail_liquidity_indicator_model){
        return ;
    }
    if(admin_retail_liquidity_indicator_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_retail_liquidity_indicator_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_retail_liquidity_indicator_model->symbol) {
        free(admin_retail_liquidity_indicator_model->symbol);
        admin_retail_liquidity_indicator_model->symbol = NULL;
    }
    if (admin_retail_liquidity_indicator_model->timestamp_nanos) {
        free(admin_retail_liquidity_indicator_model->timestamp_nanos);
        admin_retail_liquidity_indicator_model->timestamp_nanos = NULL;
    }
    if (admin_retail_liquidity_indicator_model->timestamp) {
        free(admin_retail_liquidity_indicator_model->timestamp);
        admin_retail_liquidity_indicator_model->timestamp = NULL;
    }
    if (admin_retail_liquidity_indicator_model->retail_liquidity_indicator) {
        free(admin_retail_liquidity_indicator_model->retail_liquidity_indicator);
        admin_retail_liquidity_indicator_model->retail_liquidity_indicator = NULL;
    }
    if (admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code) {
        free(admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code);
        admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code = NULL;
    }
    if (admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text) {
        free(admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text);
        admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text = NULL;
    }
    if (admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) {
        free(admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable);
        admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable = NULL;
    }
    if (admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) {
        free(admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest);
        admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest = NULL;
    }
    if (admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) {
        free(admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest);
        admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest = NULL;
    }
    if (admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) {
        free(admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest);
        admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest = NULL;
    }
    free(admin_retail_liquidity_indicator_model);
}

cJSON *admin_retail_liquidity_indicator_model_convertToJSON(admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_retail_liquidity_indicator_model->symbol
    if(admin_retail_liquidity_indicator_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_retail_liquidity_indicator_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_retail_liquidity_indicator_model->timestamp_nanos
    if(admin_retail_liquidity_indicator_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_retail_liquidity_indicator_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_retail_liquidity_indicator_model->timestamp
    if(admin_retail_liquidity_indicator_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_retail_liquidity_indicator_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator
    if(admin_retail_liquidity_indicator_model->retail_liquidity_indicator) {
    if(cJSON_AddNumberToObject(item, "retail_liquidity_indicator", *admin_retail_liquidity_indicator_model->retail_liquidity_indicator) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code
    if(admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code) {
    if(cJSON_AddStringToObject(item, "retail_liquidity_indicator_code", admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text
    if(admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text) {
    if(cJSON_AddStringToObject(item, "retail_liquidity_indicator_text", admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    if(admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_not_applicable", *admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    if(admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_buy_interest", *admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    if(admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_sell_interest", *admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    if(admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_buy_and_sell_interest", *admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) == NULL) {
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

admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model_parseFromJSON(cJSON *admin_retail_liquidity_indicator_modelJSON){

    admin_retail_liquidity_indicator_model_t *admin_retail_liquidity_indicator_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->retail_liquidity_indicator
    int *retail_liquidity_indicator_local_var = NULL;

    char *retail_liquidity_indicator_code_local_str = NULL;

    char *retail_liquidity_indicator_text_local_str = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    int *is_retail_indicator_not_applicable_local_var = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    int *is_retail_indicator_buy_interest_local_var = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    int *is_retail_indicator_sell_interest_local_var = NULL;

    // define the local variable for admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    int *is_retail_indicator_buy_and_sell_interest_local_var = NULL;

    // admin_retail_liquidity_indicator_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_retail_liquidity_indicator_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "timestamp_nanos");
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

    // admin_retail_liquidity_indicator_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator
    cJSON *retail_liquidity_indicator = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator");
    if (cJSON_IsNull(retail_liquidity_indicator)) {
        retail_liquidity_indicator = NULL;
    }
    if (retail_liquidity_indicator) { 
    if(!cJSON_IsNumber(retail_liquidity_indicator))
    {
    goto end; //Numeric
    }
    retail_liquidity_indicator_local_var = malloc(sizeof(int));
    if(!retail_liquidity_indicator_local_var)
    {
        goto end;
    }
    *retail_liquidity_indicator_local_var = retail_liquidity_indicator->valuedouble;
    }

    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator_code
    cJSON *retail_liquidity_indicator_code = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator_code");
    if (cJSON_IsNull(retail_liquidity_indicator_code)) {
        retail_liquidity_indicator_code = NULL;
    }
    if (retail_liquidity_indicator_code) { 
    if(!cJSON_IsString(retail_liquidity_indicator_code) && !cJSON_IsNull(retail_liquidity_indicator_code))
    {
    goto end; //String
    }
    }

    // admin_retail_liquidity_indicator_model->retail_liquidity_indicator_text
    cJSON *retail_liquidity_indicator_text = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator_text");
    if (cJSON_IsNull(retail_liquidity_indicator_text)) {
        retail_liquidity_indicator_text = NULL;
    }
    if (retail_liquidity_indicator_text) { 
    if(!cJSON_IsString(retail_liquidity_indicator_text) && !cJSON_IsNull(retail_liquidity_indicator_text))
    {
    goto end; //String
    }
    }

    // admin_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    cJSON *is_retail_indicator_not_applicable = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "is_retail_indicator_not_applicable");
    if (cJSON_IsNull(is_retail_indicator_not_applicable)) {
        is_retail_indicator_not_applicable = NULL;
    }
    if (is_retail_indicator_not_applicable) { 
    if(!cJSON_IsBool(is_retail_indicator_not_applicable))
    {
    goto end; //Bool
    }
    is_retail_indicator_not_applicable_local_var = malloc(sizeof(int));
    if(!is_retail_indicator_not_applicable_local_var)
    {
        goto end;
    }
    *is_retail_indicator_not_applicable_local_var = is_retail_indicator_not_applicable->valueint;
    }

    // admin_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    cJSON *is_retail_indicator_buy_interest = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "is_retail_indicator_buy_interest");
    if (cJSON_IsNull(is_retail_indicator_buy_interest)) {
        is_retail_indicator_buy_interest = NULL;
    }
    if (is_retail_indicator_buy_interest) { 
    if(!cJSON_IsBool(is_retail_indicator_buy_interest))
    {
    goto end; //Bool
    }
    is_retail_indicator_buy_interest_local_var = malloc(sizeof(int));
    if(!is_retail_indicator_buy_interest_local_var)
    {
        goto end;
    }
    *is_retail_indicator_buy_interest_local_var = is_retail_indicator_buy_interest->valueint;
    }

    // admin_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    cJSON *is_retail_indicator_sell_interest = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "is_retail_indicator_sell_interest");
    if (cJSON_IsNull(is_retail_indicator_sell_interest)) {
        is_retail_indicator_sell_interest = NULL;
    }
    if (is_retail_indicator_sell_interest) { 
    if(!cJSON_IsBool(is_retail_indicator_sell_interest))
    {
    goto end; //Bool
    }
    is_retail_indicator_sell_interest_local_var = malloc(sizeof(int));
    if(!is_retail_indicator_sell_interest_local_var)
    {
        goto end;
    }
    *is_retail_indicator_sell_interest_local_var = is_retail_indicator_sell_interest->valueint;
    }

    // admin_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    cJSON *is_retail_indicator_buy_and_sell_interest = cJSON_GetObjectItemCaseSensitive(admin_retail_liquidity_indicator_modelJSON, "is_retail_indicator_buy_and_sell_interest");
    if (cJSON_IsNull(is_retail_indicator_buy_and_sell_interest)) {
        is_retail_indicator_buy_and_sell_interest = NULL;
    }
    if (is_retail_indicator_buy_and_sell_interest) { 
    if(!cJSON_IsBool(is_retail_indicator_buy_and_sell_interest))
    {
    goto end; //Bool
    }
    is_retail_indicator_buy_and_sell_interest_local_var = malloc(sizeof(int));
    if(!is_retail_indicator_buy_and_sell_interest_local_var)
    {
        goto end;
    }
    *is_retail_indicator_buy_and_sell_interest_local_var = is_retail_indicator_buy_and_sell_interest->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (retail_liquidity_indicator_code && !cJSON_IsNull(retail_liquidity_indicator_code)) retail_liquidity_indicator_code_local_str = strdup(retail_liquidity_indicator_code->valuestring);
    if (retail_liquidity_indicator_text && !cJSON_IsNull(retail_liquidity_indicator_text)) retail_liquidity_indicator_text_local_str = strdup(retail_liquidity_indicator_text->valuestring);

    admin_retail_liquidity_indicator_model_local_var = admin_retail_liquidity_indicator_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        retail_liquidity_indicator_local_var,
        retail_liquidity_indicator_code_local_str,
        retail_liquidity_indicator_text_local_str,
        is_retail_indicator_not_applicable_local_var,
        is_retail_indicator_buy_interest_local_var,
        is_retail_indicator_sell_interest_local_var,
        is_retail_indicator_buy_and_sell_interest_local_var
        );

    if (!admin_retail_liquidity_indicator_model_local_var) {
        goto end;
    }

    return admin_retail_liquidity_indicator_model_local_var;
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
    if (retail_liquidity_indicator_local_var) {
        free(retail_liquidity_indicator_local_var);
        retail_liquidity_indicator_local_var = NULL;
    }
    if (retail_liquidity_indicator_code_local_str) {
        free(retail_liquidity_indicator_code_local_str);
        retail_liquidity_indicator_code_local_str = NULL;
    }
    if (retail_liquidity_indicator_text_local_str) {
        free(retail_liquidity_indicator_text_local_str);
        retail_liquidity_indicator_text_local_str = NULL;
    }
    if (is_retail_indicator_not_applicable_local_var) {
        free(is_retail_indicator_not_applicable_local_var);
        is_retail_indicator_not_applicable_local_var = NULL;
    }
    if (is_retail_indicator_buy_interest_local_var) {
        free(is_retail_indicator_buy_interest_local_var);
        is_retail_indicator_buy_interest_local_var = NULL;
    }
    if (is_retail_indicator_sell_interest_local_var) {
        free(is_retail_indicator_sell_interest_local_var);
        is_retail_indicator_sell_interest_local_var = NULL;
    }
    if (is_retail_indicator_buy_and_sell_interest_local_var) {
        free(is_retail_indicator_buy_and_sell_interest_local_var);
        is_retail_indicator_buy_and_sell_interest_local_var = NULL;
    }
    return NULL;

}
