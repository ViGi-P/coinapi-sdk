/*
 * models_index_timeseries_item.h
 *
 * Represents a timeseries item with value information.
 */

#ifndef _models_index_timeseries_item_H_
#define _models_index_timeseries_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct models_index_timeseries_item_t models_index_timeseries_item_t;




typedef struct models_index_timeseries_item_t {
    char *time_period_start; //date time
    char *time_period_end; //date time
    char *time_open; //date time
    char *time_close; //date time
    double *value_open; //numeric
    double *value_high; //numeric
    double *value_low; //numeric
    double *value_close; //numeric
    long *value_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} models_index_timeseries_item_t;

__attribute__((deprecated)) models_index_timeseries_item_t *models_index_timeseries_item_create(
    char *time_period_start,
    char *time_period_end,
    char *time_open,
    char *time_close,
    double *value_open,
    double *value_high,
    double *value_low,
    double *value_close,
    long *value_count
);

void models_index_timeseries_item_free(models_index_timeseries_item_t *models_index_timeseries_item);

models_index_timeseries_item_t *models_index_timeseries_item_parseFromJSON(cJSON *models_index_timeseries_itemJSON);

cJSON *models_index_timeseries_item_convertToJSON(models_index_timeseries_item_t *models_index_timeseries_item);

#endif /* _models_index_timeseries_item_H_ */

