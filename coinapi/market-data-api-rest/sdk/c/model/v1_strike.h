/*
 * v1_strike.h
 *
 * Represents a strike within the option exchange group.
 */

#ifndef _v1_strike_H_
#define _v1_strike_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_strike_t v1_strike_t;

#include "v1_quote_trade.h"



typedef struct v1_strike_t {
    double *strike_price; //numeric
    struct v1_quote_trade_t *call; //model
    struct v1_quote_trade_t *put; //model

    int _library_owned; // Is the library responsible for freeing this object?
} v1_strike_t;

__attribute__((deprecated)) v1_strike_t *v1_strike_create(
    double *strike_price,
    v1_quote_trade_t *call,
    v1_quote_trade_t *put
);

void v1_strike_free(v1_strike_t *v1_strike);

v1_strike_t *v1_strike_parseFromJSON(cJSON *v1_strikeJSON);

cJSON *v1_strike_convertToJSON(v1_strike_t *v1_strike);

#endif /* _v1_strike_H_ */

