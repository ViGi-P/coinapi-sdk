#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "models_trading_status_model.h"



static models_trading_status_model_t *models_trading_status_model_create_internal(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_trading_live,
    int *is_trading_halted,
    int *is_trading_in_order_acceptance_period,
    int *is_trading_paused,
    int *is_reason_halt_news_pending,
    int *is_reason_ipo_not_yet_trading,
    int *is_reason_ipo_deferred,
    int *is_reason_halt_news_dissemination,
    int *is_reason_ipo_order_acceptance_period,
    int *is_reason_ipo_pre_launch_period,
    int *is_reason_market_wide_circuit_breaker_level1,
    int *is_reason_market_wide_circuit_breaker_level2,
    int *is_reason_market_wide_circuit_breaker_level3,
    int *is_reason_not_applicable,
    int *is_reason_not_available
    ) {
    models_trading_status_model_t *models_trading_status_model_local_var = malloc(sizeof(models_trading_status_model_t));
    if (!models_trading_status_model_local_var) {
        return NULL;
    }
    memset(models_trading_status_model_local_var, 0, sizeof(models_trading_status_model_t));
    models_trading_status_model_local_var->_library_owned = 1;
    models_trading_status_model_local_var->symbol = symbol;
    models_trading_status_model_local_var->timestamp_nanos = timestamp_nanos;
    models_trading_status_model_local_var->timestamp = timestamp;
    models_trading_status_model_local_var->is_trading_live = is_trading_live;
    models_trading_status_model_local_var->is_trading_halted = is_trading_halted;
    models_trading_status_model_local_var->is_trading_in_order_acceptance_period = is_trading_in_order_acceptance_period;
    models_trading_status_model_local_var->is_trading_paused = is_trading_paused;
    models_trading_status_model_local_var->is_reason_halt_news_pending = is_reason_halt_news_pending;
    models_trading_status_model_local_var->is_reason_ipo_not_yet_trading = is_reason_ipo_not_yet_trading;
    models_trading_status_model_local_var->is_reason_ipo_deferred = is_reason_ipo_deferred;
    models_trading_status_model_local_var->is_reason_halt_news_dissemination = is_reason_halt_news_dissemination;
    models_trading_status_model_local_var->is_reason_ipo_order_acceptance_period = is_reason_ipo_order_acceptance_period;
    models_trading_status_model_local_var->is_reason_ipo_pre_launch_period = is_reason_ipo_pre_launch_period;
    models_trading_status_model_local_var->is_reason_market_wide_circuit_breaker_level1 = is_reason_market_wide_circuit_breaker_level1;
    models_trading_status_model_local_var->is_reason_market_wide_circuit_breaker_level2 = is_reason_market_wide_circuit_breaker_level2;
    models_trading_status_model_local_var->is_reason_market_wide_circuit_breaker_level3 = is_reason_market_wide_circuit_breaker_level3;
    models_trading_status_model_local_var->is_reason_not_applicable = is_reason_not_applicable;
    models_trading_status_model_local_var->is_reason_not_available = is_reason_not_available;
    return models_trading_status_model_local_var;
}

__attribute__((deprecated)) models_trading_status_model_t *models_trading_status_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_trading_live,
    int *is_trading_halted,
    int *is_trading_in_order_acceptance_period,
    int *is_trading_paused,
    int *is_reason_halt_news_pending,
    int *is_reason_ipo_not_yet_trading,
    int *is_reason_ipo_deferred,
    int *is_reason_halt_news_dissemination,
    int *is_reason_ipo_order_acceptance_period,
    int *is_reason_ipo_pre_launch_period,
    int *is_reason_market_wide_circuit_breaker_level1,
    int *is_reason_market_wide_circuit_breaker_level2,
    int *is_reason_market_wide_circuit_breaker_level3,
    int *is_reason_not_applicable,
    int *is_reason_not_available
    ) {
    long *timestamp_nanos_copy = NULL;
    if (timestamp_nanos) {
        timestamp_nanos_copy = malloc(sizeof(long));
        if (timestamp_nanos_copy) *timestamp_nanos_copy = *timestamp_nanos;
    }
    int *is_trading_live_copy = NULL;
    if (is_trading_live) {
        is_trading_live_copy = malloc(sizeof(int));
        if (is_trading_live_copy) *is_trading_live_copy = *is_trading_live;
    }
    int *is_trading_halted_copy = NULL;
    if (is_trading_halted) {
        is_trading_halted_copy = malloc(sizeof(int));
        if (is_trading_halted_copy) *is_trading_halted_copy = *is_trading_halted;
    }
    int *is_trading_in_order_acceptance_period_copy = NULL;
    if (is_trading_in_order_acceptance_period) {
        is_trading_in_order_acceptance_period_copy = malloc(sizeof(int));
        if (is_trading_in_order_acceptance_period_copy) *is_trading_in_order_acceptance_period_copy = *is_trading_in_order_acceptance_period;
    }
    int *is_trading_paused_copy = NULL;
    if (is_trading_paused) {
        is_trading_paused_copy = malloc(sizeof(int));
        if (is_trading_paused_copy) *is_trading_paused_copy = *is_trading_paused;
    }
    int *is_reason_halt_news_pending_copy = NULL;
    if (is_reason_halt_news_pending) {
        is_reason_halt_news_pending_copy = malloc(sizeof(int));
        if (is_reason_halt_news_pending_copy) *is_reason_halt_news_pending_copy = *is_reason_halt_news_pending;
    }
    int *is_reason_ipo_not_yet_trading_copy = NULL;
    if (is_reason_ipo_not_yet_trading) {
        is_reason_ipo_not_yet_trading_copy = malloc(sizeof(int));
        if (is_reason_ipo_not_yet_trading_copy) *is_reason_ipo_not_yet_trading_copy = *is_reason_ipo_not_yet_trading;
    }
    int *is_reason_ipo_deferred_copy = NULL;
    if (is_reason_ipo_deferred) {
        is_reason_ipo_deferred_copy = malloc(sizeof(int));
        if (is_reason_ipo_deferred_copy) *is_reason_ipo_deferred_copy = *is_reason_ipo_deferred;
    }
    int *is_reason_halt_news_dissemination_copy = NULL;
    if (is_reason_halt_news_dissemination) {
        is_reason_halt_news_dissemination_copy = malloc(sizeof(int));
        if (is_reason_halt_news_dissemination_copy) *is_reason_halt_news_dissemination_copy = *is_reason_halt_news_dissemination;
    }
    int *is_reason_ipo_order_acceptance_period_copy = NULL;
    if (is_reason_ipo_order_acceptance_period) {
        is_reason_ipo_order_acceptance_period_copy = malloc(sizeof(int));
        if (is_reason_ipo_order_acceptance_period_copy) *is_reason_ipo_order_acceptance_period_copy = *is_reason_ipo_order_acceptance_period;
    }
    int *is_reason_ipo_pre_launch_period_copy = NULL;
    if (is_reason_ipo_pre_launch_period) {
        is_reason_ipo_pre_launch_period_copy = malloc(sizeof(int));
        if (is_reason_ipo_pre_launch_period_copy) *is_reason_ipo_pre_launch_period_copy = *is_reason_ipo_pre_launch_period;
    }
    int *is_reason_market_wide_circuit_breaker_level1_copy = NULL;
    if (is_reason_market_wide_circuit_breaker_level1) {
        is_reason_market_wide_circuit_breaker_level1_copy = malloc(sizeof(int));
        if (is_reason_market_wide_circuit_breaker_level1_copy) *is_reason_market_wide_circuit_breaker_level1_copy = *is_reason_market_wide_circuit_breaker_level1;
    }
    int *is_reason_market_wide_circuit_breaker_level2_copy = NULL;
    if (is_reason_market_wide_circuit_breaker_level2) {
        is_reason_market_wide_circuit_breaker_level2_copy = malloc(sizeof(int));
        if (is_reason_market_wide_circuit_breaker_level2_copy) *is_reason_market_wide_circuit_breaker_level2_copy = *is_reason_market_wide_circuit_breaker_level2;
    }
    int *is_reason_market_wide_circuit_breaker_level3_copy = NULL;
    if (is_reason_market_wide_circuit_breaker_level3) {
        is_reason_market_wide_circuit_breaker_level3_copy = malloc(sizeof(int));
        if (is_reason_market_wide_circuit_breaker_level3_copy) *is_reason_market_wide_circuit_breaker_level3_copy = *is_reason_market_wide_circuit_breaker_level3;
    }
    int *is_reason_not_applicable_copy = NULL;
    if (is_reason_not_applicable) {
        is_reason_not_applicable_copy = malloc(sizeof(int));
        if (is_reason_not_applicable_copy) *is_reason_not_applicable_copy = *is_reason_not_applicable;
    }
    int *is_reason_not_available_copy = NULL;
    if (is_reason_not_available) {
        is_reason_not_available_copy = malloc(sizeof(int));
        if (is_reason_not_available_copy) *is_reason_not_available_copy = *is_reason_not_available;
    }
    models_trading_status_model_t *result = models_trading_status_model_create_internal (
        symbol,
        timestamp_nanos_copy,
        timestamp,
        is_trading_live_copy,
        is_trading_halted_copy,
        is_trading_in_order_acceptance_period_copy,
        is_trading_paused_copy,
        is_reason_halt_news_pending_copy,
        is_reason_ipo_not_yet_trading_copy,
        is_reason_ipo_deferred_copy,
        is_reason_halt_news_dissemination_copy,
        is_reason_ipo_order_acceptance_period_copy,
        is_reason_ipo_pre_launch_period_copy,
        is_reason_market_wide_circuit_breaker_level1_copy,
        is_reason_market_wide_circuit_breaker_level2_copy,
        is_reason_market_wide_circuit_breaker_level3_copy,
        is_reason_not_applicable_copy,
        is_reason_not_available_copy
        );
    if (!result) {
        free(timestamp_nanos_copy);
        free(is_trading_live_copy);
        free(is_trading_halted_copy);
        free(is_trading_in_order_acceptance_period_copy);
        free(is_trading_paused_copy);
        free(is_reason_halt_news_pending_copy);
        free(is_reason_ipo_not_yet_trading_copy);
        free(is_reason_ipo_deferred_copy);
        free(is_reason_halt_news_dissemination_copy);
        free(is_reason_ipo_order_acceptance_period_copy);
        free(is_reason_ipo_pre_launch_period_copy);
        free(is_reason_market_wide_circuit_breaker_level1_copy);
        free(is_reason_market_wide_circuit_breaker_level2_copy);
        free(is_reason_market_wide_circuit_breaker_level3_copy);
        free(is_reason_not_applicable_copy);
        free(is_reason_not_available_copy);
    }
    return result;
}

void models_trading_status_model_free(models_trading_status_model_t *models_trading_status_model) {
    if(NULL == models_trading_status_model){
        return ;
    }
    if(models_trading_status_model->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "models_trading_status_model_free");
        return ;
    }
    listEntry_t *listEntry;
    if (models_trading_status_model->symbol) {
        free(models_trading_status_model->symbol);
        models_trading_status_model->symbol = NULL;
    }
    if (models_trading_status_model->timestamp_nanos) {
        free(models_trading_status_model->timestamp_nanos);
        models_trading_status_model->timestamp_nanos = NULL;
    }
    if (models_trading_status_model->timestamp) {
        free(models_trading_status_model->timestamp);
        models_trading_status_model->timestamp = NULL;
    }
    if (models_trading_status_model->is_trading_live) {
        free(models_trading_status_model->is_trading_live);
        models_trading_status_model->is_trading_live = NULL;
    }
    if (models_trading_status_model->is_trading_halted) {
        free(models_trading_status_model->is_trading_halted);
        models_trading_status_model->is_trading_halted = NULL;
    }
    if (models_trading_status_model->is_trading_in_order_acceptance_period) {
        free(models_trading_status_model->is_trading_in_order_acceptance_period);
        models_trading_status_model->is_trading_in_order_acceptance_period = NULL;
    }
    if (models_trading_status_model->is_trading_paused) {
        free(models_trading_status_model->is_trading_paused);
        models_trading_status_model->is_trading_paused = NULL;
    }
    if (models_trading_status_model->is_reason_halt_news_pending) {
        free(models_trading_status_model->is_reason_halt_news_pending);
        models_trading_status_model->is_reason_halt_news_pending = NULL;
    }
    if (models_trading_status_model->is_reason_ipo_not_yet_trading) {
        free(models_trading_status_model->is_reason_ipo_not_yet_trading);
        models_trading_status_model->is_reason_ipo_not_yet_trading = NULL;
    }
    if (models_trading_status_model->is_reason_ipo_deferred) {
        free(models_trading_status_model->is_reason_ipo_deferred);
        models_trading_status_model->is_reason_ipo_deferred = NULL;
    }
    if (models_trading_status_model->is_reason_halt_news_dissemination) {
        free(models_trading_status_model->is_reason_halt_news_dissemination);
        models_trading_status_model->is_reason_halt_news_dissemination = NULL;
    }
    if (models_trading_status_model->is_reason_ipo_order_acceptance_period) {
        free(models_trading_status_model->is_reason_ipo_order_acceptance_period);
        models_trading_status_model->is_reason_ipo_order_acceptance_period = NULL;
    }
    if (models_trading_status_model->is_reason_ipo_pre_launch_period) {
        free(models_trading_status_model->is_reason_ipo_pre_launch_period);
        models_trading_status_model->is_reason_ipo_pre_launch_period = NULL;
    }
    if (models_trading_status_model->is_reason_market_wide_circuit_breaker_level1) {
        free(models_trading_status_model->is_reason_market_wide_circuit_breaker_level1);
        models_trading_status_model->is_reason_market_wide_circuit_breaker_level1 = NULL;
    }
    if (models_trading_status_model->is_reason_market_wide_circuit_breaker_level2) {
        free(models_trading_status_model->is_reason_market_wide_circuit_breaker_level2);
        models_trading_status_model->is_reason_market_wide_circuit_breaker_level2 = NULL;
    }
    if (models_trading_status_model->is_reason_market_wide_circuit_breaker_level3) {
        free(models_trading_status_model->is_reason_market_wide_circuit_breaker_level3);
        models_trading_status_model->is_reason_market_wide_circuit_breaker_level3 = NULL;
    }
    if (models_trading_status_model->is_reason_not_applicable) {
        free(models_trading_status_model->is_reason_not_applicable);
        models_trading_status_model->is_reason_not_applicable = NULL;
    }
    if (models_trading_status_model->is_reason_not_available) {
        free(models_trading_status_model->is_reason_not_available);
        models_trading_status_model->is_reason_not_available = NULL;
    }
    free(models_trading_status_model);
}

cJSON *models_trading_status_model_convertToJSON(models_trading_status_model_t *models_trading_status_model) {
    cJSON *item = cJSON_CreateObject();

    // models_trading_status_model->symbol
    if(models_trading_status_model->symbol) {
    if(cJSON_AddStringToObject(item, "symbol", models_trading_status_model->symbol) == NULL) {
    goto fail; //String
    }
    }


    // models_trading_status_model->timestamp_nanos
    if(models_trading_status_model->timestamp_nanos) {
    if(cJSON_AddNumberToObject(item, "timestamp_nanos", *models_trading_status_model->timestamp_nanos) == NULL) {
    goto fail; //Numeric
    }
    }


    // models_trading_status_model->timestamp
    if(models_trading_status_model->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", models_trading_status_model->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // models_trading_status_model->is_trading_live
    if(models_trading_status_model->is_trading_live) {
    if(cJSON_AddBoolToObject(item, "is_trading_live", *models_trading_status_model->is_trading_live) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_trading_halted
    if(models_trading_status_model->is_trading_halted) {
    if(cJSON_AddBoolToObject(item, "is_trading_halted", *models_trading_status_model->is_trading_halted) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_trading_in_order_acceptance_period
    if(models_trading_status_model->is_trading_in_order_acceptance_period) {
    if(cJSON_AddBoolToObject(item, "is_trading_in_order_acceptance_period", *models_trading_status_model->is_trading_in_order_acceptance_period) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_trading_paused
    if(models_trading_status_model->is_trading_paused) {
    if(cJSON_AddBoolToObject(item, "is_trading_paused", *models_trading_status_model->is_trading_paused) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_halt_news_pending
    if(models_trading_status_model->is_reason_halt_news_pending) {
    if(cJSON_AddBoolToObject(item, "is_reason_halt_news_pending", *models_trading_status_model->is_reason_halt_news_pending) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_ipo_not_yet_trading
    if(models_trading_status_model->is_reason_ipo_not_yet_trading) {
    if(cJSON_AddBoolToObject(item, "is_reason_ipo_not_yet_trading", *models_trading_status_model->is_reason_ipo_not_yet_trading) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_ipo_deferred
    if(models_trading_status_model->is_reason_ipo_deferred) {
    if(cJSON_AddBoolToObject(item, "is_reason_ipo_deferred", *models_trading_status_model->is_reason_ipo_deferred) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_halt_news_dissemination
    if(models_trading_status_model->is_reason_halt_news_dissemination) {
    if(cJSON_AddBoolToObject(item, "is_reason_halt_news_dissemination", *models_trading_status_model->is_reason_halt_news_dissemination) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_ipo_order_acceptance_period
    if(models_trading_status_model->is_reason_ipo_order_acceptance_period) {
    if(cJSON_AddBoolToObject(item, "is_reason_ipo_order_acceptance_period", *models_trading_status_model->is_reason_ipo_order_acceptance_period) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_ipo_pre_launch_period
    if(models_trading_status_model->is_reason_ipo_pre_launch_period) {
    if(cJSON_AddBoolToObject(item, "is_reason_ipo_pre_launch_period", *models_trading_status_model->is_reason_ipo_pre_launch_period) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level1
    if(models_trading_status_model->is_reason_market_wide_circuit_breaker_level1) {
    if(cJSON_AddBoolToObject(item, "is_reason_market_wide_circuit_breaker_level1", *models_trading_status_model->is_reason_market_wide_circuit_breaker_level1) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level2
    if(models_trading_status_model->is_reason_market_wide_circuit_breaker_level2) {
    if(cJSON_AddBoolToObject(item, "is_reason_market_wide_circuit_breaker_level2", *models_trading_status_model->is_reason_market_wide_circuit_breaker_level2) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level3
    if(models_trading_status_model->is_reason_market_wide_circuit_breaker_level3) {
    if(cJSON_AddBoolToObject(item, "is_reason_market_wide_circuit_breaker_level3", *models_trading_status_model->is_reason_market_wide_circuit_breaker_level3) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_not_applicable
    if(models_trading_status_model->is_reason_not_applicable) {
    if(cJSON_AddBoolToObject(item, "is_reason_not_applicable", *models_trading_status_model->is_reason_not_applicable) == NULL) {
    goto fail; //Bool
    }
    }


    // models_trading_status_model->is_reason_not_available
    if(models_trading_status_model->is_reason_not_available) {
    if(cJSON_AddBoolToObject(item, "is_reason_not_available", *models_trading_status_model->is_reason_not_available) == NULL) {
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

models_trading_status_model_t *models_trading_status_model_parseFromJSON(cJSON *models_trading_status_modelJSON){

    models_trading_status_model_t *models_trading_status_model_local_var = NULL;

    char *symbol_local_str = NULL;

    // define the local variable for models_trading_status_model->timestamp_nanos
    long *timestamp_nanos_local_var = NULL;

    char *timestamp_local_str = NULL;

    // define the local variable for models_trading_status_model->is_trading_live
    int *is_trading_live_local_var = NULL;

    // define the local variable for models_trading_status_model->is_trading_halted
    int *is_trading_halted_local_var = NULL;

    // define the local variable for models_trading_status_model->is_trading_in_order_acceptance_period
    int *is_trading_in_order_acceptance_period_local_var = NULL;

    // define the local variable for models_trading_status_model->is_trading_paused
    int *is_trading_paused_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_halt_news_pending
    int *is_reason_halt_news_pending_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_ipo_not_yet_trading
    int *is_reason_ipo_not_yet_trading_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_ipo_deferred
    int *is_reason_ipo_deferred_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_halt_news_dissemination
    int *is_reason_halt_news_dissemination_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_ipo_order_acceptance_period
    int *is_reason_ipo_order_acceptance_period_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_ipo_pre_launch_period
    int *is_reason_ipo_pre_launch_period_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_market_wide_circuit_breaker_level1
    int *is_reason_market_wide_circuit_breaker_level1_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_market_wide_circuit_breaker_level2
    int *is_reason_market_wide_circuit_breaker_level2_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_market_wide_circuit_breaker_level3
    int *is_reason_market_wide_circuit_breaker_level3_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_not_applicable
    int *is_reason_not_applicable_local_var = NULL;

    // define the local variable for models_trading_status_model->is_reason_not_available
    int *is_reason_not_available_local_var = NULL;

    // models_trading_status_model->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "symbol");
    if (cJSON_IsNull(symbol)) {
        symbol = NULL;
    }
    if (symbol) { 
    if(!cJSON_IsString(symbol) && !cJSON_IsNull(symbol))
    {
    goto end; //String
    }
    }

    // models_trading_status_model->timestamp_nanos
    cJSON *timestamp_nanos = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "timestamp_nanos");
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

    // models_trading_status_model->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "timestamp");
    if (cJSON_IsNull(timestamp)) {
        timestamp = NULL;
    }
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // models_trading_status_model->is_trading_live
    cJSON *is_trading_live = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_trading_live");
    if (cJSON_IsNull(is_trading_live)) {
        is_trading_live = NULL;
    }
    if (is_trading_live) { 
    if(!cJSON_IsBool(is_trading_live))
    {
    goto end; //Bool
    }
    is_trading_live_local_var = malloc(sizeof(int));
    if(!is_trading_live_local_var)
    {
        goto end;
    }
    *is_trading_live_local_var = is_trading_live->valueint;
    }

    // models_trading_status_model->is_trading_halted
    cJSON *is_trading_halted = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_trading_halted");
    if (cJSON_IsNull(is_trading_halted)) {
        is_trading_halted = NULL;
    }
    if (is_trading_halted) { 
    if(!cJSON_IsBool(is_trading_halted))
    {
    goto end; //Bool
    }
    is_trading_halted_local_var = malloc(sizeof(int));
    if(!is_trading_halted_local_var)
    {
        goto end;
    }
    *is_trading_halted_local_var = is_trading_halted->valueint;
    }

    // models_trading_status_model->is_trading_in_order_acceptance_period
    cJSON *is_trading_in_order_acceptance_period = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_trading_in_order_acceptance_period");
    if (cJSON_IsNull(is_trading_in_order_acceptance_period)) {
        is_trading_in_order_acceptance_period = NULL;
    }
    if (is_trading_in_order_acceptance_period) { 
    if(!cJSON_IsBool(is_trading_in_order_acceptance_period))
    {
    goto end; //Bool
    }
    is_trading_in_order_acceptance_period_local_var = malloc(sizeof(int));
    if(!is_trading_in_order_acceptance_period_local_var)
    {
        goto end;
    }
    *is_trading_in_order_acceptance_period_local_var = is_trading_in_order_acceptance_period->valueint;
    }

    // models_trading_status_model->is_trading_paused
    cJSON *is_trading_paused = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_trading_paused");
    if (cJSON_IsNull(is_trading_paused)) {
        is_trading_paused = NULL;
    }
    if (is_trading_paused) { 
    if(!cJSON_IsBool(is_trading_paused))
    {
    goto end; //Bool
    }
    is_trading_paused_local_var = malloc(sizeof(int));
    if(!is_trading_paused_local_var)
    {
        goto end;
    }
    *is_trading_paused_local_var = is_trading_paused->valueint;
    }

    // models_trading_status_model->is_reason_halt_news_pending
    cJSON *is_reason_halt_news_pending = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_halt_news_pending");
    if (cJSON_IsNull(is_reason_halt_news_pending)) {
        is_reason_halt_news_pending = NULL;
    }
    if (is_reason_halt_news_pending) { 
    if(!cJSON_IsBool(is_reason_halt_news_pending))
    {
    goto end; //Bool
    }
    is_reason_halt_news_pending_local_var = malloc(sizeof(int));
    if(!is_reason_halt_news_pending_local_var)
    {
        goto end;
    }
    *is_reason_halt_news_pending_local_var = is_reason_halt_news_pending->valueint;
    }

    // models_trading_status_model->is_reason_ipo_not_yet_trading
    cJSON *is_reason_ipo_not_yet_trading = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_ipo_not_yet_trading");
    if (cJSON_IsNull(is_reason_ipo_not_yet_trading)) {
        is_reason_ipo_not_yet_trading = NULL;
    }
    if (is_reason_ipo_not_yet_trading) { 
    if(!cJSON_IsBool(is_reason_ipo_not_yet_trading))
    {
    goto end; //Bool
    }
    is_reason_ipo_not_yet_trading_local_var = malloc(sizeof(int));
    if(!is_reason_ipo_not_yet_trading_local_var)
    {
        goto end;
    }
    *is_reason_ipo_not_yet_trading_local_var = is_reason_ipo_not_yet_trading->valueint;
    }

    // models_trading_status_model->is_reason_ipo_deferred
    cJSON *is_reason_ipo_deferred = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_ipo_deferred");
    if (cJSON_IsNull(is_reason_ipo_deferred)) {
        is_reason_ipo_deferred = NULL;
    }
    if (is_reason_ipo_deferred) { 
    if(!cJSON_IsBool(is_reason_ipo_deferred))
    {
    goto end; //Bool
    }
    is_reason_ipo_deferred_local_var = malloc(sizeof(int));
    if(!is_reason_ipo_deferred_local_var)
    {
        goto end;
    }
    *is_reason_ipo_deferred_local_var = is_reason_ipo_deferred->valueint;
    }

    // models_trading_status_model->is_reason_halt_news_dissemination
    cJSON *is_reason_halt_news_dissemination = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_halt_news_dissemination");
    if (cJSON_IsNull(is_reason_halt_news_dissemination)) {
        is_reason_halt_news_dissemination = NULL;
    }
    if (is_reason_halt_news_dissemination) { 
    if(!cJSON_IsBool(is_reason_halt_news_dissemination))
    {
    goto end; //Bool
    }
    is_reason_halt_news_dissemination_local_var = malloc(sizeof(int));
    if(!is_reason_halt_news_dissemination_local_var)
    {
        goto end;
    }
    *is_reason_halt_news_dissemination_local_var = is_reason_halt_news_dissemination->valueint;
    }

    // models_trading_status_model->is_reason_ipo_order_acceptance_period
    cJSON *is_reason_ipo_order_acceptance_period = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_ipo_order_acceptance_period");
    if (cJSON_IsNull(is_reason_ipo_order_acceptance_period)) {
        is_reason_ipo_order_acceptance_period = NULL;
    }
    if (is_reason_ipo_order_acceptance_period) { 
    if(!cJSON_IsBool(is_reason_ipo_order_acceptance_period))
    {
    goto end; //Bool
    }
    is_reason_ipo_order_acceptance_period_local_var = malloc(sizeof(int));
    if(!is_reason_ipo_order_acceptance_period_local_var)
    {
        goto end;
    }
    *is_reason_ipo_order_acceptance_period_local_var = is_reason_ipo_order_acceptance_period->valueint;
    }

    // models_trading_status_model->is_reason_ipo_pre_launch_period
    cJSON *is_reason_ipo_pre_launch_period = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_ipo_pre_launch_period");
    if (cJSON_IsNull(is_reason_ipo_pre_launch_period)) {
        is_reason_ipo_pre_launch_period = NULL;
    }
    if (is_reason_ipo_pre_launch_period) { 
    if(!cJSON_IsBool(is_reason_ipo_pre_launch_period))
    {
    goto end; //Bool
    }
    is_reason_ipo_pre_launch_period_local_var = malloc(sizeof(int));
    if(!is_reason_ipo_pre_launch_period_local_var)
    {
        goto end;
    }
    *is_reason_ipo_pre_launch_period_local_var = is_reason_ipo_pre_launch_period->valueint;
    }

    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level1
    cJSON *is_reason_market_wide_circuit_breaker_level1 = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_market_wide_circuit_breaker_level1");
    if (cJSON_IsNull(is_reason_market_wide_circuit_breaker_level1)) {
        is_reason_market_wide_circuit_breaker_level1 = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level1) { 
    if(!cJSON_IsBool(is_reason_market_wide_circuit_breaker_level1))
    {
    goto end; //Bool
    }
    is_reason_market_wide_circuit_breaker_level1_local_var = malloc(sizeof(int));
    if(!is_reason_market_wide_circuit_breaker_level1_local_var)
    {
        goto end;
    }
    *is_reason_market_wide_circuit_breaker_level1_local_var = is_reason_market_wide_circuit_breaker_level1->valueint;
    }

    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level2
    cJSON *is_reason_market_wide_circuit_breaker_level2 = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_market_wide_circuit_breaker_level2");
    if (cJSON_IsNull(is_reason_market_wide_circuit_breaker_level2)) {
        is_reason_market_wide_circuit_breaker_level2 = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level2) { 
    if(!cJSON_IsBool(is_reason_market_wide_circuit_breaker_level2))
    {
    goto end; //Bool
    }
    is_reason_market_wide_circuit_breaker_level2_local_var = malloc(sizeof(int));
    if(!is_reason_market_wide_circuit_breaker_level2_local_var)
    {
        goto end;
    }
    *is_reason_market_wide_circuit_breaker_level2_local_var = is_reason_market_wide_circuit_breaker_level2->valueint;
    }

    // models_trading_status_model->is_reason_market_wide_circuit_breaker_level3
    cJSON *is_reason_market_wide_circuit_breaker_level3 = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_market_wide_circuit_breaker_level3");
    if (cJSON_IsNull(is_reason_market_wide_circuit_breaker_level3)) {
        is_reason_market_wide_circuit_breaker_level3 = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level3) { 
    if(!cJSON_IsBool(is_reason_market_wide_circuit_breaker_level3))
    {
    goto end; //Bool
    }
    is_reason_market_wide_circuit_breaker_level3_local_var = malloc(sizeof(int));
    if(!is_reason_market_wide_circuit_breaker_level3_local_var)
    {
        goto end;
    }
    *is_reason_market_wide_circuit_breaker_level3_local_var = is_reason_market_wide_circuit_breaker_level3->valueint;
    }

    // models_trading_status_model->is_reason_not_applicable
    cJSON *is_reason_not_applicable = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_not_applicable");
    if (cJSON_IsNull(is_reason_not_applicable)) {
        is_reason_not_applicable = NULL;
    }
    if (is_reason_not_applicable) { 
    if(!cJSON_IsBool(is_reason_not_applicable))
    {
    goto end; //Bool
    }
    is_reason_not_applicable_local_var = malloc(sizeof(int));
    if(!is_reason_not_applicable_local_var)
    {
        goto end;
    }
    *is_reason_not_applicable_local_var = is_reason_not_applicable->valueint;
    }

    // models_trading_status_model->is_reason_not_available
    cJSON *is_reason_not_available = cJSON_GetObjectItemCaseSensitive(models_trading_status_modelJSON, "is_reason_not_available");
    if (cJSON_IsNull(is_reason_not_available)) {
        is_reason_not_available = NULL;
    }
    if (is_reason_not_available) { 
    if(!cJSON_IsBool(is_reason_not_available))
    {
    goto end; //Bool
    }
    is_reason_not_available_local_var = malloc(sizeof(int));
    if(!is_reason_not_available_local_var)
    {
        goto end;
    }
    *is_reason_not_available_local_var = is_reason_not_available->valueint;
    }


    if (symbol && !cJSON_IsNull(symbol)) symbol_local_str = strdup(symbol->valuestring);
    if (timestamp && !cJSON_IsNull(timestamp)) timestamp_local_str = strdup(timestamp->valuestring);

    models_trading_status_model_local_var = models_trading_status_model_create_internal (
        symbol_local_str,
        timestamp_nanos_local_var,
        timestamp_local_str,
        is_trading_live_local_var,
        is_trading_halted_local_var,
        is_trading_in_order_acceptance_period_local_var,
        is_trading_paused_local_var,
        is_reason_halt_news_pending_local_var,
        is_reason_ipo_not_yet_trading_local_var,
        is_reason_ipo_deferred_local_var,
        is_reason_halt_news_dissemination_local_var,
        is_reason_ipo_order_acceptance_period_local_var,
        is_reason_ipo_pre_launch_period_local_var,
        is_reason_market_wide_circuit_breaker_level1_local_var,
        is_reason_market_wide_circuit_breaker_level2_local_var,
        is_reason_market_wide_circuit_breaker_level3_local_var,
        is_reason_not_applicable_local_var,
        is_reason_not_available_local_var
        );

    if (!models_trading_status_model_local_var) {
        goto end;
    }

    return models_trading_status_model_local_var;
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
    if (is_trading_live_local_var) {
        free(is_trading_live_local_var);
        is_trading_live_local_var = NULL;
    }
    if (is_trading_halted_local_var) {
        free(is_trading_halted_local_var);
        is_trading_halted_local_var = NULL;
    }
    if (is_trading_in_order_acceptance_period_local_var) {
        free(is_trading_in_order_acceptance_period_local_var);
        is_trading_in_order_acceptance_period_local_var = NULL;
    }
    if (is_trading_paused_local_var) {
        free(is_trading_paused_local_var);
        is_trading_paused_local_var = NULL;
    }
    if (is_reason_halt_news_pending_local_var) {
        free(is_reason_halt_news_pending_local_var);
        is_reason_halt_news_pending_local_var = NULL;
    }
    if (is_reason_ipo_not_yet_trading_local_var) {
        free(is_reason_ipo_not_yet_trading_local_var);
        is_reason_ipo_not_yet_trading_local_var = NULL;
    }
    if (is_reason_ipo_deferred_local_var) {
        free(is_reason_ipo_deferred_local_var);
        is_reason_ipo_deferred_local_var = NULL;
    }
    if (is_reason_halt_news_dissemination_local_var) {
        free(is_reason_halt_news_dissemination_local_var);
        is_reason_halt_news_dissemination_local_var = NULL;
    }
    if (is_reason_ipo_order_acceptance_period_local_var) {
        free(is_reason_ipo_order_acceptance_period_local_var);
        is_reason_ipo_order_acceptance_period_local_var = NULL;
    }
    if (is_reason_ipo_pre_launch_period_local_var) {
        free(is_reason_ipo_pre_launch_period_local_var);
        is_reason_ipo_pre_launch_period_local_var = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level1_local_var) {
        free(is_reason_market_wide_circuit_breaker_level1_local_var);
        is_reason_market_wide_circuit_breaker_level1_local_var = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level2_local_var) {
        free(is_reason_market_wide_circuit_breaker_level2_local_var);
        is_reason_market_wide_circuit_breaker_level2_local_var = NULL;
    }
    if (is_reason_market_wide_circuit_breaker_level3_local_var) {
        free(is_reason_market_wide_circuit_breaker_level3_local_var);
        is_reason_market_wide_circuit_breaker_level3_local_var = NULL;
    }
    if (is_reason_not_applicable_local_var) {
        free(is_reason_not_applicable_local_var);
        is_reason_not_applicable_local_var = NULL;
    }
    if (is_reason_not_available_local_var) {
        free(is_reason_not_available_local_var);
        is_reason_not_available_local_var = NULL;
    }
    return NULL;

}
