/*
 * v1_option_exchange_group.h
 *
 * Represents an option exchange group data model.
 */

#ifndef _v1_option_exchange_group_H_
#define _v1_option_exchange_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_option_exchange_group_t v1_option_exchange_group_t;

#include "v1_strike.h"



typedef struct v1_option_exchange_group_t {
    char *asset_id_base; // string
    char *asset_id_quote; // string
    double *underlying_price; //numeric
    char *time_expiration; //date time
    list_t *strikes; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} v1_option_exchange_group_t;

__attribute__((deprecated)) v1_option_exchange_group_t *v1_option_exchange_group_create(
    char *asset_id_base,
    char *asset_id_quote,
    double *underlying_price,
    char *time_expiration,
    list_t *strikes
);

void v1_option_exchange_group_free(v1_option_exchange_group_t *v1_option_exchange_group);

v1_option_exchange_group_t *v1_option_exchange_group_parseFromJSON(cJSON *v1_option_exchange_groupJSON);

cJSON *v1_option_exchange_group_convertToJSON(v1_option_exchange_group_t *v1_option_exchange_group);

#endif /* _v1_option_exchange_group_H_ */

