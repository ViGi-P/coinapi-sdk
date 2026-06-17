/*
 * market_data_metadata_chain.h
 *
 * Represents a blockchain chain.
 */

#ifndef _market_data_metadata_chain_H_
#define _market_data_metadata_chain_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct market_data_metadata_chain_t market_data_metadata_chain_t;




typedef struct market_data_metadata_chain_t {
    char *chain_id; // string
    char *name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} market_data_metadata_chain_t;

__attribute__((deprecated)) market_data_metadata_chain_t *market_data_metadata_chain_create(
    char *chain_id,
    char *name
);

void market_data_metadata_chain_free(market_data_metadata_chain_t *market_data_metadata_chain);

market_data_metadata_chain_t *market_data_metadata_chain_parseFromJSON(cJSON *market_data_metadata_chainJSON);

cJSON *market_data_metadata_chain_convertToJSON(market_data_metadata_chain_t *market_data_metadata_chain);

#endif /* _market_data_metadata_chain_H_ */

