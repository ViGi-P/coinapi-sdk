#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_official_price_model.h"



static admin_official_price_model_t *admin_official_price_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *price_type,
    char *price_type_code,
    char *price_type_text,
    int *is_price_type_opening,
    int *is_price_type_closing,
    double *official_price
    ) {
    admin_official_price_model_t *admin_official_price_model_local_var = malloc(sizeof(admin_official_price_model_t));
    if (!admin_official_price_model_local_var) {
        return NULL;
    }
    memset(admin_official_price_model_local_var, 0, sizeof(admin_official_price_model_t));
    admin_official_price_model_local_var->_library_owned = 1;
    admin_official_price_model_local_var->symbol = symbol;
    admin_official_price_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_official_price_model_local_var->timestamp = timestamp;
    admin_official_price_model_local_var->price_type = price_type;
    admin_official_price_model_local_var->price_type_code = price_type_code;
    admin_official_price_model_local_var->price_type_text = price_type_text;
    admin_official_price_model_local_var->is_price_type_opening = is_price_type_opening;
    admin_official_price_model_local_var->is_price_type_closing = is_price_type_closing;
    admin_official_price_model_local_var->official_price = official_price;
    return admin_official_price_model_local_var;
}

__attribute__((deprecated)) admin_official_price_model_t *admin_official_price_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *price_type,
    char *price_type_code,
    char *price_type_text,
    int *is_price_type_opening,
    int *is_price_type_closing,
    double *official_price
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *price_type_copy = NULL;
    if (price_type) {
        price_type_copy = malloc(sizeof(int));
        if (price_type_copy) *price_type_copy = *price_type;
    }
    int *is_price_type_opening_copy = NULL;
    if (is_price_type_opening) {
        is_price_type_opening_copy = malloc(sizeof(int));
        if (is_price_type_opening_copy) *is_price_type_opening_copy = *is_price_type_opening;
    }
    int *is_price_type_closing_copy = NULL;
    if (is_price_type_closing) {
        is_price_type_closing_copy = malloc(sizeof(int));
        if (is_price_type_closing_copy) *is_price_type_closing_copy = *is_price_type_closing;
    }
    double *official_price_copy = NULL;
    if (official_price) {
        official_price_copy = malloc(sizeof(double));
        if (official_price_copy) *official_price_copy = *official_price;
    }
    admin_official_price_model_t *result = admin_official_price_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        price_type_copy,
        price_type_code,
        price_type_text,
        is_price_type_opening_copy,
        is_price_type_closing_copy,
        official_price_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(price_type_copy);
        free(is_price_type_opening_copy);
        free(is_price_type_closing_copy);
        free(official_price_copy);
    }
    return result;
}

void admin_official_price_model_free(admin_official_price_model_t *admin_official_price_model) {
    if(NULL == admin_official_price_model){
        return ;
    }
    if(admin_official_price_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_official_price_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_official_price_model->symbol) {
        free(admin_official_price_model->symbol);
        admin_official_price_model->symbol = NULL;
    }
    if (admin_official_price_model->timestamp_nanos) {
        free(admin_official_price_model->timestamp_nanos);
        admin_official_price_model->timestamp_nanos = NULL;
    }
    if (admin_official_price_model->timestamp) {
        free(admin_official_price_model->timestamp);
        admin_official_price_model->timestamp = NULL;
    }
    if (admin_official_price_model->price_type) {
        free(admin_official_price_model->price_type);
        admin_official_price_model->price_type = NULL;
    }
    if (admin_official_price_model->price_type_code) {
        free(admin_official_price_model->price_type_code);
        admin_official_price_model->price_type_code = NULL;
    }
    if (admin_official_price_model->price_type_text) {
        free(admin_official_price_model->price_type_text);
        admin_official_price_model->price_type_text = NULL;
    }
    if (admin_official_price_model->is_price_type_opening) {
        free(admin_official_price_model->is_price_type_opening);
        admin_official_price_model->is_price_type_opening = NULL;
    }
    if (admin_official_price_model->is_price_type_closing) {
        free(admin_official_price_model->is_price_type_closing);
        admin_official_price_model->is_price_type_closing = NULL;
    }
    if (admin_official_price_model->official_price) {
        free(admin_official_price_model->official_price);
        admin_official_price_model->official_price = NULL;
    }
    free(admin_official_price_model);
}

cJSON *admin_official_price_model_convertToJSON(admin_official_price_model_t *admin_official_price_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_official_price_model->symbol
    if(admin_official_price_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_official_price_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_official_price_model->timestamp_nanos
    if(admin_official_price_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_official_price_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_official_price_model->timestamp
    if(admin_official_price_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_official_price_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_official_price_model->price_type
    if(admin_official_price_model->price_type) {
    if(cJSON_AddNumberToObject(item, "price_type", *admin_official_price_model->price_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_official_price_model->price_type_code
    if(admin_official_price_model->price_type_code) {
    if(cJSON_AddStringToObject(item, "price_type_code", admin_official_price_model->price_type_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_official_price_model->price_type_text
    if(admin_official_price_model->price_type_text) {
    if(cJSON_AddStringToObject(item, "price_type_text", admin_official_price_model->price_type_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_official_price_model->is_price_type_opening
    if(admin_official_price_model->is_price_type_opening) {
    if(cJSON_AddBoolToObject(item, "is_price_type_opening", *admin_official_price_model->is_price_type_opening) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_official_price_model->is_price_type_closing
    if(admin_official_price_model->is_price_type_closing) {
    if(cJSON_AddBoolToObject(item, "is_price_type_closing", *admin_official_price_model->is_price_type_closing) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_official_price_model->official_price
    if(admin_official_price_model->official_price) {
    if(cJSON_AddNumberToObject(item, "official_price", *admin_official_price_model->official_price) == NULL) {
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

admin_official_price_model_t *admin_official_price_model_parseFromJSON(cJSON *admin_official_price_modelJSON){

    admin_official_price_model_t *admin_official_price_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_official_price_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_official_price_model->price_type
    int *price_type_local_var = NULL;

    char *price_type_code_local_str = NULL;

    char *price_type_text_local_str = NULL;

    // define the local variable for admin_official_price_model->is_price_type_opening
    int *is_price_type_opening_local_var = NULL;

    // define the local variable for admin_official_price_model->is_price_type_closing
    int *is_price_type_closing_local_var = NULL;

    // define the local variable for admin_official_price_model->official_price
    double *official_price_local_var = NULL;

    // admin_official_price_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_official_price_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "timestamp_nanos");
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

    // admin_official_price_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_official_price_model->price_type
    cJSON *price_type = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "price_type");
    if (cJSON_IsNull(price_type)) {
        price_type = NULL;
    }
    if (price_type) { 
    if(!cJSON_IsNumber(price_type))
    {
    goto end; //Numeric
    }
    price_type_local_var = malloc(sizeof(int));
    if(!price_type_local_var)
    {
        goto end;
    }
    *price_type_local_var = price_type->valuedouble;
    }

    // admin_official_price_model->price_type_code
    cJSON *price_type_code = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "price_type_code");
    if (cJSON_IsNull(price_type_code)) {
        price_type_code = NULL;
    }
    if (price_type_code) { 
    if(!cJSON_IsString(price_type_code) && !cJSON_IsNull(price_type_code))
    {
    goto end; //String
    }
    }

    // admin_official_price_model->price_type_text
    cJSON *price_type_text = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "price_type_text");
    if (cJSON_IsNull(price_type_text)) {
        price_type_text = NULL;
    }
    if (price_type_text) { 
    if(!cJSON_IsString(price_type_text) && !cJSON_IsNull(price_type_text))
    {
    goto end; //String
    }
    }

    // admin_official_price_model->is_price_type_opening
    cJSON *is_price_type_opening = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "is_price_type_opening");
    if (cJSON_IsNull(is_price_type_opening)) {
        is_price_type_opening = NULL;
    }
    if (is_price_type_opening) { 
    if(!cJSON_IsBool(is_price_type_opening))
    {
    goto end; //Bool
    }
    is_price_type_opening_local_var = malloc(sizeof(int));
    if(!is_price_type_opening_local_var)
    {
        goto end;
    }
    *is_price_type_opening_local_var = is_price_type_opening->valueint;
    }

    // admin_official_price_model->is_price_type_closing
    cJSON *is_price_type_closing = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "is_price_type_closing");
    if (cJSON_IsNull(is_price_type_closing)) {
        is_price_type_closing = NULL;
    }
    if (is_price_type_closing) { 
    if(!cJSON_IsBool(is_price_type_closing))
    {
    goto end; //Bool
    }
    is_price_type_closing_local_var = malloc(sizeof(int));
    if(!is_price_type_closing_local_var)
    {
        goto end;
    }
    *is_price_type_closing_local_var = is_price_type_closing->valueint;
    }

    // admin_official_price_model->official_price
    cJSON *official_price = cJSON_GetObjectItemCaseSensitive(admin_official_price_modelJSON, "official_price");
    if (cJSON_IsNull(official_price)) {
        official_price = NULL;
    }
    if (official_price) { 
    if(!cJSON_IsNumber(official_price))
    {
    goto end; //Numeric
    }
    official_price_local_var = malloc(sizeof(double));
    if(!official_price_local_var)
    {
        goto end;
    }
    *official_price_local_var = official_price->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (price_type_code && !cJSON_IsNull(price_type_code)) price_type_code_local_str = strdup(price_type_code->valuestring);
    if (price_type_text && !cJSON_IsNull(price_type_text)) price_type_text_local_str = strdup(price_type_text->valuestring);

    admin_official_price_model_local_var = admin_official_price_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        price_type_local_var,
        price_type_code_local_str,
        price_type_text_local_str,
        is_price_type_opening_local_var,
        is_price_type_closing_local_var,
        official_price_local_var
        );

    if (!admin_official_price_model_local_var) {
        goto end;
    }

    return admin_official_price_model_local_var;
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
    if (price_type_local_var) {
        free(price_type_local_var);
        price_type_local_var = NULL;
    }
    if (price_type_code_local_str) {
        free(price_type_code_local_str);
        price_type_code_local_str = NULL;
    }
    if (price_type_text_local_str) {
        free(price_type_text_local_str);
        price_type_text_local_str = NULL;
    }
    if (is_price_type_opening_local_var) {
        free(is_price_type_opening_local_var);
        is_price_type_opening_local_var = NULL;
    }
    if (is_price_type_closing_local_var) {
        free(is_price_type_closing_local_var);
        is_price_type_closing_local_var = NULL;
    }
    if (official_price_local_var) {
        free(official_price_local_var);
        official_price_local_var = NULL;
    }
    return NULL;

}
