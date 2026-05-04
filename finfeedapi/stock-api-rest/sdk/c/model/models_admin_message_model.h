/*
 * models_admin_message_model.h
 *
 * Represents the response DTO for IEX admin information, combining all symbol-based admin message types
 */

#ifndef _models_admin_message_model_H_
#define _models_admin_message_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_admin_message_model_t models_admin_message_model_t;

#include "iex_system_event_system_event_model.h"
#include "models_auction_information_model.h"
#include "models_official_price_model.h"
#include "models_operational_halt_status_model.h"
#include "models_retail_liquidity_indicator_model.h"
#include "models_security_directory_model.h"
#include "models_security_event_model.h"
#include "models_short_sale_price_test_status_model.h"
#include "models_trading_status_model.h"



typedef struct models_admin_message_model_t {
    struct models_trading_status_model_t *trading_status; //model
    struct models_official_price_model_t *official_price; //model
    struct models_security_event_model_t *security_event; //model
    struct models_auction_information_model_t *auction_information; //model
    struct models_short_sale_price_test_status_model_t *short_sale_price_test; //model
    struct models_operational_halt_status_model_t *operational_halt_status; //model
    struct models_retail_liquidity_indicator_model_t *retail_liquidity_indicator; //model
    struct iex_system_event_system_event_model_t *system_event; //model
    struct models_security_directory_model_t *security_directory; //model

    int _library_owned; // Is the library responsible for freeing this object?
} models_admin_message_model_t;

__attribute__((deprecated)) models_admin_message_model_t *models_admin_message_model_create(
    models_trading_status_model_t *trading_status,
    models_official_price_model_t *official_price,
    models_security_event_model_t *security_event,
    models_auction_information_model_t *auction_information,
    models_short_sale_price_test_status_model_t *short_sale_price_test,
    models_operational_halt_status_model_t *operational_halt_status,
    models_retail_liquidity_indicator_model_t *retail_liquidity_indicator,
    iex_system_event_system_event_model_t *system_event,
    models_security_directory_model_t *security_directory
);

void models_admin_message_model_free(models_admin_message_model_t *models_admin_message_model);

models_admin_message_model_t *models_admin_message_model_parseFromJSON(cJSON *models_admin_message_modelJSON);

cJSON *models_admin_message_model_convertToJSON(models_admin_message_model_t *models_admin_message_model);

#endif /* _models_admin_message_model_H_ */

