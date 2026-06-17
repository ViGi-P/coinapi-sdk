/*
 * market_data_metadata_exchange.h
 *
 * Represents an exchange.
 */

#ifndef _market_data_metadata_exchange_H_
#define _market_data_metadata_exchange_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct market_data_metadata_exchange_t market_data_metadata_exchange_t;

#include "market_data_metadata_icon.h"



typedef struct market_data_metadata_exchange_t {
    char *exchange_id; // string
    char *website; // string
    char *name; // string
    char *data_start; // string
    char *data_end; // string
    char *data_quote_start; //date time
    char *data_quote_end; //date time
    char *data_orderbook_start; //date time
    char *data_orderbook_end; //date time
    char *data_trade_start; //date time
    char *data_trade_end; //date time
    long *data_trade_count; //numeric
    long *data_symbols_count; //numeric
    double *volume_1hrs_usd; //numeric
    double *volume_1day_usd; //numeric
    double *volume_1mth_usd; //numeric
    list_t *metric_id; //primitive container
    list_t *icons; //nonprimitive container
    double *rank; //numeric
    char *integration_status; // string

    int _library_owned; // Is the library responsible for freeing this object?
} market_data_metadata_exchange_t;

__attribute__((deprecated)) market_data_metadata_exchange_t *market_data_metadata_exchange_create(
    char *exchange_id,
    char *website,
    char *name,
    char *data_start,
    char *data_end,
    char *data_quote_start,
    char *data_quote_end,
    char *data_orderbook_start,
    char *data_orderbook_end,
    char *data_trade_start,
    char *data_trade_end,
    long *data_trade_count,
    long *data_symbols_count,
    double *volume_1hrs_usd,
    double *volume_1day_usd,
    double *volume_1mth_usd,
    list_t *metric_id,
    list_t *icons,
    double *rank,
    char *integration_status
);

void market_data_metadata_exchange_free(market_data_metadata_exchange_t *market_data_metadata_exchange);

market_data_metadata_exchange_t *market_data_metadata_exchange_parseFromJSON(cJSON *market_data_metadata_exchangeJSON);

cJSON *market_data_metadata_exchange_convertToJSON(market_data_metadata_exchange_t *market_data_metadata_exchange);

#endif /* _market_data_metadata_exchange_H_ */

