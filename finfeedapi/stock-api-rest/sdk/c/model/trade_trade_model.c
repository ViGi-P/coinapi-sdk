#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trade_trade_model.h"



static trade_trade_model_t *trade_trade_model_create_internal(
    int *is_trade_break,
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *size,
    double *price,
    long *trade_id,
    int *is_intermarket_sweep,
    int *is_extended_hours_trade,
    int *is_odd_lot_trade,
    int *is_trade_through_exempt,
    int *is_single_price_cross_trade
    ) {
    trade_trade_model_t *trade_trade_model_local_var = malloc(sizeof(trade_trade_model_t));
    if (!trade_trade_model_local_var) {
        return NULL;
    }
    memset(trade_trade_model_local_var, 0, sizeof(trade_trade_model_t));
    trade_trade_model_local_var->_library_owned = 1;
    trade_trade_model_local_var->is_trade_break = is_trade_break;
    trade_trade_model_local_var->symbol = symbol;
    trade_trade_model_local_var->timestamp_nanos = timestamp_nanos;
    trade_trade_model_local_var->timestamp = timestamp;
    trade_trade_model_local_var->size = size;
    trade_trade_model_local_var->price = price;
    trade_trade_model_local_var->trade_id = trade_id;
    trade_trade_model_local_var->is_intermarket_sweep = is_intermarket_sweep;
    trade_trade_model_local_var->is_extended_hours_trade = is_extended_hours_trade;
    trade_trade_model_local_var->is_odd_lot_trade = is_odd_lot_trade;
    trade_trade_model_local_var->is_trade_through_exempt = is_trade_through_exempt;
    trade_trade_model_local_var->is_single_price_cross_trade = is_single_price_cross_trade;
    return trade_trade_model_local_var;
}

__attribute__((deprecated)) trade_trade_model_t *trade_trade_model_create(
    int *is_trade_break,
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *size,
    double *price,
    long *trade_id,
    int *is_intermarket_sweep,
    int *is_extended_hours_trade,
    int *is_odd_lot_trade,
    int *is_trade_through_exempt,
    int *is_single_price_cross_trade
    ) {
    int *is_trade_break_copy = NULL;
    if (is_trade_break) {
        is_trade_break_copy = malloc(sizeof(int));
        if (is_trade_break_copy) *is_trade_break_copy = *is_trade_break;
    }
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
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
    trade_trade_model_t *result = trade_trade_model_create_internal (
        is_trade_break_copy,
        symbol,
        timestamp_nanos_copy,
        timestamp,
        size_copy,
        price_copy,
        trade_id_copy,
        is_intermarket_sweep_copy,
        is_extended_hours_trade_copy,
        is_odd_lot_trade_copy,
        is_trade_through_exempt_copy,
        is_single_price_cross_trade_copy
        );
    if (!result) {
        free(is_trade_break_copy);
        free(timestamp_nanos_copy);
        free(size_copy);
        free(price_copy);
        free(trade_id_copy);
        free(is_intermarket_sweep_copy);
        free(is_extended_hours_trade_copy);
        free(is_odd_lot_trade_copy);
        free(is_trade_through_exempt_copy);
        free(is_single_price_cross_trade_copy);
    }
    return result;
}

void trade_trade_model_free(trade_trade_model_t *trade_trade_model) {
    if(NULL == trade_trade_model){
        return ;
    }
    if(trade_trade_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "trade_trade_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (trade_trade_model->is_trade_break) {
        free(trade_trade_model->is_trade_break);
        trade_trade_model->is_trade_break = NULL;
    }
    if (trade_trade_model->symbol) {
        free(trade_trade_model->symbol);
        trade_trade_model->symbol = NULL;
    }
    if (trade_trade_model->timestamp_nanos) {
        free(trade_trade_model->timestamp_nanos);
        trade_trade_model->timestamp_nanos = NULL;
    }
    if (trade_trade_model->timestamp) {
        free(trade_trade_model->timestamp);
        trade_trade_model->timestamp = NULL;
    }
    if (trade_trade_model->size) {
        free(trade_trade_model->size);
        trade_trade_model->size = NULL;
    }
    if (trade_trade_model->price) {
        free(trade_trade_model->price);
        trade_trade_model->price = NULL;
    }
    if (trade_trade_model->trade_id) {
        free(trade_trade_model->trade_id);
        trade_trade_model->trade_id = NULL;
    }
    if (trade_trade_model->is_intermarket_sweep) {
        free(trade_trade_model->is_intermarket_sweep);
        trade_trade_model->is_intermarket_sweep = NULL;
    }
    if (trade_trade_model->is_extended_hours_trade) {
        free(trade_trade_model->is_extended_hours_trade);
        trade_trade_model->is_extended_hours_trade = NULL;
    }
    if (trade_trade_model->is_odd_lot_trade) {
        free(trade_trade_model->is_odd_lot_trade);
        trade_trade_model->is_odd_lot_trade = NULL;
    }
    if (trade_trade_model->is_trade_through_exempt) {
        free(trade_trade_model->is_trade_through_exempt);
        trade_trade_model->is_trade_through_exempt = NULL;
    }
    if (trade_trade_model->is_single_price_cross_trade) {
        free(trade_trade_model->is_single_price_cross_trade);
        trade_trade_model->is_single_price_cross_trade = NULL;
    }
    free(trade_trade_model);
}

cJSON *trade_trade_model_convertToJSON(trade_trade_model_t *trade_trade_model) {
    cJSON *item = cJSON_CreateObject();

    // trade_trade_model->is_trade_break
    if(trade_trade_model->is_trade_break) {
    if(cJSON_AddBoolToObject(item, "is_trade_break", *trade_trade_model->is_trade_break) == NULL) {
    goto fail; //Bool
    }
    }


    // trade_trade_model->symbol
    if(trade_trade_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", trade_trade_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // trade_trade_model->timestamp_nanos
    if(trade_trade_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *trade_trade_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // trade_trade_model->timestamp
    if(trade_trade_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", trade_trade_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // trade_trade_model->size
    if(trade_trade_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *trade_trade_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // trade_trade_model->price
    if(trade_trade_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *trade_trade_model->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // trade_trade_model->trade_id
    if(trade_trade_model->trade_id) {
    if(cJSON_AddNumberToObject(item, "trade_id", *trade_trade_model->trade_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // trade_trade_model->is_intermarket_sweep
    if(trade_trade_model->is_intermarket_sweep) {
    if(cJSON_AddBoolToObject(item, "is_intermarket_sweep", *trade_trade_model->is_intermarket_sweep) == NULL) {
    goto fail; //Bool
    }
    }


    // trade_trade_model->is_extended_hours_trade
    if(trade_trade_model->is_extended_hours_trade) {
    if(cJSON_AddBoolToObject(item, "is_extended_hours_trade", *trade_trade_model->is_extended_hours_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // trade_trade_model->is_odd_lot_trade
    if(trade_trade_model->is_odd_lot_trade) {
    if(cJSON_AddBoolToObject(item, "is_odd_lot_trade", *trade_trade_model->is_odd_lot_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // trade_trade_model->is_trade_through_exempt
    if(trade_trade_model->is_trade_through_exempt) {
    if(cJSON_AddBoolToObject(item, "is_trade_through_exempt", *trade_trade_model->is_trade_through_exempt) == NULL) {
    goto fail; //Bool
    }
    }


    // trade_trade_model->is_single_price_cross_trade
    if(trade_trade_model->is_single_price_cross_trade) {
    if(cJSON_AddBoolToObject(item, "is_single_price_cross_trade", *trade_trade_model->is_single_price_cross_trade) == NULL) {
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

trade_trade_model_t *trade_trade_model_parseFromJSON(cJSON *trade_trade_modelJSON){

    trade_trade_model_t *trade_trade_model_local_var = NULL;

    // define the local variable for trade_trade_model->is_trade_break
    int *is_trade_break_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for trade_trade_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for trade_trade_model->size
    int *size_local_var = NULL;

    // define the local variable for trade_trade_model->price
    double *price_local_var = NULL;

    // define the local variable for trade_trade_model->trade_id
    long *trade_id_local_var = NULL;

    // define the local variable for trade_trade_model->is_intermarket_sweep
    int *is_intermarket_sweep_local_var = NULL;

    // define the local variable for trade_trade_model->is_extended_hours_trade
    int *is_extended_hours_trade_local_var = NULL;

    // define the local variable for trade_trade_model->is_odd_lot_trade
    int *is_odd_lot_trade_local_var = NULL;

    // define the local variable for trade_trade_model->is_trade_through_exempt
    int *is_trade_through_exempt_local_var = NULL;

    // define the local variable for trade_trade_model->is_single_price_cross_trade
    int *is_single_price_cross_trade_local_var = NULL;

    // trade_trade_model->is_trade_break
    cJSON *is_trade_break = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_trade_break");
    if (cJSON_IsNull(is_trade_break)) {
        is_trade_break = NULL;
    }
    if (is_trade_break) { 
    if(!cJSON_IsBool(is_trade_break))
    {
    goto end; //Bool
    }
    is_trade_break_local_var = malloc(sizeof(int));
    if(!is_trade_break_local_var)
    {
        goto end;
    }
    *is_trade_break_local_var = is_trade_break->valueint;
    }

    // trade_trade_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // trade_trade_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "timestamp_nanos");
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

    // trade_trade_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // trade_trade_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "size");
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

    // trade_trade_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "price");
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

    // trade_trade_model->trade_id
    cJSON *trade_id = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "trade_id");
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

    // trade_trade_model->is_intermarket_sweep
    cJSON *is_intermarket_sweep = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_intermarket_sweep");
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

    // trade_trade_model->is_extended_hours_trade
    cJSON *is_extended_hours_trade = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_extended_hours_trade");
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

    // trade_trade_model->is_odd_lot_trade
    cJSON *is_odd_lot_trade = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_odd_lot_trade");
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

    // trade_trade_model->is_trade_through_exempt
    cJSON *is_trade_through_exempt = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_trade_through_exempt");
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

    // trade_trade_model->is_single_price_cross_trade
    cJSON *is_single_price_cross_trade = cJSON_GetObjectItemCaseSensitive(trade_trade_modelJSON, "is_single_price_cross_trade");
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


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    trade_trade_model_local_var = trade_trade_model_create_internal (
        is_trade_break_local_var,
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        size_local_var,
        price_local_var,
        trade_id_local_var,
        is_intermarket_sweep_local_var,
        is_extended_hours_trade_local_var,
        is_odd_lot_trade_local_var,
        is_trade_through_exempt_local_var,
        is_single_price_cross_trade_local_var
        );

    if (!trade_trade_model_local_var) {
        goto end;
    }

    return trade_trade_model_local_var;
end:
    if (is_trade_break_local_var) {
        free(is_trade_break_local_var);
        is_trade_break_local_var = NULL;
    }
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
    return NULL;

}
