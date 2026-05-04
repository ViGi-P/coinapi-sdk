#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_retail_liquidity_indicator_model.h"



static models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model_create_internal(
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
    models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model_local_var = malloc(sizeof(models_retail_liquidity_indicator_model_t));
    if (!models_retail_liquidity_indicator_model_local_var) {
        return NULL;
    }
    memset(models_retail_liquidity_indicator_model_local_var, 0, sizeof(models_retail_liquidity_indicator_model_t));
    models_retail_liquidity_indicator_model_local_var->_library_owned = 1;
    models_retail_liquidity_indicator_model_local_var->symbol = symbol;
    models_retail_liquidity_indicator_model_local_var->timestamp_nanos = timestamp_nanos;
    models_retail_liquidity_indicator_model_local_var->timestamp = timestamp;
    models_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator = retail_liquidity_indicator;
    models_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator_code = retail_liquidity_indicator_code;
    models_retail_liquidity_indicator_model_local_var->retail_liquidity_indicator_text = retail_liquidity_indicator_text;
    models_retail_liquidity_indicator_model_local_var->is_retail_indicator_not_applicable = is_retail_indicator_not_applicable;
    models_retail_liquidity_indicator_model_local_var->is_retail_indicator_buy_interest = is_retail_indicator_buy_interest;
    models_retail_liquidity_indicator_model_local_var->is_retail_indicator_sell_interest = is_retail_indicator_sell_interest;
    models_retail_liquidity_indicator_model_local_var->is_retail_indicator_buy_and_sell_interest = is_retail_indicator_buy_and_sell_interest;
    return models_retail_liquidity_indicator_model_local_var;
}

__attribute__((deprecated)) models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model_create(
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
    models_retail_liquidity_indicator_model_t *result = models_retail_liquidity_indicator_model_create_internal (
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

void models_retail_liquidity_indicator_model_free(models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model) {
    if(NULL == models_retail_liquidity_indicator_model){
        return ;
    }
    if(models_retail_liquidity_indicator_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_retail_liquidity_indicator_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_retail_liquidity_indicator_model->symbol) {
        free(models_retail_liquidity_indicator_model->symbol);
        models_retail_liquidity_indicator_model->symbol = NULL;
    }
    if (models_retail_liquidity_indicator_model->timestamp_nanos) {
        free(models_retail_liquidity_indicator_model->timestamp_nanos);
        models_retail_liquidity_indicator_model->timestamp_nanos = NULL;
    }
    if (models_retail_liquidity_indicator_model->timestamp) {
        free(models_retail_liquidity_indicator_model->timestamp);
        models_retail_liquidity_indicator_model->timestamp = NULL;
    }
    if (models_retail_liquidity_indicator_model->retail_liquidity_indicator) {
        free(models_retail_liquidity_indicator_model->retail_liquidity_indicator);
        models_retail_liquidity_indicator_model->retail_liquidity_indicator = NULL;
    }
    if (models_retail_liquidity_indicator_model->retail_liquidity_indicator_code) {
        free(models_retail_liquidity_indicator_model->retail_liquidity_indicator_code);
        models_retail_liquidity_indicator_model->retail_liquidity_indicator_code = NULL;
    }
    if (models_retail_liquidity_indicator_model->retail_liquidity_indicator_text) {
        free(models_retail_liquidity_indicator_model->retail_liquidity_indicator_text);
        models_retail_liquidity_indicator_model->retail_liquidity_indicator_text = NULL;
    }
    if (models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) {
        free(models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable);
        models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable = NULL;
    }
    if (models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) {
        free(models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest);
        models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest = NULL;
    }
    if (models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) {
        free(models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest);
        models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest = NULL;
    }
    if (models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) {
        free(models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest);
        models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest = NULL;
    }
    free(models_retail_liquidity_indicator_model);
}

cJSON *models_retail_liquidity_indicator_model_convertToJSON(models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model) {
    cJSON *item = cJSON_CreateObject();

    // models_retail_liquidity_indicator_model->symbol
    if(models_retail_liquidity_indicator_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_retail_liquidity_indicator_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_retail_liquidity_indicator_model->timestamp_nanos
    if(models_retail_liquidity_indicator_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_retail_liquidity_indicator_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_retail_liquidity_indicator_model->timestamp
    if(models_retail_liquidity_indicator_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_retail_liquidity_indicator_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_retail_liquidity_indicator_model->retail_liquidity_indicator
    if(models_retail_liquidity_indicator_model->retail_liquidity_indicator) {
    if(cJSON_AddNumberToObject(item, "retail_liquidity_indicator", *models_retail_liquidity_indicator_model->retail_liquidity_indicator) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_retail_liquidity_indicator_model->retail_liquidity_indicator_code
    if(models_retail_liquidity_indicator_model->retail_liquidity_indicator_code) {
    if(cJSON_AddStringToObject(item, "retail_liquidity_indicator_code", models_retail_liquidity_indicator_model->retail_liquidity_indicator_code) == NULL) {
    goto fail; //String
    }
    }


    // models_retail_liquidity_indicator_model->retail_liquidity_indicator_text
    if(models_retail_liquidity_indicator_model->retail_liquidity_indicator_text) {
    if(cJSON_AddStringToObject(item, "retail_liquidity_indicator_text", models_retail_liquidity_indicator_model->retail_liquidity_indicator_text) == NULL) {
    goto fail; //String
    }
    }


    // models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    if(models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_not_applicable", *models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable) == NULL) {
    goto fail; //Bool
    }
    }


    // models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    if(models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_buy_interest", *models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest) == NULL) {
    goto fail; //Bool
    }
    }


    // models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    if(models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_sell_interest", *models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest) == NULL) {
    goto fail; //Bool
    }
    }


    // models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    if(models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) {
    if(cJSON_AddBoolToObject(item, "is_retail_indicator_buy_and_sell_interest", *models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest) == NULL) {
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

models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model_parseFromJSON(cJSON *models_retail_liquidity_indicator_modelJSON){

    models_retail_liquidity_indicator_model_t *models_retail_liquidity_indicator_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->retail_liquidity_indicator
    int *retail_liquidity_indicator_local_var = NULL;

    char *retail_liquidity_indicator_code_local_str = NULL;

    char *retail_liquidity_indicator_text_local_str = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    int *is_retail_indicator_not_applicable_local_var = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    int *is_retail_indicator_buy_interest_local_var = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    int *is_retail_indicator_sell_interest_local_var = NULL;

    // define the local variable for models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    int *is_retail_indicator_buy_and_sell_interest_local_var = NULL;

    // models_retail_liquidity_indicator_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_retail_liquidity_indicator_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "timestamp_nanos");
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

    // models_retail_liquidity_indicator_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_retail_liquidity_indicator_model->retail_liquidity_indicator
    cJSON *retail_liquidity_indicator = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator");
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

    // models_retail_liquidity_indicator_model->retail_liquidity_indicator_code
    cJSON *retail_liquidity_indicator_code = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator_code");
    if (cJSON_IsNull(retail_liquidity_indicator_code)) {
        retail_liquidity_indicator_code = NULL;
    }
    if (retail_liquidity_indicator_code) { 
    if(!cJSON_IsString(retail_liquidity_indicator_code) && !cJSON_IsNull(retail_liquidity_indicator_code))
    {
    goto end; //String
    }
    }

    // models_retail_liquidity_indicator_model->retail_liquidity_indicator_text
    cJSON *retail_liquidity_indicator_text = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "retail_liquidity_indicator_text");
    if (cJSON_IsNull(retail_liquidity_indicator_text)) {
        retail_liquidity_indicator_text = NULL;
    }
    if (retail_liquidity_indicator_text) { 
    if(!cJSON_IsString(retail_liquidity_indicator_text) && !cJSON_IsNull(retail_liquidity_indicator_text))
    {
    goto end; //String
    }
    }

    // models_retail_liquidity_indicator_model->is_retail_indicator_not_applicable
    cJSON *is_retail_indicator_not_applicable = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "is_retail_indicator_not_applicable");
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

    // models_retail_liquidity_indicator_model->is_retail_indicator_buy_interest
    cJSON *is_retail_indicator_buy_interest = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "is_retail_indicator_buy_interest");
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

    // models_retail_liquidity_indicator_model->is_retail_indicator_sell_interest
    cJSON *is_retail_indicator_sell_interest = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "is_retail_indicator_sell_interest");
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

    // models_retail_liquidity_indicator_model->is_retail_indicator_buy_and_sell_interest
    cJSON *is_retail_indicator_buy_and_sell_interest = cJSON_GetObjectItemCaseSensitive(models_retail_liquidity_indicator_modelJSON, "is_retail_indicator_buy_and_sell_interest");
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

    models_retail_liquidity_indicator_model_local_var = models_retail_liquidity_indicator_model_create_internal (
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

    if (!models_retail_liquidity_indicator_model_local_var) {
        goto end;
    }

    return models_retail_liquidity_indicator_model_local_var;
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
