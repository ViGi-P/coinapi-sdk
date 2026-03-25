#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "admin_security_directory_model.h"



static admin_security_directory_model_t *admin_security_directory_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *flags,
    int *round_lot_size,
    double *adjusted_poc_price,
    int *luld_tier,
    char *luld_tier_code,
    char *luld_tier_text,
    int *is_luld_tier_not_applicable,
    int *is_luld_tier1,
    int *is_luld_tier2
    ) {
    admin_security_directory_model_t *admin_security_directory_model_local_var = malloc(sizeof(admin_security_directory_model_t));
    if (!admin_security_directory_model_local_var) {
        return NULL;
    }
    memset(admin_security_directory_model_local_var, 0, sizeof(admin_security_directory_model_t));
    admin_security_directory_model_local_var->_library_owned = 1;
    admin_security_directory_model_local_var->symbol = symbol;
    admin_security_directory_model_local_var->timestamp_nanos = timestamp_nanos;
    admin_security_directory_model_local_var->timestamp = timestamp;
    admin_security_directory_model_local_var->flags = flags;
    admin_security_directory_model_local_var->round_lot_size = round_lot_size;
    admin_security_directory_model_local_var->adjusted_poc_price = adjusted_poc_price;
    admin_security_directory_model_local_var->luld_tier = luld_tier;
    admin_security_directory_model_local_var->luld_tier_code = luld_tier_code;
    admin_security_directory_model_local_var->luld_tier_text = luld_tier_text;
    admin_security_directory_model_local_var->is_luld_tier_not_applicable = is_luld_tier_not_applicable;
    admin_security_directory_model_local_var->is_luld_tier1 = is_luld_tier1;
    admin_security_directory_model_local_var->is_luld_tier2 = is_luld_tier2;
    return admin_security_directory_model_local_var;
}

__attribute__((deprecated)) admin_security_directory_model_t *admin_security_directory_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *flags,
    int *round_lot_size,
    double *adjusted_poc_price,
    int *luld_tier,
    char *luld_tier_code,
    char *luld_tier_text,
    int *is_luld_tier_not_applicable,
    int *is_luld_tier1,
    int *is_luld_tier2
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *flags_copy = NULL;
    if (flags) {
        flags_copy = malloc(sizeof(int));
        if (flags_copy) *flags_copy = *flags;
    }
    int *round_lot_size_copy = NULL;
    if (round_lot_size) {
        round_lot_size_copy = malloc(sizeof(int));
        if (round_lot_size_copy) *round_lot_size_copy = *round_lot_size;
    }
    double *adjusted_poc_price_copy = NULL;
    if (adjusted_poc_price) {
        adjusted_poc_price_copy = malloc(sizeof(double));
        if (adjusted_poc_price_copy) *adjusted_poc_price_copy = *adjusted_poc_price;
    }
    int *luld_tier_copy = NULL;
    if (luld_tier) {
        luld_tier_copy = malloc(sizeof(int));
        if (luld_tier_copy) *luld_tier_copy = *luld_tier;
    }
    int *is_luld_tier_not_applicable_copy = NULL;
    if (is_luld_tier_not_applicable) {
        is_luld_tier_not_applicable_copy = malloc(sizeof(int));
        if (is_luld_tier_not_applicable_copy) *is_luld_tier_not_applicable_copy = *is_luld_tier_not_applicable;
    }
    int *is_luld_tier1_copy = NULL;
    if (is_luld_tier1) {
        is_luld_tier1_copy = malloc(sizeof(int));
        if (is_luld_tier1_copy) *is_luld_tier1_copy = *is_luld_tier1;
    }
    int *is_luld_tier2_copy = NULL;
    if (is_luld_tier2) {
        is_luld_tier2_copy = malloc(sizeof(int));
        if (is_luld_tier2_copy) *is_luld_tier2_copy = *is_luld_tier2;
    }
    admin_security_directory_model_t *result = admin_security_directory_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        flags_copy,
        round_lot_size_copy,
        adjusted_poc_price_copy,
        luld_tier_copy,
        luld_tier_code,
        luld_tier_text,
        is_luld_tier_not_applicable_copy,
        is_luld_tier1_copy,
        is_luld_tier2_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(flags_copy);
        free(round_lot_size_copy);
        free(adjusted_poc_price_copy);
        free(luld_tier_copy);
        free(is_luld_tier_not_applicable_copy);
        free(is_luld_tier1_copy);
        free(is_luld_tier2_copy);
    }
    return result;
}

void admin_security_directory_model_free(admin_security_directory_model_t *admin_security_directory_model) {
    if(NULL == admin_security_directory_model){
        return ;
    }
    if(admin_security_directory_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "admin_security_directory_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (admin_security_directory_model->symbol) {
        free(admin_security_directory_model->symbol);
        admin_security_directory_model->symbol = NULL;
    }
    if (admin_security_directory_model->timestamp_nanos) {
        free(admin_security_directory_model->timestamp_nanos);
        admin_security_directory_model->timestamp_nanos = NULL;
    }
    if (admin_security_directory_model->timestamp) {
        free(admin_security_directory_model->timestamp);
        admin_security_directory_model->timestamp = NULL;
    }
    if (admin_security_directory_model->flags) {
        free(admin_security_directory_model->flags);
        admin_security_directory_model->flags = NULL;
    }
    if (admin_security_directory_model->round_lot_size) {
        free(admin_security_directory_model->round_lot_size);
        admin_security_directory_model->round_lot_size = NULL;
    }
    if (admin_security_directory_model->adjusted_poc_price) {
        free(admin_security_directory_model->adjusted_poc_price);
        admin_security_directory_model->adjusted_poc_price = NULL;
    }
    if (admin_security_directory_model->luld_tier) {
        free(admin_security_directory_model->luld_tier);
        admin_security_directory_model->luld_tier = NULL;
    }
    if (admin_security_directory_model->luld_tier_code) {
        free(admin_security_directory_model->luld_tier_code);
        admin_security_directory_model->luld_tier_code = NULL;
    }
    if (admin_security_directory_model->luld_tier_text) {
        free(admin_security_directory_model->luld_tier_text);
        admin_security_directory_model->luld_tier_text = NULL;
    }
    if (admin_security_directory_model->is_luld_tier_not_applicable) {
        free(admin_security_directory_model->is_luld_tier_not_applicable);
        admin_security_directory_model->is_luld_tier_not_applicable = NULL;
    }
    if (admin_security_directory_model->is_luld_tier1) {
        free(admin_security_directory_model->is_luld_tier1);
        admin_security_directory_model->is_luld_tier1 = NULL;
    }
    if (admin_security_directory_model->is_luld_tier2) {
        free(admin_security_directory_model->is_luld_tier2);
        admin_security_directory_model->is_luld_tier2 = NULL;
    }
    free(admin_security_directory_model);
}

cJSON *admin_security_directory_model_convertToJSON(admin_security_directory_model_t *admin_security_directory_model) {
    cJSON *item = cJSON_CreateObject();

    // admin_security_directory_model->symbol
    if(admin_security_directory_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", admin_security_directory_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_directory_model->timestamp_nanos
    if(admin_security_directory_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *admin_security_directory_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_directory_model->timestamp
    if(admin_security_directory_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", admin_security_directory_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // admin_security_directory_model->flags
    if(admin_security_directory_model->flags) {
    if(cJSON_AddNumberToObject(item, "flags", *admin_security_directory_model->flags) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_directory_model->round_lot_size
    if(admin_security_directory_model->round_lot_size) {
    if(cJSON_AddNumberToObject(item, "round_lot_size", *admin_security_directory_model->round_lot_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_directory_model->adjusted_poc_price
    if(admin_security_directory_model->adjusted_poc_price) {
    if(cJSON_AddNumberToObject(item, "adjusted_poc_price", *admin_security_directory_model->adjusted_poc_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_directory_model->luld_tier
    if(admin_security_directory_model->luld_tier) {
    if(cJSON_AddNumberToObject(item, "luld_tier", *admin_security_directory_model->luld_tier) == NULL) {
    goto fail; //Numeric
    }
    }


    // admin_security_directory_model->luld_tier_code
    if(admin_security_directory_model->luld_tier_code) {
    if(cJSON_AddStringToObject(item, "luld_tier_code", admin_security_directory_model->luld_tier_code) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_directory_model->luld_tier_text
    if(admin_security_directory_model->luld_tier_text) {
    if(cJSON_AddStringToObject(item, "luld_tier_text", admin_security_directory_model->luld_tier_text) == NULL) {
    goto fail; //String
    }
    }


    // admin_security_directory_model->is_luld_tier_not_applicable
    if(admin_security_directory_model->is_luld_tier_not_applicable) {
    if(cJSON_AddBoolToObject(item, "is_luld_tier_not_applicable", *admin_security_directory_model->is_luld_tier_not_applicable) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_security_directory_model->is_luld_tier1
    if(admin_security_directory_model->is_luld_tier1) {
    if(cJSON_AddBoolToObject(item, "is_luld_tier1", *admin_security_directory_model->is_luld_tier1) == NULL) {
    goto fail; //Bool
    }
    }


    // admin_security_directory_model->is_luld_tier2
    if(admin_security_directory_model->is_luld_tier2) {
    if(cJSON_AddBoolToObject(item, "is_luld_tier2", *admin_security_directory_model->is_luld_tier2) == NULL) {
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

admin_security_directory_model_t *admin_security_directory_model_parseFromJSON(cJSON *admin_security_directory_modelJSON){

    admin_security_directory_model_t *admin_security_directory_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for admin_security_directory_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for admin_security_directory_model->flags
    int *flags_local_var = NULL;

    // define the local variable for admin_security_directory_model->round_lot_size
    int *round_lot_size_local_var = NULL;

    // define the local variable for admin_security_directory_model->adjusted_poc_price
    double *adjusted_poc_price_local_var = NULL;

    // define the local variable for admin_security_directory_model->luld_tier
    int *luld_tier_local_var = NULL;

    char *luld_tier_code_local_str = NULL;

    char *luld_tier_text_local_str = NULL;

    // define the local variable for admin_security_directory_model->is_luld_tier_not_applicable
    int *is_luld_tier_not_applicable_local_var = NULL;

    // define the local variable for admin_security_directory_model->is_luld_tier1
    int *is_luld_tier1_local_var = NULL;

    // define the local variable for admin_security_directory_model->is_luld_tier2
    int *is_luld_tier2_local_var = NULL;

    // admin_security_directory_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // admin_security_directory_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "timestamp_nanos");
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

    // admin_security_directory_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // admin_security_directory_model->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "flags");
    if (cJSON_IsNull(flags)) {
        flags = NULL;
    }
    if (flags) { 
    if(!cJSON_IsNumber(flags))
    {
    goto end; //Numeric
    }
    flags_local_var = malloc(sizeof(int));
    if(!flags_local_var)
    {
        goto end;
    }
    *flags_local_var = flags->valuedouble;
    }

    // admin_security_directory_model->round_lot_size
    cJSON *round_lot_size = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "round_lot_size");
    if (cJSON_IsNull(round_lot_size)) {
        round_lot_size = NULL;
    }
    if (round_lot_size) { 
    if(!cJSON_IsNumber(round_lot_size))
    {
    goto end; //Numeric
    }
    round_lot_size_local_var = malloc(sizeof(int));
    if(!round_lot_size_local_var)
    {
        goto end;
    }
    *round_lot_size_local_var = round_lot_size->valuedouble;
    }

    // admin_security_directory_model->adjusted_poc_price
    cJSON *adjusted_poc_price = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "adjusted_poc_price");
    if (cJSON_IsNull(adjusted_poc_price)) {
        adjusted_poc_price = NULL;
    }
    if (adjusted_poc_price) { 
    if(!cJSON_IsNumber(adjusted_poc_price))
    {
    goto end; //Numeric
    }
    adjusted_poc_price_local_var = malloc(sizeof(double));
    if(!adjusted_poc_price_local_var)
    {
        goto end;
    }
    *adjusted_poc_price_local_var = adjusted_poc_price->valuedouble;
    }

    // admin_security_directory_model->luld_tier
    cJSON *luld_tier = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "luld_tier");
    if (cJSON_IsNull(luld_tier)) {
        luld_tier = NULL;
    }
    if (luld_tier) { 
    if(!cJSON_IsNumber(luld_tier))
    {
    goto end; //Numeric
    }
    luld_tier_local_var = malloc(sizeof(int));
    if(!luld_tier_local_var)
    {
        goto end;
    }
    *luld_tier_local_var = luld_tier->valuedouble;
    }

    // admin_security_directory_model->luld_tier_code
    cJSON *luld_tier_code = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "luld_tier_code");
    if (cJSON_IsNull(luld_tier_code)) {
        luld_tier_code = NULL;
    }
    if (luld_tier_code) { 
    if(!cJSON_IsString(luld_tier_code) && !cJSON_IsNull(luld_tier_code))
    {
    goto end; //String
    }
    }

    // admin_security_directory_model->luld_tier_text
    cJSON *luld_tier_text = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "luld_tier_text");
    if (cJSON_IsNull(luld_tier_text)) {
        luld_tier_text = NULL;
    }
    if (luld_tier_text) { 
    if(!cJSON_IsString(luld_tier_text) && !cJSON_IsNull(luld_tier_text))
    {
    goto end; //String
    }
    }

    // admin_security_directory_model->is_luld_tier_not_applicable
    cJSON *is_luld_tier_not_applicable = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "is_luld_tier_not_applicable");
    if (cJSON_IsNull(is_luld_tier_not_applicable)) {
        is_luld_tier_not_applicable = NULL;
    }
    if (is_luld_tier_not_applicable) { 
    if(!cJSON_IsBool(is_luld_tier_not_applicable))
    {
    goto end; //Bool
    }
    is_luld_tier_not_applicable_local_var = malloc(sizeof(int));
    if(!is_luld_tier_not_applicable_local_var)
    {
        goto end;
    }
    *is_luld_tier_not_applicable_local_var = is_luld_tier_not_applicable->valueint;
    }

    // admin_security_directory_model->is_luld_tier1
    cJSON *is_luld_tier1 = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "is_luld_tier1");
    if (cJSON_IsNull(is_luld_tier1)) {
        is_luld_tier1 = NULL;
    }
    if (is_luld_tier1) { 
    if(!cJSON_IsBool(is_luld_tier1))
    {
    goto end; //Bool
    }
    is_luld_tier1_local_var = malloc(sizeof(int));
    if(!is_luld_tier1_local_var)
    {
        goto end;
    }
    *is_luld_tier1_local_var = is_luld_tier1->valueint;
    }

    // admin_security_directory_model->is_luld_tier2
    cJSON *is_luld_tier2 = cJSON_GetObjectItemCaseSensitive(admin_security_directory_modelJSON, "is_luld_tier2");
    if (cJSON_IsNull(is_luld_tier2)) {
        is_luld_tier2 = NULL;
    }
    if (is_luld_tier2) { 
    if(!cJSON_IsBool(is_luld_tier2))
    {
    goto end; //Bool
    }
    is_luld_tier2_local_var = malloc(sizeof(int));
    if(!is_luld_tier2_local_var)
    {
        goto end;
    }
    *is_luld_tier2_local_var = is_luld_tier2->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (luld_tier_code && !cJSON_IsNull(luld_tier_code)) luld_tier_code_local_str = strdup(luld_tier_code->valuestring);
    if (luld_tier_text && !cJSON_IsNull(luld_tier_text)) luld_tier_text_local_str = strdup(luld_tier_text->valuestring);

    admin_security_directory_model_local_var = admin_security_directory_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        flags_local_var,
        round_lot_size_local_var,
        adjusted_poc_price_local_var,
        luld_tier_local_var,
        luld_tier_code_local_str,
        luld_tier_text_local_str,
        is_luld_tier_not_applicable_local_var,
        is_luld_tier1_local_var,
        is_luld_tier2_local_var
        );

    if (!admin_security_directory_model_local_var) {
        goto end;
    }

    return admin_security_directory_model_local_var;
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
    if (flags_local_var) {
        free(flags_local_var);
        flags_local_var = NULL;
    }
    if (round_lot_size_local_var) {
        free(round_lot_size_local_var);
        round_lot_size_local_var = NULL;
    }
    if (adjusted_poc_price_local_var) {
        free(adjusted_poc_price_local_var);
        adjusted_poc_price_local_var = NULL;
    }
    if (luld_tier_local_var) {
        free(luld_tier_local_var);
        luld_tier_local_var = NULL;
    }
    if (luld_tier_code_local_str) {
        free(luld_tier_code_local_str);
        luld_tier_code_local_str = NULL;
    }
    if (luld_tier_text_local_str) {
        free(luld_tier_text_local_str);
        luld_tier_text_local_str = NULL;
    }
    if (is_luld_tier_not_applicable_local_var) {
        free(is_luld_tier_not_applicable_local_var);
        is_luld_tier_not_applicable_local_var = NULL;
    }
    if (is_luld_tier1_local_var) {
        free(is_luld_tier1_local_var);
        is_luld_tier1_local_var = NULL;
    }
    if (is_luld_tier2_local_var) {
        free(is_luld_tier2_local_var);
        is_luld_tier2_local_var = NULL;
    }
    return NULL;

}
