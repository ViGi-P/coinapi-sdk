#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_auction_information_model.h"



static models_auction_information_model_t *models_auction_information_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *auction_type,
    char *auction_type_code,
    char *auction_type_text,
    int *is_auction_type_opening,
    int *is_auction_type_closing,
    int *is_auction_type_ipo,
    int *is_auction_type_halt,
    int *is_auction_type_volatility,
    int *paired_shares,
    double *reference_price,
    double *indicative_clearing_price,
    int *imbalance_shares,
    int *imbalance_side,
    char *imbalance_side_code,
    char *imbalance_side_text,
    int *is_imbalance_side_buy,
    int *is_imbalance_side_sell,
    int *is_imbalance_side_none,
    int *extension_number,
    int *scheduled_auction_time_seconds,
    char *scheduled_auction_time,
    double *auction_book_clearing_price,
    double *collar_reference_price,
    double *lower_auction_collar,
    double *upper_auction_collar
    ) {
    models_auction_information_model_t *models_auction_information_model_local_var = malloc(sizeof(models_auction_information_model_t));
    if (!models_auction_information_model_local_var) {
        return NULL;
    }
    memset(models_auction_information_model_local_var, 0, sizeof(models_auction_information_model_t));
    models_auction_information_model_local_var->_library_owned = 1;
    models_auction_information_model_local_var->symbol = symbol;
    models_auction_information_model_local_var->timestamp_nanos = timestamp_nanos;
    models_auction_information_model_local_var->timestamp = timestamp;
    models_auction_information_model_local_var->auction_type = auction_type;
    models_auction_information_model_local_var->auction_type_code = auction_type_code;
    models_auction_information_model_local_var->auction_type_text = auction_type_text;
    models_auction_information_model_local_var->is_auction_type_opening = is_auction_type_opening;
    models_auction_information_model_local_var->is_auction_type_closing = is_auction_type_closing;
    models_auction_information_model_local_var->is_auction_type_ipo = is_auction_type_ipo;
    models_auction_information_model_local_var->is_auction_type_halt = is_auction_type_halt;
    models_auction_information_model_local_var->is_auction_type_volatility = is_auction_type_volatility;
    models_auction_information_model_local_var->paired_shares = paired_shares;
    models_auction_information_model_local_var->reference_price = reference_price;
    models_auction_information_model_local_var->indicative_clearing_price = indicative_clearing_price;
    models_auction_information_model_local_var->imbalance_shares = imbalance_shares;
    models_auction_information_model_local_var->imbalance_side = imbalance_side;
    models_auction_information_model_local_var->imbalance_side_code = imbalance_side_code;
    models_auction_information_model_local_var->imbalance_side_text = imbalance_side_text;
    models_auction_information_model_local_var->is_imbalance_side_buy = is_imbalance_side_buy;
    models_auction_information_model_local_var->is_imbalance_side_sell = is_imbalance_side_sell;
    models_auction_information_model_local_var->is_imbalance_side_none = is_imbalance_side_none;
    models_auction_information_model_local_var->extension_number = extension_number;
    models_auction_information_model_local_var->scheduled_auction_time_seconds = scheduled_auction_time_seconds;
    models_auction_information_model_local_var->scheduled_auction_time = scheduled_auction_time;
    models_auction_information_model_local_var->auction_book_clearing_price = auction_book_clearing_price;
    models_auction_information_model_local_var->collar_reference_price = collar_reference_price;
    models_auction_information_model_local_var->lower_auction_collar = lower_auction_collar;
    models_auction_information_model_local_var->upper_auction_collar = upper_auction_collar;
    return models_auction_information_model_local_var;
}

__attribute__((deprecated)) models_auction_information_model_t *models_auction_information_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *auction_type,
    char *auction_type_code,
    char *auction_type_text,
    int *is_auction_type_opening,
    int *is_auction_type_closing,
    int *is_auction_type_ipo,
    int *is_auction_type_halt,
    int *is_auction_type_volatility,
    int *paired_shares,
    double *reference_price,
    double *indicative_clearing_price,
    int *imbalance_shares,
    int *imbalance_side,
    char *imbalance_side_code,
    char *imbalance_side_text,
    int *is_imbalance_side_buy,
    int *is_imbalance_side_sell,
    int *is_imbalance_side_none,
    int *extension_number,
    int *scheduled_auction_time_seconds,
    char *scheduled_auction_time,
    double *auction_book_clearing_price,
    double *collar_reference_price,
    double *lower_auction_collar,
    double *upper_auction_collar
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *auction_type_copy = NULL;
    if (auction_type) {
        auction_type_copy = malloc(sizeof(int));
        if (auction_type_copy) *auction_type_copy = *auction_type;
    }
    int *is_auction_type_opening_copy = NULL;
    if (is_auction_type_opening) {
        is_auction_type_opening_copy = malloc(sizeof(int));
        if (is_auction_type_opening_copy) *is_auction_type_opening_copy = *is_auction_type_opening;
    }
    int *is_auction_type_closing_copy = NULL;
    if (is_auction_type_closing) {
        is_auction_type_closing_copy = malloc(sizeof(int));
        if (is_auction_type_closing_copy) *is_auction_type_closing_copy = *is_auction_type_closing;
    }
    int *is_auction_type_ipo_copy = NULL;
    if (is_auction_type_ipo) {
        is_auction_type_ipo_copy = malloc(sizeof(int));
        if (is_auction_type_ipo_copy) *is_auction_type_ipo_copy = *is_auction_type_ipo;
    }
    int *is_auction_type_halt_copy = NULL;
    if (is_auction_type_halt) {
        is_auction_type_halt_copy = malloc(sizeof(int));
        if (is_auction_type_halt_copy) *is_auction_type_halt_copy = *is_auction_type_halt;
    }
    int *is_auction_type_volatility_copy = NULL;
    if (is_auction_type_volatility) {
        is_auction_type_volatility_copy = malloc(sizeof(int));
        if (is_auction_type_volatility_copy) *is_auction_type_volatility_copy = *is_auction_type_volatility;
    }
    int *paired_shares_copy = NULL;
    if (paired_shares) {
        paired_shares_copy = malloc(sizeof(int));
        if (paired_shares_copy) *paired_shares_copy = *paired_shares;
    }
    double *reference_price_copy = NULL;
    if (reference_price) {
        reference_price_copy = malloc(sizeof(double));
        if (reference_price_copy) *reference_price_copy = *reference_price;
    }
    double *indicative_clearing_price_copy = NULL;
    if (indicative_clearing_price) {
        indicative_clearing_price_copy = malloc(sizeof(double));
        if (indicative_clearing_price_copy) *indicative_clearing_price_copy = *indicative_clearing_price;
    }
    int *imbalance_shares_copy = NULL;
    if (imbalance_shares) {
        imbalance_shares_copy = malloc(sizeof(int));
        if (imbalance_shares_copy) *imbalance_shares_copy = *imbalance_shares;
    }
    int *imbalance_side_copy = NULL;
    if (imbalance_side) {
        imbalance_side_copy = malloc(sizeof(int));
        if (imbalance_side_copy) *imbalance_side_copy = *imbalance_side;
    }
    int *is_imbalance_side_buy_copy = NULL;
    if (is_imbalance_side_buy) {
        is_imbalance_side_buy_copy = malloc(sizeof(int));
        if (is_imbalance_side_buy_copy) *is_imbalance_side_buy_copy = *is_imbalance_side_buy;
    }
    int *is_imbalance_side_sell_copy = NULL;
    if (is_imbalance_side_sell) {
        is_imbalance_side_sell_copy = malloc(sizeof(int));
        if (is_imbalance_side_sell_copy) *is_imbalance_side_sell_copy = *is_imbalance_side_sell;
    }
    int *is_imbalance_side_none_copy = NULL;
    if (is_imbalance_side_none) {
        is_imbalance_side_none_copy = malloc(sizeof(int));
        if (is_imbalance_side_none_copy) *is_imbalance_side_none_copy = *is_imbalance_side_none;
    }
    int *extension_number_copy = NULL;
    if (extension_number) {
        extension_number_copy = malloc(sizeof(int));
        if (extension_number_copy) *extension_number_copy = *extension_number;
    }
    int *scheduled_auction_time_seconds_copy = NULL;
    if (scheduled_auction_time_seconds) {
        scheduled_auction_time_seconds_copy = malloc(sizeof(int));
        if (scheduled_auction_time_seconds_copy) *scheduled_auction_time_seconds_copy = *scheduled_auction_time_seconds;
    }
    double *auction_book_clearing_price_copy = NULL;
    if (auction_book_clearing_price) {
        auction_book_clearing_price_copy = malloc(sizeof(double));
        if (auction_book_clearing_price_copy) *auction_book_clearing_price_copy = *auction_book_clearing_price;
    }
    double *collar_reference_price_copy = NULL;
    if (collar_reference_price) {
        collar_reference_price_copy = malloc(sizeof(double));
        if (collar_reference_price_copy) *collar_reference_price_copy = *collar_reference_price;
    }
    double *lower_auction_collar_copy = NULL;
    if (lower_auction_collar) {
        lower_auction_collar_copy = malloc(sizeof(double));
        if (lower_auction_collar_copy) *lower_auction_collar_copy = *lower_auction_collar;
    }
    double *upper_auction_collar_copy = NULL;
    if (upper_auction_collar) {
        upper_auction_collar_copy = malloc(sizeof(double));
        if (upper_auction_collar_copy) *upper_auction_collar_copy = *upper_auction_collar;
    }
    models_auction_information_model_t *result = models_auction_information_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        auction_type_copy,
        auction_type_code,
        auction_type_text,
        is_auction_type_opening_copy,
        is_auction_type_closing_copy,
        is_auction_type_ipo_copy,
        is_auction_type_halt_copy,
        is_auction_type_volatility_copy,
        paired_shares_copy,
        reference_price_copy,
        indicative_clearing_price_copy,
        imbalance_shares_copy,
        imbalance_side_copy,
        imbalance_side_code,
        imbalance_side_text,
        is_imbalance_side_buy_copy,
        is_imbalance_side_sell_copy,
        is_imbalance_side_none_copy,
        extension_number_copy,
        scheduled_auction_time_seconds_copy,
        scheduled_auction_time,
        auction_book_clearing_price_copy,
        collar_reference_price_copy,
        lower_auction_collar_copy,
        upper_auction_collar_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(auction_type_copy);
        free(is_auction_type_opening_copy);
        free(is_auction_type_closing_copy);
        free(is_auction_type_ipo_copy);
        free(is_auction_type_halt_copy);
        free(is_auction_type_volatility_copy);
        free(paired_shares_copy);
        free(reference_price_copy);
        free(indicative_clearing_price_copy);
        free(imbalance_shares_copy);
        free(imbalance_side_copy);
        free(is_imbalance_side_buy_copy);
        free(is_imbalance_side_sell_copy);
        free(is_imbalance_side_none_copy);
        free(extension_number_copy);
        free(scheduled_auction_time_seconds_copy);
        free(auction_book_clearing_price_copy);
        free(collar_reference_price_copy);
        free(lower_auction_collar_copy);
        free(upper_auction_collar_copy);
    }
    return result;
}

void models_auction_information_model_free(models_auction_information_model_t *models_auction_information_model) {
    if(NULL == models_auction_information_model){
        return ;
    }
    if(models_auction_information_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_auction_information_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_auction_information_model->symbol) {
        free(models_auction_information_model->symbol);
        models_auction_information_model->symbol = NULL;
    }
    if (models_auction_information_model->timestamp_nanos) {
        free(models_auction_information_model->timestamp_nanos);
        models_auction_information_model->timestamp_nanos = NULL;
    }
    if (models_auction_information_model->timestamp) {
        free(models_auction_information_model->timestamp);
        models_auction_information_model->timestamp = NULL;
    }
    if (models_auction_information_model->auction_type) {
        free(models_auction_information_model->auction_type);
        models_auction_information_model->auction_type = NULL;
    }
    if (models_auction_information_model->auction_type_code) {
        free(models_auction_information_model->auction_type_code);
        models_auction_information_model->auction_type_code = NULL;
    }
    if (models_auction_information_model->auction_type_text) {
        free(models_auction_information_model->auction_type_text);
        models_auction_information_model->auction_type_text = NULL;
    }
    if (models_auction_information_model->is_auction_type_opening) {
        free(models_auction_information_model->is_auction_type_opening);
        models_auction_information_model->is_auction_type_opening = NULL;
    }
    if (models_auction_information_model->is_auction_type_closing) {
        free(models_auction_information_model->is_auction_type_closing);
        models_auction_information_model->is_auction_type_closing = NULL;
    }
    if (models_auction_information_model->is_auction_type_ipo) {
        free(models_auction_information_model->is_auction_type_ipo);
        models_auction_information_model->is_auction_type_ipo = NULL;
    }
    if (models_auction_information_model->is_auction_type_halt) {
        free(models_auction_information_model->is_auction_type_halt);
        models_auction_information_model->is_auction_type_halt = NULL;
    }
    if (models_auction_information_model->is_auction_type_volatility) {
        free(models_auction_information_model->is_auction_type_volatility);
        models_auction_information_model->is_auction_type_volatility = NULL;
    }
    if (models_auction_information_model->paired_shares) {
        free(models_auction_information_model->paired_shares);
        models_auction_information_model->paired_shares = NULL;
    }
    if (models_auction_information_model->reference_price) {
        free(models_auction_information_model->reference_price);
        models_auction_information_model->reference_price = NULL;
    }
    if (models_auction_information_model->indicative_clearing_price) {
        free(models_auction_information_model->indicative_clearing_price);
        models_auction_information_model->indicative_clearing_price = NULL;
    }
    if (models_auction_information_model->imbalance_shares) {
        free(models_auction_information_model->imbalance_shares);
        models_auction_information_model->imbalance_shares = NULL;
    }
    if (models_auction_information_model->imbalance_side) {
        free(models_auction_information_model->imbalance_side);
        models_auction_information_model->imbalance_side = NULL;
    }
    if (models_auction_information_model->imbalance_side_code) {
        free(models_auction_information_model->imbalance_side_code);
        models_auction_information_model->imbalance_side_code = NULL;
    }
    if (models_auction_information_model->imbalance_side_text) {
        free(models_auction_information_model->imbalance_side_text);
        models_auction_information_model->imbalance_side_text = NULL;
    }
    if (models_auction_information_model->is_imbalance_side_buy) {
        free(models_auction_information_model->is_imbalance_side_buy);
        models_auction_information_model->is_imbalance_side_buy = NULL;
    }
    if (models_auction_information_model->is_imbalance_side_sell) {
        free(models_auction_information_model->is_imbalance_side_sell);
        models_auction_information_model->is_imbalance_side_sell = NULL;
    }
    if (models_auction_information_model->is_imbalance_side_none) {
        free(models_auction_information_model->is_imbalance_side_none);
        models_auction_information_model->is_imbalance_side_none = NULL;
    }
    if (models_auction_information_model->extension_number) {
        free(models_auction_information_model->extension_number);
        models_auction_information_model->extension_number = NULL;
    }
    if (models_auction_information_model->scheduled_auction_time_seconds) {
        free(models_auction_information_model->scheduled_auction_time_seconds);
        models_auction_information_model->scheduled_auction_time_seconds = NULL;
    }
    if (models_auction_information_model->scheduled_auction_time) {
        free(models_auction_information_model->scheduled_auction_time);
        models_auction_information_model->scheduled_auction_time = NULL;
    }
    if (models_auction_information_model->auction_book_clearing_price) {
        free(models_auction_information_model->auction_book_clearing_price);
        models_auction_information_model->auction_book_clearing_price = NULL;
    }
    if (models_auction_information_model->collar_reference_price) {
        free(models_auction_information_model->collar_reference_price);
        models_auction_information_model->collar_reference_price = NULL;
    }
    if (models_auction_information_model->lower_auction_collar) {
        free(models_auction_information_model->lower_auction_collar);
        models_auction_information_model->lower_auction_collar = NULL;
    }
    if (models_auction_information_model->upper_auction_collar) {
        free(models_auction_information_model->upper_auction_collar);
        models_auction_information_model->upper_auction_collar = NULL;
    }
    free(models_auction_information_model);
}

cJSON *models_auction_information_model_convertToJSON(models_auction_information_model_t *models_auction_information_model) {
    cJSON *item = cJSON_CreateObject();

    // models_auction_information_model->symbol
    if(models_auction_information_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_auction_information_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_auction_information_model->timestamp_nanos
    if(models_auction_information_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_auction_information_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->timestamp
    if(models_auction_information_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_auction_information_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_auction_information_model->auction_type
    if(models_auction_information_model->auction_type) {
    if(cJSON_AddNumberToObject(item, "auction_type", *models_auction_information_model->auction_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->auction_type_code
    if(models_auction_information_model->auction_type_code) {
    if(cJSON_AddStringToObject(item, "auction_type_code", models_auction_information_model->auction_type_code) == NULL) {
    goto fail; //String
    }
    }


    // models_auction_information_model->auction_type_text
    if(models_auction_information_model->auction_type_text) {
    if(cJSON_AddStringToObject(item, "auction_type_text", models_auction_information_model->auction_type_text) == NULL) {
    goto fail; //String
    }
    }


    // models_auction_information_model->is_auction_type_opening
    if(models_auction_information_model->is_auction_type_opening) {
    if(cJSON_AddBoolToObject(item, "is_auction_type_opening", *models_auction_information_model->is_auction_type_opening) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_auction_type_closing
    if(models_auction_information_model->is_auction_type_closing) {
    if(cJSON_AddBoolToObject(item, "is_auction_type_closing", *models_auction_information_model->is_auction_type_closing) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_auction_type_ipo
    if(models_auction_information_model->is_auction_type_ipo) {
    if(cJSON_AddBoolToObject(item, "is_auction_type_ipo", *models_auction_information_model->is_auction_type_ipo) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_auction_type_halt
    if(models_auction_information_model->is_auction_type_halt) {
    if(cJSON_AddBoolToObject(item, "is_auction_type_halt", *models_auction_information_model->is_auction_type_halt) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_auction_type_volatility
    if(models_auction_information_model->is_auction_type_volatility) {
    if(cJSON_AddBoolToObject(item, "is_auction_type_volatility", *models_auction_information_model->is_auction_type_volatility) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->paired_shares
    if(models_auction_information_model->paired_shares) {
    if(cJSON_AddNumberToObject(item, "paired_shares", *models_auction_information_model->paired_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->reference_price
    if(models_auction_information_model->reference_price) {
    if(cJSON_AddNumberToObject(item, "reference_price", *models_auction_information_model->reference_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->indicative_clearing_price
    if(models_auction_information_model->indicative_clearing_price) {
    if(cJSON_AddNumberToObject(item, "indicative_clearing_price", *models_auction_information_model->indicative_clearing_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->imbalance_shares
    if(models_auction_information_model->imbalance_shares) {
    if(cJSON_AddNumberToObject(item, "imbalance_shares", *models_auction_information_model->imbalance_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->imbalance_side
    if(models_auction_information_model->imbalance_side) {
    if(cJSON_AddNumberToObject(item, "imbalance_side", *models_auction_information_model->imbalance_side) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->imbalance_side_code
    if(models_auction_information_model->imbalance_side_code) {
    if(cJSON_AddStringToObject(item, "imbalance_side_code", models_auction_information_model->imbalance_side_code) == NULL) {
    goto fail; //String
    }
    }


    // models_auction_information_model->imbalance_side_text
    if(models_auction_information_model->imbalance_side_text) {
    if(cJSON_AddStringToObject(item, "imbalance_side_text", models_auction_information_model->imbalance_side_text) == NULL) {
    goto fail; //String
    }
    }


    // models_auction_information_model->is_imbalance_side_buy
    if(models_auction_information_model->is_imbalance_side_buy) {
    if(cJSON_AddBoolToObject(item, "is_imbalance_side_buy", *models_auction_information_model->is_imbalance_side_buy) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_imbalance_side_sell
    if(models_auction_information_model->is_imbalance_side_sell) {
    if(cJSON_AddBoolToObject(item, "is_imbalance_side_sell", *models_auction_information_model->is_imbalance_side_sell) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->is_imbalance_side_none
    if(models_auction_information_model->is_imbalance_side_none) {
    if(cJSON_AddBoolToObject(item, "is_imbalance_side_none", *models_auction_information_model->is_imbalance_side_none) == NULL) {
    goto fail; //Bool
    }
    }


    // models_auction_information_model->extension_number
    if(models_auction_information_model->extension_number) {
    if(cJSON_AddNumberToObject(item, "extension_number", *models_auction_information_model->extension_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->scheduled_auction_time_seconds
    if(models_auction_information_model->scheduled_auction_time_seconds) {
    if(cJSON_AddNumberToObject(item, "scheduled_auction_time_seconds", *models_auction_information_model->scheduled_auction_time_seconds) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->scheduled_auction_time
    if(models_auction_information_model->scheduled_auction_time) {
    if(cJSON_AddStringToObject(item, "scheduled_auction_time", models_auction_information_model->scheduled_auction_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_auction_information_model->auction_book_clearing_price
    if(models_auction_information_model->auction_book_clearing_price) {
    if(cJSON_AddNumberToObject(item, "auction_book_clearing_price", *models_auction_information_model->auction_book_clearing_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->collar_reference_price
    if(models_auction_information_model->collar_reference_price) {
    if(cJSON_AddNumberToObject(item, "collar_reference_price", *models_auction_information_model->collar_reference_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->lower_auction_collar
    if(models_auction_information_model->lower_auction_collar) {
    if(cJSON_AddNumberToObject(item, "lower_auction_collar", *models_auction_information_model->lower_auction_collar) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_auction_information_model->upper_auction_collar
    if(models_auction_information_model->upper_auction_collar) {
    if(cJSON_AddNumberToObject(item, "upper_auction_collar", *models_auction_information_model->upper_auction_collar) == NULL) {
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

models_auction_information_model_t *models_auction_information_model_parseFromJSON(cJSON *models_auction_information_modelJSON){

    models_auction_information_model_t *models_auction_information_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_auction_information_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_auction_information_model->auction_type
    int *auction_type_local_var = NULL;

    char *auction_type_code_local_str = NULL;

    char *auction_type_text_local_str = NULL;

    // define the local variable for models_auction_information_model->is_auction_type_opening
    int *is_auction_type_opening_local_var = NULL;

    // define the local variable for models_auction_information_model->is_auction_type_closing
    int *is_auction_type_closing_local_var = NULL;

    // define the local variable for models_auction_information_model->is_auction_type_ipo
    int *is_auction_type_ipo_local_var = NULL;

    // define the local variable for models_auction_information_model->is_auction_type_halt
    int *is_auction_type_halt_local_var = NULL;

    // define the local variable for models_auction_information_model->is_auction_type_volatility
    int *is_auction_type_volatility_local_var = NULL;

    // define the local variable for models_auction_information_model->paired_shares
    int *paired_shares_local_var = NULL;

    // define the local variable for models_auction_information_model->reference_price
    double *reference_price_local_var = NULL;

    // define the local variable for models_auction_information_model->indicative_clearing_price
    double *indicative_clearing_price_local_var = NULL;

    // define the local variable for models_auction_information_model->imbalance_shares
    int *imbalance_shares_local_var = NULL;

    // define the local variable for models_auction_information_model->imbalance_side
    int *imbalance_side_local_var = NULL;

    char *imbalance_side_code_local_str = NULL;

    char *imbalance_side_text_local_str = NULL;

    // define the local variable for models_auction_information_model->is_imbalance_side_buy
    int *is_imbalance_side_buy_local_var = NULL;

    // define the local variable for models_auction_information_model->is_imbalance_side_sell
    int *is_imbalance_side_sell_local_var = NULL;

    // define the local variable for models_auction_information_model->is_imbalance_side_none
    int *is_imbalance_side_none_local_var = NULL;

    // define the local variable for models_auction_information_model->extension_number
    int *extension_number_local_var = NULL;

    // define the local variable for models_auction_information_model->scheduled_auction_time_seconds
    int *scheduled_auction_time_seconds_local_var = NULL;

    char *scheduled_auction_time_local_str = NULL;

    // define the local variable for models_auction_information_model->auction_book_clearing_price
    double *auction_book_clearing_price_local_var = NULL;

    // define the local variable for models_auction_information_model->collar_reference_price
    double *collar_reference_price_local_var = NULL;

    // define the local variable for models_auction_information_model->lower_auction_collar
    double *lower_auction_collar_local_var = NULL;

    // define the local variable for models_auction_information_model->upper_auction_collar
    double *upper_auction_collar_local_var = NULL;

    // models_auction_information_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_auction_information_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "timestamp_nanos");
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

    // models_auction_information_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_auction_information_model->auction_type
    cJSON *auction_type = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "auction_type");
    if (cJSON_IsNull(auction_type)) {
        auction_type = NULL;
    }
    if (auction_type) { 
    if(!cJSON_IsNumber(auction_type))
    {
    goto end; //Numeric
    }
    auction_type_local_var = malloc(sizeof(int));
    if(!auction_type_local_var)
    {
        goto end;
    }
    *auction_type_local_var = auction_type->valuedouble;
    }

    // models_auction_information_model->auction_type_code
    cJSON *auction_type_code = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "auction_type_code");
    if (cJSON_IsNull(auction_type_code)) {
        auction_type_code = NULL;
    }
    if (auction_type_code) { 
    if(!cJSON_IsString(auction_type_code) && !cJSON_IsNull(auction_type_code))
    {
    goto end; //String
    }
    }

    // models_auction_information_model->auction_type_text
    cJSON *auction_type_text = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "auction_type_text");
    if (cJSON_IsNull(auction_type_text)) {
        auction_type_text = NULL;
    }
    if (auction_type_text) { 
    if(!cJSON_IsString(auction_type_text) && !cJSON_IsNull(auction_type_text))
    {
    goto end; //String
    }
    }

    // models_auction_information_model->is_auction_type_opening
    cJSON *is_auction_type_opening = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_auction_type_opening");
    if (cJSON_IsNull(is_auction_type_opening)) {
        is_auction_type_opening = NULL;
    }
    if (is_auction_type_opening) { 
    if(!cJSON_IsBool(is_auction_type_opening))
    {
    goto end; //Bool
    }
    is_auction_type_opening_local_var = malloc(sizeof(int));
    if(!is_auction_type_opening_local_var)
    {
        goto end;
    }
    *is_auction_type_opening_local_var = is_auction_type_opening->valueint;
    }

    // models_auction_information_model->is_auction_type_closing
    cJSON *is_auction_type_closing = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_auction_type_closing");
    if (cJSON_IsNull(is_auction_type_closing)) {
        is_auction_type_closing = NULL;
    }
    if (is_auction_type_closing) { 
    if(!cJSON_IsBool(is_auction_type_closing))
    {
    goto end; //Bool
    }
    is_auction_type_closing_local_var = malloc(sizeof(int));
    if(!is_auction_type_closing_local_var)
    {
        goto end;
    }
    *is_auction_type_closing_local_var = is_auction_type_closing->valueint;
    }

    // models_auction_information_model->is_auction_type_ipo
    cJSON *is_auction_type_ipo = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_auction_type_ipo");
    if (cJSON_IsNull(is_auction_type_ipo)) {
        is_auction_type_ipo = NULL;
    }
    if (is_auction_type_ipo) { 
    if(!cJSON_IsBool(is_auction_type_ipo))
    {
    goto end; //Bool
    }
    is_auction_type_ipo_local_var = malloc(sizeof(int));
    if(!is_auction_type_ipo_local_var)
    {
        goto end;
    }
    *is_auction_type_ipo_local_var = is_auction_type_ipo->valueint;
    }

    // models_auction_information_model->is_auction_type_halt
    cJSON *is_auction_type_halt = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_auction_type_halt");
    if (cJSON_IsNull(is_auction_type_halt)) {
        is_auction_type_halt = NULL;
    }
    if (is_auction_type_halt) { 
    if(!cJSON_IsBool(is_auction_type_halt))
    {
    goto end; //Bool
    }
    is_auction_type_halt_local_var = malloc(sizeof(int));
    if(!is_auction_type_halt_local_var)
    {
        goto end;
    }
    *is_auction_type_halt_local_var = is_auction_type_halt->valueint;
    }

    // models_auction_information_model->is_auction_type_volatility
    cJSON *is_auction_type_volatility = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_auction_type_volatility");
    if (cJSON_IsNull(is_auction_type_volatility)) {
        is_auction_type_volatility = NULL;
    }
    if (is_auction_type_volatility) { 
    if(!cJSON_IsBool(is_auction_type_volatility))
    {
    goto end; //Bool
    }
    is_auction_type_volatility_local_var = malloc(sizeof(int));
    if(!is_auction_type_volatility_local_var)
    {
        goto end;
    }
    *is_auction_type_volatility_local_var = is_auction_type_volatility->valueint;
    }

    // models_auction_information_model->paired_shares
    cJSON *paired_shares = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "paired_shares");
    if (cJSON_IsNull(paired_shares)) {
        paired_shares = NULL;
    }
    if (paired_shares) { 
    if(!cJSON_IsNumber(paired_shares))
    {
    goto end; //Numeric
    }
    paired_shares_local_var = malloc(sizeof(int));
    if(!paired_shares_local_var)
    {
        goto end;
    }
    *paired_shares_local_var = paired_shares->valuedouble;
    }

    // models_auction_information_model->reference_price
    cJSON *reference_price = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "reference_price");
    if (cJSON_IsNull(reference_price)) {
        reference_price = NULL;
    }
    if (reference_price) { 
    if(!cJSON_IsNumber(reference_price))
    {
    goto end; //Numeric
    }
    reference_price_local_var = malloc(sizeof(double));
    if(!reference_price_local_var)
    {
        goto end;
    }
    *reference_price_local_var = reference_price->valuedouble;
    }

    // models_auction_information_model->indicative_clearing_price
    cJSON *indicative_clearing_price = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "indicative_clearing_price");
    if (cJSON_IsNull(indicative_clearing_price)) {
        indicative_clearing_price = NULL;
    }
    if (indicative_clearing_price) { 
    if(!cJSON_IsNumber(indicative_clearing_price))
    {
    goto end; //Numeric
    }
    indicative_clearing_price_local_var = malloc(sizeof(double));
    if(!indicative_clearing_price_local_var)
    {
        goto end;
    }
    *indicative_clearing_price_local_var = indicative_clearing_price->valuedouble;
    }

    // models_auction_information_model->imbalance_shares
    cJSON *imbalance_shares = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "imbalance_shares");
    if (cJSON_IsNull(imbalance_shares)) {
        imbalance_shares = NULL;
    }
    if (imbalance_shares) { 
    if(!cJSON_IsNumber(imbalance_shares))
    {
    goto end; //Numeric
    }
    imbalance_shares_local_var = malloc(sizeof(int));
    if(!imbalance_shares_local_var)
    {
        goto end;
    }
    *imbalance_shares_local_var = imbalance_shares->valuedouble;
    }

    // models_auction_information_model->imbalance_side
    cJSON *imbalance_side = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "imbalance_side");
    if (cJSON_IsNull(imbalance_side)) {
        imbalance_side = NULL;
    }
    if (imbalance_side) { 
    if(!cJSON_IsNumber(imbalance_side))
    {
    goto end; //Numeric
    }
    imbalance_side_local_var = malloc(sizeof(int));
    if(!imbalance_side_local_var)
    {
        goto end;
    }
    *imbalance_side_local_var = imbalance_side->valuedouble;
    }

    // models_auction_information_model->imbalance_side_code
    cJSON *imbalance_side_code = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "imbalance_side_code");
    if (cJSON_IsNull(imbalance_side_code)) {
        imbalance_side_code = NULL;
    }
    if (imbalance_side_code) { 
    if(!cJSON_IsString(imbalance_side_code) && !cJSON_IsNull(imbalance_side_code))
    {
    goto end; //String
    }
    }

    // models_auction_information_model->imbalance_side_text
    cJSON *imbalance_side_text = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "imbalance_side_text");
    if (cJSON_IsNull(imbalance_side_text)) {
        imbalance_side_text = NULL;
    }
    if (imbalance_side_text) { 
    if(!cJSON_IsString(imbalance_side_text) && !cJSON_IsNull(imbalance_side_text))
    {
    goto end; //String
    }
    }

    // models_auction_information_model->is_imbalance_side_buy
    cJSON *is_imbalance_side_buy = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_imbalance_side_buy");
    if (cJSON_IsNull(is_imbalance_side_buy)) {
        is_imbalance_side_buy = NULL;
    }
    if (is_imbalance_side_buy) { 
    if(!cJSON_IsBool(is_imbalance_side_buy))
    {
    goto end; //Bool
    }
    is_imbalance_side_buy_local_var = malloc(sizeof(int));
    if(!is_imbalance_side_buy_local_var)
    {
        goto end;
    }
    *is_imbalance_side_buy_local_var = is_imbalance_side_buy->valueint;
    }

    // models_auction_information_model->is_imbalance_side_sell
    cJSON *is_imbalance_side_sell = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_imbalance_side_sell");
    if (cJSON_IsNull(is_imbalance_side_sell)) {
        is_imbalance_side_sell = NULL;
    }
    if (is_imbalance_side_sell) { 
    if(!cJSON_IsBool(is_imbalance_side_sell))
    {
    goto end; //Bool
    }
    is_imbalance_side_sell_local_var = malloc(sizeof(int));
    if(!is_imbalance_side_sell_local_var)
    {
        goto end;
    }
    *is_imbalance_side_sell_local_var = is_imbalance_side_sell->valueint;
    }

    // models_auction_information_model->is_imbalance_side_none
    cJSON *is_imbalance_side_none = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "is_imbalance_side_none");
    if (cJSON_IsNull(is_imbalance_side_none)) {
        is_imbalance_side_none = NULL;
    }
    if (is_imbalance_side_none) { 
    if(!cJSON_IsBool(is_imbalance_side_none))
    {
    goto end; //Bool
    }
    is_imbalance_side_none_local_var = malloc(sizeof(int));
    if(!is_imbalance_side_none_local_var)
    {
        goto end;
    }
    *is_imbalance_side_none_local_var = is_imbalance_side_none->valueint;
    }

    // models_auction_information_model->extension_number
    cJSON *extension_number = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "extension_number");
    if (cJSON_IsNull(extension_number)) {
        extension_number = NULL;
    }
    if (extension_number) { 
    if(!cJSON_IsNumber(extension_number))
    {
    goto end; //Numeric
    }
    extension_number_local_var = malloc(sizeof(int));
    if(!extension_number_local_var)
    {
        goto end;
    }
    *extension_number_local_var = extension_number->valuedouble;
    }

    // models_auction_information_model->scheduled_auction_time_seconds
    cJSON *scheduled_auction_time_seconds = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "scheduled_auction_time_seconds");
    if (cJSON_IsNull(scheduled_auction_time_seconds)) {
        scheduled_auction_time_seconds = NULL;
    }
    if (scheduled_auction_time_seconds) { 
    if(!cJSON_IsNumber(scheduled_auction_time_seconds))
    {
    goto end; //Numeric
    }
    scheduled_auction_time_seconds_local_var = malloc(sizeof(int));
    if(!scheduled_auction_time_seconds_local_var)
    {
        goto end;
    }
    *scheduled_auction_time_seconds_local_var = scheduled_auction_time_seconds->valuedouble;
    }

    // models_auction_information_model->scheduled_auction_time
    cJSON *scheduled_auction_time = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "scheduled_auction_time");
    if (cJSON_IsNull(scheduled_auction_time)) {
        scheduled_auction_time = NULL;
    }
    if (scheduled_auction_time) { 
    if(!cJSON_IsString(scheduled_auction_time) && !cJSON_IsNull(scheduled_auction_time))
    {
    goto end; //DateTime
    }
    }

    // models_auction_information_model->auction_book_clearing_price
    cJSON *auction_book_clearing_price = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "auction_book_clearing_price");
    if (cJSON_IsNull(auction_book_clearing_price)) {
        auction_book_clearing_price = NULL;
    }
    if (auction_book_clearing_price) { 
    if(!cJSON_IsNumber(auction_book_clearing_price))
    {
    goto end; //Numeric
    }
    auction_book_clearing_price_local_var = malloc(sizeof(double));
    if(!auction_book_clearing_price_local_var)
    {
        goto end;
    }
    *auction_book_clearing_price_local_var = auction_book_clearing_price->valuedouble;
    }

    // models_auction_information_model->collar_reference_price
    cJSON *collar_reference_price = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "collar_reference_price");
    if (cJSON_IsNull(collar_reference_price)) {
        collar_reference_price = NULL;
    }
    if (collar_reference_price) { 
    if(!cJSON_IsNumber(collar_reference_price))
    {
    goto end; //Numeric
    }
    collar_reference_price_local_var = malloc(sizeof(double));
    if(!collar_reference_price_local_var)
    {
        goto end;
    }
    *collar_reference_price_local_var = collar_reference_price->valuedouble;
    }

    // models_auction_information_model->lower_auction_collar
    cJSON *lower_auction_collar = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "lower_auction_collar");
    if (cJSON_IsNull(lower_auction_collar)) {
        lower_auction_collar = NULL;
    }
    if (lower_auction_collar) { 
    if(!cJSON_IsNumber(lower_auction_collar))
    {
    goto end; //Numeric
    }
    lower_auction_collar_local_var = malloc(sizeof(double));
    if(!lower_auction_collar_local_var)
    {
        goto end;
    }
    *lower_auction_collar_local_var = lower_auction_collar->valuedouble;
    }

    // models_auction_information_model->upper_auction_collar
    cJSON *upper_auction_collar = cJSON_GetObjectItemCaseSensitive(models_auction_information_modelJSON, "upper_auction_collar");
    if (cJSON_IsNull(upper_auction_collar)) {
        upper_auction_collar = NULL;
    }
    if (upper_auction_collar) { 
    if(!cJSON_IsNumber(upper_auction_collar))
    {
    goto end; //Numeric
    }
    upper_auction_collar_local_var = malloc(sizeof(double));
    if(!upper_auction_collar_local_var)
    {
        goto end;
    }
    *upper_auction_collar_local_var = upper_auction_collar->valuedouble;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);
    if (auction_type_code && !cJSON_IsNull(auction_type_code)) auction_type_code_local_str = strdup(auction_type_code->valuestring);
    if (auction_type_text && !cJSON_IsNull(auction_type_text)) auction_type_text_local_str = strdup(auction_type_text->valuestring);
    if (imbalance_side_code && !cJSON_IsNull(imbalance_side_code)) imbalance_side_code_local_str = strdup(imbalance_side_code->valuestring);
    if (imbalance_side_text && !cJSON_IsNull(imbalance_side_text)) imbalance_side_text_local_str = strdup(imbalance_side_text->valuestring);
    if (scheduled_auction_time && !cJSON_IsNull(scheduled_auction_time)) scheduled_auction_time_local_str = strdup(scheduled_auction_time->valuestring);

    models_auction_information_model_local_var = models_auction_information_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        auction_type_local_var,
        auction_type_code_local_str,
        auction_type_text_local_str,
        is_auction_type_opening_local_var,
        is_auction_type_closing_local_var,
        is_auction_type_ipo_local_var,
        is_auction_type_halt_local_var,
        is_auction_type_volatility_local_var,
        paired_shares_local_var,
        reference_price_local_var,
        indicative_clearing_price_local_var,
        imbalance_shares_local_var,
        imbalance_side_local_var,
        imbalance_side_code_local_str,
        imbalance_side_text_local_str,
        is_imbalance_side_buy_local_var,
        is_imbalance_side_sell_local_var,
        is_imbalance_side_none_local_var,
        extension_number_local_var,
        scheduled_auction_time_seconds_local_var,
        scheduled_auction_time_local_str,
        auction_book_clearing_price_local_var,
        collar_reference_price_local_var,
        lower_auction_collar_local_var,
        upper_auction_collar_local_var
        );

    if (!models_auction_information_model_local_var) {
        goto end;
    }

    return models_auction_information_model_local_var;
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
    if (auction_type_local_var) {
        free(auction_type_local_var);
        auction_type_local_var = NULL;
    }
    if (auction_type_code_local_str) {
        free(auction_type_code_local_str);
        auction_type_code_local_str = NULL;
    }
    if (auction_type_text_local_str) {
        free(auction_type_text_local_str);
        auction_type_text_local_str = NULL;
    }
    if (is_auction_type_opening_local_var) {
        free(is_auction_type_opening_local_var);
        is_auction_type_opening_local_var = NULL;
    }
    if (is_auction_type_closing_local_var) {
        free(is_auction_type_closing_local_var);
        is_auction_type_closing_local_var = NULL;
    }
    if (is_auction_type_ipo_local_var) {
        free(is_auction_type_ipo_local_var);
        is_auction_type_ipo_local_var = NULL;
    }
    if (is_auction_type_halt_local_var) {
        free(is_auction_type_halt_local_var);
        is_auction_type_halt_local_var = NULL;
    }
    if (is_auction_type_volatility_local_var) {
        free(is_auction_type_volatility_local_var);
        is_auction_type_volatility_local_var = NULL;
    }
    if (paired_shares_local_var) {
        free(paired_shares_local_var);
        paired_shares_local_var = NULL;
    }
    if (reference_price_local_var) {
        free(reference_price_local_var);
        reference_price_local_var = NULL;
    }
    if (indicative_clearing_price_local_var) {
        free(indicative_clearing_price_local_var);
        indicative_clearing_price_local_var = NULL;
    }
    if (imbalance_shares_local_var) {
        free(imbalance_shares_local_var);
        imbalance_shares_local_var = NULL;
    }
    if (imbalance_side_local_var) {
        free(imbalance_side_local_var);
        imbalance_side_local_var = NULL;
    }
    if (imbalance_side_code_local_str) {
        free(imbalance_side_code_local_str);
        imbalance_side_code_local_str = NULL;
    }
    if (imbalance_side_text_local_str) {
        free(imbalance_side_text_local_str);
        imbalance_side_text_local_str = NULL;
    }
    if (is_imbalance_side_buy_local_var) {
        free(is_imbalance_side_buy_local_var);
        is_imbalance_side_buy_local_var = NULL;
    }
    if (is_imbalance_side_sell_local_var) {
        free(is_imbalance_side_sell_local_var);
        is_imbalance_side_sell_local_var = NULL;
    }
    if (is_imbalance_side_none_local_var) {
        free(is_imbalance_side_none_local_var);
        is_imbalance_side_none_local_var = NULL;
    }
    if (extension_number_local_var) {
        free(extension_number_local_var);
        extension_number_local_var = NULL;
    }
    if (scheduled_auction_time_seconds_local_var) {
        free(scheduled_auction_time_seconds_local_var);
        scheduled_auction_time_seconds_local_var = NULL;
    }
    if (scheduled_auction_time_local_str) {
        free(scheduled_auction_time_local_str);
        scheduled_auction_time_local_str = NULL;
    }
    if (auction_book_clearing_price_local_var) {
        free(auction_book_clearing_price_local_var);
        auction_book_clearing_price_local_var = NULL;
    }
    if (collar_reference_price_local_var) {
        free(collar_reference_price_local_var);
        collar_reference_price_local_var = NULL;
    }
    if (lower_auction_collar_local_var) {
        free(lower_auction_collar_local_var);
        lower_auction_collar_local_var = NULL;
    }
    if (upper_auction_collar_local_var) {
        free(upper_auction_collar_local_var);
        upper_auction_collar_local_var = NULL;
    }
    return NULL;

}
