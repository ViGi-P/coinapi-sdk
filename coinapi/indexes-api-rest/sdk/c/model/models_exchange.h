/*
 * models_exchange.h
 *
 * Represents an exchange.
 */

#ifndef _models_exchange_H_
#define _models_exchange_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_exchange_t models_exchange_t;




typedef struct models_exchange_t {
    char *exchange_id; // string
    char *website; // string
    char *name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} models_exchange_t;

__attribute__((deprecated)) models_exchange_t *models_exchange_create(
    char *exchange_id,
    char *website,
    char *name
);

void models_exchange_free(models_exchange_t *models_exchange);

models_exchange_t *models_exchange_parseFromJSON(cJSON *models_exchangeJSON);

cJSON *models_exchange_convertToJSON(models_exchange_t *models_exchange);

#endif /* _models_exchange_H_ */

