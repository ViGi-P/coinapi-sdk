#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "iex_trade_trade_model.h"



static iex_trade_trade_model_t *iex_trade_trade_model_create_internal(
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
    iex_trade_trade_model_t *iex_trade_trade_model_local_var = malloc(sizeof(iex_trade_trade_model_t));
    if (!iex_trade_trade_model_local_var) {
        return NULL;
    }
    memset(iex_trade_trade_model_local_var, 0, sizeof(iex_trade_trade_model_t));
    iex_trade_trade_model_local_var->_library_owned = 1;
    iex_trade_trade_model_local_var->is_trade_break = is_trade_break;
    iex_trade_trade_model_local_var->symbol = symbol;
    iex_trade_trade_model_local_var->timestamp_nanos = timestamp_nanos;
    iex_trade_trade_model_local_var->timestamp = timestamp;
    iex_trade_trade_model_local_var->size = size;
    iex_trade_trade_model_local_var->price = price;
    iex_trade_trade_model_local_var->trade_id = trade_id;
    iex_trade_trade_model_local_var->is_intermarket_sweep = is_intermarket_sweep;
    iex_trade_trade_model_local_var->is_extended_hours_trade = is_extended_hours_trade;
    iex_trade_trade_model_local_var->is_odd_lot_trade = is_odd_lot_trade;
    iex_trade_trade_model_local_var->is_trade_through_exempt = is_trade_through_exempt;
    iex_trade_trade_model_local_var->is_single_price_cross_trade = is_single_price_cross_trade;
    return iex_trade_trade_model_local_var;
}

__attribute__((deprecated)) iex_trade_trade_model_t *iex_trade_trade_model_create(
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
    iex_trade_trade_model_t *result = iex_trade_trade_model_create_internal (
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

void iex_trade_trade_model_free(iex_trade_trade_model_t *iex_trade_trade_model) {
    if(NULL == iex_trade_trade_model){
        return ;
    }
    if(iex_trade_trade_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "iex_trade_trade_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (iex_trade_trade_model->is_trade_break) {
        free(iex_trade_trade_model->is_trade_break);
        iex_trade_trade_model->is_trade_break = NULL;
    }
    if (iex_trade_trade_model->symbol) {
        free(iex_trade_trade_model->symbol);
        iex_trade_trade_model->symbol = NULL;
    }
    if (iex_trade_trade_model->timestamp_nanos) {
        free(iex_trade_trade_model->timestamp_nanos);
        iex_trade_trade_model->timestamp_nanos = NULL;
    }
    if (iex_trade_trade_model->timestamp) {
        free(iex_trade_trade_model->timestamp);
        iex_trade_trade_model->timestamp = NULL;
    }
    if (iex_trade_trade_model->size) {
        free(iex_trade_trade_model->size);
        iex_trade_trade_model->size = NULL;
    }
    if (iex_trade_trade_model->price) {
        free(iex_trade_trade_model->price);
        iex_trade_trade_model->price = NULL;
    }
    if (iex_trade_trade_model->trade_id) {
        free(iex_trade_trade_model->trade_id);
        iex_trade_trade_model->trade_id = NULL;
    }
    if (iex_trade_trade_model->is_intermarket_sweep) {
        free(iex_trade_trade_model->is_intermarket_sweep);
        iex_trade_trade_model->is_intermarket_sweep = NULL;
    }
    if (iex_trade_trade_model->is_extended_hours_trade) {
        free(iex_trade_trade_model->is_extended_hours_trade);
        iex_trade_trade_model->is_extended_hours_trade = NULL;
    }
    if (iex_trade_trade_model->is_odd_lot_trade) {
        free(iex_trade_trade_model->is_odd_lot_trade);
        iex_trade_trade_model->is_odd_lot_trade = NULL;
    }
    if (iex_trade_trade_model->is_trade_through_exempt) {
        free(iex_trade_trade_model->is_trade_through_exempt);
        iex_trade_trade_model->is_trade_through_exempt = NULL;
    }
    if (iex_trade_trade_model->is_single_price_cross_trade) {
        free(iex_trade_trade_model->is_single_price_cross_trade);
        iex_trade_trade_model->is_single_price_cross_trade = NULL;
    }
    free(iex_trade_trade_model);
}

cJSON *iex_trade_trade_model_convertToJSON(iex_trade_trade_model_t *iex_trade_trade_model) {
    cJSON *item = cJSON_CreateObject();

    // iex_trade_trade_model->is_trade_break
    if(iex_trade_trade_model->is_trade_break) {
    if(cJSON_AddBoolToObject(item, "is_trade_break", *iex_trade_trade_model->is_trade_break) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_trade_trade_model->symbol
    if(iex_trade_trade_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", iex_trade_trade_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // iex_trade_trade_model->timestamp_nanos
    if(iex_trade_trade_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *iex_trade_trade_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_trade_trade_model->timestamp
    if(iex_trade_trade_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", iex_trade_trade_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // iex_trade_trade_model->size
    if(iex_trade_trade_model->size) {
    if(cJSON_AddNumberToObject(item, "size", *iex_trade_trade_model->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_trade_trade_model->price
    if(iex_trade_trade_model->price) {
    if(cJSON_AddNumberToObject(item, "price", *iex_trade_trade_model->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_trade_trade_model->trade_id
    if(iex_trade_trade_model->trade_id) {
    if(cJSON_AddNumberToObject(item, "trade_id", *iex_trade_trade_model->trade_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // iex_trade_trade_model->is_intermarket_sweep
    if(iex_trade_trade_model->is_intermarket_sweep) {
    if(cJSON_AddBoolToObject(item, "is_intermarket_sweep", *iex_trade_trade_model->is_intermarket_sweep) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_trade_trade_model->is_extended_hours_trade
    if(iex_trade_trade_model->is_extended_hours_trade) {
    if(cJSON_AddBoolToObject(item, "is_extended_hours_trade", *iex_trade_trade_model->is_extended_hours_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_trade_trade_model->is_odd_lot_trade
    if(iex_trade_trade_model->is_odd_lot_trade) {
    if(cJSON_AddBoolToObject(item, "is_odd_lot_trade", *iex_trade_trade_model->is_odd_lot_trade) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_trade_trade_model->is_trade_through_exempt
    if(iex_trade_trade_model->is_trade_through_exempt) {
    if(cJSON_AddBoolToObject(item, "is_trade_through_exempt", *iex_trade_trade_model->is_trade_through_exempt) == NULL) {
    goto fail; //Bool
    }
    }


    // iex_trade_trade_model->is_single_price_cross_trade
    if(iex_trade_trade_model->is_single_price_cross_trade) {
    if(cJSON_AddBoolToObject(item, "is_single_price_cross_trade", *iex_trade_trade_model->is_single_price_cross_trade) == NULL) {
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

iex_trade_trade_model_t *iex_trade_trade_model_parseFromJSON(cJSON *iex_trade_trade_modelJSON){

    iex_trade_trade_model_t *iex_trade_trade_model_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_trade_break
    int *is_trade_break_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for iex_trade_trade_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for iex_trade_trade_model->size
    int *size_local_var = NULL;

    // define the local variable for iex_trade_trade_model->price
    double *price_local_var = NULL;

    // define the local variable for iex_trade_trade_model->trade_id
    long *trade_id_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_intermarket_sweep
    int *is_intermarket_sweep_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_extended_hours_trade
    int *is_extended_hours_trade_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_odd_lot_trade
    int *is_odd_lot_trade_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_trade_through_exempt
    int *is_trade_through_exempt_local_var = NULL;

    // define the local variable for iex_trade_trade_model->is_single_price_cross_trade
    int *is_single_price_cross_trade_local_var = NULL;

    // iex_trade_trade_model->is_trade_break
    cJSON *is_trade_break = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_trade_break");
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

    // iex_trade_trade_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // iex_trade_trade_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "timestamp_nanos");
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

    // iex_trade_trade_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // iex_trade_trade_model->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "size");
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

    // iex_trade_trade_model->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "price");
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

    // iex_trade_trade_model->trade_id
    cJSON *trade_id = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "trade_id");
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

    // iex_trade_trade_model->is_intermarket_sweep
    cJSON *is_intermarket_sweep = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_intermarket_sweep");
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

    // iex_trade_trade_model->is_extended_hours_trade
    cJSON *is_extended_hours_trade = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_extended_hours_trade");
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

    // iex_trade_trade_model->is_odd_lot_trade
    cJSON *is_odd_lot_trade = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_odd_lot_trade");
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

    // iex_trade_trade_model->is_trade_through_exempt
    cJSON *is_trade_through_exempt = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_trade_through_exempt");
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

    // iex_trade_trade_model->is_single_price_cross_trade
    cJSON *is_single_price_cross_trade = cJSON_GetObjectItemCaseSensitive(iex_trade_trade_modelJSON, "is_single_price_cross_trade");
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

    iex_trade_trade_model_local_var = iex_trade_trade_model_create_internal (
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

    if (!iex_trade_trade_model_local_var) {
        goto end;
    }

    return iex_trade_trade_model_local_var;
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
