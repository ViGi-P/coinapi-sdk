#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "market_data_metadata_symbol.h"



static market_data_metadata_symbol_t *market_data_metadata_symbol_create_internal(
    char *symbol_id,
    char *exchange_id,
    char *symbol_type,
    char *asset_id_base,
    char *asset_id_quote,
    char *asset_id_unit,
    double *future_contract_unit,
    char *future_contract_unit_asset,
    char *future_delivery_time,
    int *option_type_is_call,
    double *option_strike_price,
    double *option_contract_unit,
    char *option_exercise_style,
    char *option_expiration_time,
    char *contract_delivery_time,
    double *contract_unit,
    char *contract_unit_asset,
    char *contract_id,
    char *contract_display_name,
    char *contract_display_description,
    char *data_start,
    char *data_end,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    char *index_id,
    char *index_display_name,
    char *index_display_description,
    double *volume_1hrs,
    double *volume_1hrs_usd,
    double *volume_1day,
    double *volume_1day_usd,
    double *volume_1mth,
    double *volume_1mth_usd,
    double *price,
    char *symbol_id_exchange,
    char *asset_id_base_exchange,
    char *asset_id_quote_exchange,
    double *price_precision,
    double *size_precision,
    list_t* raw_kvp,
    int *future_is_inverse,
    int *future_is_quanto,
    double *volume_to_usd,
    double *option_barrier_up_price,
    char *option_barrier_up_type,
    double *option_barrier_down_price,
    char *option_barrier_down_type,
    int *symbol_id_int
    ) {
    market_data_metadata_symbol_t *market_data_metadata_symbol_local_var = malloc(sizeof(market_data_metadata_symbol_t));
    if (!market_data_metadata_symbol_local_var) {
        return NULL;
    }
    memset(market_data_metadata_symbol_local_var, 0, sizeof(market_data_metadata_symbol_t));
    market_data_metadata_symbol_local_var->_library_owned = 1;
    market_data_metadata_symbol_local_var->symbol_id = symbol_id;
    market_data_metadata_symbol_local_var->exchange_id = exchange_id;
    market_data_metadata_symbol_local_var->symbol_type = symbol_type;
    market_data_metadata_symbol_local_var->asset_id_base = asset_id_base;
    market_data_metadata_symbol_local_var->asset_id_quote = asset_id_quote;
    market_data_metadata_symbol_local_var->asset_id_unit = asset_id_unit;
    market_data_metadata_symbol_local_var->future_contract_unit = future_contract_unit;
    market_data_metadata_symbol_local_var->future_contract_unit_asset = future_contract_unit_asset;
    market_data_metadata_symbol_local_var->future_delivery_time = future_delivery_time;
    market_data_metadata_symbol_local_var->option_type_is_call = option_type_is_call;
    market_data_metadata_symbol_local_var->option_strike_price = option_strike_price;
    market_data_metadata_symbol_local_var->option_contract_unit = option_contract_unit;
    market_data_metadata_symbol_local_var->option_exercise_style = option_exercise_style;
    market_data_metadata_symbol_local_var->option_expiration_time = option_expiration_time;
    market_data_metadata_symbol_local_var->contract_delivery_time = contract_delivery_time;
    market_data_metadata_symbol_local_var->contract_unit = contract_unit;
    market_data_metadata_symbol_local_var->contract_unit_asset = contract_unit_asset;
    market_data_metadata_symbol_local_var->contract_id = contract_id;
    market_data_metadata_symbol_local_var->contract_display_name = contract_display_name;
    market_data_metadata_symbol_local_var->contract_display_description = contract_display_description;
    market_data_metadata_symbol_local_var->data_start = data_start;
    market_data_metadata_symbol_local_var->data_end = data_end;
    market_data_metadata_symbol_local_var->data_quote_start = data_quote_start;
    market_data_metadata_symbol_local_var->data_quote_end = data_quote_end;
    market_data_metadata_symbol_local_var->data_orderbook_start = data_orderbook_start;
    market_data_metadata_symbol_local_var->data_orderbook_end = data_orderbook_end;
    market_data_metadata_symbol_local_var->data_trade_start = data_trade_start;
    market_data_metadata_symbol_local_var->data_trade_end = data_trade_end;
    market_data_metadata_symbol_local_var->index_id = index_id;
    market_data_metadata_symbol_local_var->index_display_name = index_display_name;
    market_data_metadata_symbol_local_var->index_display_description = index_display_description;
    market_data_metadata_symbol_local_var->volume_1hrs = volume_1hrs;
    market_data_metadata_symbol_local_var->volume_1hrs_usd = volume_1hrs_usd;
    market_data_metadata_symbol_local_var->volume_1day = volume_1day;
    market_data_metadata_symbol_local_var->volume_1day_usd = volume_1day_usd;
    market_data_metadata_symbol_local_var->volume_1mth = volume_1mth;
    market_data_metadata_symbol_local_var->volume_1mth_usd = volume_1mth_usd;
    market_data_metadata_symbol_local_var->price = price;
    market_data_metadata_symbol_local_var->symbol_id_exchange = symbol_id_exchange;
    market_data_metadata_symbol_local_var->asset_id_base_exchange = asset_id_base_exchange;
    market_data_metadata_symbol_local_var->asset_id_quote_exchange = asset_id_quote_exchange;
    market_data_metadata_symbol_local_var->price_precision = price_precision;
    market_data_metadata_symbol_local_var->size_precision = size_precision;
    market_data_metadata_symbol_local_var->raw_kvp = raw_kvp;
    market_data_metadata_symbol_local_var->future_is_inverse = future_is_inverse;
    market_data_metadata_symbol_local_var->future_is_quanto = future_is_quanto;
    market_data_metadata_symbol_local_var->volume_to_usd = volume_to_usd;
    market_data_metadata_symbol_local_var->option_barrier_up_price = option_barrier_up_price;
    market_data_metadata_symbol_local_var->option_barrier_up_type = option_barrier_up_type;
    market_data_metadata_symbol_local_var->option_barrier_down_price = option_barrier_down_price;
    market_data_metadata_symbol_local_var->option_barrier_down_type = option_barrier_down_type;
    market_data_metadata_symbol_local_var->symbol_id_int = symbol_id_int;
    return market_data_metadata_symbol_local_var;
}

__attribute__((deprecated)) market_data_metadata_symbol_t *market_data_metadata_symbol_create(
    char *symbol_id,
    char *exchange_id,
    char *symbol_type,
    char *asset_id_base,
    char *asset_id_quote,
    char *asset_id_unit,
    double *future_contract_unit,
    char *future_contract_unit_asset,
    char *future_delivery_time,
    int *option_type_is_call,
    double *option_strike_price,
    double *option_contract_unit,
    char *option_exercise_style,
    char *option_expiration_time,
    char *contract_delivery_time,
    double *contract_unit,
    char *contract_unit_asset,
    char *contract_id,
    char *contract_display_name,
    char *contract_display_description,
    char *data_start,
    char *data_end,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    char *index_id,
    char *index_display_name,
    char *index_display_description,
    double *volume_1hrs,
    double *volume_1hrs_usd,
    double *volume_1day,
    double *volume_1day_usd,
    double *volume_1mth,
    double *volume_1mth_usd,
    double *price,
    char *symbol_id_exchange,
    char *asset_id_base_exchange,
    char *asset_id_quote_exchange,
    double *price_precision,
    double *size_precision,
    list_t* raw_kvp,
    int *future_is_inverse,
    int *future_is_quanto,
    double *volume_to_usd,
    double *option_barrier_up_price,
    char *option_barrier_up_type,
    double *option_barrier_down_price,
    char *option_barrier_down_type,
    int *symbol_id_int
    ) {
    double *future_contract_unit_copy = NULL;
    if (future_contract_unit) {
        future_contract_unit_copy = malloc(sizeof(double));
        if (future_contract_unit_copy) *future_contract_unit_copy = *future_contract_unit;
    }
    int *option_type_is_call_copy = NULL;
    if (option_type_is_call) {
        option_type_is_call_copy = malloc(sizeof(int));
        if (option_type_is_call_copy) *option_type_is_call_copy = *option_type_is_call;
    }
    double *option_strike_price_copy = NULL;
    if (option_strike_price) {
        option_strike_price_copy = malloc(sizeof(double));
        if (option_strike_price_copy) *option_strike_price_copy = *option_strike_price;
    }
    double *option_contract_unit_copy = NULL;
    if (option_contract_unit) {
        option_contract_unit_copy = malloc(sizeof(double));
        if (option_contract_unit_copy) *option_contract_unit_copy = *option_contract_unit;
    }
    double *contract_unit_copy = NULL;
    if (contract_unit) {
        contract_unit_copy = malloc(sizeof(double));
        if (contract_unit_copy) *contract_unit_copy = *contract_unit;
    }
    double *volume_1hrs_copy = NULL;
    if (volume_1hrs) {
        volume_1hrs_copy = malloc(sizeof(double));
        if (volume_1hrs_copy) *volume_1hrs_copy = *volume_1hrs;
    }
    double *volume_1hrs_usd_copy = NULL;
    if (volume_1hrs_usd) {
        volume_1hrs_usd_copy = malloc(sizeof(double));
        if (volume_1hrs_usd_copy) *volume_1hrs_usd_copy = *volume_1hrs_usd;
    }
    double *volume_1day_copy = NULL;
    if (volume_1day) {
        volume_1day_copy = malloc(sizeof(double));
        if (volume_1day_copy) *volume_1day_copy = *volume_1day;
    }
    double *volume_1day_usd_copy = NULL;
    if (volume_1day_usd) {
        volume_1day_usd_copy = malloc(sizeof(double));
        if (volume_1day_usd_copy) *volume_1day_usd_copy = *volume_1day_usd;
    }
    double *volume_1mth_copy = NULL;
    if (volume_1mth) {
        volume_1mth_copy = malloc(sizeof(double));
        if (volume_1mth_copy) *volume_1mth_copy = *volume_1mth;
    }
    double *volume_1mth_usd_copy = NULL;
    if (volume_1mth_usd) {
        volume_1mth_usd_copy = malloc(sizeof(double));
        if (volume_1mth_usd_copy) *volume_1mth_usd_copy = *volume_1mth_usd;
    }
    double *price_copy = NULL;
    if (price) {
        price_copy = malloc(sizeof(double));
        if (price_copy) *price_copy = *price;
    }
    double *price_precision_copy = NULL;
    if (price_precision) {
        price_precision_copy = malloc(sizeof(double));
        if (price_precision_copy) *price_precision_copy = *price_precision;
    }
    double *size_precision_copy = NULL;
    if (size_precision) {
        size_precision_copy = malloc(sizeof(double));
        if (size_precision_copy) *size_precision_copy = *size_precision;
    }
    int *future_is_inverse_copy = NULL;
    if (future_is_inverse) {
        future_is_inverse_copy = malloc(sizeof(int));
        if (future_is_inverse_copy) *future_is_inverse_copy = *future_is_inverse;
    }
    int *future_is_quanto_copy = NULL;
    if (future_is_quanto) {
        future_is_quanto_copy = malloc(sizeof(int));
        if (future_is_quanto_copy) *future_is_quanto_copy = *future_is_quanto;
    }
    double *volume_to_usd_copy = NULL;
    if (volume_to_usd) {
        volume_to_usd_copy = malloc(sizeof(double));
        if (volume_to_usd_copy) *volume_to_usd_copy = *volume_to_usd;
    }
    double *option_barrier_up_price_copy = NULL;
    if (option_barrier_up_price) {
        option_barrier_up_price_copy = malloc(sizeof(double));
        if (option_barrier_up_price_copy) *option_barrier_up_price_copy = *option_barrier_up_price;
    }
    double *option_barrier_down_price_copy = NULL;
    if (option_barrier_down_price) {
        option_barrier_down_price_copy = malloc(sizeof(double));
        if (option_barrier_down_price_copy) *option_barrier_down_price_copy = *option_barrier_down_price;
    }
    int *symbol_id_int_copy = NULL;
    if (symbol_id_int) {
        symbol_id_int_copy = malloc(sizeof(int));
        if (symbol_id_int_copy) *symbol_id_int_copy = *symbol_id_int;
    }
    market_data_metadata_symbol_t *result = market_data_metadata_symbol_create_internal (
        symbol_id,
        exchange_id,
        symbol_type,
        asset_id_base,
        asset_id_quote,
        asset_id_unit,
        future_contract_unit_copy,
        future_contract_unit_asset,
        future_delivery_time,
        option_type_is_call_copy,
        option_strike_price_copy,
        option_contract_unit_copy,
        option_exercise_style,
        option_expiration_time,
        contract_delivery_time,
        contract_unit_copy,
        contract_unit_asset,
        contract_id,
        contract_display_name,
        contract_display_description,
        data_start,
        data_end,
        data_quote_start,
        data_quote_end,
        data_orderbook_start,
        data_orderbook_end,
        data_trade_start,
        data_trade_end,
        index_id,
        index_display_name,
        index_display_description,
        volume_1hrs_copy,
        volume_1hrs_usd_copy,
        volume_1day_copy,
        volume_1day_usd_copy,
        volume_1mth_copy,
        volume_1mth_usd_copy,
        price_copy,
        symbol_id_exchange,
        asset_id_base_exchange,
        asset_id_quote_exchange,
        price_precision_copy,
        size_precision_copy,
        raw_kvp,
        future_is_inverse_copy,
        future_is_quanto_copy,
        volume_to_usd_copy,
        option_barrier_up_price_copy,
        option_barrier_up_type,
        option_barrier_down_price_copy,
        option_barrier_down_type,
        symbol_id_int_copy
        );
    if (!result) {
        free(future_contract_unit_copy);
        free(option_type_is_call_copy);
        free(option_strike_price_copy);
        free(option_contract_unit_copy);
        free(contract_unit_copy);
        free(volume_1hrs_copy);
        free(volume_1hrs_usd_copy);
        free(volume_1day_copy);
        free(volume_1day_usd_copy);
        free(volume_1mth_copy);
        free(volume_1mth_usd_copy);
        free(price_copy);
        free(price_precision_copy);
        free(size_precision_copy);
        free(future_is_inverse_copy);
        free(future_is_quanto_copy);
        free(volume_to_usd_copy);
        free(option_barrier_up_price_copy);
        free(option_barrier_down_price_copy);
        free(symbol_id_int_copy);
    }
    return result;
}

void market_data_metadata_symbol_free(market_data_metadata_symbol_t *market_data_metadata_symbol) {
    if(NULL == market_data_metadata_symbol){
        return ;
    }
    if(market_data_metadata_symbol->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "market_data_metadata_symbol_free");
        return ;
    }
    listEntry_t *listEntry;
    if (market_data_metadata_symbol->symbol_id) {
        free(market_data_metadata_symbol->symbol_id);
        market_data_metadata_symbol->symbol_id = NULL;
    }
    if (market_data_metadata_symbol->exchange_id) {
        free(market_data_metadata_symbol->exchange_id);
        market_data_metadata_symbol->exchange_id = NULL;
    }
    if (market_data_metadata_symbol->symbol_type) {
        free(market_data_metadata_symbol->symbol_type);
        market_data_metadata_symbol->symbol_type = NULL;
    }
    if (market_data_metadata_symbol->asset_id_base) {
        free(market_data_metadata_symbol->asset_id_base);
        market_data_metadata_symbol->asset_id_base = NULL;
    }
    if (market_data_metadata_symbol->asset_id_quote) {
        free(market_data_metadata_symbol->asset_id_quote);
        market_data_metadata_symbol->asset_id_quote = NULL;
    }
    if (market_data_metadata_symbol->asset_id_unit) {
        free(market_data_metadata_symbol->asset_id_unit);
        market_data_metadata_symbol->asset_id_unit = NULL;
    }
    if (market_data_metadata_symbol->future_contract_unit) {
        free(market_data_metadata_symbol->future_contract_unit);
        market_data_metadata_symbol->future_contract_unit = NULL;
    }
    if (market_data_metadata_symbol->future_contract_unit_asset) {
        free(market_data_metadata_symbol->future_contract_unit_asset);
        market_data_metadata_symbol->future_contract_unit_asset = NULL;
    }
    if (market_data_metadata_symbol->future_delivery_time) {
        free(market_data_metadata_symbol->future_delivery_time);
        market_data_metadata_symbol->future_delivery_time = NULL;
    }
    if (market_data_metadata_symbol->option_type_is_call) {
        free(market_data_metadata_symbol->option_type_is_call);
        market_data_metadata_symbol->option_type_is_call = NULL;
    }
    if (market_data_metadata_symbol->option_strike_price) {
        free(market_data_metadata_symbol->option_strike_price);
        market_data_metadata_symbol->option_strike_price = NULL;
    }
    if (market_data_metadata_symbol->option_contract_unit) {
        free(market_data_metadata_symbol->option_contract_unit);
        market_data_metadata_symbol->option_contract_unit = NULL;
    }
    if (market_data_metadata_symbol->option_exercise_style) {
        free(market_data_metadata_symbol->option_exercise_style);
        market_data_metadata_symbol->option_exercise_style = NULL;
    }
    if (market_data_metadata_symbol->option_expiration_time) {
        free(market_data_metadata_symbol->option_expiration_time);
        market_data_metadata_symbol->option_expiration_time = NULL;
    }
    if (market_data_metadata_symbol->contract_delivery_time) {
        free(market_data_metadata_symbol->contract_delivery_time);
        market_data_metadata_symbol->contract_delivery_time = NULL;
    }
    if (market_data_metadata_symbol->contract_unit) {
        free(market_data_metadata_symbol->contract_unit);
        market_data_metadata_symbol->contract_unit = NULL;
    }
    if (market_data_metadata_symbol->contract_unit_asset) {
        free(market_data_metadata_symbol->contract_unit_asset);
        market_data_metadata_symbol->contract_unit_asset = NULL;
    }
    if (market_data_metadata_symbol->contract_id) {
        free(market_data_metadata_symbol->contract_id);
        market_data_metadata_symbol->contract_id = NULL;
    }
    if (market_data_metadata_symbol->contract_display_name) {
        free(market_data_metadata_symbol->contract_display_name);
        market_data_metadata_symbol->contract_display_name = NULL;
    }
    if (market_data_metadata_symbol->contract_display_description) {
        free(market_data_metadata_symbol->contract_display_description);
        market_data_metadata_symbol->contract_display_description = NULL;
    }
    if (market_data_metadata_symbol->data_start) {
        free(market_data_metadata_symbol->data_start);
        market_data_metadata_symbol->data_start = NULL;
    }
    if (market_data_metadata_symbol->data_end) {
        free(market_data_metadata_symbol->data_end);
        market_data_metadata_symbol->data_end = NULL;
    }
    if (market_data_metadata_symbol->data_quote_start) {
        free(market_data_metadata_symbol->data_quote_start);
        market_data_metadata_symbol->data_quote_start = NULL;
    }
    if (market_data_metadata_symbol->data_quote_end) {
        free(market_data_metadata_symbol->data_quote_end);
        market_data_metadata_symbol->data_quote_end = NULL;
    }
    if (market_data_metadata_symbol->data_orderbook_start) {
        free(market_data_metadata_symbol->data_orderbook_start);
        market_data_metadata_symbol->data_orderbook_start = NULL;
    }
    if (market_data_metadata_symbol->data_orderbook_end) {
        free(market_data_metadata_symbol->data_orderbook_end);
        market_data_metadata_symbol->data_orderbook_end = NULL;
    }
    if (market_data_metadata_symbol->data_trade_start) {
        free(market_data_metadata_symbol->data_trade_start);
        market_data_metadata_symbol->data_trade_start = NULL;
    }
    if (market_data_metadata_symbol->data_trade_end) {
        free(market_data_metadata_symbol->data_trade_end);
        market_data_metadata_symbol->data_trade_end = NULL;
    }
    if (market_data_metadata_symbol->index_id) {
        free(market_data_metadata_symbol->index_id);
        market_data_metadata_symbol->index_id = NULL;
    }
    if (market_data_metadata_symbol->index_display_name) {
        free(market_data_metadata_symbol->index_display_name);
        market_data_metadata_symbol->index_display_name = NULL;
    }
    if (market_data_metadata_symbol->index_display_description) {
        free(market_data_metadata_symbol->index_display_description);
        market_data_metadata_symbol->index_display_description = NULL;
    }
    if (market_data_metadata_symbol->volume_1hrs) {
        free(market_data_metadata_symbol->volume_1hrs);
        market_data_metadata_symbol->volume_1hrs = NULL;
    }
    if (market_data_metadata_symbol->volume_1hrs_usd) {
        free(market_data_metadata_symbol->volume_1hrs_usd);
        market_data_metadata_symbol->volume_1hrs_usd = NULL;
    }
    if (market_data_metadata_symbol->volume_1day) {
        free(market_data_metadata_symbol->volume_1day);
        market_data_metadata_symbol->volume_1day = NULL;
    }
    if (market_data_metadata_symbol->volume_1day_usd) {
        free(market_data_metadata_symbol->volume_1day_usd);
        market_data_metadata_symbol->volume_1day_usd = NULL;
    }
    if (market_data_metadata_symbol->volume_1mth) {
        free(market_data_metadata_symbol->volume_1mth);
        market_data_metadata_symbol->volume_1mth = NULL;
    }
    if (market_data_metadata_symbol->volume_1mth_usd) {
        free(market_data_metadata_symbol->volume_1mth_usd);
        market_data_metadata_symbol->volume_1mth_usd = NULL;
    }
    if (market_data_metadata_symbol->price) {
        free(market_data_metadata_symbol->price);
        market_data_metadata_symbol->price = NULL;
    }
    if (market_data_metadata_symbol->symbol_id_exchange) {
        free(market_data_metadata_symbol->symbol_id_exchange);
        market_data_metadata_symbol->symbol_id_exchange = NULL;
    }
    if (market_data_metadata_symbol->asset_id_base_exchange) {
        free(market_data_metadata_symbol->asset_id_base_exchange);
        market_data_metadata_symbol->asset_id_base_exchange = NULL;
    }
    if (market_data_metadata_symbol->asset_id_quote_exchange) {
        free(market_data_metadata_symbol->asset_id_quote_exchange);
        market_data_metadata_symbol->asset_id_quote_exchange = NULL;
    }
    if (market_data_metadata_symbol->price_precision) {
        free(market_data_metadata_symbol->price_precision);
        market_data_metadata_symbol->price_precision = NULL;
    }
    if (market_data_metadata_symbol->size_precision) {
        free(market_data_metadata_symbol->size_precision);
        market_data_metadata_symbol->size_precision = NULL;
    }
    if (market_data_metadata_symbol->raw_kvp) {
        list_ForEach(listEntry, market_data_metadata_symbol->raw_kvp) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(market_data_metadata_symbol->raw_kvp);
        market_data_metadata_symbol->raw_kvp = NULL;
    }
    if (market_data_metadata_symbol->future_is_inverse) {
        free(market_data_metadata_symbol->future_is_inverse);
        market_data_metadata_symbol->future_is_inverse = NULL;
    }
    if (market_data_metadata_symbol->future_is_quanto) {
        free(market_data_metadata_symbol->future_is_quanto);
        market_data_metadata_symbol->future_is_quanto = NULL;
    }
    if (market_data_metadata_symbol->volume_to_usd) {
        free(market_data_metadata_symbol->volume_to_usd);
        market_data_metadata_symbol->volume_to_usd = NULL;
    }
    if (market_data_metadata_symbol->option_barrier_up_price) {
        free(market_data_metadata_symbol->option_barrier_up_price);
        market_data_metadata_symbol->option_barrier_up_price = NULL;
    }
    if (market_data_metadata_symbol->option_barrier_up_type) {
        free(market_data_metadata_symbol->option_barrier_up_type);
        market_data_metadata_symbol->option_barrier_up_type = NULL;
    }
    if (market_data_metadata_symbol->option_barrier_down_price) {
        free(market_data_metadata_symbol->option_barrier_down_price);
        market_data_metadata_symbol->option_barrier_down_price = NULL;
    }
    if (market_data_metadata_symbol->option_barrier_down_type) {
        free(market_data_metadata_symbol->option_barrier_down_type);
        market_data_metadata_symbol->option_barrier_down_type = NULL;
    }
    if (market_data_metadata_symbol->symbol_id_int) {
        free(market_data_metadata_symbol->symbol_id_int);
        market_data_metadata_symbol->symbol_id_int = NULL;
    }
    free(market_data_metadata_symbol);
}

cJSON *market_data_metadata_symbol_convertToJSON(market_data_metadata_symbol_t *market_data_metadata_symbol) {
    cJSON *item = cJSON_CreateObject();

    // market_data_metadata_symbol->symbol_id
    if(market_data_metadata_symbol->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", market_data_metadata_symbol->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->exchange_id
    if(market_data_metadata_symbol->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", market_data_metadata_symbol->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->symbol_type
    if(market_data_metadata_symbol->symbol_type) {
    if(cJSON_AddStringToObject(item, "symbol_type", market_data_metadata_symbol->symbol_type) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->asset_id_base
    if(market_data_metadata_symbol->asset_id_base) {
    if(cJSON_AddStringToObject(item, "asset_id_base", market_data_metadata_symbol->asset_id_base) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->asset_id_quote
    if(market_data_metadata_symbol->asset_id_quote) {
    if(cJSON_AddStringToObject(item, "asset_id_quote", market_data_metadata_symbol->asset_id_quote) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->asset_id_unit
    if(market_data_metadata_symbol->asset_id_unit) {
    if(cJSON_AddStringToObject(item, "asset_id_unit", market_data_metadata_symbol->asset_id_unit) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->future_contract_unit
    if(market_data_metadata_symbol->future_contract_unit) {
    if(cJSON_AddNumberToObject(item, "future_contract_unit", *market_data_metadata_symbol->future_contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->future_contract_unit_asset
    if(market_data_metadata_symbol->future_contract_unit_asset) {
    if(cJSON_AddStringToObject(item, "future_contract_unit_asset", market_data_metadata_symbol->future_contract_unit_asset) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->future_delivery_time
    if(market_data_metadata_symbol->future_delivery_time) {
    if(cJSON_AddStringToObject(item, "future_delivery_time", market_data_metadata_symbol->future_delivery_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->option_type_is_call
    if(market_data_metadata_symbol->option_type_is_call) {
    if(cJSON_AddBoolToObject(item, "option_type_is_call", *market_data_metadata_symbol->option_type_is_call) == NULL) {
    goto fail; //Bool
    }
    }


    // market_data_metadata_symbol->option_strike_price
    if(market_data_metadata_symbol->option_strike_price) {
    if(cJSON_AddNumberToObject(item, "option_strike_price", *market_data_metadata_symbol->option_strike_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->option_contract_unit
    if(market_data_metadata_symbol->option_contract_unit) {
    if(cJSON_AddNumberToObject(item, "option_contract_unit", *market_data_metadata_symbol->option_contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->option_exercise_style
    if(market_data_metadata_symbol->option_exercise_style) {
    if(cJSON_AddStringToObject(item, "option_exercise_style", market_data_metadata_symbol->option_exercise_style) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->option_expiration_time
    if(market_data_metadata_symbol->option_expiration_time) {
    if(cJSON_AddStringToObject(item, "option_expiration_time", market_data_metadata_symbol->option_expiration_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->contract_delivery_time
    if(market_data_metadata_symbol->contract_delivery_time) {
    if(cJSON_AddStringToObject(item, "contract_delivery_time", market_data_metadata_symbol->contract_delivery_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->contract_unit
    if(market_data_metadata_symbol->contract_unit) {
    if(cJSON_AddNumberToObject(item, "contract_unit", *market_data_metadata_symbol->contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->contract_unit_asset
    if(market_data_metadata_symbol->contract_unit_asset) {
    if(cJSON_AddStringToObject(item, "contract_unit_asset", market_data_metadata_symbol->contract_unit_asset) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->contract_id
    if(market_data_metadata_symbol->contract_id) {
    if(cJSON_AddStringToObject(item, "contract_id", market_data_metadata_symbol->contract_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->contract_display_name
    if(market_data_metadata_symbol->contract_display_name) {
    if(cJSON_AddStringToObject(item, "contract_display_name", market_data_metadata_symbol->contract_display_name) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->contract_display_description
    if(market_data_metadata_symbol->contract_display_description) {
    if(cJSON_AddStringToObject(item, "contract_display_description", market_data_metadata_symbol->contract_display_description) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->data_start
    if(market_data_metadata_symbol->data_start) {
    if(cJSON_AddStringToObject(item, "data_start", market_data_metadata_symbol->data_start) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->data_end
    if(market_data_metadata_symbol->data_end) {
    if(cJSON_AddStringToObject(item, "data_end", market_data_metadata_symbol->data_end) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->data_quote_start
    if(market_data_metadata_symbol->data_quote_start) {
    if(cJSON_AddStringToObject(item, "data_quote_start", market_data_metadata_symbol->data_quote_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->data_quote_end
    if(market_data_metadata_symbol->data_quote_end) {
    if(cJSON_AddStringToObject(item, "data_quote_end", market_data_metadata_symbol->data_quote_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->data_orderbook_start
    if(market_data_metadata_symbol->data_orderbook_start) {
    if(cJSON_AddStringToObject(item, "data_orderbook_start", market_data_metadata_symbol->data_orderbook_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->data_orderbook_end
    if(market_data_metadata_symbol->data_orderbook_end) {
    if(cJSON_AddStringToObject(item, "data_orderbook_end", market_data_metadata_symbol->data_orderbook_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->data_trade_start
    if(market_data_metadata_symbol->data_trade_start) {
    if(cJSON_AddStringToObject(item, "data_trade_start", market_data_metadata_symbol->data_trade_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->data_trade_end
    if(market_data_metadata_symbol->data_trade_end) {
    if(cJSON_AddStringToObject(item, "data_trade_end", market_data_metadata_symbol->data_trade_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // market_data_metadata_symbol->index_id
    if(market_data_metadata_symbol->index_id) {
    if(cJSON_AddStringToObject(item, "index_id", market_data_metadata_symbol->index_id) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->index_display_name
    if(market_data_metadata_symbol->index_display_name) {
    if(cJSON_AddStringToObject(item, "index_display_name", market_data_metadata_symbol->index_display_name) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->index_display_description
    if(market_data_metadata_symbol->index_display_description) {
    if(cJSON_AddStringToObject(item, "index_display_description", market_data_metadata_symbol->index_display_description) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->volume_1hrs
    if(market_data_metadata_symbol->volume_1hrs) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs", *market_data_metadata_symbol->volume_1hrs) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->volume_1hrs_usd
    if(market_data_metadata_symbol->volume_1hrs_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs_usd", *market_data_metadata_symbol->volume_1hrs_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->volume_1day
    if(market_data_metadata_symbol->volume_1day) {
    if(cJSON_AddNumberToObject(item, "volume_1day", *market_data_metadata_symbol->volume_1day) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->volume_1day_usd
    if(market_data_metadata_symbol->volume_1day_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1day_usd", *market_data_metadata_symbol->volume_1day_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->volume_1mth
    if(market_data_metadata_symbol->volume_1mth) {
    if(cJSON_AddNumberToObject(item, "volume_1mth", *market_data_metadata_symbol->volume_1mth) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->volume_1mth_usd
    if(market_data_metadata_symbol->volume_1mth_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1mth_usd", *market_data_metadata_symbol->volume_1mth_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->price
    if(market_data_metadata_symbol->price) {
    if(cJSON_AddNumberToObject(item, "price", *market_data_metadata_symbol->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->symbol_id_exchange
    if(market_data_metadata_symbol->symbol_id_exchange) {
    if(cJSON_AddStringToObject(item, "symbol_id_exchange", market_data_metadata_symbol->symbol_id_exchange) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->asset_id_base_exchange
    if(market_data_metadata_symbol->asset_id_base_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_base_exchange", market_data_metadata_symbol->asset_id_base_exchange) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->asset_id_quote_exchange
    if(market_data_metadata_symbol->asset_id_quote_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_quote_exchange", market_data_metadata_symbol->asset_id_quote_exchange) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->price_precision
    if(market_data_metadata_symbol->price_precision) {
    if(cJSON_AddNumberToObject(item, "price_precision", *market_data_metadata_symbol->price_precision) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->size_precision
    if(market_data_metadata_symbol->size_precision) {
    if(cJSON_AddNumberToObject(item, "size_precision", *market_data_metadata_symbol->size_precision) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->raw_kvp
    if(market_data_metadata_symbol->raw_kvp) {
    cJSON *raw_kvp = cJSON_AddObjectToObject(item, "raw_kvp");
    if(raw_kvp == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = raw_kvp;
    listEntry_t *raw_kvpListEntry;
    if (market_data_metadata_symbol->raw_kvp) {
    list_ForEach(raw_kvpListEntry, market_data_metadata_symbol->raw_kvp) {
        keyValuePair_t *localKeyValue = raw_kvpListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // market_data_metadata_symbol->future_is_inverse
    if(market_data_metadata_symbol->future_is_inverse) {
    if(cJSON_AddBoolToObject(item, "future_is_inverse", *market_data_metadata_symbol->future_is_inverse) == NULL) {
    goto fail; //Bool
    }
    }


    // market_data_metadata_symbol->future_is_quanto
    if(market_data_metadata_symbol->future_is_quanto) {
    if(cJSON_AddBoolToObject(item, "future_is_quanto", *market_data_metadata_symbol->future_is_quanto) == NULL) {
    goto fail; //Bool
    }
    }


    // market_data_metadata_symbol->volume_to_usd
    if(market_data_metadata_symbol->volume_to_usd) {
    if(cJSON_AddNumberToObject(item, "volume_to_usd", *market_data_metadata_symbol->volume_to_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->option_barrier_up_price
    if(market_data_metadata_symbol->option_barrier_up_price) {
    if(cJSON_AddNumberToObject(item, "option_barrier_up_price", *market_data_metadata_symbol->option_barrier_up_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->option_barrier_up_type
    if(market_data_metadata_symbol->option_barrier_up_type) {
    if(cJSON_AddStringToObject(item, "option_barrier_up_type", market_data_metadata_symbol->option_barrier_up_type) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->option_barrier_down_price
    if(market_data_metadata_symbol->option_barrier_down_price) {
    if(cJSON_AddNumberToObject(item, "option_barrier_down_price", *market_data_metadata_symbol->option_barrier_down_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // market_data_metadata_symbol->option_barrier_down_type
    if(market_data_metadata_symbol->option_barrier_down_type) {
    if(cJSON_AddStringToObject(item, "option_barrier_down_type", market_data_metadata_symbol->option_barrier_down_type) == NULL) {
    goto fail; //String
    }
    }


    // market_data_metadata_symbol->symbol_id_int
    if(market_data_metadata_symbol->symbol_id_int) {
    if(cJSON_AddNumberToObject(item, "symbol_id_int", *market_data_metadata_symbol->symbol_id_int) == NULL) {
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

market_data_metadata_symbol_t *market_data_metadata_symbol_parseFromJSON(cJSON *market_data_metadata_symbolJSON){

    market_data_metadata_symbol_t *market_data_metadata_symbol_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *exchange_id_local_str = NULL;

    char *symbol_type_local_str = NULL;

    char *asset_id_base_local_str = NULL;

    char *asset_id_quote_local_str = NULL;

    char *asset_id_unit_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->future_contract_unit
    double *future_contract_unit_local_var = NULL;

    char *future_contract_unit_asset_local_str = NULL;

    char *future_delivery_time_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->option_type_is_call
    int *option_type_is_call_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->option_strike_price
    double *option_strike_price_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->option_contract_unit
    double *option_contract_unit_local_var = NULL;

    char *option_exercise_style_local_str = NULL;

    char *option_expiration_time_local_str = NULL;

    char *contract_delivery_time_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->contract_unit
    double *contract_unit_local_var = NULL;

    char *contract_unit_asset_local_str = NULL;

    char *contract_id_local_str = NULL;

    char *contract_display_name_local_str = NULL;

    char *contract_display_description_local_str = NULL;

    char *data_start_local_str = NULL;

    char *data_end_local_str = NULL;

    char *data_quote_start_local_str = NULL;

    char *data_quote_end_local_str = NULL;

    char *data_orderbook_start_local_str = NULL;

    char *data_orderbook_end_local_str = NULL;

    char *data_trade_start_local_str = NULL;

    char *data_trade_end_local_str = NULL;

    char *index_id_local_str = NULL;

    char *index_display_name_local_str = NULL;

    char *index_display_description_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1hrs
    double *volume_1hrs_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1hrs_usd
    double *volume_1hrs_usd_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1day
    double *volume_1day_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1day_usd
    double *volume_1day_usd_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1mth
    double *volume_1mth_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_1mth_usd
    double *volume_1mth_usd_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->price
    double *price_local_var = NULL;

    char *symbol_id_exchange_local_str = NULL;

    char *asset_id_base_exchange_local_str = NULL;

    char *asset_id_quote_exchange_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->price_precision
    double *price_precision_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->size_precision
    double *size_precision_local_var = NULL;

    // define the local map for market_data_metadata_symbol->raw_kvp
    list_t *raw_kvpList = NULL;

    // define the local variable for market_data_metadata_symbol->future_is_inverse
    int *future_is_inverse_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->future_is_quanto
    int *future_is_quanto_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->volume_to_usd
    double *volume_to_usd_local_var = NULL;

    // define the local variable for market_data_metadata_symbol->option_barrier_up_price
    double *option_barrier_up_price_local_var = NULL;

    char *option_barrier_up_type_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->option_barrier_down_price
    double *option_barrier_down_price_local_var = NULL;

    char *option_barrier_down_type_local_str = NULL;

    // define the local variable for market_data_metadata_symbol->symbol_id_int
    int *symbol_id_int_local_var = NULL;

    // market_data_metadata_symbol->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->symbol_type
    cJSON *symbol_type = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "symbol_type");
    if (cJSON_IsNull(symbol_type)) {
        symbol_type = NULL;
    }
    if (symbol_type) { 
    if(!cJSON_IsString(symbol_type) && !cJSON_IsNull(symbol_type))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->asset_id_base
    cJSON *asset_id_base = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "asset_id_base");
    if (cJSON_IsNull(asset_id_base)) {
        asset_id_base = NULL;
    }
    if (asset_id_base) { 
    if(!cJSON_IsString(asset_id_base) && !cJSON_IsNull(asset_id_base))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->asset_id_quote
    cJSON *asset_id_quote = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "asset_id_quote");
    if (cJSON_IsNull(asset_id_quote)) {
        asset_id_quote = NULL;
    }
    if (asset_id_quote) { 
    if(!cJSON_IsString(asset_id_quote) && !cJSON_IsNull(asset_id_quote))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->asset_id_unit
    cJSON *asset_id_unit = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "asset_id_unit");
    if (cJSON_IsNull(asset_id_unit)) {
        asset_id_unit = NULL;
    }
    if (asset_id_unit) { 
    if(!cJSON_IsString(asset_id_unit) && !cJSON_IsNull(asset_id_unit))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->future_contract_unit
    cJSON *future_contract_unit = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "future_contract_unit");
    if (cJSON_IsNull(future_contract_unit)) {
        future_contract_unit = NULL;
    }
    if (future_contract_unit) { 
    if(!cJSON_IsNumber(future_contract_unit))
    {
    goto end; //Numeric
    }
    future_contract_unit_local_var = malloc(sizeof(double));
    if(!future_contract_unit_local_var)
    {
        goto end;
    }
    *future_contract_unit_local_var = future_contract_unit->valuedouble;
    }

    // market_data_metadata_symbol->future_contract_unit_asset
    cJSON *future_contract_unit_asset = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "future_contract_unit_asset");
    if (cJSON_IsNull(future_contract_unit_asset)) {
        future_contract_unit_asset = NULL;
    }
    if (future_contract_unit_asset) { 
    if(!cJSON_IsString(future_contract_unit_asset) && !cJSON_IsNull(future_contract_unit_asset))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->future_delivery_time
    cJSON *future_delivery_time = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "future_delivery_time");
    if (cJSON_IsNull(future_delivery_time)) {
        future_delivery_time = NULL;
    }
    if (future_delivery_time) { 
    if(!cJSON_IsString(future_delivery_time) && !cJSON_IsNull(future_delivery_time))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->option_type_is_call
    cJSON *option_type_is_call = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_type_is_call");
    if (cJSON_IsNull(option_type_is_call)) {
        option_type_is_call = NULL;
    }
    if (option_type_is_call) { 
    if(!cJSON_IsBool(option_type_is_call))
    {
    goto end; //Bool
    }
    option_type_is_call_local_var = malloc(sizeof(int));
    if(!option_type_is_call_local_var)
    {
        goto end;
    }
    *option_type_is_call_local_var = option_type_is_call->valueint;
    }

    // market_data_metadata_symbol->option_strike_price
    cJSON *option_strike_price = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_strike_price");
    if (cJSON_IsNull(option_strike_price)) {
        option_strike_price = NULL;
    }
    if (option_strike_price) { 
    if(!cJSON_IsNumber(option_strike_price))
    {
    goto end; //Numeric
    }
    option_strike_price_local_var = malloc(sizeof(double));
    if(!option_strike_price_local_var)
    {
        goto end;
    }
    *option_strike_price_local_var = option_strike_price->valuedouble;
    }

    // market_data_metadata_symbol->option_contract_unit
    cJSON *option_contract_unit = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_contract_unit");
    if (cJSON_IsNull(option_contract_unit)) {
        option_contract_unit = NULL;
    }
    if (option_contract_unit) { 
    if(!cJSON_IsNumber(option_contract_unit))
    {
    goto end; //Numeric
    }
    option_contract_unit_local_var = malloc(sizeof(double));
    if(!option_contract_unit_local_var)
    {
        goto end;
    }
    *option_contract_unit_local_var = option_contract_unit->valuedouble;
    }

    // market_data_metadata_symbol->option_exercise_style
    cJSON *option_exercise_style = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_exercise_style");
    if (cJSON_IsNull(option_exercise_style)) {
        option_exercise_style = NULL;
    }
    if (option_exercise_style) { 
    if(!cJSON_IsString(option_exercise_style) && !cJSON_IsNull(option_exercise_style))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->option_expiration_time
    cJSON *option_expiration_time = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_expiration_time");
    if (cJSON_IsNull(option_expiration_time)) {
        option_expiration_time = NULL;
    }
    if (option_expiration_time) { 
    if(!cJSON_IsString(option_expiration_time) && !cJSON_IsNull(option_expiration_time))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->contract_delivery_time
    cJSON *contract_delivery_time = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_delivery_time");
    if (cJSON_IsNull(contract_delivery_time)) {
        contract_delivery_time = NULL;
    }
    if (contract_delivery_time) { 
    if(!cJSON_IsString(contract_delivery_time) && !cJSON_IsNull(contract_delivery_time))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->contract_unit
    cJSON *contract_unit = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_unit");
    if (cJSON_IsNull(contract_unit)) {
        contract_unit = NULL;
    }
    if (contract_unit) { 
    if(!cJSON_IsNumber(contract_unit))
    {
    goto end; //Numeric
    }
    contract_unit_local_var = malloc(sizeof(double));
    if(!contract_unit_local_var)
    {
        goto end;
    }
    *contract_unit_local_var = contract_unit->valuedouble;
    }

    // market_data_metadata_symbol->contract_unit_asset
    cJSON *contract_unit_asset = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_unit_asset");
    if (cJSON_IsNull(contract_unit_asset)) {
        contract_unit_asset = NULL;
    }
    if (contract_unit_asset) { 
    if(!cJSON_IsString(contract_unit_asset) && !cJSON_IsNull(contract_unit_asset))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->contract_id
    cJSON *contract_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_id");
    if (cJSON_IsNull(contract_id)) {
        contract_id = NULL;
    }
    if (contract_id) { 
    if(!cJSON_IsString(contract_id) && !cJSON_IsNull(contract_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->contract_display_name
    cJSON *contract_display_name = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_display_name");
    if (cJSON_IsNull(contract_display_name)) {
        contract_display_name = NULL;
    }
    if (contract_display_name) { 
    if(!cJSON_IsString(contract_display_name) && !cJSON_IsNull(contract_display_name))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->contract_display_description
    cJSON *contract_display_description = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "contract_display_description");
    if (cJSON_IsNull(contract_display_description)) {
        contract_display_description = NULL;
    }
    if (contract_display_description) { 
    if(!cJSON_IsString(contract_display_description) && !cJSON_IsNull(contract_display_description))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->data_start
    cJSON *data_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_start");
    if (cJSON_IsNull(data_start)) {
        data_start = NULL;
    }
    if (data_start) { 
    if(!cJSON_IsString(data_start) && !cJSON_IsNull(data_start))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->data_end
    cJSON *data_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_end");
    if (cJSON_IsNull(data_end)) {
        data_end = NULL;
    }
    if (data_end) { 
    if(!cJSON_IsString(data_end) && !cJSON_IsNull(data_end))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->data_quote_start
    cJSON *data_quote_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_quote_start");
    if (cJSON_IsNull(data_quote_start)) {
        data_quote_start = NULL;
    }
    if (data_quote_start) { 
    if(!cJSON_IsString(data_quote_start) && !cJSON_IsNull(data_quote_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->data_quote_end
    cJSON *data_quote_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_quote_end");
    if (cJSON_IsNull(data_quote_end)) {
        data_quote_end = NULL;
    }
    if (data_quote_end) { 
    if(!cJSON_IsString(data_quote_end) && !cJSON_IsNull(data_quote_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->data_orderbook_start
    cJSON *data_orderbook_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_orderbook_start");
    if (cJSON_IsNull(data_orderbook_start)) {
        data_orderbook_start = NULL;
    }
    if (data_orderbook_start) { 
    if(!cJSON_IsString(data_orderbook_start) && !cJSON_IsNull(data_orderbook_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->data_orderbook_end
    cJSON *data_orderbook_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_orderbook_end");
    if (cJSON_IsNull(data_orderbook_end)) {
        data_orderbook_end = NULL;
    }
    if (data_orderbook_end) { 
    if(!cJSON_IsString(data_orderbook_end) && !cJSON_IsNull(data_orderbook_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->data_trade_start
    cJSON *data_trade_start = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_trade_start");
    if (cJSON_IsNull(data_trade_start)) {
        data_trade_start = NULL;
    }
    if (data_trade_start) { 
    if(!cJSON_IsString(data_trade_start) && !cJSON_IsNull(data_trade_start))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->data_trade_end
    cJSON *data_trade_end = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "data_trade_end");
    if (cJSON_IsNull(data_trade_end)) {
        data_trade_end = NULL;
    }
    if (data_trade_end) { 
    if(!cJSON_IsString(data_trade_end) && !cJSON_IsNull(data_trade_end))
    {
    goto end; //DateTime
    }
    }

    // market_data_metadata_symbol->index_id
    cJSON *index_id = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "index_id");
    if (cJSON_IsNull(index_id)) {
        index_id = NULL;
    }
    if (index_id) { 
    if(!cJSON_IsString(index_id) && !cJSON_IsNull(index_id))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->index_display_name
    cJSON *index_display_name = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "index_display_name");
    if (cJSON_IsNull(index_display_name)) {
        index_display_name = NULL;
    }
    if (index_display_name) { 
    if(!cJSON_IsString(index_display_name) && !cJSON_IsNull(index_display_name))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->index_display_description
    cJSON *index_display_description = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "index_display_description");
    if (cJSON_IsNull(index_display_description)) {
        index_display_description = NULL;
    }
    if (index_display_description) { 
    if(!cJSON_IsString(index_display_description) && !cJSON_IsNull(index_display_description))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->volume_1hrs
    cJSON *volume_1hrs = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1hrs");
    if (cJSON_IsNull(volume_1hrs)) {
        volume_1hrs = NULL;
    }
    if (volume_1hrs) { 
    if(!cJSON_IsNumber(volume_1hrs))
    {
    goto end; //Numeric
    }
    volume_1hrs_local_var = malloc(sizeof(double));
    if(!volume_1hrs_local_var)
    {
        goto end;
    }
    *volume_1hrs_local_var = volume_1hrs->valuedouble;
    }

    // market_data_metadata_symbol->volume_1hrs_usd
    cJSON *volume_1hrs_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1hrs_usd");
    if (cJSON_IsNull(volume_1hrs_usd)) {
        volume_1hrs_usd = NULL;
    }
    if (volume_1hrs_usd) { 
    if(!cJSON_IsNumber(volume_1hrs_usd))
    {
    goto end; //Numeric
    }
    volume_1hrs_usd_local_var = malloc(sizeof(double));
    if(!volume_1hrs_usd_local_var)
    {
        goto end;
    }
    *volume_1hrs_usd_local_var = volume_1hrs_usd->valuedouble;
    }

    // market_data_metadata_symbol->volume_1day
    cJSON *volume_1day = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1day");
    if (cJSON_IsNull(volume_1day)) {
        volume_1day = NULL;
    }
    if (volume_1day) { 
    if(!cJSON_IsNumber(volume_1day))
    {
    goto end; //Numeric
    }
    volume_1day_local_var = malloc(sizeof(double));
    if(!volume_1day_local_var)
    {
        goto end;
    }
    *volume_1day_local_var = volume_1day->valuedouble;
    }

    // market_data_metadata_symbol->volume_1day_usd
    cJSON *volume_1day_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1day_usd");
    if (cJSON_IsNull(volume_1day_usd)) {
        volume_1day_usd = NULL;
    }
    if (volume_1day_usd) { 
    if(!cJSON_IsNumber(volume_1day_usd))
    {
    goto end; //Numeric
    }
    volume_1day_usd_local_var = malloc(sizeof(double));
    if(!volume_1day_usd_local_var)
    {
        goto end;
    }
    *volume_1day_usd_local_var = volume_1day_usd->valuedouble;
    }

    // market_data_metadata_symbol->volume_1mth
    cJSON *volume_1mth = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1mth");
    if (cJSON_IsNull(volume_1mth)) {
        volume_1mth = NULL;
    }
    if (volume_1mth) { 
    if(!cJSON_IsNumber(volume_1mth))
    {
    goto end; //Numeric
    }
    volume_1mth_local_var = malloc(sizeof(double));
    if(!volume_1mth_local_var)
    {
        goto end;
    }
    *volume_1mth_local_var = volume_1mth->valuedouble;
    }

    // market_data_metadata_symbol->volume_1mth_usd
    cJSON *volume_1mth_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_1mth_usd");
    if (cJSON_IsNull(volume_1mth_usd)) {
        volume_1mth_usd = NULL;
    }
    if (volume_1mth_usd) { 
    if(!cJSON_IsNumber(volume_1mth_usd))
    {
    goto end; //Numeric
    }
    volume_1mth_usd_local_var = malloc(sizeof(double));
    if(!volume_1mth_usd_local_var)
    {
        goto end;
    }
    *volume_1mth_usd_local_var = volume_1mth_usd->valuedouble;
    }

    // market_data_metadata_symbol->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "price");
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

    // market_data_metadata_symbol->symbol_id_exchange
    cJSON *symbol_id_exchange = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "symbol_id_exchange");
    if (cJSON_IsNull(symbol_id_exchange)) {
        symbol_id_exchange = NULL;
    }
    if (symbol_id_exchange) { 
    if(!cJSON_IsString(symbol_id_exchange) && !cJSON_IsNull(symbol_id_exchange))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->asset_id_base_exchange
    cJSON *asset_id_base_exchange = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "asset_id_base_exchange");
    if (cJSON_IsNull(asset_id_base_exchange)) {
        asset_id_base_exchange = NULL;
    }
    if (asset_id_base_exchange) { 
    if(!cJSON_IsString(asset_id_base_exchange) && !cJSON_IsNull(asset_id_base_exchange))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->asset_id_quote_exchange
    cJSON *asset_id_quote_exchange = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "asset_id_quote_exchange");
    if (cJSON_IsNull(asset_id_quote_exchange)) {
        asset_id_quote_exchange = NULL;
    }
    if (asset_id_quote_exchange) { 
    if(!cJSON_IsString(asset_id_quote_exchange) && !cJSON_IsNull(asset_id_quote_exchange))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->price_precision
    cJSON *price_precision = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "price_precision");
    if (cJSON_IsNull(price_precision)) {
        price_precision = NULL;
    }
    if (price_precision) { 
    if(!cJSON_IsNumber(price_precision))
    {
    goto end; //Numeric
    }
    price_precision_local_var = malloc(sizeof(double));
    if(!price_precision_local_var)
    {
        goto end;
    }
    *price_precision_local_var = price_precision->valuedouble;
    }

    // market_data_metadata_symbol->size_precision
    cJSON *size_precision = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "size_precision");
    if (cJSON_IsNull(size_precision)) {
        size_precision = NULL;
    }
    if (size_precision) { 
    if(!cJSON_IsNumber(size_precision))
    {
    goto end; //Numeric
    }
    size_precision_local_var = malloc(sizeof(double));
    if(!size_precision_local_var)
    {
        goto end;
    }
    *size_precision_local_var = size_precision->valuedouble;
    }

    // market_data_metadata_symbol->raw_kvp
    cJSON *raw_kvp = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "raw_kvp");
    if (cJSON_IsNull(raw_kvp)) {
        raw_kvp = NULL;
    }
    if (raw_kvp) { 
    cJSON *raw_kvp_local_map = NULL;
    if(!cJSON_IsObject(raw_kvp) && !cJSON_IsNull(raw_kvp))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(raw_kvp))
    {
        raw_kvpList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(raw_kvp_local_map, raw_kvp)
        {
            cJSON *localMapObject = raw_kvp_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(raw_kvpList , localMapKeyPair);
        }
    }
    }

    // market_data_metadata_symbol->future_is_inverse
    cJSON *future_is_inverse = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "future_is_inverse");
    if (cJSON_IsNull(future_is_inverse)) {
        future_is_inverse = NULL;
    }
    if (future_is_inverse) { 
    if(!cJSON_IsBool(future_is_inverse))
    {
    goto end; //Bool
    }
    future_is_inverse_local_var = malloc(sizeof(int));
    if(!future_is_inverse_local_var)
    {
        goto end;
    }
    *future_is_inverse_local_var = future_is_inverse->valueint;
    }

    // market_data_metadata_symbol->future_is_quanto
    cJSON *future_is_quanto = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "future_is_quanto");
    if (cJSON_IsNull(future_is_quanto)) {
        future_is_quanto = NULL;
    }
    if (future_is_quanto) { 
    if(!cJSON_IsBool(future_is_quanto))
    {
    goto end; //Bool
    }
    future_is_quanto_local_var = malloc(sizeof(int));
    if(!future_is_quanto_local_var)
    {
        goto end;
    }
    *future_is_quanto_local_var = future_is_quanto->valueint;
    }

    // market_data_metadata_symbol->volume_to_usd
    cJSON *volume_to_usd = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "volume_to_usd");
    if (cJSON_IsNull(volume_to_usd)) {
        volume_to_usd = NULL;
    }
    if (volume_to_usd) { 
    if(!cJSON_IsNumber(volume_to_usd))
    {
    goto end; //Numeric
    }
    volume_to_usd_local_var = malloc(sizeof(double));
    if(!volume_to_usd_local_var)
    {
        goto end;
    }
    *volume_to_usd_local_var = volume_to_usd->valuedouble;
    }

    // market_data_metadata_symbol->option_barrier_up_price
    cJSON *option_barrier_up_price = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_barrier_up_price");
    if (cJSON_IsNull(option_barrier_up_price)) {
        option_barrier_up_price = NULL;
    }
    if (option_barrier_up_price) { 
    if(!cJSON_IsNumber(option_barrier_up_price))
    {
    goto end; //Numeric
    }
    option_barrier_up_price_local_var = malloc(sizeof(double));
    if(!option_barrier_up_price_local_var)
    {
        goto end;
    }
    *option_barrier_up_price_local_var = option_barrier_up_price->valuedouble;
    }

    // market_data_metadata_symbol->option_barrier_up_type
    cJSON *option_barrier_up_type = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_barrier_up_type");
    if (cJSON_IsNull(option_barrier_up_type)) {
        option_barrier_up_type = NULL;
    }
    if (option_barrier_up_type) { 
    if(!cJSON_IsString(option_barrier_up_type) && !cJSON_IsNull(option_barrier_up_type))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->option_barrier_down_price
    cJSON *option_barrier_down_price = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_barrier_down_price");
    if (cJSON_IsNull(option_barrier_down_price)) {
        option_barrier_down_price = NULL;
    }
    if (option_barrier_down_price) { 
    if(!cJSON_IsNumber(option_barrier_down_price))
    {
    goto end; //Numeric
    }
    option_barrier_down_price_local_var = malloc(sizeof(double));
    if(!option_barrier_down_price_local_var)
    {
        goto end;
    }
    *option_barrier_down_price_local_var = option_barrier_down_price->valuedouble;
    }

    // market_data_metadata_symbol->option_barrier_down_type
    cJSON *option_barrier_down_type = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "option_barrier_down_type");
    if (cJSON_IsNull(option_barrier_down_type)) {
        option_barrier_down_type = NULL;
    }
    if (option_barrier_down_type) { 
    if(!cJSON_IsString(option_barrier_down_type) && !cJSON_IsNull(option_barrier_down_type))
    {
    goto end; //String
    }
    }

    // market_data_metadata_symbol->symbol_id_int
    cJSON *symbol_id_int = cJSON_GetObjectItemCaseSensitive(market_data_metadata_symbolJSON, "symbol_id_int");
    if (cJSON_IsNull(symbol_id_int)) {
        symbol_id_int = NULL;
    }
    if (symbol_id_int) { 
    if(!cJSON_IsNumber(symbol_id_int))
    {
    goto end; //Numeric
    }
    symbol_id_int_local_var = malloc(sizeof(int));
    if(!symbol_id_int_local_var)
    {
        goto end;
    }
    *symbol_id_int_local_var = symbol_id_int->valuedouble;
    }


    if (symbol_id && !cJSON_IsNull(symbol_id)) symbol_id_local_str = strdup(symbol_id->valuestring);
    if (exchange_id && !cJSON_IsNull(exchange_id)) exchange_id_local_str = strdup(exchange_id->valuestring);
    if (symbol_type && !cJSON_IsNull(symbol_type)) symbol_type_local_str = strdup(symbol_type->valuestring);
    if (asset_id_base && !cJSON_IsNull(asset_id_base)) asset_id_base_local_str = strdup(asset_id_base->valuestring);
    if (asset_id_quote && !cJSON_IsNull(asset_id_quote)) asset_id_quote_local_str = strdup(asset_id_quote->valuestring);
    if (asset_id_unit && !cJSON_IsNull(asset_id_unit)) asset_id_unit_local_str = strdup(asset_id_unit->valuestring);
    if (future_contract_unit_asset && !cJSON_IsNull(future_contract_unit_asset)) future_contract_unit_asset_local_str = strdup(future_contract_unit_asset->valuestring);
    if (future_delivery_time && !cJSON_IsNull(future_delivery_time)) future_delivery_time_local_str = strdup(future_delivery_time->valuestring);
    if (option_exercise_style && !cJSON_IsNull(option_exercise_style)) option_exercise_style_local_str = strdup(option_exercise_style->valuestring);
    if (option_expiration_time && !cJSON_IsNull(option_expiration_time)) option_expiration_time_local_str = strdup(option_expiration_time->valuestring);
    if (contract_delivery_time && !cJSON_IsNull(contract_delivery_time)) contract_delivery_time_local_str = strdup(contract_delivery_time->valuestring);
    if (contract_unit_asset && !cJSON_IsNull(contract_unit_asset)) contract_unit_asset_local_str = strdup(contract_unit_asset->valuestring);
    if (contract_id && !cJSON_IsNull(contract_id)) contract_id_local_str = strdup(contract_id->valuestring);
    if (contract_display_name && !cJSON_IsNull(contract_display_name)) contract_display_name_local_str = strdup(contract_display_name->valuestring);
    if (contract_display_description && !cJSON_IsNull(contract_display_description)) contract_display_description_local_str = strdup(contract_display_description->valuestring);
    if (data_start && !cJSON_IsNull(data_start)) data_start_local_str = strdup(data_start->valuestring);
    if (data_end && !cJSON_IsNull(data_end)) data_end_local_str = strdup(data_end->valuestring);
    if (data_quote_start && !cJSON_IsNull(data_quote_start)) data_quote_start_local_str = strdup(data_quote_start->valuestring);
    if (data_quote_end && !cJSON_IsNull(data_quote_end)) data_quote_end_local_str = strdup(data_quote_end->valuestring);
    if (data_orderbook_start && !cJSON_IsNull(data_orderbook_start)) data_orderbook_start_local_str = strdup(data_orderbook_start->valuestring);
    if (data_orderbook_end && !cJSON_IsNull(data_orderbook_end)) data_orderbook_end_local_str = strdup(data_orderbook_end->valuestring);
    if (data_trade_start && !cJSON_IsNull(data_trade_start)) data_trade_start_local_str = strdup(data_trade_start->valuestring);
    if (data_trade_end && !cJSON_IsNull(data_trade_end)) data_trade_end_local_str = strdup(data_trade_end->valuestring);
    if (index_id && !cJSON_IsNull(index_id)) index_id_local_str = strdup(index_id->valuestring);
    if (index_display_name && !cJSON_IsNull(index_display_name)) index_display_name_local_str = strdup(index_display_name->valuestring);
    if (index_display_description && !cJSON_IsNull(index_display_description)) index_display_description_local_str = strdup(index_display_description->valuestring);
    if (symbol_id_exchange && !cJSON_IsNull(symbol_id_exchange)) symbol_id_exchange_local_str = strdup(symbol_id_exchange->valuestring);
    if (asset_id_base_exchange && !cJSON_IsNull(asset_id_base_exchange)) asset_id_base_exchange_local_str = strdup(asset_id_base_exchange->valuestring);
    if (asset_id_quote_exchange && !cJSON_IsNull(asset_id_quote_exchange)) asset_id_quote_exchange_local_str = strdup(asset_id_quote_exchange->valuestring);
    if (option_barrier_up_type && !cJSON_IsNull(option_barrier_up_type)) option_barrier_up_type_local_str = strdup(option_barrier_up_type->valuestring);
    if (option_barrier_down_type && !cJSON_IsNull(option_barrier_down_type)) option_barrier_down_type_local_str = strdup(option_barrier_down_type->valuestring);

    market_data_metadata_symbol_local_var = market_data_metadata_symbol_create_internal (
        symbol_id_local_str,
        exchange_id_local_str,
        symbol_type_local_str,
        asset_id_base_local_str,
        asset_id_quote_local_str,
        asset_id_unit_local_str,
        future_contract_unit_local_var,
        future_contract_unit_asset_local_str,
        future_delivery_time_local_str,
        option_type_is_call_local_var,
        option_strike_price_local_var,
        option_contract_unit_local_var,
        option_exercise_style_local_str,
        option_expiration_time_local_str,
        contract_delivery_time_local_str,
        contract_unit_local_var,
        contract_unit_asset_local_str,
        contract_id_local_str,
        contract_display_name_local_str,
        contract_display_description_local_str,
        data_start_local_str,
        data_end_local_str,
        data_quote_start_local_str,
        data_quote_end_local_str,
        data_orderbook_start_local_str,
        data_orderbook_end_local_str,
        data_trade_start_local_str,
        data_trade_end_local_str,
        index_id_local_str,
        index_display_name_local_str,
        index_display_description_local_str,
        volume_1hrs_local_var,
        volume_1hrs_usd_local_var,
        volume_1day_local_var,
        volume_1day_usd_local_var,
        volume_1mth_local_var,
        volume_1mth_usd_local_var,
        price_local_var,
        symbol_id_exchange_local_str,
        asset_id_base_exchange_local_str,
        asset_id_quote_exchange_local_str,
        price_precision_local_var,
        size_precision_local_var,
        raw_kvp ? raw_kvpList : NULL,
        future_is_inverse_local_var,
        future_is_quanto_local_var,
        volume_to_usd_local_var,
        option_barrier_up_price_local_var,
        option_barrier_up_type_local_str,
        option_barrier_down_price_local_var,
        option_barrier_down_type_local_str,
        symbol_id_int_local_var
        );

    if (!market_data_metadata_symbol_local_var) {
        goto end;
    }

    return market_data_metadata_symbol_local_var;
end:
    if (symbol_id_local_str) {
        free(symbol_id_local_str);
        symbol_id_local_str = NULL;
    }
    if (exchange_id_local_str) {
        free(exchange_id_local_str);
        exchange_id_local_str = NULL;
    }
    if (symbol_type_local_str) {
        free(symbol_type_local_str);
        symbol_type_local_str = NULL;
    }
    if (asset_id_base_local_str) {
        free(asset_id_base_local_str);
        asset_id_base_local_str = NULL;
    }
    if (asset_id_quote_local_str) {
        free(asset_id_quote_local_str);
        asset_id_quote_local_str = NULL;
    }
    if (asset_id_unit_local_str) {
        free(asset_id_unit_local_str);
        asset_id_unit_local_str = NULL;
    }
    if (future_contract_unit_local_var) {
        free(future_contract_unit_local_var);
        future_contract_unit_local_var = NULL;
    }
    if (future_contract_unit_asset_local_str) {
        free(future_contract_unit_asset_local_str);
        future_contract_unit_asset_local_str = NULL;
    }
    if (future_delivery_time_local_str) {
        free(future_delivery_time_local_str);
        future_delivery_time_local_str = NULL;
    }
    if (option_type_is_call_local_var) {
        free(option_type_is_call_local_var);
        option_type_is_call_local_var = NULL;
    }
    if (option_strike_price_local_var) {
        free(option_strike_price_local_var);
        option_strike_price_local_var = NULL;
    }
    if (option_contract_unit_local_var) {
        free(option_contract_unit_local_var);
        option_contract_unit_local_var = NULL;
    }
    if (option_exercise_style_local_str) {
        free(option_exercise_style_local_str);
        option_exercise_style_local_str = NULL;
    }
    if (option_expiration_time_local_str) {
        free(option_expiration_time_local_str);
        option_expiration_time_local_str = NULL;
    }
    if (contract_delivery_time_local_str) {
        free(contract_delivery_time_local_str);
        contract_delivery_time_local_str = NULL;
    }
    if (contract_unit_local_var) {
        free(contract_unit_local_var);
        contract_unit_local_var = NULL;
    }
    if (contract_unit_asset_local_str) {
        free(contract_unit_asset_local_str);
        contract_unit_asset_local_str = NULL;
    }
    if (contract_id_local_str) {
        free(contract_id_local_str);
        contract_id_local_str = NULL;
    }
    if (contract_display_name_local_str) {
        free(contract_display_name_local_str);
        contract_display_name_local_str = NULL;
    }
    if (contract_display_description_local_str) {
        free(contract_display_description_local_str);
        contract_display_description_local_str = NULL;
    }
    if (data_start_local_str) {
        free(data_start_local_str);
        data_start_local_str = NULL;
    }
    if (data_end_local_str) {
        free(data_end_local_str);
        data_end_local_str = NULL;
    }
    if (data_quote_start_local_str) {
        free(data_quote_start_local_str);
        data_quote_start_local_str = NULL;
    }
    if (data_quote_end_local_str) {
        free(data_quote_end_local_str);
        data_quote_end_local_str = NULL;
    }
    if (data_orderbook_start_local_str) {
        free(data_orderbook_start_local_str);
        data_orderbook_start_local_str = NULL;
    }
    if (data_orderbook_end_local_str) {
        free(data_orderbook_end_local_str);
        data_orderbook_end_local_str = NULL;
    }
    if (data_trade_start_local_str) {
        free(data_trade_start_local_str);
        data_trade_start_local_str = NULL;
    }
    if (data_trade_end_local_str) {
        free(data_trade_end_local_str);
        data_trade_end_local_str = NULL;
    }
    if (index_id_local_str) {
        free(index_id_local_str);
        index_id_local_str = NULL;
    }
    if (index_display_name_local_str) {
        free(index_display_name_local_str);
        index_display_name_local_str = NULL;
    }
    if (index_display_description_local_str) {
        free(index_display_description_local_str);
        index_display_description_local_str = NULL;
    }
    if (volume_1hrs_local_var) {
        free(volume_1hrs_local_var);
        volume_1hrs_local_var = NULL;
    }
    if (volume_1hrs_usd_local_var) {
        free(volume_1hrs_usd_local_var);
        volume_1hrs_usd_local_var = NULL;
    }
    if (volume_1day_local_var) {
        free(volume_1day_local_var);
        volume_1day_local_var = NULL;
    }
    if (volume_1day_usd_local_var) {
        free(volume_1day_usd_local_var);
        volume_1day_usd_local_var = NULL;
    }
    if (volume_1mth_local_var) {
        free(volume_1mth_local_var);
        volume_1mth_local_var = NULL;
    }
    if (volume_1mth_usd_local_var) {
        free(volume_1mth_usd_local_var);
        volume_1mth_usd_local_var = NULL;
    }
    if (price_local_var) {
        free(price_local_var);
        price_local_var = NULL;
    }
    if (symbol_id_exchange_local_str) {
        free(symbol_id_exchange_local_str);
        symbol_id_exchange_local_str = NULL;
    }
    if (asset_id_base_exchange_local_str) {
        free(asset_id_base_exchange_local_str);
        asset_id_base_exchange_local_str = NULL;
    }
    if (asset_id_quote_exchange_local_str) {
        free(asset_id_quote_exchange_local_str);
        asset_id_quote_exchange_local_str = NULL;
    }
    if (price_precision_local_var) {
        free(price_precision_local_var);
        price_precision_local_var = NULL;
    }
    if (size_precision_local_var) {
        free(size_precision_local_var);
        size_precision_local_var = NULL;
    }
    if (raw_kvpList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, raw_kvpList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(raw_kvpList);
        raw_kvpList = NULL;
    }
    if (future_is_inverse_local_var) {
        free(future_is_inverse_local_var);
        future_is_inverse_local_var = NULL;
    }
    if (future_is_quanto_local_var) {
        free(future_is_quanto_local_var);
        future_is_quanto_local_var = NULL;
    }
    if (volume_to_usd_local_var) {
        free(volume_to_usd_local_var);
        volume_to_usd_local_var = NULL;
    }
    if (option_barrier_up_price_local_var) {
        free(option_barrier_up_price_local_var);
        option_barrier_up_price_local_var = NULL;
    }
    if (option_barrier_up_type_local_str) {
        free(option_barrier_up_type_local_str);
        option_barrier_up_type_local_str = NULL;
    }
    if (option_barrier_down_price_local_var) {
        free(option_barrier_down_price_local_var);
        option_barrier_down_price_local_var = NULL;
    }
    if (option_barrier_down_type_local_str) {
        free(option_barrier_down_type_local_str);
        option_barrier_down_type_local_str = NULL;
    }
    if (symbol_id_int_local_var) {
        free(symbol_id_int_local_var);
        symbol_id_int_local_var = NULL;
    }
    return NULL;

}
