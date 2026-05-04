/*
 * iex_quote_update_quote_update_model.h
 *
 * Represents the response DTO for quote update information
 */

#ifndef _iex_quote_update_quote_update_model_H_
#define _iex_quote_update_quote_update_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct iex_quote_update_quote_update_model_t iex_quote_update_quote_update_model_t;




typedef struct iex_quote_update_quote_update_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    int *is_symbol_available; //boolean
    int *is_pre_post_market_session; //boolean
    int *ask_size; //numeric
    double *ask_price; //numeric
    double *bid_price; //numeric
    int *bid_size; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} iex_quote_update_quote_update_model_t;

__attribute__((deprecated)) iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_symbol_available,
    int *is_pre_post_market_session,
    int *ask_size,
    double *ask_price,
    double *bid_price,
    int *bid_size
);

void iex_quote_update_quote_update_model_free(iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model);

iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model_parseFromJSON(cJSON *iex_quote_update_quote_update_modelJSON);

cJSON *iex_quote_update_quote_update_model_convertToJSON(iex_quote_update_quote_update_model_t *iex_quote_update_quote_update_model);

#endif /* _iex_quote_update_quote_update_model_H_ */

