/*
 * iex_price_level_update_price_level_update_model.h
 *
 * Represents the response DTO for price level update information
 */

#ifndef _iex_price_level_update_price_level_update_model_H_
#define _iex_price_level_update_price_level_update_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct iex_price_level_update_price_level_update_model_t iex_price_level_update_price_level_update_model_t;




typedef struct iex_price_level_update_price_level_update_model_t {
    char *symbol; // string
    long *timestamp_nanos; //numeric
    char *timestamp; //date time
    int *is_side_buy; //boolean
    int *is_event_processing_complete; //boolean
    int *size; //numeric
    double *price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} iex_price_level_update_price_level_update_model_t;

__attribute__((deprecated)) iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_create(
    char *symbol,
    long *timestamp_nanos,
    char *timestamp,
    int *is_side_buy,
    int *is_event_processing_complete,
    int *size,
    double *price
);

void iex_price_level_update_price_level_update_model_free(iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model);

iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model_parseFromJSON(cJSON *iex_price_level_update_price_level_update_modelJSON);

cJSON *iex_price_level_update_price_level_update_model_convertToJSON(iex_price_level_update_price_level_update_model_t *iex_price_level_update_price_level_update_model);

#endif /* _iex_price_level_update_price_level_update_model_H_ */

