#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_symbol.h"



static v1_symbol_t *v1_symbol_create_internal(
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
    double *volume_to_usd,
    int *symbol_id_int
    ) {
    v1_symbol_t *v1_symbol_local_var = malloc(sizeof(v1_symbol_t));
    if (!v1_symbol_local_var) {
        return NULL;
    }
    memset(v1_symbol_local_var, 0, sizeof(v1_symbol_t));
    v1_symbol_local_var->_library_owned = 1;
    v1_symbol_local_var->symbol_id = symbol_id;
    v1_symbol_local_var->exchange_id = exchange_id;
    v1_symbol_local_var->symbol_type = symbol_type;
    v1_symbol_local_var->asset_id_base = asset_id_base;
    v1_symbol_local_var->asset_id_quote = asset_id_quote;
    v1_symbol_local_var->asset_id_unit = asset_id_unit;
    v1_symbol_local_var->future_contract_unit = future_contract_unit;
    v1_symbol_local_var->future_contract_unit_asset = future_contract_unit_asset;
    v1_symbol_local_var->future_delivery_time = future_delivery_time;
    v1_symbol_local_var->option_type_is_call = option_type_is_call;
    v1_symbol_local_var->option_strike_price = option_strike_price;
    v1_symbol_local_var->option_contract_unit = option_contract_unit;
    v1_symbol_local_var->option_exercise_style = option_exercise_style;
    v1_symbol_local_var->option_expiration_time = option_expiration_time;
    v1_symbol_local_var->contract_delivery_time = contract_delivery_time;
    v1_symbol_local_var->contract_unit = contract_unit;
    v1_symbol_local_var->contract_unit_asset = contract_unit_asset;
    v1_symbol_local_var->contract_id = contract_id;
    v1_symbol_local_var->contract_display_name = contract_display_name;
    v1_symbol_local_var->contract_display_description = contract_display_description;
    v1_symbol_local_var->data_start = data_start;
    v1_symbol_local_var->data_end = data_end;
    v1_symbol_local_var->data_quote_start = data_quote_start;
    v1_symbol_local_var->data_quote_end = data_quote_end;
    v1_symbol_local_var->data_orderbook_start = data_orderbook_start;
    v1_symbol_local_var->data_orderbook_end = data_orderbook_end;
    v1_symbol_local_var->data_trade_start = data_trade_start;
    v1_symbol_local_var->data_trade_end = data_trade_end;
    v1_symbol_local_var->index_id = index_id;
    v1_symbol_local_var->index_display_name = index_display_name;
    v1_symbol_local_var->index_display_description = index_display_description;
    v1_symbol_local_var->volume_1hrs = volume_1hrs;
    v1_symbol_local_var->volume_1hrs_usd = volume_1hrs_usd;
    v1_symbol_local_var->volume_1day = volume_1day;
    v1_symbol_local_var->volume_1day_usd = volume_1day_usd;
    v1_symbol_local_var->volume_1mth = volume_1mth;
    v1_symbol_local_var->volume_1mth_usd = volume_1mth_usd;
    v1_symbol_local_var->price = price;
    v1_symbol_local_var->symbol_id_exchange = symbol_id_exchange;
    v1_symbol_local_var->asset_id_base_exchange = asset_id_base_exchange;
    v1_symbol_local_var->asset_id_quote_exchange = asset_id_quote_exchange;
    v1_symbol_local_var->price_precision = price_precision;
    v1_symbol_local_var->size_precision = size_precision;
    v1_symbol_local_var->raw_kvp = raw_kvp;
    v1_symbol_local_var->volume_to_usd = volume_to_usd;
    v1_symbol_local_var->symbol_id_int = symbol_id_int;
    return v1_symbol_local_var;
}

__attribute__((deprecated)) v1_symbol_t *v1_symbol_create(
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
    double *volume_to_usd,
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
    double *volume_to_usd_copy = NULL;
    if (volume_to_usd) {
        volume_to_usd_copy = malloc(sizeof(double));
        if (volume_to_usd_copy) *volume_to_usd_copy = *volume_to_usd;
    }
    int *symbol_id_int_copy = NULL;
    if (symbol_id_int) {
        symbol_id_int_copy = malloc(sizeof(int));
        if (symbol_id_int_copy) *symbol_id_int_copy = *symbol_id_int;
    }
    v1_symbol_t *result = v1_symbol_create_internal (
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
        volume_to_usd_copy,
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
        free(volume_to_usd_copy);
        free(symbol_id_int_copy);
    }
    return result;
}

void v1_symbol_free(v1_symbol_t *v1_symbol) {
    if(NULL == v1_symbol){
        return ;
    }
    if(v1_symbol->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "v1_symbol_free");
        return ;
    }
    listEntry_t *listEntry;
    if (v1_symbol->symbol_id) {
        free(v1_symbol->symbol_id);
        v1_symbol->symbol_id = NULL;
    }
    if (v1_symbol->exchange_id) {
        free(v1_symbol->exchange_id);
        v1_symbol->exchange_id = NULL;
    }
    if (v1_symbol->symbol_type) {
        free(v1_symbol->symbol_type);
        v1_symbol->symbol_type = NULL;
    }
    if (v1_symbol->asset_id_base) {
        free(v1_symbol->asset_id_base);
        v1_symbol->asset_id_base = NULL;
    }
    if (v1_symbol->asset_id_quote) {
        free(v1_symbol->asset_id_quote);
        v1_symbol->asset_id_quote = NULL;
    }
    if (v1_symbol->asset_id_unit) {
        free(v1_symbol->asset_id_unit);
        v1_symbol->asset_id_unit = NULL;
    }
    if (v1_symbol->future_contract_unit) {
        free(v1_symbol->future_contract_unit);
        v1_symbol->future_contract_unit = NULL;
    }
    if (v1_symbol->future_contract_unit_asset) {
        free(v1_symbol->future_contract_unit_asset);
        v1_symbol->future_contract_unit_asset = NULL;
    }
    if (v1_symbol->future_delivery_time) {
        free(v1_symbol->future_delivery_time);
        v1_symbol->future_delivery_time = NULL;
    }
    if (v1_symbol->option_type_is_call) {
        free(v1_symbol->option_type_is_call);
        v1_symbol->option_type_is_call = NULL;
    }
    if (v1_symbol->option_strike_price) {
        free(v1_symbol->option_strike_price);
        v1_symbol->option_strike_price = NULL;
    }
    if (v1_symbol->option_contract_unit) {
        free(v1_symbol->option_contract_unit);
        v1_symbol->option_contract_unit = NULL;
    }
    if (v1_symbol->option_exercise_style) {
        free(v1_symbol->option_exercise_style);
        v1_symbol->option_exercise_style = NULL;
    }
    if (v1_symbol->option_expiration_time) {
        free(v1_symbol->option_expiration_time);
        v1_symbol->option_expiration_time = NULL;
    }
    if (v1_symbol->contract_delivery_time) {
        free(v1_symbol->contract_delivery_time);
        v1_symbol->contract_delivery_time = NULL;
    }
    if (v1_symbol->contract_unit) {
        free(v1_symbol->contract_unit);
        v1_symbol->contract_unit = NULL;
    }
    if (v1_symbol->contract_unit_asset) {
        free(v1_symbol->contract_unit_asset);
        v1_symbol->contract_unit_asset = NULL;
    }
    if (v1_symbol->contract_id) {
        free(v1_symbol->contract_id);
        v1_symbol->contract_id = NULL;
    }
    if (v1_symbol->contract_display_name) {
        free(v1_symbol->contract_display_name);
        v1_symbol->contract_display_name = NULL;
    }
    if (v1_symbol->contract_display_description) {
        free(v1_symbol->contract_display_description);
        v1_symbol->contract_display_description = NULL;
    }
    if (v1_symbol->data_start) {
        free(v1_symbol->data_start);
        v1_symbol->data_start = NULL;
    }
    if (v1_symbol->data_end) {
        free(v1_symbol->data_end);
        v1_symbol->data_end = NULL;
    }
    if (v1_symbol->data_quote_start) {
        free(v1_symbol->data_quote_start);
        v1_symbol->data_quote_start = NULL;
    }
    if (v1_symbol->data_quote_end) {
        free(v1_symbol->data_quote_end);
        v1_symbol->data_quote_end = NULL;
    }
    if (v1_symbol->data_orderbook_start) {
        free(v1_symbol->data_orderbook_start);
        v1_symbol->data_orderbook_start = NULL;
    }
    if (v1_symbol->data_orderbook_end) {
        free(v1_symbol->data_orderbook_end);
        v1_symbol->data_orderbook_end = NULL;
    }
    if (v1_symbol->data_trade_start) {
        free(v1_symbol->data_trade_start);
        v1_symbol->data_trade_start = NULL;
    }
    if (v1_symbol->data_trade_end) {
        free(v1_symbol->data_trade_end);
        v1_symbol->data_trade_end = NULL;
    }
    if (v1_symbol->index_id) {
        free(v1_symbol->index_id);
        v1_symbol->index_id = NULL;
    }
    if (v1_symbol->index_display_name) {
        free(v1_symbol->index_display_name);
        v1_symbol->index_display_name = NULL;
    }
    if (v1_symbol->index_display_description) {
        free(v1_symbol->index_display_description);
        v1_symbol->index_display_description = NULL;
    }
    if (v1_symbol->volume_1hrs) {
        free(v1_symbol->volume_1hrs);
        v1_symbol->volume_1hrs = NULL;
    }
    if (v1_symbol->volume_1hrs_usd) {
        free(v1_symbol->volume_1hrs_usd);
        v1_symbol->volume_1hrs_usd = NULL;
    }
    if (v1_symbol->volume_1day) {
        free(v1_symbol->volume_1day);
        v1_symbol->volume_1day = NULL;
    }
    if (v1_symbol->volume_1day_usd) {
        free(v1_symbol->volume_1day_usd);
        v1_symbol->volume_1day_usd = NULL;
    }
    if (v1_symbol->volume_1mth) {
        free(v1_symbol->volume_1mth);
        v1_symbol->volume_1mth = NULL;
    }
    if (v1_symbol->volume_1mth_usd) {
        free(v1_symbol->volume_1mth_usd);
        v1_symbol->volume_1mth_usd = NULL;
    }
    if (v1_symbol->price) {
        free(v1_symbol->price);
        v1_symbol->price = NULL;
    }
    if (v1_symbol->symbol_id_exchange) {
        free(v1_symbol->symbol_id_exchange);
        v1_symbol->symbol_id_exchange = NULL;
    }
    if (v1_symbol->asset_id_base_exchange) {
        free(v1_symbol->asset_id_base_exchange);
        v1_symbol->asset_id_base_exchange = NULL;
    }
    if (v1_symbol->asset_id_quote_exchange) {
        free(v1_symbol->asset_id_quote_exchange);
        v1_symbol->asset_id_quote_exchange = NULL;
    }
    if (v1_symbol->price_precision) {
        free(v1_symbol->price_precision);
        v1_symbol->price_precision = NULL;
    }
    if (v1_symbol->size_precision) {
        free(v1_symbol->size_precision);
        v1_symbol->size_precision = NULL;
    }
    if (v1_symbol->raw_kvp) {
        list_ForEach(listEntry, v1_symbol->raw_kvp) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(v1_symbol->raw_kvp);
        v1_symbol->raw_kvp = NULL;
    }
    if (v1_symbol->volume_to_usd) {
        free(v1_symbol->volume_to_usd);
        v1_symbol->volume_to_usd = NULL;
    }
    if (v1_symbol->symbol_id_int) {
        free(v1_symbol->symbol_id_int);
        v1_symbol->symbol_id_int = NULL;
    }
    free(v1_symbol);
}

cJSON *v1_symbol_convertToJSON(v1_symbol_t *v1_symbol) {
    cJSON *item = cJSON_CreateObject();

    // v1_symbol->symbol_id
    if(v1_symbol->symbol_id) {
    if(cJSON_AddStringToObject(item, "symbol_id", v1_symbol->symbol_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->exchange_id
    if(v1_symbol->exchange_id) {
    if(cJSON_AddStringToObject(item, "exchange_id", v1_symbol->exchange_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->symbol_type
    if(v1_symbol->symbol_type) {
    if(cJSON_AddStringToObject(item, "symbol_type", v1_symbol->symbol_type) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->asset_id_base
    if(v1_symbol->asset_id_base) {
    if(cJSON_AddStringToObject(item, "asset_id_base", v1_symbol->asset_id_base) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->asset_id_quote
    if(v1_symbol->asset_id_quote) {
    if(cJSON_AddStringToObject(item, "asset_id_quote", v1_symbol->asset_id_quote) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->asset_id_unit
    if(v1_symbol->asset_id_unit) {
    if(cJSON_AddStringToObject(item, "asset_id_unit", v1_symbol->asset_id_unit) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->future_contract_unit
    if(v1_symbol->future_contract_unit) {
    if(cJSON_AddNumberToObject(item, "future_contract_unit", *v1_symbol->future_contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->future_contract_unit_asset
    if(v1_symbol->future_contract_unit_asset) {
    if(cJSON_AddStringToObject(item, "future_contract_unit_asset", v1_symbol->future_contract_unit_asset) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->future_delivery_time
    if(v1_symbol->future_delivery_time) {
    if(cJSON_AddStringToObject(item, "future_delivery_time", v1_symbol->future_delivery_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->option_type_is_call
    if(v1_symbol->option_type_is_call) {
    if(cJSON_AddBoolToObject(item, "option_type_is_call", *v1_symbol->option_type_is_call) == NULL) {
    goto fail; //Bool
    }
    }


    // v1_symbol->option_strike_price
    if(v1_symbol->option_strike_price) {
    if(cJSON_AddNumberToObject(item, "option_strike_price", *v1_symbol->option_strike_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->option_contract_unit
    if(v1_symbol->option_contract_unit) {
    if(cJSON_AddNumberToObject(item, "option_contract_unit", *v1_symbol->option_contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->option_exercise_style
    if(v1_symbol->option_exercise_style) {
    if(cJSON_AddStringToObject(item, "option_exercise_style", v1_symbol->option_exercise_style) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->option_expiration_time
    if(v1_symbol->option_expiration_time) {
    if(cJSON_AddStringToObject(item, "option_expiration_time", v1_symbol->option_expiration_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->contract_delivery_time
    if(v1_symbol->contract_delivery_time) {
    if(cJSON_AddStringToObject(item, "contract_delivery_time", v1_symbol->contract_delivery_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->contract_unit
    if(v1_symbol->contract_unit) {
    if(cJSON_AddNumberToObject(item, "contract_unit", *v1_symbol->contract_unit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->contract_unit_asset
    if(v1_symbol->contract_unit_asset) {
    if(cJSON_AddStringToObject(item, "contract_unit_asset", v1_symbol->contract_unit_asset) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->contract_id
    if(v1_symbol->contract_id) {
    if(cJSON_AddStringToObject(item, "contract_id", v1_symbol->contract_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->contract_display_name
    if(v1_symbol->contract_display_name) {
    if(cJSON_AddStringToObject(item, "contract_display_name", v1_symbol->contract_display_name) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->contract_display_description
    if(v1_symbol->contract_display_description) {
    if(cJSON_AddStringToObject(item, "contract_display_description", v1_symbol->contract_display_description) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->data_start
    if(v1_symbol->data_start) {
    if(cJSON_AddStringToObject(item, "data_start", v1_symbol->data_start) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->data_end
    if(v1_symbol->data_end) {
    if(cJSON_AddStringToObject(item, "data_end", v1_symbol->data_end) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->data_quote_start
    if(v1_symbol->data_quote_start) {
    if(cJSON_AddStringToObject(item, "data_quote_start", v1_symbol->data_quote_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->data_quote_end
    if(v1_symbol->data_quote_end) {
    if(cJSON_AddStringToObject(item, "data_quote_end", v1_symbol->data_quote_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->data_orderbook_start
    if(v1_symbol->data_orderbook_start) {
    if(cJSON_AddStringToObject(item, "data_orderbook_start", v1_symbol->data_orderbook_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->data_orderbook_end
    if(v1_symbol->data_orderbook_end) {
    if(cJSON_AddStringToObject(item, "data_orderbook_end", v1_symbol->data_orderbook_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->data_trade_start
    if(v1_symbol->data_trade_start) {
    if(cJSON_AddStringToObject(item, "data_trade_start", v1_symbol->data_trade_start) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->data_trade_end
    if(v1_symbol->data_trade_end) {
    if(cJSON_AddStringToObject(item, "data_trade_end", v1_symbol->data_trade_end) == NULL) {
    goto fail; //Date-Time
    }
    }


    // v1_symbol->index_id
    if(v1_symbol->index_id) {
    if(cJSON_AddStringToObject(item, "index_id", v1_symbol->index_id) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->index_display_name
    if(v1_symbol->index_display_name) {
    if(cJSON_AddStringToObject(item, "index_display_name", v1_symbol->index_display_name) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->index_display_description
    if(v1_symbol->index_display_description) {
    if(cJSON_AddStringToObject(item, "index_display_description", v1_symbol->index_display_description) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->volume_1hrs
    if(v1_symbol->volume_1hrs) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs", *v1_symbol->volume_1hrs) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->volume_1hrs_usd
    if(v1_symbol->volume_1hrs_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1hrs_usd", *v1_symbol->volume_1hrs_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->volume_1day
    if(v1_symbol->volume_1day) {
    if(cJSON_AddNumberToObject(item, "volume_1day", *v1_symbol->volume_1day) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->volume_1day_usd
    if(v1_symbol->volume_1day_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1day_usd", *v1_symbol->volume_1day_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->volume_1mth
    if(v1_symbol->volume_1mth) {
    if(cJSON_AddNumberToObject(item, "volume_1mth", *v1_symbol->volume_1mth) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->volume_1mth_usd
    if(v1_symbol->volume_1mth_usd) {
    if(cJSON_AddNumberToObject(item, "volume_1mth_usd", *v1_symbol->volume_1mth_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->price
    if(v1_symbol->price) {
    if(cJSON_AddNumberToObject(item, "price", *v1_symbol->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->symbol_id_exchange
    if(v1_symbol->symbol_id_exchange) {
    if(cJSON_AddStringToObject(item, "symbol_id_exchange", v1_symbol->symbol_id_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->asset_id_base_exchange
    if(v1_symbol->asset_id_base_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_base_exchange", v1_symbol->asset_id_base_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->asset_id_quote_exchange
    if(v1_symbol->asset_id_quote_exchange) {
    if(cJSON_AddStringToObject(item, "asset_id_quote_exchange", v1_symbol->asset_id_quote_exchange) == NULL) {
    goto fail; //String
    }
    }


    // v1_symbol->price_precision
    if(v1_symbol->price_precision) {
    if(cJSON_AddNumberToObject(item, "price_precision", *v1_symbol->price_precision) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->size_precision
    if(v1_symbol->size_precision) {
    if(cJSON_AddNumberToObject(item, "size_precision", *v1_symbol->size_precision) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->raw_kvp
    if(v1_symbol->raw_kvp) {
    cJSON *raw_kvp = cJSON_AddObjectToObject(item, "raw_kvp");
    if(raw_kvp == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = raw_kvp;
    listEntry_t *raw_kvpListEntry;
    if (v1_symbol->raw_kvp) {
    list_ForEach(raw_kvpListEntry, v1_symbol->raw_kvp) {
        keyValuePair_t *localKeyValue = raw_kvpListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // v1_symbol->volume_to_usd
    if(v1_symbol->volume_to_usd) {
    if(cJSON_AddNumberToObject(item, "volume_to_usd", *v1_symbol->volume_to_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // v1_symbol->symbol_id_int
    if(v1_symbol->symbol_id_int) {
    if(cJSON_AddNumberToObject(item, "symbol_id_int", *v1_symbol->symbol_id_int) == NULL) {
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

v1_symbol_t *v1_symbol_parseFromJSON(cJSON *v1_symbolJSON){

    v1_symbol_t *v1_symbol_local_var = NULL;

    char *symbol_id_local_str = NULL;

    char *exchange_id_local_str = NULL;

    char *symbol_type_local_str = NULL;

    char *asset_id_base_local_str = NULL;

    char *asset_id_quote_local_str = NULL;

    char *asset_id_unit_local_str = NULL;

    // define the local variable for v1_symbol->future_contract_unit
    double *future_contract_unit_local_var = NULL;

    char *future_contract_unit_asset_local_str = NULL;

    char *future_delivery_time_local_str = NULL;

    // define the local variable for v1_symbol->option_type_is_call
    int *option_type_is_call_local_var = NULL;

    // define the local variable for v1_symbol->option_strike_price
    double *option_strike_price_local_var = NULL;

    // define the local variable for v1_symbol->option_contract_unit
    double *option_contract_unit_local_var = NULL;

    char *option_exercise_style_local_str = NULL;

    char *option_expiration_time_local_str = NULL;

    char *contract_delivery_time_local_str = NULL;

    // define the local variable for v1_symbol->contract_unit
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

    // define the local variable for v1_symbol->volume_1hrs
    double *volume_1hrs_local_var = NULL;

    // define the local variable for v1_symbol->volume_1hrs_usd
    double *volume_1hrs_usd_local_var = NULL;

    // define the local variable for v1_symbol->volume_1day
    double *volume_1day_local_var = NULL;

    // define the local variable for v1_symbol->volume_1day_usd
    double *volume_1day_usd_local_var = NULL;

    // define the local variable for v1_symbol->volume_1mth
    double *volume_1mth_local_var = NULL;

    // define the local variable for v1_symbol->volume_1mth_usd
    double *volume_1mth_usd_local_var = NULL;

    // define the local variable for v1_symbol->price
    double *price_local_var = NULL;

    char *symbol_id_exchange_local_str = NULL;

    char *asset_id_base_exchange_local_str = NULL;

    char *asset_id_quote_exchange_local_str = NULL;

    // define the local variable for v1_symbol->price_precision
    double *price_precision_local_var = NULL;

    // define the local variable for v1_symbol->size_precision
    double *size_precision_local_var = NULL;

    // define the local map for v1_symbol->raw_kvp
    list_t *raw_kvpList = NULL;

    // define the local variable for v1_symbol->volume_to_usd
    double *volume_to_usd_local_var = NULL;

    // define the local variable for v1_symbol->symbol_id_int
    int *symbol_id_int_local_var = NULL;

    // v1_symbol->symbol_id
    cJSON *symbol_id = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "symbol_id");
    if (cJSON_IsNull(symbol_id)) {
        symbol_id = NULL;
    }
    if (symbol_id) { 
    if(!cJSON_IsString(symbol_id) && !cJSON_IsNull(symbol_id))
    {
    goto end; //String
    }
    }

    // v1_symbol->exchange_id
    cJSON *exchange_id = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "exchange_id");
    if (cJSON_IsNull(exchange_id)) {
        exchange_id = NULL;
    }
    if (exchange_id) { 
    if(!cJSON_IsString(exchange_id) && !cJSON_IsNull(exchange_id))
    {
    goto end; //String
    }
    }

    // v1_symbol->symbol_type
    cJSON *symbol_type = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "symbol_type");
    if (cJSON_IsNull(symbol_type)) {
        symbol_type = NULL;
    }
    if (symbol_type) { 
    if(!cJSON_IsString(symbol_type) && !cJSON_IsNull(symbol_type))
    {
    goto end; //String
    }
    }

    // v1_symbol->asset_id_base
    cJSON *asset_id_base = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "asset_id_base");
    if (cJSON_IsNull(asset_id_base)) {
        asset_id_base = NULL;
    }
    if (asset_id_base) { 
    if(!cJSON_IsString(asset_id_base) && !cJSON_IsNull(asset_id_base))
    {
    goto end; //String
    }
    }

    // v1_symbol->asset_id_quote
    cJSON *asset_id_quote = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "asset_id_quote");
    if (cJSON_IsNull(asset_id_quote)) {
        asset_id_quote = NULL;
    }
    if (asset_id_quote) { 
    if(!cJSON_IsString(asset_id_quote) && !cJSON_IsNull(asset_id_quote))
    {
    goto end; //String
    }
    }

    // v1_symbol->asset_id_unit
    cJSON *asset_id_unit = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "asset_id_unit");
    if (cJSON_IsNull(asset_id_unit)) {
        asset_id_unit = NULL;
    }
    if (asset_id_unit) { 
    if(!cJSON_IsString(asset_id_unit) && !cJSON_IsNull(asset_id_unit))
    {
    goto end; //String
    }
    }

    // v1_symbol->future_contract_unit
    cJSON *future_contract_unit = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "future_contract_unit");
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

    // v1_symbol->future_contract_unit_asset
    cJSON *future_contract_unit_asset = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "future_contract_unit_asset");
    if (cJSON_IsNull(future_contract_unit_asset)) {
        future_contract_unit_asset = NULL;
    }
    if (future_contract_unit_asset) { 
    if(!cJSON_IsString(future_contract_unit_asset) && !cJSON_IsNull(future_contract_unit_asset))
    {
    goto end; //String
    }
    }

    // v1_symbol->future_delivery_time
    cJSON *future_delivery_time = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "future_delivery_time");
    if (cJSON_IsNull(future_delivery_time)) {
        future_delivery_time = NULL;
    }
    if (future_delivery_time) { 
    if(!cJSON_IsString(future_delivery_time) && !cJSON_IsNull(future_delivery_time))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->option_type_is_call
    cJSON *option_type_is_call = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "option_type_is_call");
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

    // v1_symbol->option_strike_price
    cJSON *option_strike_price = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "option_strike_price");
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

    // v1_symbol->option_contract_unit
    cJSON *option_contract_unit = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "option_contract_unit");
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

    // v1_symbol->option_exercise_style
    cJSON *option_exercise_style = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "option_exercise_style");
    if (cJSON_IsNull(option_exercise_style)) {
        option_exercise_style = NULL;
    }
    if (option_exercise_style) { 
    if(!cJSON_IsString(option_exercise_style) && !cJSON_IsNull(option_exercise_style))
    {
    goto end; //String
    }
    }

    // v1_symbol->option_expiration_time
    cJSON *option_expiration_time = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "option_expiration_time");
    if (cJSON_IsNull(option_expiration_time)) {
        option_expiration_time = NULL;
    }
    if (option_expiration_time) { 
    if(!cJSON_IsString(option_expiration_time) && !cJSON_IsNull(option_expiration_time))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->contract_delivery_time
    cJSON *contract_delivery_time = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_delivery_time");
    if (cJSON_IsNull(contract_delivery_time)) {
        contract_delivery_time = NULL;
    }
    if (contract_delivery_time) { 
    if(!cJSON_IsString(contract_delivery_time) && !cJSON_IsNull(contract_delivery_time))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->contract_unit
    cJSON *contract_unit = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_unit");
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

    // v1_symbol->contract_unit_asset
    cJSON *contract_unit_asset = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_unit_asset");
    if (cJSON_IsNull(contract_unit_asset)) {
        contract_unit_asset = NULL;
    }
    if (contract_unit_asset) { 
    if(!cJSON_IsString(contract_unit_asset) && !cJSON_IsNull(contract_unit_asset))
    {
    goto end; //String
    }
    }

    // v1_symbol->contract_id
    cJSON *contract_id = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_id");
    if (cJSON_IsNull(contract_id)) {
        contract_id = NULL;
    }
    if (contract_id) { 
    if(!cJSON_IsString(contract_id) && !cJSON_IsNull(contract_id))
    {
    goto end; //String
    }
    }

    // v1_symbol->contract_display_name
    cJSON *contract_display_name = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_display_name");
    if (cJSON_IsNull(contract_display_name)) {
        contract_display_name = NULL;
    }
    if (contract_display_name) { 
    if(!cJSON_IsString(contract_display_name) && !cJSON_IsNull(contract_display_name))
    {
    goto end; //String
    }
    }

    // v1_symbol->contract_display_description
    cJSON *contract_display_description = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "contract_display_description");
    if (cJSON_IsNull(contract_display_description)) {
        contract_display_description = NULL;
    }
    if (contract_display_description) { 
    if(!cJSON_IsString(contract_display_description) && !cJSON_IsNull(contract_display_description))
    {
    goto end; //String
    }
    }

    // v1_symbol->data_start
    cJSON *data_start = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_start");
    if (cJSON_IsNull(data_start)) {
        data_start = NULL;
    }
    if (data_start) { 
    if(!cJSON_IsString(data_start) && !cJSON_IsNull(data_start))
    {
    goto end; //String
    }
    }

    // v1_symbol->data_end
    cJSON *data_end = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_end");
    if (cJSON_IsNull(data_end)) {
        data_end = NULL;
    }
    if (data_end) { 
    if(!cJSON_IsString(data_end) && !cJSON_IsNull(data_end))
    {
    goto end; //String
    }
    }

    // v1_symbol->data_quote_start
    cJSON *data_quote_start = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_quote_start");
    if (cJSON_IsNull(data_quote_start)) {
        data_quote_start = NULL;
    }
    if (data_quote_start) { 
    if(!cJSON_IsString(data_quote_start) && !cJSON_IsNull(data_quote_start))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->data_quote_end
    cJSON *data_quote_end = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_quote_end");
    if (cJSON_IsNull(data_quote_end)) {
        data_quote_end = NULL;
    }
    if (data_quote_end) { 
    if(!cJSON_IsString(data_quote_end) && !cJSON_IsNull(data_quote_end))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->data_orderbook_start
    cJSON *data_orderbook_start = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_orderbook_start");
    if (cJSON_IsNull(data_orderbook_start)) {
        data_orderbook_start = NULL;
    }
    if (data_orderbook_start) { 
    if(!cJSON_IsString(data_orderbook_start) && !cJSON_IsNull(data_orderbook_start))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->data_orderbook_end
    cJSON *data_orderbook_end = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_orderbook_end");
    if (cJSON_IsNull(data_orderbook_end)) {
        data_orderbook_end = NULL;
    }
    if (data_orderbook_end) { 
    if(!cJSON_IsString(data_orderbook_end) && !cJSON_IsNull(data_orderbook_end))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->data_trade_start
    cJSON *data_trade_start = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_trade_start");
    if (cJSON_IsNull(data_trade_start)) {
        data_trade_start = NULL;
    }
    if (data_trade_start) { 
    if(!cJSON_IsString(data_trade_start) && !cJSON_IsNull(data_trade_start))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->data_trade_end
    cJSON *data_trade_end = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "data_trade_end");
    if (cJSON_IsNull(data_trade_end)) {
        data_trade_end = NULL;
    }
    if (data_trade_end) { 
    if(!cJSON_IsString(data_trade_end) && !cJSON_IsNull(data_trade_end))
    {
    goto end; //DateTime
    }
    }

    // v1_symbol->index_id
    cJSON *index_id = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "index_id");
    if (cJSON_IsNull(index_id)) {
        index_id = NULL;
    }
    if (index_id) { 
    if(!cJSON_IsString(index_id) && !cJSON_IsNull(index_id))
    {
    goto end; //String
    }
    }

    // v1_symbol->index_display_name
    cJSON *index_display_name = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "index_display_name");
    if (cJSON_IsNull(index_display_name)) {
        index_display_name = NULL;
    }
    if (index_display_name) { 
    if(!cJSON_IsString(index_display_name) && !cJSON_IsNull(index_display_name))
    {
    goto end; //String
    }
    }

    // v1_symbol->index_display_description
    cJSON *index_display_description = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "index_display_description");
    if (cJSON_IsNull(index_display_description)) {
        index_display_description = NULL;
    }
    if (index_display_description) { 
    if(!cJSON_IsString(index_display_description) && !cJSON_IsNull(index_display_description))
    {
    goto end; //String
    }
    }

    // v1_symbol->volume_1hrs
    cJSON *volume_1hrs = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1hrs");
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

    // v1_symbol->volume_1hrs_usd
    cJSON *volume_1hrs_usd = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1hrs_usd");
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

    // v1_symbol->volume_1day
    cJSON *volume_1day = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1day");
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

    // v1_symbol->volume_1day_usd
    cJSON *volume_1day_usd = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1day_usd");
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

    // v1_symbol->volume_1mth
    cJSON *volume_1mth = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1mth");
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

    // v1_symbol->volume_1mth_usd
    cJSON *volume_1mth_usd = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_1mth_usd");
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

    // v1_symbol->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "price");
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

    // v1_symbol->symbol_id_exchange
    cJSON *symbol_id_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "symbol_id_exchange");
    if (cJSON_IsNull(symbol_id_exchange)) {
        symbol_id_exchange = NULL;
    }
    if (symbol_id_exchange) { 
    if(!cJSON_IsString(symbol_id_exchange) && !cJSON_IsNull(symbol_id_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol->asset_id_base_exchange
    cJSON *asset_id_base_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "asset_id_base_exchange");
    if (cJSON_IsNull(asset_id_base_exchange)) {
        asset_id_base_exchange = NULL;
    }
    if (asset_id_base_exchange) { 
    if(!cJSON_IsString(asset_id_base_exchange) && !cJSON_IsNull(asset_id_base_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol->asset_id_quote_exchange
    cJSON *asset_id_quote_exchange = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "asset_id_quote_exchange");
    if (cJSON_IsNull(asset_id_quote_exchange)) {
        asset_id_quote_exchange = NULL;
    }
    if (asset_id_quote_exchange) { 
    if(!cJSON_IsString(asset_id_quote_exchange) && !cJSON_IsNull(asset_id_quote_exchange))
    {
    goto end; //String
    }
    }

    // v1_symbol->price_precision
    cJSON *price_precision = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "price_precision");
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

    // v1_symbol->size_precision
    cJSON *size_precision = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "size_precision");
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

    // v1_symbol->raw_kvp
    cJSON *raw_kvp = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "raw_kvp");
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

    // v1_symbol->volume_to_usd
    cJSON *volume_to_usd = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "volume_to_usd");
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

    // v1_symbol->symbol_id_int
    cJSON *symbol_id_int = cJSON_GetObjectItemCaseSensitive(v1_symbolJSON, "symbol_id_int");
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

    v1_symbol_local_var = v1_symbol_create_internal (
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
        volume_to_usd_local_var,
        symbol_id_int_local_var
        );

    if (!v1_symbol_local_var) {
        goto end;
    }

    return v1_symbol_local_var;
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
    if (volume_to_usd_local_var) {
        free(volume_to_usd_local_var);
        volume_to_usd_local_var = NULL;
    }
    if (symbol_id_int_local_var) {
        free(symbol_id_int_local_var);
        symbol_id_int_local_var = NULL;
    }
    return NULL;

}
