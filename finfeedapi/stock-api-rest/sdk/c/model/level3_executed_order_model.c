#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "level3_executed_order_model.h"



static level3_executed_order_model_t *level3_executed_order_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference,
    int *sale_condition_flags,
    int *is_intermarket_sweep,
    int *is_extended_hours_trade,
    int *is_odd_lot_trade,
    int *is_trade_through_exempt,
    int *is_single_price_cross_trade,
    int *size,
    double *price,
    long *trade_id
    ) {
    level3_executed_order_model_t *level3_executed_order_model_local_var = malloc(sizeof(level3_executed_order_model_t));
    if (!level3_executed_order_model_local_var) {
        return NULL;
    }
    memset(level3_executed_order_model_local_var, 0, sizeof(level3_executed_order_model_t));
    level3_executed_order_model_local_var->_library_owned = 1;
    level3_executed_order_model_local_var->symbol = symbol;
    level3_executed_order_model_local_var->timestamp_nanos = timestamp_nanos;
    level3_executed_order_model_local_var->timestamp = timestamp;
    level3_executed_order_model_local_var->order_id_reference = order_id_reference;
    level3_executed_order_model_local_var->sale_condition_flags = sale_condition_flags;
    level3_executed_order_model_local_var->is_intermarket_sweep = is_intermarket_sweep;
    level3_executed_order_model_local_var->is_extended_hours_trade = is_extended_hours_trade;
    level3_executed_order_model_local_var->is_odd_lot_trade = is_odd_lot_trade;
    level3_executed_order_model_local_var->is_trade_through_exempt = is_trade_through_exempt;
    level3_executed_order_model_local_var->is_single_price_cross_trade = is_single_price_cross_trade;
    level3_executed_order_model_local_var->size = size;
    level3_executed_order_model_local_var->price = price;
    level3_executed_order_model_local_var->trade_id = trade_id;
    return level3_executed_order_model_local_var;
}

__attribute__((deprecated)) level3_executed_order_model_t *level3_executed_order_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    long *order_id_reference,
    int *sale_condition_flags,
    int *is_intermarket_sweep,
    int *is_extended_hours_trade,
    int *is_odd_lot_trade,
    int *is_trade_through_exempt,
    int *is_single_price_cross_trade,
    int *size,
    double *price,
    long *trade_id
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    long *order_id_reference_copy = NULL;
    if (order_id_reference) {
        order_id_reference_copy = malloc(sizeof(long));
        if (order_id_reference_copy) *order_id_reference_copy = *order_id_reference;
    }
    int *sale_condition_flags_copy = NULL;
    if (sale_condition_flags) {
        sale_condition_flags_copy = malloc(sizeof(int));
        if (sale_condition_flags_copy) *sale_condition_flags_copy = *sale_condition_flags;
    }
    int *is_intermarket_sweep_copy = NULL;
    if (is_intermarket_sweep) {
        is_intermarket_sweep_copy = malloc(sizeof(int));
        if (is_intermarket_sweep_copy) *is_intermarket_sweep_copy = *is_intermarket_sweep;
    }
    int *is_extended_hours_trade_copy = NULL;
    if (is_extended_hours_trade) {
        is_extended_hours_trade_copy = malloc(sizeof(int));
        if (is_extended_hours_trade_copy) *is_extended_hours_trade_copy = *is_extended_hours_trade;
    }
    int *is_odd_lot_trade_copy = NULL;
    if (is_odd_lot_trade) {
        is_odd_lot_trade_copy = malloc(sizeof(int));
        if (is_odd_lot_trade_copy) *is_odd_lot_trade_copy = *is_odd_lot_trade;
    }
    int *is_trade_through_exempt_copy = NULL;
    if (is_trade_through_exempt) {
        is_trade_through_exempt_copy = malloc(sizeof(int));
        if (is_trade_through_exempt_copy) *is_trade_through_exempt_copy = *is_trade_through_exempt;
    }
    int *is_single_price_cross_trade_copy = NULL;
    if (is_single_price_cross_trade) {
        is_single_price_cross_trade_copy = malloc(sizeof(int));
        if (is_single_price_cross_trade_copy) *is_single_price_cross_trade_copy = *is_single_price_cross_trade;
    }
    int *size_copy = NULL;
    if (size) {
        size_copy = malloc(sizeof(int));
        if (size_copy) *size_copy = *size;
    }
    double *price_copy = NULL;
    if (price) {
        price_copy = malloc(sizeof(double));
        if (price_copy) *price_copy = *price;
    }
    long *trade_id_copy = NULL;
    if (trade_id) {
        trade_id_copy = malloc(sizeof(long));
        if (trade_id_copy) *trade_id_copy = *trade_id;
    }
    level3_executed_order_model_t *result = level3_executed_order_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        order_id_reference_copy,
        sale_condition_flags_copy,
        is_intermarket_sweep_copy,
        is_extended_hours_trade_copy,
        is_odd_lot_trade_copy,
        is_trade_through_exempt_copy,
        is_single_price_cross_trade_copy,
        size_copy,
        price_copy,
        trade_id_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(order_id_reference_copy);
        free(sale_condition_flags_copy);
        free(is_intermarket_sweep_copy);
        free(is_extended_hours_trade_copy);
        free(is_odd_lot_trade_copy);
        free(is_trade_through_exempt_copy);
        free(is_single_price_cross_trade_copy);
        free(size_copy);
        free(price_copy);
        free(trade_id_copy);
    }
    return result;
}

void level3_executed_order_model_free(level3_executed_order_model_t *level3_executed_order_model) {
    if(NULL == level3_executed_order_model){
        return ;
    }
    if(level3_executed_order_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "level3_executed_order_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (level3_executed_order_model->symbol) {
        free(level3_executed_order_model->symbol);
        level3_executed_order_model->symbol = NULL;
    }
    if (level3_executed_order_model->timestamp_nanos) {
        free(level3_executed_order_model->timestamp_nanos);
        level3_executed_order_model->timestamp_nanos = NULL;
    }
    if (level3_executed_order_model->timestamp) {
        free(level3_executed_order_model->timestamp);
        level3_executed_order_model->timestamp = NULL;
    }
    if (level3_executed_order_model->order_id_reference) {
        free(level3_executed_order_model->order_id_reference);
        level3_executed_order_model->order_id_reference = NULL;
    }
    if (level3_executed_order_model->sale_condition_flags) {
        free(level3_executed_order_model->sale_condition_flags);
        level3_executed_order_model->sale_condition_flags = NULL;
    }
    if (level3_executed_order_model->is_intermarket_sweep) {
        free(level3_executed_order_model->is_intermarket_sweep);
        level3_executed_order_model->is_intermarket_sweep = NULL;
    }
    if (level3_executed_order_model->is_extended_hours_trade) {
        free(level3_executed_order_model->is_extended_hours_trade);
        level3_executed_order_model->is_extended_hours_trade = NULL;
    }
    if (level3_executed_order_model->is_odd_lot_trade) {
        free(level3_executed_order_model->is_odd_lot_trade);
        level3_executed_order_model->is_odd_lot_trade = NULL;
    }
    if (level3_executed_order_model->is_trade_through_exempt) {
        free(level3_executed_order_model->is_trade_through_exempt);
        level3_executed_order_model->is_trade_through_exempt = NULL;
    }
    if (level3_executed_order_model->is_single_price_cross_trade) {
        free(level3_executed_order_model->is_single_price_cross_trade);
        level3_executed_order_model->is_single_price_cross_trade = NULL;
    }
    if (level3_executed_order_model->size) {
        free(level3_executed_order_model->size);
        level3_executed_order_model->size = NULL;
    }
    if (level3_executed_order_model->price) {
        free(level3_executed_order_model->price);
        level3_executed_order_model->price = NULL;
    }
    if (level3_executed_order_model->trade_id) {
        free(level3_executed_order_model->trade_id);
        level3_executed_order_model->trade_id = NULL;
    }
    free(level3_executed_order_model);
}

cJSON *level3_executed_order_model_convertToJSON(level3_executed_order_model_t *level3_executed_order_model) {
    cJSON *item = cJSON_CreateObject();

    // level3_executed_order_model->symbol
    if(level3_executed_order_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", level3_executed_order_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // level3_executed_order_model->timestamp_nanos
    if(level3_executed_order_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *level3_executed_order_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_executed_order_model->timestamp
    if(level3_executed_order_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", level3_executed_order_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // level3_executed_order_model->order_id_reference
    if(level3_executed_order_model->order_id_reference) {
    if(cJSON_AddNumberToObject(item, "order_id_reference", *level3_executed_order_model->order_id_reference) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_executed_order_model->sale_condition_flags
    if(level3_executed_order_model->sale_condition_flags) {
    if(cJSON_AddNumberToObject(item, "sale_condition_flags", *level3_executed_order_model->sale_condition_flags) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_executed_order_model->is_intermarket_sweep
    if(level3_executed_order_model->is_intermarket_sweep) {
    if(cJSON_AddBoolToObject(item, "is_intermarket_sweep", *level3_executed_order_model->is_intermarket_sweep) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_executed_order_model->is_extended_hours_trade
    if(level3_executed_order_model->is_extended_hours_trade) {
    if(cJSON_AddBoolToObject(item, "is_extended_hours_trade", *level3_executed_order_model->is_extended_hours_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_executed_order_model->is_odd_lot_trade
    if(level3_executed_order_model->is_odd_lot_trade) {
    if(cJSON_AddBoolToObject(item, "is_odd_lot_trade", *level3_executed_order_model->is_odd_lot_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_executed_order_model->is_trade_through_exempt
    if(level3_executed_order_model->is_trade_through_exempt) {
    if(cJSON_AddBoolToObject(item, "is_trade_through_exempt", *level3_executed_order_model->is_trade_through_exempt) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_executed_order_model->is_single_price_cross_trade
    if(level3_executed_order_model->is_single_price_cross_trade) {
    if(cJSON_AddBoolToObject(item, "is_single_price_cross_trade", *level3_executed_order_model->is_single_price_cross_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // level3_executed_order_model->size
    if(level3_executed_order_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *level3_executed_order_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_executed_order_model->price
    if(level3_executed_order_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *level3_executed_order_model->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // level3_executed_order_model->trade_id
    if(level3_executed_order_model->trade_id) {
    if(cJSON_AddNumberToObject(item, "trade_id", *level3_executed_order_model->trade_id) == NULL) {
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

level3_executed_order_model_t *level3_executed_order_model_parseFromJSON(cJSON *level3_executed_order_modelJSON){

    level3_executed_order_model_t *level3_executed_order_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for level3_executed_order_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for level3_executed_order_model->order_id_reference
    long *order_id_reference_local_var = NULL;

    // define the local variable for level3_executed_order_model->sale_condition_flags
    int *sale_condition_flags_local_var = NULL;

    // define the local variable for level3_executed_order_model->is_intermarket_sweep
    int *is_intermarket_sweep_local_var = NULL;

    // define the local variable for level3_executed_order_model->is_extended_hours_trade
    int *is_extended_hours_trade_local_var = NULL;

    // define the local variable for level3_executed_order_model->is_odd_lot_trade
    int *is_odd_lot_trade_local_var = NULL;

    // define the local variable for level3_executed_order_model->is_trade_through_exempt
    int *is_trade_through_exempt_local_var = NULL;

    // define the local variable for level3_executed_order_model->is_single_price_cross_trade
    int *is_single_price_cross_trade_local_var = NULL;

    // define the local variable for level3_executed_order_model->size
    int *size_local_var = NULL;

    // define the local variable for level3_executed_order_model->price
    double *price_local_var = NULL;

    // define the local variable for level3_executed_order_model->trade_id
    long *trade_id_local_var = NULL;

    // level3_executed_order_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // level3_executed_order_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "timestamp_nanos");
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

    // level3_executed_order_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // level3_executed_order_model->order_id_reference
    cJSON *order_id_reference = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "order_id_reference");
    if (cJSON_IsNull(order_id_reference)) {
        order_id_reference = NULL;
    }
    if (order_id_reference) { 
    if(!cJSON_IsNumber(order_id_reference))
    {
    goto end; //Numeric
    }
    order_id_reference_local_var = malloc(sizeof(long));
    if(!order_id_reference_local_var)
    {
        goto end;
    }
    *order_id_reference_local_var = order_id_reference->valuedouble;
    }

    // level3_executed_order_model->sale_condition_flags
    cJSON *sale_condition_flags = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "sale_condition_flags");
    if (cJSON_IsNull(sale_condition_flags)) {
        sale_condition_flags = NULL;
    }
    if (sale_condition_flags) { 
    if(!cJSON_IsNumber(sale_condition_flags))
    {
    goto end; //Numeric
    }
    sale_condition_flags_local_var = malloc(sizeof(int));
    if(!sale_condition_flags_local_var)
    {
        goto end;
    }
    *sale_condition_flags_local_var = sale_condition_flags->valuedouble;
    }

    // level3_executed_order_model->is_intermarket_sweep
    cJSON *is_intermarket_sweep = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "is_intermarket_sweep");
    if (cJSON_IsNull(is_intermarket_sweep)) {
        is_intermarket_sweep = NULL;
    }
    if (is_intermarket_sweep) { 
    if(!cJSON_IsBool(is_intermarket_sweep))
    {
    goto end; //Bool
    }
    is_intermarket_sweep_local_var = malloc(sizeof(int));
    if(!is_intermarket_sweep_local_var)
    {
        goto end;
    }
    *is_intermarket_sweep_local_var = is_intermarket_sweep->valueint;
    }

    // level3_executed_order_model->is_extended_hours_trade
    cJSON *is_extended_hours_trade = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "is_extended_hours_trade");
    if (cJSON_IsNull(is_extended_hours_trade)) {
        is_extended_hours_trade = NULL;
    }
    if (is_extended_hours_trade) { 
    if(!cJSON_IsBool(is_extended_hours_trade))
    {
    goto end; //Bool
    }
    is_extended_hours_trade_local_var = malloc(sizeof(int));
    if(!is_extended_hours_trade_local_var)
    {
        goto end;
    }
    *is_extended_hours_trade_local_var = is_extended_hours_trade->valueint;
    }

    // level3_executed_order_model->is_odd_lot_trade
    cJSON *is_odd_lot_trade = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "is_odd_lot_trade");
    if (cJSON_IsNull(is_odd_lot_trade)) {
        is_odd_lot_trade = NULL;
    }
    if (is_odd_lot_trade) { 
    if(!cJSON_IsBool(is_odd_lot_trade))
    {
    goto end; //Bool
    }
    is_odd_lot_trade_local_var = malloc(sizeof(int));
    if(!is_odd_lot_trade_local_var)
    {
        goto end;
    }
    *is_odd_lot_trade_local_var = is_odd_lot_trade->valueint;
    }

    // level3_executed_order_model->is_trade_through_exempt
    cJSON *is_trade_through_exempt = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "is_trade_through_exempt");
    if (cJSON_IsNull(is_trade_through_exempt)) {
        is_trade_through_exempt = NULL;
    }
    if (is_trade_through_exempt) { 
    if(!cJSON_IsBool(is_trade_through_exempt))
    {
    goto end; //Bool
    }
    is_trade_through_exempt_local_var = malloc(sizeof(int));
    if(!is_trade_through_exempt_local_var)
    {
        goto end;
    }
    *is_trade_through_exempt_local_var = is_trade_through_exempt->valueint;
    }

    // level3_executed_order_model->is_single_price_cross_trade
    cJSON *is_single_price_cross_trade = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "is_single_price_cross_trade");
    if (cJSON_IsNull(is_single_price_cross_trade)) {
        is_single_price_cross_trade = NULL;
    }
    if (is_single_price_cross_trade) { 
    if(!cJSON_IsBool(is_single_price_cross_trade))
    {
    goto end; //Bool
    }
    is_single_price_cross_trade_local_var = malloc(sizeof(int));
    if(!is_single_price_cross_trade_local_var)
    {
        goto end;
    }
    *is_single_price_cross_trade_local_var = is_single_price_cross_trade->valueint;
    }

    // level3_executed_order_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    size_local_var = malloc(sizeof(int));
    if(!size_local_var)
    {
        goto end;
    }
    *size_local_var = size->valuedouble;
    }

    // level3_executed_order_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    price_local_var = malloc(sizeof(double));
    if(!price_local_var)
    {
        goto end;
    }
    *price_local_var = price->valuedouble;
    }

    // level3_executed_order_model->trade_id
    cJSON *trade_id = cJSON_GetObjectItemCaseSensitive(level3_executed_order_modelJSON, "trade_id");
    if (cJSON_IsNull(trade_id)) {
        trade_id = NULL;
    }
    if (trade_id) { 
    if(!cJSON_IsNumber(trade_id))
    {
    goto end; //Numeric
    }
    trade_id_local_var = malloc(sizeof(long));
    if(!trade_id_local_var)
    {
        goto end;
    }
    *trade_id_local_var = trade_id->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    level3_executed_order_model_local_var = level3_executed_order_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        order_id_reference_local_var,
        sale_condition_flags_local_var,
        is_intermarket_sweep_local_var,
        is_extended_hours_trade_local_var,
        is_odd_lot_trade_local_var,
        is_trade_through_exempt_local_var,
        is_single_price_cross_trade_local_var,
        size_local_var,
        price_local_var,
        trade_id_local_var
        );

    if (!level3_executed_order_model_local_var) {
        goto end;
    }

    return level3_executed_order_model_local_var;
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
    if (order_id_reference_local_var) {
        free(order_id_reference_local_var);
        order_id_reference_local_var = NULL;
    }
    if (sale_condition_flags_local_var) {
        free(sale_condition_flags_local_var);
        sale_condition_flags_local_var = NULL;
    }
    if (is_intermarket_sweep_local_var) {
        free(is_intermarket_sweep_local_var);
        is_intermarket_sweep_local_var = NULL;
    }
    if (is_extended_hours_trade_local_var) {
        free(is_extended_hours_trade_local_var);
        is_extended_hours_trade_local_var = NULL;
    }
    if (is_odd_lot_trade_local_var) {
        free(is_odd_lot_trade_local_var);
        is_odd_lot_trade_local_var = NULL;
    }
    if (is_trade_through_exempt_local_var) {
        free(is_trade_through_exempt_local_var);
        is_trade_through_exempt_local_var = NULL;
    }
    if (is_single_price_cross_trade_local_var) {
        free(is_single_price_cross_trade_local_var);
        is_single_price_cross_trade_local_var = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (price_local_var) {
        free(price_local_var);
        price_local_var = NULL;
    }
    if (trade_id_local_var) {
        free(trade_id_local_var);
        trade_id_local_var = NULL;
    }
    return NULL;

}
