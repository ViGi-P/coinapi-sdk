/*
 * market_data_metadata_icon.h
 *
 * Represents an icon.
 */

#ifndef _market_data_metadata_icon_H_
#define _market_data_metadata_icon_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct market_data_metadata_icon_t market_data_metadata_icon_t;




typedef struct market_data_metadata_icon_t {
    char *exchange_id; // string
    char *asset_id; // string
    char *url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} market_data_metadata_icon_t;

__attribute__((deprecated)) market_data_metadata_icon_t *market_data_metadata_icon_create(
    char *exchange_id,
    char *asset_id,
    char *url
);

void market_data_metadata_icon_free(market_data_metadata_icon_t *market_data_metadata_icon);

market_data_metadata_icon_t *market_data_metadata_icon_parseFromJSON(cJSON *market_data_metadata_iconJSON);

cJSON *market_data_metadata_icon_convertToJSON(market_data_metadata_icon_t *market_data_metadata_icon);

#endif /* _market_data_metadata_icon_H_ */

